#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#define INCLUDED_com_haxepunk_masks_Hitbox

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/Mask.h>
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
namespace com{
namespace haxepunk{
namespace masks{


class Hitbox_obj : public ::com::haxepunk::Mask_obj{
	public:
		typedef ::com::haxepunk::Mask_obj super;
		typedef Hitbox_obj OBJ_;
		Hitbox_obj();
		Void __construct(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y);

	public:
		static hx::ObjectPtr< Hitbox_obj > __new(hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_x,hx::Null< int >  __o_y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Hitbox_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Hitbox"); }

		int _y; /* REM */ 
		int _x; /* REM */ 
		int _height; /* REM */ 
		int _width; /* REM */ 
		virtual Void update( );

		virtual int setHeight( int value);
		Dynamic setHeight_dyn();

		virtual int getHeight( );
		Dynamic getHeight_dyn();

		int height; /* REM */ 
		virtual int setWidth( int value);
		Dynamic setWidth_dyn();

		virtual int getWidth( );
		Dynamic getWidth_dyn();

		int width; /* REM */ 
		virtual int setY( int value);
		Dynamic setY_dyn();

		virtual int getY( );
		Dynamic getY_dyn();

		int y; /* REM */ 
		virtual int setX( int value);
		Dynamic setX_dyn();

		virtual int getX( );
		Dynamic getX_dyn();

		int x; /* REM */ 
		virtual bool collideHitbox( ::com::haxepunk::masks::Hitbox other);
		Dynamic collideHitbox_dyn();

		virtual bool collideMask( ::com::haxepunk::Mask other);

};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_Hitbox */ 
