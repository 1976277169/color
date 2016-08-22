#ifndef color_hcg_akin_hsv
#define color_hcg_akin_hsv

#include "../../generic/akin/hcg.hpp"
#include "../category.hpp"
#include "../../hsv/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct hcg< ::color::category::hsv_uint8   >{ typedef ::color::category::hcg_uint8   akin_type; };
    template< >struct hcg< ::color::category::hsv_uint16  >{ typedef ::color::category::hcg_uint16  akin_type; };
    template< >struct hcg< ::color::category::hsv_uint32  >{ typedef ::color::category::hcg_uint32  akin_type; };
    template< >struct hcg< ::color::category::hsv_uint64  >{ typedef ::color::category::hcg_uint64  akin_type; };
    template< >struct hcg< ::color::category::hsv_float   >{ typedef ::color::category::hcg_float   akin_type; };
    template< >struct hcg< ::color::category::hsv_double  >{ typedef ::color::category::hcg_double  akin_type; };
    template< >struct hcg< ::color::category::hsv_ldouble >{ typedef ::color::category::hcg_ldouble akin_type; };

   }
 }

#endif