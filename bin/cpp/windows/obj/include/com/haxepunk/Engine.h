#ifndef INCLUDED_com_haxepunk_Engine
#define INCLUDED_com_haxepunk_Engine

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/display/Sprite.h>
HX_DECLARE_CLASS2(com,haxepunk,Engine)
HX_DECLARE_CLASS1(haxe,Timer)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,Event)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
namespace com{
namespace haxepunk{


class Engine_obj : public ::neash::display::Sprite_obj{
	public:
		typedef ::neash::display::Sprite_obj super;
		typedef Engine_obj OBJ_;
		Engine_obj();
		Void __construct(int width,int height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed);

	public:
		static hx::ObjectPtr< Engine_obj > __new(int width,int height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Engine_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Engine"); }

		Array< int > _frameList; /* REM */ 
		int _frameListSum; /* REM */ 
		Float _frameLast; /* REM */ 
		Float _flashTime; /* REM */ 
		Float _gameTime; /* REM */ 
		Float _renderTime; /* REM */ 
		Float _updateTime; /* REM */ 
		Float _prev; /* REM */ 
		Float _skip; /* REM */ 
		Float _rate; /* REM */ 
		::haxe::Timer _timer; /* REM */ 
		Float _last; /* REM */ 
		Float _time; /* REM */ 
		Float _delta; /* REM */ 
		virtual Void checkWorld( );
		Dynamic checkWorld_dyn();

		virtual Void onTimer( );
		Dynamic onTimer_dyn();

		virtual Void onEnterFrame( ::neash::events::Event e);
		Dynamic onEnterFrame_dyn();

		virtual Void onStage( ::neash::events::Event e);
		Dynamic onStage_dyn();

		virtual Void resize( );
		Dynamic resize_dyn();

		virtual Void setStageProperties( );
		Dynamic setStageProperties_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void focusLost( );
		Dynamic focusLost_dyn();

		virtual Void focusGained( );
		Dynamic focusGained_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		int tickRate; /* REM */ 
		int maxFrameSkip; /* REM */ 
		Float maxElapsed; /* REM */ 
		bool paused; /* REM */ 
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Engine */ 
