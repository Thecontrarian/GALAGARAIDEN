#ifndef INCLUDED_com_haxepunk_Screen
#define INCLUDED_com_haxepunk_Screen

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Screen)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS2(neash,display,Bitmap)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,filters,BitmapFilter)
HX_DECLARE_CLASS2(neash,geom,Matrix)
namespace com{
namespace haxepunk{


class Screen_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Screen_obj OBJ_;
		Screen_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Screen_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Screen_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Screen"); }

		int _color; /* REM */ 
		Float _angle; /* REM */ 
		::neash::geom::Matrix _matrix; /* REM */ 
		int _current; /* REM */ 
		Array< ::neash::display::Bitmap > _bitmap; /* REM */ 
		::neash::display::Sprite _sprite; /* REM */ 
		virtual ::com::haxepunk::graphics::Image capture( );
		Dynamic capture_dyn();

		virtual int getMouseY( );
		Dynamic getMouseY_dyn();

		int mouseY; /* REM */ 
		virtual int getMouseX( );
		Dynamic getMouseX_dyn();

		int mouseX; /* REM */ 
		int height; /* REM */ 
		int width; /* REM */ 
		virtual bool setSmoothing( bool value);
		Dynamic setSmoothing_dyn();

		virtual bool getSmoothing( );
		Dynamic getSmoothing_dyn();

		bool smoothing; /* REM */ 
		virtual Float setAngle( Float value);
		Dynamic setAngle_dyn();

		virtual Float getAngle( );
		Dynamic getAngle_dyn();

		Float angle; /* REM */ 
		virtual Float setScale( Float value);
		Dynamic setScale_dyn();

		Float scale; /* REM */ 
		virtual Float setScaleY( Float value);
		Dynamic setScaleY_dyn();

		Float scaleY; /* REM */ 
		virtual Float setScaleX( Float value);
		Dynamic setScaleX_dyn();

		Float scaleX; /* REM */ 
		virtual int setOriginY( int value);
		Dynamic setOriginY_dyn();

		int originY; /* REM */ 
		virtual int setOriginX( int value);
		Dynamic setOriginX_dyn();

		int originX; /* REM */ 
		virtual int setY( int value);
		Dynamic setY_dyn();

		int y; /* REM */ 
		virtual int setX( int value);
		Dynamic setX_dyn();

		int x; /* REM */ 
		virtual int setColor( int value);
		Dynamic setColor_dyn();

		virtual int getColor( );
		Dynamic getColor_dyn();

		int color; /* REM */ 
		virtual Void update( );
		Dynamic update_dyn();

		virtual Void redraw( );
		Dynamic redraw_dyn();

		virtual Void refresh( );
		Dynamic refresh_dyn();

		virtual Void addFilter( Array< ::neash::filters::BitmapFilter > filter);
		Dynamic addFilter_dyn();

		virtual Void swap( );
		Dynamic swap_dyn();

		virtual Void resize( );
		Dynamic resize_dyn();

		virtual Void init( );
		Dynamic init_dyn();

};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Screen */ 
