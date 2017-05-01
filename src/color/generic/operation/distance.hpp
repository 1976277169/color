#ifndef  color_generic_operation_distance
#define color_generic_operation_distance

// ::color::operation::distance( left, right )

#include "../model.hpp"
#include "./delta.hpp"
#include "../../gray/gray.hpp"

 namespace color
  {
   namespace operation
    {
     namespace _internal
      {

       template< typename category_name >
        struct distance
         {
          public:
            typedef category_name  category_type;

            typedef ::color::model<category_type>  model_type;

            typedef typename ::color::trait::scalar< category_type >::instance_type  scalar_type;

            static scalar_type process( model_type const& left, model_type const& right )
             {
              model_type difference;

              return ::color::gray<scalar_type>( ::color::operation::delta( difference, left, right ) ).template get<0>();
             }

         };

      }

     template< typename category_name >
      typename ::color::trait::scalar< category_name >::instance_type
      distance
       (
         ::color::model<category_name> const& left
        ,::color::model<category_name> const& right
       )
       {
        return ::color::operation::_internal::distance<category_name>::process( left, right );
       }
    }
  }

#endif
