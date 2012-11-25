#ifndef INCLUDED_com_haxepunk_Mask
#define INCLUDED_com_haxepunk_Mask

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,masks,Masklist)
HX_DECLARE_CLASS3(com,haxepunk,math,Projection)
HX_DECLARE_CLASS3(com,haxepunk,math,Vector)
HX_DECLARE_CLASS2(neash,display,Graphics)
HX_DECLARE_CLASS2(neash,geom,Point)
namespace com{
namespace haxepunk{


class Mask_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Mask_obj OBJ_;
		Mask_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< Mask_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Mask_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Mask"); }

		::Hash _check; /* REM */ 
		::String _class; /* REM */ 
		virtual Void project( ::com::haxepunk::math::Vector axis,::com::haxepunk::math::Projection projection);
		Dynamic project_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		virtual Void debugDraw( ::neash::display::Graphics graphics,Float scaleX,Float scaleY);
		Dynamic debugDraw_dyn();

		virtual Void assignTo( ::com::haxepunk::Entity parent);
		Dynamic assignTo_dyn();

		virtual bool collideMasklist( ::com::haxepunk::masks::Masklist other);
		Dynamic collideMasklist_dyn();

		virtual bool collideMask( ::com::haxepunk::Mask other);
		Dynamic collideMask_dyn();

		virtual bool collide( ::com::haxepunk::Mask mask);
		Dynamic collide_dyn();

		::com::haxepunk::masks::Masklist list; /* REM */ 
		::com::haxepunk::Entity parent; /* REM */ 
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Mask */ 
