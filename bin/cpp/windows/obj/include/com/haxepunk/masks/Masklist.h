#ifndef INCLUDED_com_haxepunk_masks_Masklist
#define INCLUDED_com_haxepunk_masks_Masklist

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/masks/Hitbox.h>
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,Mask)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS3(com,haxepunk,masks,Hitbox)
HX_DECLARE_CLASS3(com,haxepunk,masks,Masklist)
namespace com{
namespace haxepunk{
namespace masks{


class Masklist_obj : public ::com::haxepunk::masks::Hitbox_obj{
	public:
		typedef ::com::haxepunk::masks::Hitbox_obj super;
		typedef Masklist_obj OBJ_;
		Masklist_obj();
		Void __construct(Dynamic masks);

	public:
		static hx::ObjectPtr< Masklist_obj > __new(Dynamic masks);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Masklist_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Masklist"); }

		int _count; /* REM */ 
		Array< ::com::haxepunk::Mask > _temp; /* REM */ 
		Array< ::com::haxepunk::Mask > _masks; /* REM */ 
		virtual int getCount( );
		Dynamic getCount_dyn();

		int count; /* REM */ 
		virtual Void update( );

		virtual Void assignTo( ::com::haxepunk::Entity parent);

		virtual ::com::haxepunk::Mask getMask( hx::Null< int >  index);
		Dynamic getMask_dyn();

		virtual Void removeAll( );
		Dynamic removeAll_dyn();

		virtual Void removeAt( hx::Null< int >  index);
		Dynamic removeAt_dyn();

		virtual ::com::haxepunk::Mask remove( ::com::haxepunk::Mask mask);
		Dynamic remove_dyn();

		virtual ::com::haxepunk::Mask add( ::com::haxepunk::Mask mask);
		Dynamic add_dyn();

		virtual bool collideMasklist( ::com::haxepunk::masks::Masklist other);

		virtual bool collide( ::com::haxepunk::Mask mask);

};

} // end namespace com
} // end namespace haxepunk
} // end namespace masks

#endif /* INCLUDED_com_haxepunk_masks_Masklist */ 
