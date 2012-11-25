#ifndef INCLUDED_com_haxepunk_utils_Key
#define INCLUDED_com_haxepunk_utils_Key

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,haxepunk,utils,Key)
namespace com{
namespace haxepunk{
namespace utils{


class Key_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Key_obj OBJ_;
		Key_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Key_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Key_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Key"); }

		static int ANY; /* REM */ 
		static int LEFT; /* REM */ 
		static int UP; /* REM */ 
		static int RIGHT; /* REM */ 
		static int DOWN; /* REM */ 
		static int ENTER; /* REM */ 
		static int COMMAND; /* REM */ 
		static int CONTROL; /* REM */ 
		static int SPACE; /* REM */ 
		static int SHIFT; /* REM */ 
		static int BACKSPACE; /* REM */ 
		static int CAPS_LOCK; /* REM */ 
		static int DELETE; /* REM */ 
		static int END; /* REM */ 
		static int ESCAPE; /* REM */ 
		static int HOME; /* REM */ 
		static int INSERT; /* REM */ 
		static int TAB; /* REM */ 
		static int PAGE_DOWN; /* REM */ 
		static int PAGE_UP; /* REM */ 
		static int LEFT_SQUARE_BRACKET; /* REM */ 
		static int RIGHT_SQUARE_BRACKET; /* REM */ 
		static int A; /* REM */ 
		static int B; /* REM */ 
		static int C; /* REM */ 
		static int D; /* REM */ 
		static int E; /* REM */ 
		static int F; /* REM */ 
		static int G; /* REM */ 
		static int H; /* REM */ 
		static int I; /* REM */ 
		static int J; /* REM */ 
		static int K; /* REM */ 
		static int L; /* REM */ 
		static int M; /* REM */ 
		static int N; /* REM */ 
		static int O; /* REM */ 
		static int P; /* REM */ 
		static int Q; /* REM */ 
		static int R; /* REM */ 
		static int S; /* REM */ 
		static int T; /* REM */ 
		static int U; /* REM */ 
		static int V; /* REM */ 
		static int W; /* REM */ 
		static int X; /* REM */ 
		static int Y; /* REM */ 
		static int Z; /* REM */ 
		static int F1; /* REM */ 
		static int F2; /* REM */ 
		static int F3; /* REM */ 
		static int F4; /* REM */ 
		static int F5; /* REM */ 
		static int F6; /* REM */ 
		static int F7; /* REM */ 
		static int F8; /* REM */ 
		static int F9; /* REM */ 
		static int F10; /* REM */ 
		static int F11; /* REM */ 
		static int F12; /* REM */ 
		static int F13; /* REM */ 
		static int F14; /* REM */ 
		static int F15; /* REM */ 
		static int DIGIT_0; /* REM */ 
		static int DIGIT_1; /* REM */ 
		static int DIGIT_2; /* REM */ 
		static int DIGIT_3; /* REM */ 
		static int DIGIT_4; /* REM */ 
		static int DIGIT_5; /* REM */ 
		static int DIGIT_6; /* REM */ 
		static int DIGIT_7; /* REM */ 
		static int DIGIT_8; /* REM */ 
		static int DIGIT_9; /* REM */ 
		static int NUMPAD_0; /* REM */ 
		static int NUMPAD_1; /* REM */ 
		static int NUMPAD_2; /* REM */ 
		static int NUMPAD_3; /* REM */ 
		static int NUMPAD_4; /* REM */ 
		static int NUMPAD_5; /* REM */ 
		static int NUMPAD_6; /* REM */ 
		static int NUMPAD_7; /* REM */ 
		static int NUMPAD_8; /* REM */ 
		static int NUMPAD_9; /* REM */ 
		static int NUMPAD_ADD; /* REM */ 
		static int NUMPAD_DECIMAL; /* REM */ 
		static int NUMPAD_DIVIDE; /* REM */ 
		static int NUMPAD_ENTER; /* REM */ 
		static int NUMPAD_MULTIPLY; /* REM */ 
		static int NUMPAD_SUBTRACT; /* REM */ 
		static ::String nameOfKey( int _char);
		static Dynamic nameOfKey_dyn();

};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_Key */ 
