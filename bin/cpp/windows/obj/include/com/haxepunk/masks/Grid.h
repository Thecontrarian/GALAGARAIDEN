#ifndef INCLUDED_com_haxepunk_masks_Grid
#define INCLUDED_com_haxepunk_masks_Grid

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/masks/Hitbox.h>
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS3(com,haxepunk,masks,Grid)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,masks,Pixelmask)
HX_DECLARE_CLASS2(neash,display,Graphics)
HX_DECLARE_CLASS2(neash,geom,Point)
HX_DECLARE_CLASS2(neash,geom,Rectangle)
namespace com{
namespace haxepunk{
namespace masks{


class Grid_obj : public ::com::haxepunk::masks::Hitbox_obj{
	public:
		typedef ::com::haxepunk::masks::Hitbox_obj super;
		typedef Grid_obj OBJ_;
		Grid_obj();
		Void __construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		static hx::ObjectPtr< Grid_obj > __new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Grid_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Grid"); }

		::neash::geom::Point _point2; /* REM */ 
		::neash::geom::Point _point; /* REM */ 
		::neash::geom::Rectangle _rect; /* REM */ 
		::neash::geom::Rectangle _tile; /* REM */ 
		virtual Void squareProjection( ::neash::geom::Point axis,::neash::geom::Point point);
		Dynamic squareProjection_dyn();

		virtual Void debugDraw( ::neash::display::Graphics graphics,Float scaleX,Float scaleY);

		virtual bool collidePixelmask( ::com::haxepunk::masks::Pixelmask other);
		Dynamic collidePixelmask_dyn();

		virtual bool collideHitbox( ::com::haxepunk::masks::Hitbox other);

		virtual bool collideMask( ::com::haxepunk::Mask other);

		Array< Array< bool > > data; /* REM */ 
		int rows; /* REM */ 
		int columns; /* REM */ 
		virtual int getTileHeight( );
		Dynamic getTileHeight_dyn();

		int tileHeight; /* REM */ 
		virtual int getTileWidth( );
		Dynamic getTileWidth_dyn();

		int tileWidth; /* REM */ 
		virtual ::String saveToString( ::String columnSep,::String rowSep);
		Dynamic saveToString_dyn();

		virtual Void loadFromString( ::String str,::String columnSep,::String rowSep);
		Dynamic loadFromString_dyn();

		virtual Void clearRect( hx::Null< int >  column,hx::Null< int >  row,hx::Null< int >  width,hx::Null< int >  height);
		Dynamic clearRect_dyn();

		virtual Void setRect( hx::Null< int >  column,hx::Null< int >  row,hx::Null< int >  width,hx::Null< int >  height,hx::Null< bool >  solid);
		Dynamic setRect_dyn();

		virtual bool getTile( hx::Null< int >  column,hx::Null< int >  row);
		Dynamic getTile_dyn();

		virtual bool checkTile( int column,int row);
		Dynamic checkTile_dyn();

		virtual Void clearTile( hx::Null< int >  column,hx::Null< int >  row);
		Dynamic clearTile_dyn();

		virtual Void setTile( hx::Null< int >  column,hx::Null< int >  row,hx::Null< bool >  solid);
		Dynamic setTile_dyn();

		bool usePositions; /* REM */ 
};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_Grid */ 
