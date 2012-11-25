#ifndef INCLUDED_com_haxepunk_masks_Polygon
#define INCLUDED_com_haxepunk_masks_Polygon

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Mask.h>
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS3(com,haxepunk,masks,Circle)
HX_DECLARE_CLASS3(com,haxepunk,masks,Grid)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,masks,Polygon)
HX_DECLARE_CLASS3(com,haxepunk,math,Projection)
HX_DECLARE_CLASS3(com,haxepunk,math,Vector)
HX_DECLARE_CLASS2(neash,display,Graphics)
HX_DECLARE_CLASS2(neash,geom,Point)
namespace com{
namespace haxepunk{
namespace masks{


class Polygon_obj : public ::com::haxepunk::Mask_obj{
	public:
		typedef ::com::haxepunk::Mask_obj super;
		typedef Polygon_obj OBJ_;
		Polygon_obj();
		Void __construct(Array< ::neash::geom::Point > points,::neash::geom::Point origin);

	public:
		static hx::ObjectPtr< Polygon_obj > __new(Array< ::neash::geom::Point > points,::neash::geom::Point origin);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Polygon_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Polygon"); }

		Array< ::com::haxepunk::math::Vector > _axes; /* REM */ 
		Array< ::neash::geom::Point > _points; /* REM */ 
		Float _angle; /* REM */ 
		virtual Void updateAxes( );
		Dynamic updateAxes_dyn();

		virtual Void update( );

		virtual Array< ::neash::geom::Point > setPoints( Array< ::neash::geom::Point > value);
		Dynamic setPoints_dyn();

		virtual Array< ::neash::geom::Point > getPoints( );
		Dynamic getPoints_dyn();

		Array< ::neash::geom::Point > points; /* REM */ 
		int height; /* REM */ 
		int width; /* REM */ 
		virtual Float setAngle( Float value);
		Dynamic setAngle_dyn();

		virtual Float getAngle( );
		Dynamic getAngle_dyn();

		Float angle; /* REM */ 
		virtual Void debugDraw( ::neash::display::Graphics graphics,Float scaleX,Float scaleY);

		virtual Void rotate( Float angle);
		Dynamic rotate_dyn();

		virtual Void project( ::com::haxepunk::math::Vector axis,::com::haxepunk::math::Projection projection);

		virtual bool collidePolygon( ::com::haxepunk::masks::Polygon other);
		Dynamic collidePolygon_dyn();

		virtual bool collideMask( ::com::haxepunk::Mask other);

		virtual bool collideHitbox( ::com::haxepunk::masks::Hitbox hitbox);
		Dynamic collideHitbox_dyn();

		virtual bool collideCircle( ::com::haxepunk::masks::Circle circle);
		Dynamic collideCircle_dyn();

		virtual bool collideGrid( ::com::haxepunk::masks::Grid grid);
		Dynamic collideGrid_dyn();

		virtual Void removeDuplicateAxes( );
		Dynamic removeDuplicateAxes_dyn();

		virtual Void generateAxes( );
		Dynamic generateAxes_dyn();

		::neash::geom::Point origin; /* REM */ 
		static ::com::haxepunk::masks::Polygon createPolygon( hx::Null< int >  sides,hx::Null< Float >  radius,hx::Null< Float >  angle);
		static Dynamic createPolygon_dyn();

		static ::com::haxepunk::masks::Polygon createFromArray( Array< Float > points);
		static Dynamic createFromArray_dyn();

		static ::com::haxepunk::math::Vector _axis; /* REM */ 
		static ::com::haxepunk::math::Projection firstProj; /* REM */ 
		static ::com::haxepunk::math::Projection secondProj; /* REM */ 
		static ::com::haxepunk::math::Vector vertical; /* REM */ 
		static ::com::haxepunk::math::Vector horizontal; /* REM */ 
};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_Polygon */ 
