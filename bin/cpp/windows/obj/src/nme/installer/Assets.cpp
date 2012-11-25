#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_media_Sound
#include <neash/media/Sound.h>
#endif
#ifndef INCLUDED_neash_media_SoundLoaderContext
#include <neash/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_neash_net_URLRequest
#include <neash/net/URLRequest.h>
#endif
#ifndef INCLUDED_neash_text_Font
#include <neash/text/Font.h>
#endif
#ifndef INCLUDED_neash_utils_ByteArray
#include <neash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_neash_utils_IDataInput
#include <neash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_neash_utils_IMemoryRange
#include <neash/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
namespace nme{
namespace installer{

Void Assets_obj::__construct()
{
	return null();
}

Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::Hash Assets_obj::cachedBitmapData;

bool Assets_obj::initialized;

::Hash Assets_obj::resourceNames;

::Hash Assets_obj::resourceTypes;

Void Assets_obj::initialize( ){
{
		HX_STACK_PUSH("Assets::initialize","nme/installer/Assets.hx",26);
		HX_STACK_LINE(26)
		if ((!(::nme::installer::Assets_obj::initialized))){
			HX_STACK_LINE(30)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("gfx/debug/console_debug.png"),HX_CSTRING("gfx/debug/console_debug.png"));
			HX_STACK_LINE(31)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("gfx/debug/console_debug.png"),HX_CSTRING("image"));
			HX_STACK_LINE(32)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("gfx/debug/console_logo.png"),HX_CSTRING("gfx/debug/console_logo.png"));
			HX_STACK_LINE(33)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("gfx/debug/console_logo.png"),HX_CSTRING("image"));
			HX_STACK_LINE(34)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("gfx/debug/console_output.png"),HX_CSTRING("gfx/debug/console_output.png"));
			HX_STACK_LINE(35)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("gfx/debug/console_output.png"),HX_CSTRING("image"));
			HX_STACK_LINE(36)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("gfx/debug/console_pause.png"),HX_CSTRING("gfx/debug/console_pause.png"));
			HX_STACK_LINE(37)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("gfx/debug/console_pause.png"),HX_CSTRING("image"));
			HX_STACK_LINE(38)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("gfx/debug/console_play.png"),HX_CSTRING("gfx/debug/console_play.png"));
			HX_STACK_LINE(39)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("gfx/debug/console_play.png"),HX_CSTRING("image"));
			HX_STACK_LINE(40)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("gfx/debug/console_step.png"),HX_CSTRING("gfx/debug/console_step.png"));
			HX_STACK_LINE(41)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("gfx/debug/console_step.png"),HX_CSTRING("image"));
			HX_STACK_LINE(42)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("gfx/needsmoarfeetz.png"),HX_CSTRING("gfx/needsmoarfeetz.png"));
			HX_STACK_LINE(43)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("gfx/needsmoarfeetz.png"),HX_CSTRING("image"));
			HX_STACK_LINE(44)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("gfx/preloader/haxepunk.png"),HX_CSTRING("gfx/preloader/haxepunk.png"));
			HX_STACK_LINE(45)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("gfx/preloader/haxepunk.png"),HX_CSTRING("image"));
			HX_STACK_LINE(46)
			::nme::installer::Assets_obj::resourceNames->set(HX_CSTRING("font/04B_03__.ttf"),HX_CSTRING("font/04B_03__.ttf"));
			HX_STACK_LINE(47)
			::nme::installer::Assets_obj::resourceTypes->set(HX_CSTRING("font/04B_03__.ttf"),HX_CSTRING("font"));
			HX_STACK_LINE(49)
			::nme::installer::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

