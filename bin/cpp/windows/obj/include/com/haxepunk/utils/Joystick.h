#ifndef INCLUDED_com_haxepunk_utils_Joystick
#define INCLUDED_com_haxepunk_utils_Joystick

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,utils,Joystick)
HX_DECLARE_CLASS2(neash,geom,Point)
namespace com{
namespace haxepunk{
namespace utils{


class Joystick_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Joystick_obj OBJ_;
		Joystick_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Joystick_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Joystick_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Joystick"); }

		bool connected; /* REM */ 
		::neash::geom::Point ball; /* REM */ 
		::neash::geom::Point hat; /* REM */ 
		::neash::geom::Point axis; /* REM */ 
		Array< bool > buttons; /* REM */ 
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_Joystick */ 
