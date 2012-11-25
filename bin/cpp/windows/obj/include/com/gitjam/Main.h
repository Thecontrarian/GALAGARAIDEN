#ifndef INCLUDED_com_gitjam_Main
#define INCLUDED_com_gitjam_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Engine.h>
HX_DECLARE_CLASS2(com,gitjam,Main)
HX_DECLARE_CLASS2(com,haxepunk,Engine)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
namespace com{
namespace gitjam{


class Main_obj : public ::com::haxepunk::Engine_obj{
	public:
		typedef ::com::haxepunk::Engine_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Main_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Main"); }

		virtual Void init( );

		static int kScreenWidth; /* REM */ 
		static int kScreenHeight; /* REM */ 
		static int kFrameRate; /* REM */ 
		static int kClearColor; /* REM */ 
		static ::String kProjectName; /* REM */ 
		static Void main( );
		static Dynamic main_dyn();

};

} // end namespace com
} // end namespace gitjam

#endif /* INCLUDED_com_gitjam_Main */ 
