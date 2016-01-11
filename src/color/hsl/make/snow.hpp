#ifndef color_hsl_make_snow
#define color_hsl_make_snow

// ::color::make::snow( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.980392, 0.980392 } ) - rgb(255,250,250) - #fffafa

      inline
      void snow( ::color::_internal::model< color::category::hsl_uint8 > & color_parameter )
       {
        color_parameter.container() = 0xb8;
       }

      inline
      void snow( ::color::_internal::model< color::category::hsl_uint16 > & color_parameter )
       {
        color_parameter.container() = 0xfbe0;
       }

      inline
      void snow( ::color::_internal::model< color::category::hsl_uint32 > & color_parameter )
       {
        color_parameter.container() = 0xfffcff00u;
       }

      inline
      void snow( ::color::_internal::model< color::category::hsl_uint64 > & color_parameter )
       {
        color_parameter.container() = 0xfffffd7cffff0000ul;
       }

      inline
      void snow( ::color::_internal::model< color::category::hsl_float > & color_parameter )
       {
        color_parameter.container() = std::array<float,3>( { 0, 100, 99.0196 } );
       }

      inline
      void snow( ::color::_internal::model< color::category::hsl_double> & color_parameter )
       {
        color_parameter.container() = std::array<double,3>( { 0, 100, 99.0196 } );
       }

      inline
      void snow( ::color::_internal::model< color::category::hsl_ldouble> & color_parameter )
       {
        color_parameter.container() = std::array<long double,3>( { 0, 100, 99.0196 } );
       }

    }
  }

#endif