#ifndef INCLUDED_com_haxepunk_debug_Console
#define INCLUDED_com_haxepunk_debug_Console

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,debug,Console)
HX_DECLARE_CLASS2(neash,display,Bitmap)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,Event)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,geom,Rectangle)
HX_DECLARE_CLASS2(neash,text,TextField)
HX_DECLARE_CLASS2(neash,text,TextFormat)
namespace com{
namespace haxepunk{
namespace debug{


class Console_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Console_obj OBJ_;
		Console_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Console_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Console_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Console"); }

		::List WATCH_LIST; /* REM */ 
		::List SELECT_LIST; /* REM */ 
		::List SCREEN_LIST; /* REM */ 
		Array< ::com::haxepunk::Entity > ENTITY_LIST; /* REM */ 
		Array< ::String > LOG; /* REM */ 
		int _logLines; /* REM */ 
		::neash::geom::Rectangle _entRect; /* REM */ 
		::neash::display::Sprite _entSelect; /* REM */ 
		::neash::display::Sprite _entScreen; /* REM */ 
		::neash::display::Bitmap _bmpLogo; /* REM */ 
		::neash::display::Bitmap _butStep; /* REM */ 
		::neash::display::Bitmap _butPause; /* REM */ 
		::neash::display::Bitmap _butPlay; /* REM */ 
		::neash::display::Bitmap _butOutput; /* REM */ 
		::neash::display::Bitmap _butDebug; /* REM */ 
		::neash::display::Sprite _butRead; /* REM */ 
		::neash::text::TextField _debReadText1; /* REM */ 
		::neash::text::TextField _debReadText0; /* REM */ 
		::neash::display::Sprite _debRead; /* REM */ 
		::neash::text::TextField _entReadText; /* REM */ 
		::neash::display::Sprite _entRead; /* REM */ 
		Float _logScroll; /* REM */ 
		::neash::geom::Rectangle _logBarGlobal; /* REM */ 
		::neash::geom::Rectangle _logBar; /* REM */ 
		int _logHeight; /* REM */ 
		::neash::text::TextField _logReadText1; /* REM */ 
		::neash::text::TextField _logReadText0; /* REM */ 
		::neash::display::Sprite _logRead; /* REM */ 
		::neash::text::TextField _memReadText; /* REM */ 
		::neash::text::TextField _fpsInfoText1; /* REM */ 
		::neash::text::TextField _fpsInfoText0; /* REM */ 
		::neash::display::Sprite _fpsInfo; /* REM */ 
		::neash::text::TextField _fpsReadText; /* REM */ 
		::neash::display::Sprite _fpsRead; /* REM */ 
		::neash::display::Bitmap _back; /* REM */ 
		::neash::text::TextFormat _format; /* REM */ 
		::neash::display::Sprite _sprite; /* REM */ 
		bool _panning; /* REM */ 
		bool _dragging; /* REM */ 
		bool _selecting; /* REM */ 
		bool _scrolling; /* REM */ 
		bool _debug; /* REM */ 
		bool _paused; /* REM */ 
		bool _enabled; /* REM */ 
		virtual int getHeight( );
		Dynamic getHeight_dyn();

		int height; /* REM */ 
		virtual int getWidth( );
		Dynamic getWidth_dyn();

		int width; /* REM */ 
		virtual ::neash::text::TextFormat format( hx::Null< int >  size,hx::Null< int >  color,::String align);
		Dynamic format_dyn();

		virtual Void updateButtons( );
		Dynamic updateButtons_dyn();

		virtual Void updateEntityCount( );
		Dynamic updateEntityCount_dyn();

		virtual Void updateDebugRead( );
		Dynamic updateDebugRead_dyn();

		virtual Void updateFPSRead( );
		Dynamic updateFPSRead_dyn();

		virtual Void updateLog( );
		Dynamic updateLog_dyn();

		virtual Void renderEntities( );
		Dynamic renderEntities_dyn();

		virtual Void updateEntityLists( hx::Null< bool >  fetchList);
		Dynamic updateEntityLists_dyn();

		virtual Void updateKeyPanning( );
		Dynamic updateKeyPanning_dyn();

		virtual Void updateKeyMoving( );
		Dynamic updateKeyMoving_dyn();

		virtual Void updateScrolling( );
		Dynamic updateScrolling_dyn();

		virtual Void startScrolling( );
		Dynamic startScrolling_dyn();

		virtual Void selectAll( );
		Dynamic selectAll_dyn();

		virtual Void selectEntities( ::neash::geom::Rectangle rect);
		Dynamic selectEntities_dyn();

		virtual Void updateSelection( );
		Dynamic updateSelection_dyn();

		virtual Void startSelection( );
		Dynamic startSelection_dyn();

		virtual Void setCamera( int x,int y);
		Dynamic setCamera_dyn();

		virtual Void panCamera( int xDelta,int yDelta);
		Dynamic panCamera_dyn();

		virtual Void updatePanning( );
		Dynamic updatePanning_dyn();

		virtual Void startPanning( );
		Dynamic startPanning_dyn();

		virtual Void moveSelected( int xDelta,int yDelta);
		Dynamic moveSelected_dyn();

		virtual Void updateDragging( );
		Dynamic updateDragging_dyn();

		virtual Void startDragging( );
		Dynamic startDragging_dyn();

		virtual Void stepFrame( );
		Dynamic stepFrame_dyn();

		virtual bool setDebug( bool value);
		Dynamic setDebug_dyn();

		virtual bool getDebug( );
		Dynamic getDebug_dyn();

		bool debug; /* REM */ 
		virtual bool setPaused( bool value);
		Dynamic setPaused_dyn();

		virtual bool getPaused( );
		Dynamic getPaused_dyn();

		bool paused; /* REM */ 
		virtual Void update( );
		Dynamic update_dyn();

		virtual bool setVisible( bool value);
		Dynamic setVisible_dyn();

		virtual bool getVisible( );
		Dynamic getVisible_dyn();

		bool visible; /* REM */ 
		virtual Void onResize( ::neash::events::Event e);
		Dynamic onResize_dyn();

		virtual Void enable( );
		Dynamic enable_dyn();

		virtual Void watch( Dynamic properties);
		Dynamic watch_dyn();

		virtual Void log( Dynamic data);
		Dynamic log_dyn();

		virtual Void traceLog( Dynamic v,Dynamic infos);
		Dynamic traceLog_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		int toggleKey; /* REM */ 
};

} // end namespace com
} // end namespace haxepunk
} // end namespace debug

#endif /* INCLUDED_com_haxepunk_debug_Console */ 
