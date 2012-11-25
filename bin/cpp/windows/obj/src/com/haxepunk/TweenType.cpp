#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_TweenType
#include <com/haxepunk/TweenType.h>
#endif
namespace com{
namespace haxepunk{

::com::haxepunk::TweenType TweenType_obj::Looping;

::com::haxepunk::TweenType TweenType_obj::OneShot;

::com::haxepunk::TweenType TweenType_obj::Persist;

HX_DEFINE_CREATE_ENUM(TweenType_obj)

int TweenType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("Looping")) return 1;
	if (inName==HX_CSTRING("OneShot")) return 2;
	if (inName==HX_CSTRING("Persist")) return 0;
	return super::__FindIndex(inName);
}

int TweenType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("Looping")) return 0;
	if (inName==HX_CSTRING("OneShot")) return 0;
	if (inName==HX_CSTRING("Persist")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic TweenType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("Looping")) return Looping;
	if (inName==HX_CSTRING("OneShot")) return OneShot;
	if (inName==HX_CSTRING("Persist")) return Persist;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("Persist"),
	HX_CSTRING("Looping"),
	HX_CSTRING("OneShot"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TweenType_obj::Looping,"Looping");
	HX_MARK_MEMBER_NAME(TweenType_obj::OneShot,"OneShot");
	HX_MARK_MEMBER_NAME(TweenType_obj::Persist,"Persist");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TweenType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TweenType_obj::Looping,"Looping");
	HX_VISIT_MEMBER_NAME(TweenType_obj::OneShot,"OneShot");
	HX_VISIT_MEMBER_NAME(TweenType_obj::Persist,"Persist");
};

static ::String sMemberFields[] = { ::String(null()) };
Class TweenType_obj::__mClass;

Dynamic __Create_TweenType_obj() { return new TweenType_obj; }

void TweenType_obj::__register()
{

Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.TweenType"), hx::TCanCast< TweenType_obj >,sStaticFields,sMemberFields,
	&__Create_TweenType_obj, &__Create,
	&super::__SGetClass(), &CreateTweenType_obj, sMarkStatics, sVisitStatic);
}

void TweenType_obj::__boot()
{
Static(Looping) = hx::CreateEnum< TweenType_obj >(HX_CSTRING("Looping"),1);
Static(OneShot) = hx::CreateEnum< TweenType_obj >(HX_CSTRING("OneShot"),2);
Static(Persist) = hx::CreateEnum< TweenType_obj >(HX_CSTRING("Persist"),0);
}


} // end namespace com
} // end namespace haxepunk
