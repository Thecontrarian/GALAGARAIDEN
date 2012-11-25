#ifndef INCLUDED_com_haxepunk_graphics_Image
#define INCLUDED_com_haxepunk_graphics_Image

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Graphic.h>
HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS2(neash,display,Bitmap)
HX_DECLARE_CLASS2(neash,display,BitmapData)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,geom,ColorTransform)
HX_DECLARE_CLASS2(neash,geom,Matrix)
HX_DECLARE_CLASS2(neash,geom,Point)
HX_DECLARE_CLASS2(neash,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace graphics{


class Image_obj : public ::com::haxepunk::Graphic_obj{
	public:
		typedef ::com::haxepunk::Graphic_obj super;
		typedef Image_obj OBJ_;
		Image_obj();
		Void __construct(Dynamic source,::neash::geom::Rectangle clipRect,::String __o_name);

	public:
		static hx::ObjectPtr< Image_obj > __new(Dynamic source,::neash::geom::Rectangle clipRect,::String __o_name);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Image_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Image"); }

		::neash::display::BitmapData _flip; /* REM */ 
		bool _flipped; /* REM */ 
		::String _class; /* REM */ 
		::neash::geom::Matrix _matrix; /* REM */ 
		::neash::geom::ColorTransform _colorTransform; /* REM */ 
		::neash::geom::ColorTransform _tint; /* REM */ 
		int _color; /* REM */ 
		Float _alpha; /* REM */ 
		::neash::display::Bitmap _bitmap; /* REM */ 
		::neash::geom::Rectangle _bufferRect; /* REM */ 
		::neash::display::BitmapData _buffer; /* REM */ 
		::neash::geom::Rectangle _sourceRect; /* REM */ 
		::neash::display::BitmapData _source; /* REM */ 
		virtual ::neash::display::BitmapData getSource( );
		Dynamic getSource_dyn();

		::neash::display::BitmapData source; /* REM */ 
		virtual ::neash::geom::Rectangle getClipRect( );
		Dynamic getClipRect_dyn();

		::neash::geom::Rectangle clipRect; /* REM */ 
		virtual int getScaledHeight( );
		Dynamic getScaledHeight_dyn();

		int scaledHeight; /* REM */ 
		virtual int getScaledWidth( );
		Dynamic getScaledWidth_dyn();

		int scaledWidth; /* REM */ 
		virtual int getHeight( );
		Dynamic getHeight_dyn();

		int height; /* REM */ 
		virtual int getWidth( );
		Dynamic getWidth_dyn();

		int width; /* REM */ 
		virtual Void centerOO( );
		Dynamic centerOO_dyn();

		virtual Void centerOrigin( );
		Dynamic centerOrigin_dyn();

		virtual bool setFlipped( bool value);
		Dynamic setFlipped_dyn();

		virtual bool getFlipped( );
		Dynamic getFlipped_dyn();

		bool flipped; /* REM */ 
		virtual int setColor( int value);
		Dynamic setColor_dyn();

		virtual int getColor( );
		Dynamic getColor_dyn();

		int color; /* REM */ 
		virtual Float setAlpha( Float value);
		Dynamic setAlpha_dyn();

		virtual Float getAlpha( );
		Dynamic getAlpha_dyn();

		Float alpha; /* REM */ 
		virtual Void clear( );
		Dynamic clear_dyn();

		virtual Void updateBuffer( hx::Null< bool >  clearBefore);
		Dynamic updateBuffer_dyn();

		virtual Void render( ::neash::display::BitmapData target,::neash::geom::Point point,::neash::geom::Point camera);

		virtual Void createBuffer( );
		Dynamic createBuffer_dyn();

		virtual Void init( );
		Dynamic init_dyn();

		bool smooth; /* REM */ 
		::String blend; /* REM */ 
		int originY; /* REM */ 
		int originX; /* REM */ 
		Float scaleY; /* REM */ 
		Float scaleX; /* REM */ 
		Float scale; /* REM */ 
		Float angle; /* REM */ 
		static ::com::haxepunk::graphics::Image createRect( int width,int height,hx::Null< int >  color);
		static Dynamic createRect_dyn();

		static ::com::haxepunk::graphics::Image createCircle( int radius,hx::Null< int >  color);
		static Dynamic createCircle_dyn();

		static ::Hash _flips; /* REM */ 
};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Image */ 
