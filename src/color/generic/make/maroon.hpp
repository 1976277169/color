#ifndef  color_generic_make_maroon
#define color_generic_make_maroon

// ::color::make::maroon( c )

// TODO #include "model.hpp"
// TODO #include "constant/make.hpp"

 namespace color
  {

   namespace make
    {

     template< typename category_name >
      void maroon( ::color::model< category_name > & color_parameter )
       {
        typedef ::color::model< category_name > model_type;
        typedef typename model_type::index_type index_type;

        // Do nothing to force specialization
       }

     template< typename category_name >
      inline
      ::color::model< category_name >
      maroon()
       {
        typedef ::color::model< category_name > model_type;
        static model_type dummy;
        // TODO Will call every time, That is no good.
        ::color::make::maroon( dummy );

        // Do nothing to force specialization
        return dummy;
       }

    }

    namespace constant
     {

      struct maroon /*: public ::color::constant:: */ {};

      template< typename category_name >
       struct make<::color::constant::maroon, category_name >
        {
         typedef category_name              category_type;
         typedef ::color::constant::maroon       color_type;

         typedef ::color::trait::container<category_type>       container_type;

         inline static void process( container_type & m )
          {
           m = ::color::make::maroon<category_type>( ).container();
          }

        };

     }

  }

#endif
