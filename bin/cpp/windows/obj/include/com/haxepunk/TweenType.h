#ifndef INCLUDED_com_haxepunk_TweenType
#define INCLUDED_com_haxepunk_TweenType

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,TweenType)
namespace com{
namespace haxepunk{


class TweenType_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef TweenType_obj OBJ_;

	public:
		TweenType_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_CSTRING("com.haxepunk.TweenType"); }
		::String __ToString() const { return HX_CSTRING("TweenType.") + tag; }

		static ::com::haxepunk::TweenType Looping;
		static inline ::com::haxepunk::TweenType Looping_dyn() { return Looping; }
		static ::com::haxepunk::TweenType OneShot;
		static inline ::com::haxepunk::TweenType OneShot_dyn() { return OneShot; }
		static ::com::haxepunk::TweenType Persist;
		static inline ::com::haxepunk::TweenType Persist_dyn() { return Persist; }
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_TweenType */ 
