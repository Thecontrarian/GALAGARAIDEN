#ifndef INCLUDED_com_haxepunk_graphics_Graphiclist
#define INCLUDED_com_haxepunk_graphics_Graphiclist

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Graphic.h>
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Graphiclist)
HX_DECLARE_CLASS2(neash,display,BitmapData)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,geom,Point)
namespace com{
namespace haxepunk{
namespace graphics{


class Graphiclist_obj : public ::com::haxepunk::Graphic_obj{
	public:
		typedef ::com::haxepunk::Graphic_obj super;
		typedef Graphiclist_obj OBJ_;
		Graphiclist_obj();
		Void __construct(Dynamic graphic);

	public:
		static hx::ObjectPtr< Graphiclist_obj > __new(Dynamic graphic);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Graphiclist_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Graphiclist"); }

		::neash::geom::Point _camera; /* REM */ 
		int _count; /* REM */ 
		Array< ::com::haxepunk::Graphic > _temp; /* REM */ 
		Array< ::com::haxepunk::Graphic > _graphics; /* REM */ 
		virtual Void updateCheck( );
		Dynamic updateCheck_dyn();

		virtual int getCount( );
		Dynamic getCount_dyn();

		int count; /* REM */ 
		virtual Array< ::com::haxepunk::Graphic > getChildren( );
		Dynamic getChildren_dyn();

		Array< ::com::haxepunk::Graphic > children; /* REM */ 
		virtual Void removeAll( );
		Dynamic removeAll_dyn();

		virtual Void removeAt( hx::Null< int >  index);
		Dynamic removeAt_dyn();

		virtual ::com::haxepunk::Graphic remove( ::com::haxepunk::Graphic graphic);
		Dynamic remove_dyn();

		virtual ::com::haxepunk::Graphic add( ::com::haxepunk::Graphic graphic);
		Dynamic add_dyn();

		virtual Void render( ::neash::display::BitmapData target,::neash::geom::Point point,::neash::geom::Point camera);

		virtual Void update( );

};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Graphiclist */ 
