#ifndef color_YCgCo_akin_gray
#define color_YCgCo_akin_gray

#include "../../generic/akin/YCgCo.hpp"
#include "../category.hpp"
#include "../../gray/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct YCgCo< ::color::category::gray_uint8   >{ typedef ::color::category::YCgCo_uint8   akin_type; };
    template< >struct YCgCo< ::color::category::gray_uint16  >{ typedef ::color::category::YCgCo_uint16  akin_type; };
    template< >struct YCgCo< ::color::category::gray_uint32  >{ typedef ::color::category::YCgCo_uint32  akin_type; };
    template< >struct YCgCo< ::color::category::gray_uint64  >{ typedef ::color::category::YCgCo_uint64  akin_type; };
    template< >struct YCgCo< ::color::category::gray_float   >{ typedef ::color::category::YCgCo_float   akin_type; };
    template< >struct YCgCo< ::color::category::gray_double  >{ typedef ::color::category::YCgCo_double  akin_type; };
    template< >struct YCgCo< ::color::category::gray_ldouble >{ typedef ::color::category::YCgCo_ldouble akin_type; };

   }
 }

#endif
