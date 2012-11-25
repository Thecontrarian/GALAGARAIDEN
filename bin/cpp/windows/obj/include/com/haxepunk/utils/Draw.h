#ifndef INCLUDED_com_haxepunk_utils_Draw
#define INCLUDED_com_haxepunk_utils_Draw

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,utils,Draw)
HX_DECLARE_CLASS2(neash,display,BitmapData)
HX_DECLARE_CLASS2(neash,display,BlendMode)
HX_DECLARE_CLASS2(neash,display,Graphics)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,geom,Matrix)
HX_DECLARE_CLASS2(neash,geom,Point)
HX_DECLARE_CLASS2(neash,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace utils{


class Draw_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Draw_obj OBJ_;
		Draw_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Draw_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Draw_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Draw"); }

		static ::neash::display::BlendMode blend; /* REM */ 
		static Void setTarget( ::neash::display::BitmapData target,::neash::geom::Point camera,::neash::display::BlendMode blend);
		static Dynamic setTarget_dyn();

		static Void resetTarget( );
		static Dynamic resetTarget_dyn();

		static Void drawToScreen( );
		static Dynamic drawToScreen_dyn();

		static Void line( int x1,int y1,int x2,int y2,hx::Null< int >  color);
		static Dynamic line_dyn();

		static Void linePlus( int x1,int y1,int x2,int y2,hx::Null< int >  color,hx::Null< Float >  alpha,hx::Null< Float >  thick);
		static Dynamic linePlus_dyn();

		static Void rect( int x,int y,int width,int height,hx::Null< int >  color,hx::Null< Float >  alpha);
		static Dynamic rect_dyn();

		static Void circle( int x,int y,int radius,hx::Null< int >  color);
		static Dynamic circle_dyn();

		static Void circlePlus( int x,int y,Float radius,hx::Null< int >  color,hx::Null< Float >  alpha,hx::Null< bool >  fill,hx::Null< int >  thick);
		static Dynamic circlePlus_dyn();

		static Void hitbox( ::com::haxepunk::Entity e,hx::Null< bool >  outline,hx::Null< int >  color,hx::Null< Float >  alpha);
		static Dynamic hitbox_dyn();

		static Void curve( int x1,int y1,int x2,int y2,int x3,int y3,hx::Null< Float >  thick,hx::Null< int >  color,hx::Null< Float >  alpha);
		static Dynamic curve_dyn();

		static Void graphic( ::com::haxepunk::Graphic g,hx::Null< int >  x,hx::Null< int >  y);
		static Dynamic graphic_dyn();

		static Void entity( ::com::haxepunk::Entity e,Dynamic x,Dynamic y,Dynamic addEntityPosition);
		static Dynamic entity_dyn();

		static Void text( ::String text,Dynamic x,Dynamic y,Dynamic options);
		static Dynamic text_dyn();

		static ::neash::display::BitmapData _target; /* REM */ 
		static ::neash::geom::Point _camera; /* REM */ 
		static ::neash::display::Graphics _graphics; /* REM */ 
		static ::neash::geom::Rectangle _rect; /* REM */ 
		static ::neash::geom::Matrix _matrix; /* REM */ 
};

} // end namespace com
} // end namespace haxepunk
} // end namespace utils

#endif /* INCLUDED_com_haxepunk_utils_Draw */ 
