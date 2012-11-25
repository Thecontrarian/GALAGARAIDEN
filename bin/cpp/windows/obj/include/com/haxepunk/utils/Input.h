#ifndef INCLUDED_com_haxepunk_utils_Input
#define INCLUDED_com_haxepunk_utils_Input

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS0(IntHash)
HX_DECLARE_CLASS3(com,haxepunk,utils,Input)
HX_DECLARE_CLASS3(com,haxepunk,utils,Joystick)
HX_DECLARE_CLASS2(neash,events,Event)
HX_DECLARE_CLASS2(neash,events,JoystickEvent)
HX_DECLARE_CLASS2(neash,events,KeyboardEvent)
HX_DECLARE_CLASS2(neash,events,MouseEvent)
namespace com{
namespace haxepunk{
namespace utils{


class Input_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Input_obj OBJ_;
		Input_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Input_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Input_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Input"); }

		static ::String keyString; /* REM */ 
		static Float deadZone; /* REM */ 
		static int lastKey; /* REM */ 
		static bool mouseDown; /* REM */ 
		static bool mouseUp; /* REM */ 
		static bool mousePressed; /* REM */ 
		static bool mouseReleased; /* REM */ 
		static bool mouseWheel; /* REM */ 
		static int mouseX; /* REM */ 
		static int getMouseX( );
		static Dynamic getMouseX_dyn();

		static int mouseY; /* REM */ 
		static int getMouseY( );
		static Dynamic getMouseY_dyn();

		static int mouseFlashX; /* REM */ 
		static int getMouseFlashX( );
		static Dynamic getMouseFlashX_dyn();

		static int mouseFlashY; /* REM */ 
		static int getMouseFlashY( );
		static Dynamic getMouseFlashY_dyn();

		static Void define( ::String name,Array< int > keys);
		static Dynamic define_dyn();

		static bool check( Dynamic input);
		static Dynamic check_dyn();

		static bool pressed( Dynamic input);
		static Dynamic pressed_dyn();

		static bool released( Dynamic input);
		static Dynamic released_dyn();

		static int indexOf( Array< int > a,int v);
		static Dynamic indexOf_dyn();

		static ::com::haxepunk::utils::Joystick joystick( int id);
		static Dynamic joystick_dyn();

		static Void enable( );
		static Dynamic enable_dyn();

		static Void update( );
		static Dynamic update_dyn();

		static Void onKeyDown( ::neash::events::KeyboardEvent e);
		static Dynamic onKeyDown_dyn();

		static Void onKeyUp( ::neash::events::KeyboardEvent e);
		static Dynamic onKeyUp_dyn();

		static Void onMouseDown( ::neash::events::MouseEvent e);
		static Dynamic onMouseDown_dyn();

		static Void onMouseUp( ::neash::events::MouseEvent e);
		static Dynamic onMouseUp_dyn();

		static Void onMouseWheel( ::neash::events::MouseEvent e);
		static Dynamic onMouseWheel_dyn();

		static Void onJoyAxisMove( ::neash::events::JoystickEvent e);
		static Dynamic onJoyAxisMove_dyn();

		static Void onJoyBallMove( ::neash::events::JoystickEvent e);
		static Dynamic onJoyBallMove_dyn();

		static Void onJoyButtonDown( ::neash::events::JoystickEvent e);
		static Dynamic onJoyButtonDown_dyn();

		static Void onJoyButtonUp( ::neash::events::JoystickEvent e);
		static Dynamic onJoyButtonUp_dyn();

		static Void onJoyHatMove( ::neash::events::JoystickEvent e);
		static Dynamic onJoyHatMove_dyn();

		static int kKeyStringMax; /* REM */ 
		static bool _enabled; /* REM */ 
		static ::IntHash _joysticks; /* REM */ 
		static Array< bool > _key; /* REM */ 
		static int _keyNum; /* REM */ 
		static Array< int > _press; /* REM */ 
		static int _pressNum; /* REM */ 
		static Array< int > _release; /* REM */ 
		static int _releaseNum; /* REM */ 
		static ::Hash _control; /* REM */ 
		static int _mouseWheelDelta; /* REM */ 
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_Input */ 
