#ifndef color__internal_utility_container_cnerAAA2
#define color__internal_utility_container_cnerAAA2

// ::color::_internal::utility::container::cnerAAA2< index_name >

#include "../type/index.hpp"
#include "../type/traitp.hpp"


namespace color
 {
  namespace _internal
   {
    namespace utility
     {
      namespace container
       {

        template<  typename index_name >
         struct cnerAAA2
          {
           public:
             typedef index_name     index_type;

             typedef std::uint8_t   value_type;
             typedef std::uint32_t  instance_type;



             typedef instance_type const      const_type;
             typedef instance_type const&     return_image_type;
             typedef instance_type      &     return_type;
             typedef instance_type      &     return_original_type;
             typedef instance_type const&     input_const_type;
             typedef instance_type      &     input_type;
             typedef instance_type      &     output_type;

             typedef ::color::_internal::utility::type::index< index_type >   index_trait_type;

             typedef typename index_trait_type::instance_type     index_instance_type;

             typedef typename index_trait_type::input_const_type  index_input_const_type;
             typedef typename index_trait_type::return_image_type index_return_image_type;

             typedef ::color::_internal::utility::type::traitP< value_type >         component_trait_type;

             typedef typename component_trait_type::const_type           component_const_type;
             typedef typename component_trait_type::instance_type        component_type;
             typedef typename component_trait_type::return_image_type    component_return_const_type;
             typedef typename component_trait_type::input_const_type     component_input_const_type;

             typedef void set_return_type;

             enum { size_enum = 4 };


             static component_return_const_type get( input_const_type container, index_input_const_type index )
              {
               switch( index )
                {
                 case( 0 ): return ( ( container >>  0 ) & 1023 );
                 case( 1 ): return ( ( container >> 10 ) & 1023 );
                 case( 2 ): return ( ( container >> 20 ) & 1023 );
                 case( 3 ): return ( ( container >> 30 ) &    3 );
                }
               return 0;
              }

             template< index_instance_type index >
              static component_return_const_type get( input_const_type container )
               {
                switch( index )
                 {
                  case( 0 ): return ( ( container >>  0 ) & 1023 );
                  case( 1 ): return ( ( container >> 10 ) & 1023 );
                  case( 2 ): return ( ( container >> 20 ) & 1023 );
                  case( 3 ): return ( ( container >> 30 ) &    3 );
                 }
                return 0;
               }

             static set_return_type set( input_type container, index_input_const_type index, component_input_const_type value )
              {
               switch( index )
                {
                 case(0) : container = ( container & ~( 1023 << (  0 ) ) )  |  ( ((instance_type)value) << (  0 ) ); break;
                 case(1) : container = ( container & ~( 1023 << ( 10 ) ) )  |  ( ((instance_type)value) << ( 10 ) ); break;
                 case(2) : container = ( container & ~( 1023 << ( 20 ) ) )  |  ( ((instance_type)value) << ( 20 ) ); break;
                 case(3) : container = ( container & ~(    3 << ( 30 ) ) )  |  ( ((instance_type)value) << ( 30 ) ); break;
                }
              }

             template< index_instance_type index >
              static set_return_type set( input_type container, component_input_const_type value )
               {
                switch( index )
                 {
                  case(0) : container = ( container & ~( 1023 << (  0 ) ) )  |  ( ((instance_type)value) << (  0 ) ); break;
                  case(1) : container = ( container & ~( 1023 << ( 10 ) ) )  |  ( ((instance_type)value) << ( 10 ) ); break;
                  case(2) : container = ( container & ~( 1023 << ( 20 ) ) )  |  ( ((instance_type)value) << ( 20 ) ); break;
                  case(3) : container = ( container & ~(    3 << ( 30 ) ) )  |  ( ((instance_type)value) << ( 30 ) ); break;
                 }
               }

             static /*constexpr*/ index_return_image_type size()
              {
               static const index_instance_type local_length = 4;
               return local_length;
              }
          };
       }
     }
   }
 }

#endif