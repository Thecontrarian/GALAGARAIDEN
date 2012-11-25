#ifndef INCLUDED_com_haxepunk_math_Projection
#define INCLUDED_com_haxepunk_math_Projection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,math,Projection)
namespace com{
namespace haxepunk{
namespace math{


class Projection_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Projection_obj OBJ_;
		Projection_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Projection_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Projection_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Projection"); }

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float getOverlap( ::com::haxepunk::math::Projection other);
		Dynamic getOverlap_dyn();

		virtual bool overlaps( ::com::haxepunk::math::Projection other);
		Dynamic overlaps_dyn();

		Float min; /* REM */ 
		Float max; /* REM */ 
};

} // end namespace com
} // end namespace haxepunk
} // end namespace math

#endif /* INCLUDED_com_haxepunk_math_Projection */ 
