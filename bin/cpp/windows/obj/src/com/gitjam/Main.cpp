#include <hxcpp.h>

#ifndef INCLUDED_com_gitjam_Main
#include <com/gitjam/Main.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
namespace com{
namespace gitjam{

Void Main_obj::__construct()
{
HX_STACK_PUSH("Main::new","com/gitjam/Main.hx",16);
{
	HX_STACK_LINE(16)
	super::__construct((int)640,(int)480,(int)30,false);
}
;
	return null();
}

Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > result = new Main_obj();
	result->__construct();
	return result;}

Void Main_obj::init( ){
{
		HX_STACK_PUSH("Main::init","com/gitjam/Main.hx",22);
		HX_STACK_THIS(this);
		struct _Function_1_1{
			inline static ::com::haxepunk::debug::Console Block( ){
				HX_STACK_PUSH("*::closure","com/gitjam/Main.hx",28);
				{
					HX_STACK_LINE(28)
					if (((::com::haxepunk::HXP_obj::_console == null()))){
						HX_STACK_LINE(28)
						::com::haxepunk::HXP_obj::_console = ::com::haxepunk::debug::Console_obj::__new();
					}
					HX_STACK_LINE(28)
					return ::com::haxepunk::HXP_obj::_console;
				}
				return null();
			}
		};
		HX_STACK_LINE(27)
		(_Function_1_1::Block())->enable();
		HX_STACK_LINE(31)
		::com::haxepunk::HXP_obj::screen->setColor((int)3355443);
		HX_STACK_LINE(32)
		::com::haxepunk::HXP_obj::screen->setScale((int)1);
	}
return null();
}


int Main_obj::kScreenWidth;

int Main_obj::kScreenHeight;

int Main_obj::kFrameRate;

int Main_obj::kClearColor;

::String Main_obj::kProjectName;

Void Main_obj::main( ){
{
		HX_STACK_PUSH("Main::main","com/gitjam/Main.hx",37);
		HX_STACK_LINE(37)
		::com::gitjam::Main_obj::__new();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Main_obj,main,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { return main_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"kFrameRate") ) { return kFrameRate; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"kClearColor") ) { return kClearColor; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"kScreenWidth") ) { return kScreenWidth; }
		if (HX_FIELD_EQ(inName,"kProjectName") ) { return kProjectName; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kScreenHeight") ) { return kScreenHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"kFrameRate") ) { kFrameRate=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"kClearColor") ) { kClearColor=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"kScreenWidth") ) { kScreenWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kProjectName") ) { kProjectName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"kScreenHeight") ) { kScreenHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("kScreenWidth"),
	HX_CSTRING("kScreenHeight"),
	HX_CSTRING("kFrameRate"),
	HX_CSTRING("kClearColor"),
	HX_CSTRING("kProjectName"),
	HX_CSTRING("main"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Main_obj::kScreenWidth,"kScreenWidth");
	HX_MARK_MEMBER_NAME(Main_obj::kScreenHeight,"kScreenHeight");
	HX_MARK_MEMBER_NAME(Main_obj::kFrameRate,"kFrameRate");
	HX_MARK_MEMBER_NAME(Main_obj::kClearColor,"kClearColor");
	HX_MARK_MEMBER_NAME(Main_obj::kProjectName,"kProjectName");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Main_obj::kScreenWidth,"kScreenWidth");
	HX_VISIT_MEMBER_NAME(Main_obj::kScreenHeight,"kScreenHeight");
	HX_VISIT_MEMBER_NAME(Main_obj::kFrameRate,"kFrameRate");
	HX_VISIT_MEMBER_NAME(Main_obj::kClearColor,"kClearColor");
	HX_VISIT_MEMBER_NAME(Main_obj::kProjectName,"kProjectName");
};

Class Main_obj::__mClass;

void Main_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.gitjam.Main"), hx::TCanCast< Main_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Main_obj::__boot()
{
	kScreenWidth= (int)640;
	kScreenHeight= (int)480;
	kFrameRate= (int)30;
	kClearColor= (int)3355443;
	kProjectName= HX_CSTRING("HaxePunk");
}

} // end namespace com
} // end namespace gitjam
