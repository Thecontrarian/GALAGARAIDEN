#ifndef INCLUDED_com_haxepunk_Entity
#define INCLUDED_com_haxepunk_Entity

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Tweener.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS2(com,haxepunk,World)
HX_DECLARE_CLASS2(neash,display,BitmapData)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,geom,Point)
namespace com{
namespace haxepunk{


class Entity_obj : public ::com::haxepunk::Tweener_obj{
	public:
		typedef ::com::haxepunk::Tweener_obj super;
		typedef Entity_obj OBJ_;
		Entity_obj();
		Void __construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask);

	public:
		static hx::ObjectPtr< Entity_obj > __new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Entity_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Entity"); }

		::neash::geom::Point _camera; /* REM */ 
		::neash::geom::Point _point; /* REM */ 
		::com::haxepunk::Graphic _graphic; /* REM */ 
		Float _moveY; /* REM */ 
		Float _moveX; /* REM */ 
		Float _y; /* REM */ 
		Float _x; /* REM */ 
		::com::haxepunk::Mask _mask; /* REM */ 
		::com::haxepunk::Mask HITBOX; /* REM */ 
		::com::haxepunk::Entity _recycleNext; /* REM */ 
		Dynamic _typeNext; /* REM */ 
		Dynamic _typePrev; /* REM */ 
		Dynamic _renderNext; /* REM */ 
		Dynamic _renderPrev; /* REM */ 
		Dynamic _updateNext; /* REM */ 
		Dynamic _updatePrev; /* REM */ 
		::String _name; /* REM */ 
		int _layer; /* REM */ 
		::String _type; /* REM */ 
		bool _added; /* REM */ 
		::com::haxepunk::World _world; /* REM */ 
		::String _class; /* REM */ 
		virtual Void clampVertical( Float top,Float bottom,hx::Null< Float >  padding);
		Dynamic clampVertical_dyn();

		virtual Void clampHorizontal( Float left,Float right,hx::Null< Float >  padding);
		Dynamic clampHorizontal_dyn();

		virtual Void moveCollideY( ::com::haxepunk::Entity e);
		Dynamic moveCollideY_dyn();

		virtual Void moveCollideX( ::com::haxepunk::Entity e);
		Dynamic moveCollideX_dyn();

		virtual Void moveTowards( Float x,Float y,Float amount,Dynamic solidType,hx::Null< bool >  sweep);
		Dynamic moveTowards_dyn();

		virtual Void moveTo( Float x,Float y,Dynamic solidType,hx::Null< bool >  sweep);
		Dynamic moveTo_dyn();

		virtual Void moveBy( Float x,Float y,Dynamic solidType,hx::Null< bool >  sweep);
		Dynamic moveBy_dyn();

		virtual ::String toString( );
		Dynamic toString_dyn();

		virtual Float distanceToRect( Float rx,Float ry,Float rwidth,Float rheight);
		Dynamic distanceToRect_dyn();

		virtual Float distanceToPoint( Float px,Float py,hx::Null< bool >  useHitbox);
		Dynamic distanceToPoint_dyn();

		virtual Float distanceFrom( ::com::haxepunk::Entity e,hx::Null< bool >  useHitboxes);
		Dynamic distanceFrom_dyn();

		virtual Void centerOrigin( );
		Dynamic centerOrigin_dyn();

		virtual Void setOrigin( hx::Null< int >  x,hx::Null< int >  y);
		Dynamic setOrigin_dyn();

		virtual Void setHitboxTo( Dynamic o);
		Dynamic setHitboxTo_dyn();

		virtual Void setHitbox( hx::Null< int >  width,hx::Null< int >  height,hx::Null< int >  originX,hx::Null< int >  originY);
		Dynamic setHitbox_dyn();

		virtual ::com::haxepunk::Graphic addGraphic( ::com::haxepunk::Graphic g);
		Dynamic addGraphic_dyn();

		virtual ::String setName( ::String value);
		Dynamic setName_dyn();

		virtual ::String getName( );
		Dynamic getName_dyn();

		::String name; /* REM */ 
		virtual ::com::haxepunk::Graphic setGraphic( ::com::haxepunk::Graphic value);
		Dynamic setGraphic_dyn();

		virtual ::com::haxepunk::Graphic getGraphic( );
		Dynamic getGraphic_dyn();

		::com::haxepunk::Graphic graphic; /* REM */ 
		virtual ::com::haxepunk::Mask setMask( ::com::haxepunk::Mask value);
		Dynamic setMask_dyn();

		virtual ::com::haxepunk::Mask getMask( );
		Dynamic getMask_dyn();

		::com::haxepunk::Mask mask; /* REM */ 
		virtual ::String setType( ::String value);
		Dynamic setType_dyn();

		virtual ::String getType( );
		Dynamic getType_dyn();

		::String type; /* REM */ 
		virtual int setLayer( int value);
		Dynamic setLayer_dyn();

		virtual int getLayer( );
		Dynamic getLayer_dyn();

		int layer; /* REM */ 
		virtual Float getBottom( );
		Dynamic getBottom_dyn();

		Float bottom; /* REM */ 
		virtual Float getTop( );
		Dynamic getTop_dyn();

		Float top; /* REM */ 
		virtual Float getRight( );
		Dynamic getRight_dyn();

		Float right; /* REM */ 
		virtual Float getLeft( );
		Dynamic getLeft_dyn();

		Float left; /* REM */ 
		virtual Float getCenterY( );
		Dynamic getCenterY_dyn();

		Float centerY; /* REM */ 
		virtual Float getCenterX( );
		Dynamic getCenterX_dyn();

		Float centerX; /* REM */ 
		virtual Float getHalfHeight( );
		Dynamic getHalfHeight_dyn();

		Float halfHeight; /* REM */ 
		virtual Float getHalfWidth( );
		Dynamic getHalfWidth_dyn();

		Float halfWidth; /* REM */ 
		virtual ::com::haxepunk::World getWorld( );
		Dynamic getWorld_dyn();

		::com::haxepunk::World world; /* REM */ 
		virtual bool getOnCamera( );
		Dynamic getOnCamera_dyn();

		bool onCamera; /* REM */ 
		virtual Void collideTypesInto( Array< ::String > types,Float x,Float y,Dynamic array);
		Dynamic collideTypesInto_dyn();

		virtual Void collideInto( ::String type,Float x,Float y,Dynamic array);
		Dynamic collideInto_dyn();

		virtual bool collidePoint( Float x,Float y,Float pX,Float pY);
		Dynamic collidePoint_dyn();

		virtual bool collideRect( Float x,Float y,Float rX,Float rY,Float rWidth,Float rHeight);
		Dynamic collideRect_dyn();

		virtual Dynamic collideWith( Dynamic e,Float x,Float y);
		Dynamic collideWith_dyn();

		virtual ::com::haxepunk::Entity collideTypes( Dynamic types,Float x,Float y);
		Dynamic collideTypes_dyn();

		virtual ::com::haxepunk::Entity collide( ::String type,Float x,Float y);
		Dynamic collide_dyn();

		virtual Void render( );
		Dynamic render_dyn();

		virtual Void update( );

		virtual Void removed( );
		Dynamic removed_dyn();

		virtual Void added( );
		Dynamic added_dyn();

		::neash::display::BitmapData renderTarget; /* REM */ 
		int originY; /* REM */ 
		int originX; /* REM */ 
		int height; /* REM */ 
		int width; /* REM */ 
		Float y; /* REM */ 
		Float x; /* REM */ 
		bool collidable; /* REM */ 
		bool visible; /* REM */ 
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Entity */ 
