#ifndef color_luv_convert_hsl
#define color_luv_convert_hsl

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../hsl/hsl.hpp"
#include "../../rgb/rgb.hpp"
#include "../../xyz/xyz.hpp"


namespace color
 {
  namespace _internal
   {

    template
     <
       typename luv_tag_name
      ,typename hsl_tag_name 
     >
     struct convert
      <
        ::color::category::luv< luv_tag_name >
       ,::color::category::hsl<  hsl_tag_name >
      >
      {
       public:
         typedef ::color::category::luv< luv_tag_name >    luv_category_type, category_left_type;
         typedef ::color::category::hsl< hsl_tag_name >    hsl_category_type, category_right_type;

         typedef typename ::color::akin::rgb< hsl_category_type >::akin_type    rgb_category_type;
         typedef typename ::color::akin::xyz< rgb_category_type >::akin_type    xyz_category_type;
       //typedef typename ::color::akin::luv< xyz_category_type >::akin_type    luv_category_type;

         typedef ::color::model<   rgb_category_type >      rgb_model_type;
         typedef ::color::model<   hsl_category_type >      hsl_model_type;
         typedef ::color::model<   xyz_category_type >      xyz_model_type;
         typedef ::color::model<   luv_category_type >      luv_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           left = luv_model_type( xyz_model_type( rgb_model_type( hsl_model_type( right ) ) ) ).container();
          }
        };

   }
 }

#endif