::neash::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getBitmapData","nme/installer/Assets.hx",56);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(58)
		::nme::installer::Assets_obj::initialize();
		HX_STACK_LINE(60)
		if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("image")))))){
			HX_STACK_LINE(60)
			if (((bool(useCache) && bool(::nme::installer::Assets_obj::cachedBitmapData->exists(id))))){
				HX_STACK_LINE(62)
				return ::nme::installer::Assets_obj::cachedBitmapData->get(id);
			}
			else{
				HX_STACK_LINE(68)
				::neash::display::BitmapData data = ::neash::display::BitmapData_obj::load(::nme::installer::Assets_obj::resourceNames->get(id),null());		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(70)
				if ((useCache)){
					HX_STACK_LINE(70)
					::nme::installer::Assets_obj::cachedBitmapData->set(id,data);
				}
				HX_STACK_LINE(76)
				return data;
			}
		}
		else{
			HX_STACK_LINE(82)
			::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),82,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBitmapData")));
			HX_STACK_LINE(84)
			return null();
		}
		HX_STACK_LINE(60)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::neash::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_PUSH("Assets::getBytes","nme/installer/Assets.hx",91);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(93)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(95)
	if ((::nme::installer::Assets_obj::resourceNames->exists(id))){
		HX_STACK_LINE(95)
		return ::neash::utils::ByteArray_obj::readFile(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(101)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),101,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getBytes")));
		HX_STACK_LINE(103)
		return null();
	}
	HX_STACK_LINE(95)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::neash::text::Font Assets_obj::getFont( ::String id){
	HX_STACK_PUSH("Assets::getFont","nme/installer/Assets.hx",110);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(112)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(114)
	if (((bool(::nme::installer::Assets_obj::resourceTypes->exists(id)) && bool((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("font")))))){
		HX_STACK_LINE(114)
		return ::neash::text::Font_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id));
	}
	else{
		HX_STACK_LINE(120)
		::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),120,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getFont")));
		HX_STACK_LINE(122)
		return null();
	}
	HX_STACK_LINE(114)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

::String Assets_obj::getResourceName( ::String id){
	HX_STACK_PUSH("Assets::getResourceName","nme/installer/Assets.hx",129);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(131)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(133)
	return ::nme::installer::Assets_obj::resourceNames->get(id);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getResourceName,return )

::neash::media::Sound Assets_obj::getSound( ::String id){
	HX_STACK_PUSH("Assets::getSound","nme/installer/Assets.hx",138);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(140)
	::nme::installer::Assets_obj::initialize();
	HX_STACK_LINE(142)
	if ((::nme::installer::Assets_obj::resourceTypes->exists(id))){
		HX_STACK_LINE(142)
		if (((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("sound")))){
			HX_STACK_LINE(144)
			return ::neash::media::Sound_obj::__new(::neash::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),false);
		}
		else{
			HX_STACK_LINE(148)
			if (((::nme::installer::Assets_obj::resourceTypes->get(id) == HX_CSTRING("music")))){
				HX_STACK_LINE(148)
				return ::neash::media::Sound_obj::__new(::neash::net::URLRequest_obj::__new(::nme::installer::Assets_obj::resourceNames->get(id)),null(),true);
			}
		}
	}
	HX_STACK_LINE(156)
	::haxe::Log_obj::trace(((HX_CSTRING("[nme.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),156,HX_CSTRING("nme.installer.Assets"),HX_CSTRING("getSound")));
	HX_STACK_LINE(158)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_PUSH("Assets::getText","nme/installer/Assets.hx",163);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(165)
	::neash::utils::ByteArray bytes = ::nme::installer::Assets_obj::getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(167)
	if (((bytes == null()))){
		HX_STACK_LINE(167)
		return null();
	}
	else{
		HX_STACK_LINE(171)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(167)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resourceNames") ) { return resourceNames; }
		if (HX_FIELD_EQ(inName,"resourceTypes") ) { return resourceTypes; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getResourceName") ) { return getResourceName_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { return cachedBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"resourceNames") ) { resourceNames=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resourceTypes") ) { resourceTypes=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { cachedBitmapData=inValue.Cast< ::Hash >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cachedBitmapData"),
	HX_CSTRING("initialized"),
	HX_CSTRING("resourceNames"),
	HX_CSTRING("resourceTypes"),
	HX_CSTRING("initialize"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getResourceName"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(Assets_obj::resourceNames,"resourceNames");
	HX_MARK_MEMBER_NAME(Assets_obj::resourceTypes,"resourceTypes");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(Assets_obj::resourceNames,"resourceNames");
	HX_VISIT_MEMBER_NAME(Assets_obj::resourceTypes,"resourceTypes");
};

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.installer.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Assets_obj::__boot()
{
	cachedBitmapData= ::Hash_obj::__new();
	initialized= false;
	resourceNames= ::Hash_obj::__new();
	resourceTypes= ::Hash_obj::__new();
}

} // end namespace nme
} // end namespace installer
