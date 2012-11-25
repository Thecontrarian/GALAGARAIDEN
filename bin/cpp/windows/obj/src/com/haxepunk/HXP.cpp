#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
#ifndef INCLUDED_com_haxepunk_TweenType
#include <com/haxepunk/TweenType.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_World
#include <com/haxepunk/World.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_tweens_misc_MultiVarTween
#include <com/haxepunk/tweens/misc/MultiVarTween.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
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
#ifndef INCLUDED_neash_display_Stage
#include <neash/display/Stage.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_geom_Matrix
#include <neash/geom/Matrix.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_neash_media_SoundTransform
#include <neash/media/SoundTransform.h>
#endif
#ifndef INCLUDED_nme_installer_Assets
#include <nme/installer/Assets.h>
#endif
namespace com{
namespace haxepunk{

Void HXP_obj::__construct()
{
	return null();
}

HXP_obj::~HXP_obj() { }

Dynamic HXP_obj::__CreateEmpty() { return  new HXP_obj; }
hx::ObjectPtr< HXP_obj > HXP_obj::__new()
{  hx::ObjectPtr< HXP_obj > result = new HXP_obj();
	result->__construct();
	return result;}

Dynamic HXP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HXP_obj > result = new HXP_obj();
	result->__construct();
	return result;}

::String HXP_obj::VERSION;

int HXP_obj::BASELAYER;

Float HXP_obj::NUMBER_MAX_VALUE;

int HXP_obj::blackColor;

int HXP_obj::width;

int HXP_obj::height;

int HXP_obj::windowWidth;

int HXP_obj::windowHeight;

bool HXP_obj::fixed;

Float HXP_obj::frameRate;

Float HXP_obj::assignedFrameRate;

Float HXP_obj::elapsed;

Float HXP_obj::rate;

::com::haxepunk::Screen HXP_obj::screen;

::neash::display::BitmapData HXP_obj::buffer;

::neash::geom::Rectangle HXP_obj::bounds;

::String HXP_obj::defaultFont;

::neash::geom::Point HXP_obj::camera;

::com::haxepunk::Tweener HXP_obj::tweener;

bool HXP_obj::focused;

Float HXP_obj::halfWidth;

Float HXP_obj::halfHeight;

::com::haxepunk::World HXP_obj::world;

::com::haxepunk::World HXP_obj::getWorld( ){
	HX_STACK_PUSH("HXP::getWorld","com/haxepunk/HXP.hx",158);
	HX_STACK_LINE(158)
	return ::com::haxepunk::HXP_obj::_world;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,getWorld,return )

::com::haxepunk::World HXP_obj::setWorld( ::com::haxepunk::World value){
	HX_STACK_PUSH("HXP::setWorld","com/haxepunk/HXP.hx",160);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(161)
	if (((::com::haxepunk::HXP_obj::_world == value))){
		HX_STACK_LINE(161)
		return value;
	}
	HX_STACK_LINE(162)
	::com::haxepunk::HXP_obj::_goto = value;
	HX_STACK_LINE(163)
	return ::com::haxepunk::HXP_obj::_world;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,setWorld,return )

Void HXP_obj::swapWorld( ){
{
		HX_STACK_PUSH("HXP::swapWorld","com/haxepunk/HXP.hx",167);
		HX_STACK_LINE(168)
		::com::haxepunk::HXP_obj::_world = ::com::haxepunk::HXP_obj::_goto;
		HX_STACK_LINE(169)
		::com::haxepunk::HXP_obj::_goto = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,swapWorld,(void))

Void HXP_obj::resize( int width,int height){
{
		HX_STACK_PUSH("HXP::resize","com/haxepunk/HXP.hx",178);
		HX_STACK_ARG(width,"width");
		HX_STACK_ARG(height,"height");
		HX_STACK_LINE(179)
		::com::haxepunk::HXP_obj::windowWidth = width;
		HX_STACK_LINE(180)
		::com::haxepunk::HXP_obj::windowHeight = height;
		HX_STACK_LINE(182)
		width = ::Std_obj::_int((Float((Float(width) / Float(::com::haxepunk::HXP_obj::screen->scale))) / Float(::com::haxepunk::HXP_obj::screen->scaleX)));
		HX_STACK_LINE(183)
		height = ::Std_obj::_int((Float((Float(height) / Float(::com::haxepunk::HXP_obj::screen->scale))) / Float(::com::haxepunk::HXP_obj::screen->scaleY)));
		HX_STACK_LINE(184)
		::com::haxepunk::HXP_obj::width = width;
		HX_STACK_LINE(185)
		::com::haxepunk::HXP_obj::height = height;
		HX_STACK_LINE(186)
		::com::haxepunk::HXP_obj::halfWidth = (Float(width) / Float((int)2));
		HX_STACK_LINE(187)
		::com::haxepunk::HXP_obj::halfHeight = (Float(height) / Float((int)2));
		HX_STACK_LINE(188)
		::com::haxepunk::HXP_obj::bounds->width = width;
		HX_STACK_LINE(189)
		::com::haxepunk::HXP_obj::bounds->height = height;
		HX_STACK_LINE(190)
		::com::haxepunk::HXP_obj::screen->resize();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,resize,(void))

Void HXP_obj::clear( Dynamic array){
{
		HX_STACK_PUSH("HXP::clear","com/haxepunk/HXP.hx",198);
		HX_STACK_ARG(array,"array");
		HX_STACK_LINE(198)
		array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,clear,(void))

Void HXP_obj::setCamera( hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_PUSH("HXP::setCamera","com/haxepunk/HXP.hx",212);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(213)
		::com::haxepunk::HXP_obj::camera->x = x;
		HX_STACK_LINE(214)
		::com::haxepunk::HXP_obj::camera->y = y;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,setCamera,(void))

Void HXP_obj::resetCamera( ){
{
		HX_STACK_PUSH("HXP::resetCamera","com/haxepunk/HXP.hx",221);
		HX_STACK_LINE(221)
		::com::haxepunk::HXP_obj::camera->x = ::com::haxepunk::HXP_obj::camera->y = (int)0;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,resetCamera,(void))

Float HXP_obj::volume;

Float HXP_obj::getVolume( ){
	HX_STACK_PUSH("HXP::getVolume","com/haxepunk/HXP.hx",229);
	HX_STACK_LINE(229)
	return ::com::haxepunk::HXP_obj::_volume;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,getVolume,return )

Float HXP_obj::setVolume( Float value){
	HX_STACK_PUSH("HXP::setVolume","com/haxepunk/HXP.hx",231);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(232)
	if (((value < (int)0))){
		HX_STACK_LINE(232)
		value = (int)0;
	}
	HX_STACK_LINE(233)
	if (((::com::haxepunk::HXP_obj::_volume == value))){
		HX_STACK_LINE(233)
		return value;
	}
	HX_STACK_LINE(234)
	::com::haxepunk::HXP_obj::_soundTransform->volume = ::com::haxepunk::HXP_obj::_volume = value;
	HX_STACK_LINE(238)
	return ::com::haxepunk::HXP_obj::_volume;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,setVolume,return )

Float HXP_obj::pan;

Float HXP_obj::getPan( ){
	HX_STACK_PUSH("HXP::getPan","com/haxepunk/HXP.hx",245);
	HX_STACK_LINE(245)
	return ::com::haxepunk::HXP_obj::_pan;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,getPan,return )

Float HXP_obj::setPan( Float value){
	HX_STACK_PUSH("HXP::setPan","com/haxepunk/HXP.hx",247);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(248)
	if (((value < (int)-1))){
		HX_STACK_LINE(248)
		value = (int)-1;
	}
	HX_STACK_LINE(249)
	if (((value > (int)1))){
		HX_STACK_LINE(249)
		value = (int)1;
	}
	HX_STACK_LINE(250)
	if (((::com::haxepunk::HXP_obj::_pan == value))){
		HX_STACK_LINE(250)
		return value;
	}
	HX_STACK_LINE(251)
	::com::haxepunk::HXP_obj::_soundTransform->pan = ::com::haxepunk::HXP_obj::_pan = value;
	HX_STACK_LINE(255)
	return ::com::haxepunk::HXP_obj::_pan;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,setPan,return )

Dynamic HXP_obj::choose( Dynamic objs){
	HX_STACK_PUSH("HXP::choose","com/haxepunk/HXP.hx",264);
	HX_STACK_ARG(objs,"objs");
	struct _Function_1_1{
		inline static int Block( Dynamic &objs){
			HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",265);
			{
				HX_STACK_LINE(265)
				::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),2147483647.0));
				HX_STACK_LINE(265)
				return ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float(2147483647.0)) * objs->__Field(HX_CSTRING("length"),true)));
			}
			return null();
		}
	};
	HX_STACK_LINE(264)
	return objs->__GetItem(_Function_1_1::Block(objs));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,choose,return )

int HXP_obj::sign( Float value){
	HX_STACK_PUSH("HXP::sign","com/haxepunk/HXP.hx",274);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(274)
	return (  (((value < (int)0))) ? int((int)-1) : int((  (((value > (int)0))) ? int((int)1) : int((int)0) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,sign,return )

Float HXP_obj::approach( Float value,Float target,Float amount){
	HX_STACK_PUSH("HXP::approach","com/haxepunk/HXP.hx",286);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(target,"target");
	HX_STACK_ARG(amount,"amount");
	struct _Function_1_1{
		inline static Float Block( Float &target,Float &value,Float &amount){
			HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",287);
			{
				HX_STACK_LINE(287)
				return (  (((target < (value + amount)))) ? Float(target) : Float((value + amount)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(286)
	return (  (((value < target))) ? Float(_Function_1_1::Block(target,value,amount)) : Float((  (((target > (value - amount)))) ? Float(target) : Float((value - amount)) )) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,approach,return )

Float HXP_obj::lerp( Float a,Float b,hx::Null< Float >  __o_t){
Float t = __o_t.Default(1);
	HX_STACK_PUSH("HXP::lerp","com/haxepunk/HXP.hx",298);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_ARG(t,"t");
{
		HX_STACK_LINE(298)
		return (a + (((b - a)) * t));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,lerp,return )

int HXP_obj::colorLerp( int fromColor,int toColor,hx::Null< Float >  __o_t){
Float t = __o_t.Default(1);
	HX_STACK_PUSH("HXP::colorLerp","com/haxepunk/HXP.hx",310);
	HX_STACK_ARG(fromColor,"fromColor");
	HX_STACK_ARG(toColor,"toColor");
	HX_STACK_ARG(t,"t");
{
		HX_STACK_LINE(311)
		if (((t <= (int)0))){
			HX_STACK_LINE(311)
			return fromColor;
		}
		HX_STACK_LINE(312)
		if (((t >= (int)1))){
			HX_STACK_LINE(312)
			return toColor;
		}
		HX_STACK_LINE(313)
		int a = (int((int(fromColor) >> int((int)24))) & int((int)255));		HX_STACK_VAR(a,"a");
		int r = (int((int(fromColor) >> int((int)16))) & int((int)255));		HX_STACK_VAR(r,"r");
		int g = (int((int(fromColor) >> int((int)8))) & int((int)255));		HX_STACK_VAR(g,"g");
		int b = (int(fromColor) & int((int)255));		HX_STACK_VAR(b,"b");
		int dA = (((int((int(toColor) >> int((int)24))) & int((int)255))) - a);		HX_STACK_VAR(dA,"dA");
		int dR = (((int((int(toColor) >> int((int)16))) & int((int)255))) - r);		HX_STACK_VAR(dR,"dR");
		int dG = (((int((int(toColor) >> int((int)8))) & int((int)255))) - g);		HX_STACK_VAR(dG,"dG");
		int dB = (((int(toColor) & int((int)255))) - b);		HX_STACK_VAR(dB,"dB");
		HX_STACK_LINE(321)
		hx::AddEq(a,::Std_obj::_int((dA * t)));
		HX_STACK_LINE(322)
		hx::AddEq(r,::Std_obj::_int((dR * t)));
		HX_STACK_LINE(323)
		hx::AddEq(g,::Std_obj::_int((dG * t)));
		HX_STACK_LINE(324)
		hx::AddEq(b,::Std_obj::_int((dB * t)));
		HX_STACK_LINE(325)
		return (int((int((int((int(a) << int((int)24))) | int((int(r) << int((int)16))))) | int((int(g) << int((int)8))))) | int(b));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,colorLerp,return )

Void HXP_obj::stepTowards( Dynamic object,Float x,Float y,hx::Null< Float >  __o_distance){
Float distance = __o_distance.Default(1);
	HX_STACK_PUSH("HXP::stepTowards","com/haxepunk/HXP.hx",336);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(distance,"distance");
{
		HX_STACK_LINE(337)
		::com::haxepunk::HXP_obj::point->x = (x - object->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(338)
		::com::haxepunk::HXP_obj::point->y = (y - object->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(339)
		if (((::com::haxepunk::HXP_obj::point->nmeGetLength() <= distance))){
			HX_STACK_LINE(341)
			object->__FieldRef(HX_CSTRING("x")) = x;
			HX_STACK_LINE(342)
			object->__FieldRef(HX_CSTRING("y")) = y;
			HX_STACK_LINE(343)
			return null();
		}
		HX_STACK_LINE(345)
		::com::haxepunk::HXP_obj::point->normalize(distance);
		HX_STACK_LINE(346)
		hx::AddEq(object->__FieldRef(HX_CSTRING("x")),::com::haxepunk::HXP_obj::point->x);
		HX_STACK_LINE(347)
		hx::AddEq(object->__FieldRef(HX_CSTRING("y")),::com::haxepunk::HXP_obj::point->y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,stepTowards,(void))

Void HXP_obj::anchorTo( Dynamic object,Dynamic anchor,hx::Null< Float >  __o_distance){
Float distance = __o_distance.Default(0);
	HX_STACK_PUSH("HXP::anchorTo","com/haxepunk/HXP.hx",357);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(anchor,"anchor");
	HX_STACK_ARG(distance,"distance");
{
		HX_STACK_LINE(358)
		::com::haxepunk::HXP_obj::point->x = (object->__Field(HX_CSTRING("x"),true) - anchor->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(359)
		::com::haxepunk::HXP_obj::point->y = (object->__Field(HX_CSTRING("y"),true) - anchor->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(360)
		if (((::com::haxepunk::HXP_obj::point->nmeGetLength() > distance))){
			HX_STACK_LINE(360)
			::com::haxepunk::HXP_obj::point->normalize(distance);
		}
		HX_STACK_LINE(361)
		object->__FieldRef(HX_CSTRING("x")) = (anchor->__Field(HX_CSTRING("x"),true) + ::com::haxepunk::HXP_obj::point->x);
		HX_STACK_LINE(362)
		object->__FieldRef(HX_CSTRING("y")) = (anchor->__Field(HX_CSTRING("y"),true) + ::com::haxepunk::HXP_obj::point->y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,anchorTo,(void))

Float HXP_obj::angle( Float x1,Float y1,Float x2,Float y2){
	HX_STACK_PUSH("HXP::angle","com/haxepunk/HXP.hx",374);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_LINE(375)
	Float a = (::Math_obj::atan2((y2 - y1),(x2 - x1)) * ((Float((int)-180) / Float(::Math_obj::PI))));		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(376)
	return (  (((a < (int)0))) ? Float((a + (int)360)) : Float(a) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,angle,return )

Void HXP_obj::angleXY( Dynamic object,Float angle,hx::Null< Float >  __o_length,hx::Null< Float >  __o_x,hx::Null< Float >  __o_y){
Float length = __o_length.Default(1);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
	HX_STACK_PUSH("HXP::angleXY","com/haxepunk/HXP.hx",388);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(length,"length");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(389)
		hx::MultEq(angle,(Float(::Math_obj::PI) / Float((int)-180)));
		HX_STACK_LINE(390)
		object->__FieldRef(HX_CSTRING("x")) = ((::Math_obj::cos(angle) * length) + x);
		HX_STACK_LINE(391)
		object->__FieldRef(HX_CSTRING("y")) = ((::Math_obj::sin(angle) * length) + y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,angleXY,(void))

Void HXP_obj::rotateAround( Dynamic object,Dynamic anchor,hx::Null< Float >  __o_angle,hx::Null< bool >  __o_relative){
Float angle = __o_angle.Default(0);
bool relative = __o_relative.Default(true);
	HX_STACK_PUSH("HXP::rotateAround","com/haxepunk/HXP.hx",401);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(anchor,"anchor");
	HX_STACK_ARG(angle,"angle");
	HX_STACK_ARG(relative,"relative");
{
		HX_STACK_LINE(402)
		if ((relative)){
			struct _Function_2_1{
				inline static Float Block( Dynamic &object,Dynamic &anchor){
					HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",402);
					{
						HX_STACK_LINE(402)
						Float a = (::Math_obj::atan2((object->__Field(HX_CSTRING("y"),true) - anchor->__Field(HX_CSTRING("y"),true)),(object->__Field(HX_CSTRING("x"),true) - anchor->__Field(HX_CSTRING("x"),true))) * ((Float((int)-180) / Float(::Math_obj::PI))));		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(402)
						return (  (((a < (int)0))) ? Float((a + (int)360)) : Float(a) );
					}
					return null();
				}
			};
			HX_STACK_LINE(402)
			hx::AddEq(angle,_Function_2_1::Block(object,anchor));
		}
		HX_STACK_LINE(403)
		{
			struct _Function_2_1{
				inline static Float Block( Dynamic &anchor,Dynamic &object){
					HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",403);
					{
						HX_STACK_LINE(403)
						Float x1 = anchor->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x1,"x1");
						Float y1 = anchor->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y1,"y1");
						Float x2 = object->__Field(HX_CSTRING("x"),true);		HX_STACK_VAR(x2,"x2");
						Float y2 = object->__Field(HX_CSTRING("y"),true);		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(403)
						return ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(403)
			Float angle1 = angle;		HX_STACK_VAR(angle1,"angle1");
			Float length = _Function_2_1::Block(anchor,object);		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(403)
			hx::MultEq(angle1,(Float(::Math_obj::PI) / Float((int)-180)));
			HX_STACK_LINE(403)
			object->__FieldRef(HX_CSTRING("x")) = ((::Math_obj::cos(angle1) * length) + anchor->__Field(HX_CSTRING("x"),true));
			HX_STACK_LINE(403)
			object->__FieldRef(HX_CSTRING("y")) = ((::Math_obj::sin(angle1) * length) + anchor->__Field(HX_CSTRING("y"),true));
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,rotateAround,(void))

Float HXP_obj::round( Float num,int precision){
	HX_STACK_PUSH("HXP::round","com/haxepunk/HXP.hx",413);
	HX_STACK_ARG(num,"num");
	HX_STACK_ARG(precision,"precision");
	HX_STACK_LINE(414)
	Float exp = ::Math_obj::pow((int)10,precision);		HX_STACK_VAR(exp,"exp");
	HX_STACK_LINE(415)
	return (Float(::Math_obj::round((num * exp))) / Float(exp));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,round,return )

Float HXP_obj::distance( Float x1,Float y1,hx::Null< Float >  __o_x2,hx::Null< Float >  __o_y2){
Float x2 = __o_x2.Default(0);
Float y2 = __o_y2.Default(0);
	HX_STACK_PUSH("HXP::distance","com/haxepunk/HXP.hx",427);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
{
		HX_STACK_LINE(427)
		return ::Math_obj::sqrt(((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1)))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,distance,return )

Float HXP_obj::distanceSquared( Float x1,Float y1,hx::Null< Float >  __o_x2,hx::Null< Float >  __o_y2){
Float x2 = __o_x2.Default(0);
Float y2 = __o_y2.Default(0);
	HX_STACK_PUSH("HXP::distanceSquared","com/haxepunk/HXP.hx",432);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
{
		HX_STACK_LINE(432)
		return ((((x2 - x1)) * ((x2 - x1))) + (((y2 - y1)) * ((y2 - y1))));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,distanceSquared,return )

Float HXP_obj::distanceRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2){
	HX_STACK_PUSH("HXP::distanceRects","com/haxepunk/HXP.hx",449);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(w1,"w1");
	HX_STACK_ARG(h1,"h1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_ARG(w2,"w2");
	HX_STACK_ARG(h2,"h2");
	HX_STACK_LINE(450)
	if (((bool((x1 < (x2 + w2))) && bool((x2 < (x1 + w1)))))){
		HX_STACK_LINE(452)
		if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
			HX_STACK_LINE(452)
			return (int)0;
		}
		HX_STACK_LINE(453)
		if (((y1 > y2))){
			HX_STACK_LINE(453)
			return (y1 - ((y2 + h2)));
		}
		HX_STACK_LINE(454)
		return (y2 - ((y1 + h1)));
	}
	HX_STACK_LINE(456)
	if (((bool((y1 < (y2 + h2))) && bool((y2 < (y1 + h1)))))){
		HX_STACK_LINE(458)
		if (((x1 > x2))){
			HX_STACK_LINE(458)
			return (x1 - ((x2 + w2)));
		}
		HX_STACK_LINE(459)
		return (x2 - ((x1 + w1)));
	}
	HX_STACK_LINE(461)
	if (((x1 > x2))){
		HX_STACK_LINE(463)
		if (((y1 > y2))){
			struct _Function_3_1{
				inline static Float Block( Float &x2,Float &y1,Float &w2,Float &h2,Float &x1,Float &y2){
					HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",463);
					{
						HX_STACK_LINE(463)
						Float x21 = (x2 + w2);		HX_STACK_VAR(x21,"x21");
						Float y21 = (y2 + h2);		HX_STACK_VAR(y21,"y21");
						HX_STACK_LINE(463)
						return ::Math_obj::sqrt(((((x21 - x1)) * ((x21 - x1))) + (((y21 - y1)) * ((y21 - y1)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(463)
			return _Function_3_1::Block(x2,y1,w2,h2,x1,y2);
		}
		struct _Function_2_1{
			inline static Float Block( Float &y1,Float &x2,Float &w2,Float &x1,Float &h1,Float &y2){
				HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",464);
				{
					HX_STACK_LINE(464)
					Float y11 = (y1 + h1);		HX_STACK_VAR(y11,"y11");
					Float x21 = (x2 + w2);		HX_STACK_VAR(x21,"x21");
					HX_STACK_LINE(464)
					return ::Math_obj::sqrt(((((x21 - x1)) * ((x21 - x1))) + (((y2 - y11)) * ((y2 - y11)))));
				}
				return null();
			}
		};
		HX_STACK_LINE(464)
		return _Function_2_1::Block(y1,x2,w2,x1,h1,y2);
	}
	HX_STACK_LINE(466)
	if (((y1 > y2))){
		struct _Function_2_1{
			inline static Float Block( Float &x2,Float &y1,Float &x1,Float &h2,Float &w1,Float &y2){
				HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",466);
				{
					HX_STACK_LINE(466)
					Float x11 = (x1 + w1);		HX_STACK_VAR(x11,"x11");
					Float y21 = (y2 + h2);		HX_STACK_VAR(y21,"y21");
					HX_STACK_LINE(466)
					return ::Math_obj::sqrt(((((x2 - x11)) * ((x2 - x11))) + (((y21 - y1)) * ((y21 - y1)))));
				}
				return null();
			}
		};
		HX_STACK_LINE(466)
		return _Function_2_1::Block(x2,y1,x1,h2,w1,y2);
	}
	struct _Function_1_1{
		inline static Float Block( Float &y1,Float &x2,Float &x1,Float &w1,Float &h1,Float &y2){
			HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",467);
			{
				HX_STACK_LINE(467)
				Float x11 = (x1 + w1);		HX_STACK_VAR(x11,"x11");
				Float y11 = (y1 + h1);		HX_STACK_VAR(y11,"y11");
				HX_STACK_LINE(467)
				return ::Math_obj::sqrt(((((x2 - x11)) * ((x2 - x11))) + (((y2 - y11)) * ((y2 - y11)))));
			}
			return null();
		}
	};
	HX_STACK_LINE(467)
	return _Function_1_1::Block(y1,x2,x1,w1,h1,y2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(HXP_obj,distanceRects,return )

Float HXP_obj::distanceRectPoint( Float px,Float py,Float rx,Float ry,Float rw,Float rh){
	HX_STACK_PUSH("HXP::distanceRectPoint","com/haxepunk/HXP.hx",481);
	HX_STACK_ARG(px,"px");
	HX_STACK_ARG(py,"py");
	HX_STACK_ARG(rx,"rx");
	HX_STACK_ARG(ry,"ry");
	HX_STACK_ARG(rw,"rw");
	HX_STACK_ARG(rh,"rh");
	HX_STACK_LINE(482)
	if (((bool((px >= rx)) && bool((px <= (rx + rw)))))){
		HX_STACK_LINE(484)
		if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
			HX_STACK_LINE(484)
			return (int)0;
		}
		HX_STACK_LINE(485)
		if (((py > ry))){
			HX_STACK_LINE(485)
			return (py - ((ry + rh)));
		}
		HX_STACK_LINE(486)
		return (ry - py);
	}
	HX_STACK_LINE(488)
	if (((bool((py >= ry)) && bool((py <= (ry + rh)))))){
		HX_STACK_LINE(490)
		if (((px > rx))){
			HX_STACK_LINE(490)
			return (px - ((rx + rw)));
		}
		HX_STACK_LINE(491)
		return (rx - px);
	}
	HX_STACK_LINE(493)
	if (((px > rx))){
		HX_STACK_LINE(495)
		if (((py > ry))){
			struct _Function_3_1{
				inline static Float Block( Float &rw,Float &rh,Float &py,Float &ry,Float &px,Float &rx){
					HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",495);
					{
						HX_STACK_LINE(495)
						Float x2 = (rx + rw);		HX_STACK_VAR(x2,"x2");
						Float y2 = (ry + rh);		HX_STACK_VAR(y2,"y2");
						HX_STACK_LINE(495)
						return ::Math_obj::sqrt(((((x2 - px)) * ((x2 - px))) + (((y2 - py)) * ((y2 - py)))));
					}
					return null();
				}
			};
			HX_STACK_LINE(495)
			return _Function_3_1::Block(rw,rh,py,ry,px,rx);
		}
		struct _Function_2_1{
			inline static Float Block( Float &rw,Float &py,Float &px,Float &ry,Float &rx){
				HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",496);
				{
					HX_STACK_LINE(496)
					Float x2 = (rx + rw);		HX_STACK_VAR(x2,"x2");
					HX_STACK_LINE(496)
					return ::Math_obj::sqrt(((((x2 - px)) * ((x2 - px))) + (((ry - py)) * ((ry - py)))));
				}
				return null();
			}
		};
		HX_STACK_LINE(496)
		return _Function_2_1::Block(rw,py,px,ry,rx);
	}
	HX_STACK_LINE(498)
	if (((py > ry))){
		struct _Function_2_1{
			inline static Float Block( Float &rh,Float &py,Float &ry,Float &px,Float &rx){
				HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",498);
				{
					HX_STACK_LINE(498)
					Float y2 = (ry + rh);		HX_STACK_VAR(y2,"y2");
					HX_STACK_LINE(498)
					return ::Math_obj::sqrt(((((rx - px)) * ((rx - px))) + (((y2 - py)) * ((y2 - py)))));
				}
				return null();
			}
		};
		HX_STACK_LINE(498)
		return _Function_2_1::Block(rh,py,ry,px,rx);
	}
	HX_STACK_LINE(499)
	return ::Math_obj::sqrt(((((rx - px)) * ((rx - px))) + (((ry - py)) * ((ry - py)))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(HXP_obj,distanceRectPoint,return )

Float HXP_obj::clamp( Float value,Float min,Float max){
	HX_STACK_PUSH("HXP::clamp","com/haxepunk/HXP.hx",510);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_LINE(511)
	if (((max > min))){
		HX_STACK_LINE(513)
		value = (  (((value < max))) ? Float(value) : Float(max) );
		HX_STACK_LINE(514)
		return (  (((value > min))) ? Float(value) : Float(min) );
	}
	HX_STACK_LINE(516)
	value = (  (((value < min))) ? Float(value) : Float(min) );
	HX_STACK_LINE(517)
	return (  (((value > max))) ? Float(value) : Float(max) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,clamp,return )

Void HXP_obj::clampInRect( Dynamic object,Float x,Float y,Float width,Float height,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_PUSH("HXP::clampInRect","com/haxepunk/HXP.hx",529);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(padding,"padding");
{
		HX_STACK_LINE(530)
		object->__FieldRef(HX_CSTRING("x")) = ::com::haxepunk::HXP_obj::clamp(object->__Field(HX_CSTRING("x"),true),(x + padding),((x + width) - padding));
		HX_STACK_LINE(531)
		object->__FieldRef(HX_CSTRING("y")) = ::com::haxepunk::HXP_obj::clamp(object->__Field(HX_CSTRING("y"),true),(y + padding),((y + height) - padding));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(HXP_obj,clampInRect,(void))

Float HXP_obj::scale( Float value,Float min,Float max,Float min2,Float max2){
	HX_STACK_PUSH("HXP::scale","com/haxepunk/HXP.hx",544);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(min2,"min2");
	HX_STACK_ARG(max2,"max2");
	HX_STACK_LINE(544)
	return (min2 + ((Float(((value - min))) / Float(((max - min)))) * ((max2 - min2))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,scale,return )

Float HXP_obj::scaleClamp( Float value,Float min,Float max,Float min2,Float max2){
	HX_STACK_PUSH("HXP::scaleClamp","com/haxepunk/HXP.hx",558);
	HX_STACK_ARG(value,"value");
	HX_STACK_ARG(min,"min");
	HX_STACK_ARG(max,"max");
	HX_STACK_ARG(min2,"min2");
	HX_STACK_ARG(max2,"max2");
	HX_STACK_LINE(559)
	value = (min2 + ((Float(((value - min))) / Float(((max - min)))) * ((max2 - min2))));
	HX_STACK_LINE(560)
	if (((max2 > min2))){
		HX_STACK_LINE(562)
		value = (  (((value < max2))) ? Float(value) : Float(max2) );
		HX_STACK_LINE(563)
		return (  (((value > min2))) ? Float(value) : Float(min2) );
	}
	HX_STACK_LINE(565)
	value = (  (((value < min2))) ? Float(value) : Float(min2) );
	HX_STACK_LINE(566)
	return (  (((value > max2))) ? Float(value) : Float(max2) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(HXP_obj,scaleClamp,return )

int HXP_obj::randomSeed;

int HXP_obj::setRandomSeed( int value){
	HX_STACK_PUSH("HXP::setRandomSeed","com/haxepunk/HXP.hx",574);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(575)
	::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(::com::haxepunk::HXP_obj::clamp(value,1.0,2147483646.0));
	HX_STACK_LINE(576)
	::com::haxepunk::HXP_obj::randomSeed = ::com::haxepunk::HXP_obj::_seed;
	HX_STACK_LINE(577)
	return ::com::haxepunk::HXP_obj::_seed;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,setRandomSeed,return )

Void HXP_obj::randomizeSeed( ){
{
		HX_STACK_PUSH("HXP::randomizeSeed","com/haxepunk/HXP.hx",584);
		HX_STACK_LINE(585)
		::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(::com::haxepunk::HXP_obj::clamp(::Std_obj::_int((2147483647.0 * ::Math_obj::random())),1.0,2147483646.0));
		HX_STACK_LINE(585)
		::com::haxepunk::HXP_obj::randomSeed = ::com::haxepunk::HXP_obj::_seed;
		HX_STACK_LINE(585)
		::com::haxepunk::HXP_obj::_seed;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,randomizeSeed,(void))

Float HXP_obj::random;

Float HXP_obj::getRandom( ){
	HX_STACK_PUSH("HXP::getRandom","com/haxepunk/HXP.hx",593);
	HX_STACK_LINE(594)
	::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),2147483647.0));
	HX_STACK_LINE(595)
	return (Float(::com::haxepunk::HXP_obj::_seed) / Float(2147483647.0));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,getRandom,return )

int HXP_obj::rand( int amount){
	HX_STACK_PUSH("HXP::rand","com/haxepunk/HXP.hx",604);
	HX_STACK_ARG(amount,"amount");
	HX_STACK_LINE(605)
	::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),2147483647.0));
	HX_STACK_LINE(606)
	return ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float(2147483647.0)) * amount));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,rand,return )

int HXP_obj::indexOf( Dynamic a,Dynamic v){
	HX_STACK_PUSH("HXP::indexOf","com/haxepunk/HXP.hx",610);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(611)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(612)
	{
		HX_STACK_LINE(612)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(612)
		while(((_g < a->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(612)
			Dynamic v2 = a->__GetItem(_g);		HX_STACK_VAR(v2,"v2");
			HX_STACK_LINE(612)
			++(_g);
			HX_STACK_LINE(613)
			if (((v == v2))){
				HX_STACK_LINE(614)
				return i;
			}
			HX_STACK_LINE(615)
			(i)++;
		}
	}
	HX_STACK_LINE(617)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(HXP_obj,indexOf,return )

Dynamic HXP_obj::next( Dynamic current,Dynamic options,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(true);
	HX_STACK_PUSH("HXP::next","com/haxepunk/HXP.hx",628);
	HX_STACK_ARG(current,"current");
	HX_STACK_ARG(options,"options");
	HX_STACK_ARG(loop,"loop");
{
		HX_STACK_LINE(628)
		if ((loop)){
			HX_STACK_LINE(630)
			return options->__GetItem(hx::Mod(((::com::haxepunk::HXP_obj::indexOf(options,current) + (int)1)),options->__Field(HX_CSTRING("length"),true)));
		}
		else{
			HX_STACK_LINE(632)
			return options->__GetItem(::Std_obj::_int(::Math_obj::max((::com::haxepunk::HXP_obj::indexOf(options,current) + (int)1),(options->__Field(HX_CSTRING("length"),true) - (int)1))));
		}
		HX_STACK_LINE(628)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,next,return )

Dynamic HXP_obj::prev( Dynamic current,Dynamic options,hx::Null< bool >  __o_loop){
bool loop = __o_loop.Default(true);
	HX_STACK_PUSH("HXP::prev","com/haxepunk/HXP.hx",643);
	HX_STACK_ARG(current,"current");
	HX_STACK_ARG(options,"options");
	HX_STACK_ARG(loop,"loop");
{
		HX_STACK_LINE(643)
		if ((loop)){
			HX_STACK_LINE(645)
			return options->__GetItem(hx::Mod((((::com::haxepunk::HXP_obj::indexOf(options,current) - (int)1) + options->__Field(HX_CSTRING("length"),true))),options->__Field(HX_CSTRING("length"),true)));
		}
		else{
			HX_STACK_LINE(647)
			return options->__GetItem(::Std_obj::_int(::Math_obj::max((::com::haxepunk::HXP_obj::indexOf(options,current) - (int)1),(int)0)));
		}
		HX_STACK_LINE(643)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,prev,return )

Dynamic HXP_obj::swap( Dynamic current,Dynamic a,Dynamic b){
	HX_STACK_PUSH("HXP::swap","com/haxepunk/HXP.hx",658);
	HX_STACK_ARG(current,"current");
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(b,"b");
	HX_STACK_LINE(658)
	return (  (((current == a))) ? Dynamic(b) : Dynamic(a) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,swap,return )

int HXP_obj::getColorRGB( hx::Null< int >  __o_R,hx::Null< int >  __o_G,hx::Null< int >  __o_B){
int R = __o_R.Default(0);
int G = __o_G.Default(0);
int B = __o_B.Default(0);
	HX_STACK_PUSH("HXP::getColorRGB","com/haxepunk/HXP.hx",670);
	HX_STACK_ARG(R,"R");
	HX_STACK_ARG(G,"G");
	HX_STACK_ARG(B,"B");
{
		HX_STACK_LINE(670)
		return (int((int((int(R) << int((int)16))) | int((int(G) << int((int)8))))) | int(B));
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,getColorRGB,return )

int HXP_obj::getColorHSV( Float h,Float s,Float v){
	HX_STACK_PUSH("HXP::getColorHSV","com/haxepunk/HXP.hx",682);
	HX_STACK_ARG(h,"h");
	HX_STACK_ARG(s,"s");
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(683)
	h = ::Std_obj::_int((h * (int)360));
	HX_STACK_LINE(684)
	int hi = hx::Mod(::Math_obj::floor((Float(h) / Float((int)60))),(int)6);		HX_STACK_VAR(hi,"hi");
	Float f = ((Float(h) / Float((int)60)) - ::Math_obj::floor((Float(h) / Float((int)60))));		HX_STACK_VAR(f,"f");
	Float p = (v * (((int)1 - s)));		HX_STACK_VAR(p,"p");
	Float q = (v * (((int)1 - (f * s))));		HX_STACK_VAR(q,"q");
	Float t = (v * (((int)1 - ((((int)1 - f)) * s))));		HX_STACK_VAR(t,"t");
	HX_STACK_LINE(689)
	switch( (int)(hi)){
		case (int)0: {
			HX_STACK_LINE(691)
			return (int((int((int(::Std_obj::_int((v * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((t * (int)255))) << int((int)8))))) | int(::Std_obj::_int((p * (int)255))));
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(692)
			return (int((int((int(::Std_obj::_int((q * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((v * (int)255))) << int((int)8))))) | int(::Std_obj::_int((p * (int)255))));
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(693)
			return (int((int((int(::Std_obj::_int((p * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((v * (int)255))) << int((int)8))))) | int(::Std_obj::_int((t * (int)255))));
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(694)
			return (int((int((int(::Std_obj::_int((p * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((q * (int)255))) << int((int)8))))) | int(::Std_obj::_int((v * (int)255))));
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(695)
			return (int((int((int(::Std_obj::_int((t * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)8))))) | int(::Std_obj::_int((v * (int)255))));
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(696)
			return (int((int((int(::Std_obj::_int((v * (int)255))) << int((int)16))) | int((int(::Std_obj::_int((p * (int)255))) << int((int)8))))) | int(::Std_obj::_int((q * (int)255))));
		}
		;break;
		default: {
			HX_STACK_LINE(697)
			return (int)0;
		}
	}
	HX_STACK_LINE(699)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,getColorHSV,return )

int HXP_obj::getRed( int color){
	HX_STACK_PUSH("HXP::getRed","com/haxepunk/HXP.hx",708);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(708)
	return (int((int(color) >> int((int)16))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getRed,return )

int HXP_obj::getGreen( int color){
	HX_STACK_PUSH("HXP::getGreen","com/haxepunk/HXP.hx",718);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(718)
	return (int((int(color) >> int((int)8))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getGreen,return )

int HXP_obj::getBlue( int color){
	HX_STACK_PUSH("HXP::getBlue","com/haxepunk/HXP.hx",728);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(728)
	return (int(color) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getBlue,return )

::neash::display::BitmapData HXP_obj::getBitmap( Dynamic source){
	HX_STACK_PUSH("HXP::getBitmap","com/haxepunk/HXP.hx",738);
	HX_STACK_ARG(source,"source");
	HX_STACK_LINE(739)
	::String name = ::Std_obj::string(source);		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(740)
	if ((::com::haxepunk::HXP_obj::_bitmap->exists(name))){
		HX_STACK_LINE(741)
		return ::com::haxepunk::HXP_obj::_bitmap->get(name);
	}
	HX_STACK_LINE(744)
	::neash::display::BitmapData data = ::nme::installer::Assets_obj::getBitmapData(source,null());		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(748)
	if (((data != null()))){
		HX_STACK_LINE(749)
		::com::haxepunk::HXP_obj::_bitmap->set(name,data);
	}
	HX_STACK_LINE(751)
	return data;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,getBitmap,return )

::neash::display::BitmapData HXP_obj::createBitmap( int width,int height,Dynamic __o_transparent,Dynamic __o_color){
Dynamic transparent = __o_transparent.Default(false);
Dynamic color = __o_color.Default(0);
	HX_STACK_PUSH("HXP::createBitmap","com/haxepunk/HXP.hx",758);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(transparent,"transparent");
	HX_STACK_ARG(color,"color");
{
		struct _Function_1_1{
			inline static Dynamic Block( Dynamic &color){
				HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",772);
				{
					HX_STACK_LINE(772)
					int color1 = color;		HX_STACK_VAR(color1,"color1");
					HX_STACK_LINE(772)
					return color1;
				}
				return null();
			}
		};
		HX_STACK_LINE(758)
		return ::neash::display::BitmapData_obj::__new(width,height,transparent,_Function_1_1::Block(color),null());
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,createBitmap,return )

Dynamic HXP_obj::convertColor( int color){
	HX_STACK_PUSH("HXP::convertColor","com/haxepunk/HXP.hx",779);
	HX_STACK_ARG(color,"color");
	HX_STACK_LINE(779)
	return color;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,convertColor,return )

Float HXP_obj::timeFlag( ){
	HX_STACK_PUSH("HXP::timeFlag","com/haxepunk/HXP.hx",792);
	HX_STACK_LINE(793)
	Float t = ::haxe::Timer_obj::stamp();		HX_STACK_VAR(t,"t");
	Float e = (t - ::com::haxepunk::HXP_obj::_time);		HX_STACK_VAR(e,"e");
	HX_STACK_LINE(795)
	::com::haxepunk::HXP_obj::_time = t;
	HX_STACK_LINE(796)
	return e;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,timeFlag,return )

::com::haxepunk::debug::Console HXP_obj::console;

::com::haxepunk::debug::Console HXP_obj::getConsole( ){
	HX_STACK_PUSH("HXP::getConsole","com/haxepunk/HXP.hx",804);
	HX_STACK_LINE(805)
	if (((::com::haxepunk::HXP_obj::_console == null()))){
		HX_STACK_LINE(805)
		::com::haxepunk::HXP_obj::_console = ::com::haxepunk::debug::Console_obj::__new();
	}
	HX_STACK_LINE(806)
	return ::com::haxepunk::HXP_obj::_console;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,getConsole,return )

Dynamic HXP_obj::log;

Dynamic HXP_obj::watch;

::com::haxepunk::tweens::misc::MultiVarTween HXP_obj::tween( Dynamic object,Dynamic values,Float duration,Dynamic options){
	HX_STACK_PUSH("HXP::tween","com/haxepunk/HXP.hx",848);
	HX_STACK_ARG(object,"object");
	HX_STACK_ARG(values,"values");
	HX_STACK_ARG(duration,"duration");
	HX_STACK_ARG(options,"options");
	HX_STACK_LINE(849)
	::com::haxepunk::TweenType type = ::com::haxepunk::TweenType_obj::OneShot_dyn();		HX_STACK_VAR(type,"type");
	Dynamic complete = null();		HX_STACK_VAR(complete,"complete");
	Dynamic ease = null();		HX_STACK_VAR(ease,"ease");
	::com::haxepunk::Tweener tweener = ::com::haxepunk::HXP_obj::tweener;		HX_STACK_VAR(tweener,"tweener");
	HX_STACK_LINE(853)
	if ((::Std_obj::is(object,hx::ClassOf< ::com::haxepunk::Tweener >()))){
		HX_STACK_LINE(853)
		tweener = hx::TCast< com::haxepunk::Tweener >::cast(object);
	}
	HX_STACK_LINE(854)
	if (((options != null()))){
		HX_STACK_LINE(856)
		if ((::Reflect_obj::hasField(options,HX_CSTRING("type")))){
			HX_STACK_LINE(856)
			type = options->__Field(HX_CSTRING("type"),true);
		}
		HX_STACK_LINE(857)
		if ((::Reflect_obj::hasField(options,HX_CSTRING("complete")))){
			HX_STACK_LINE(857)
			complete = options->__Field(HX_CSTRING("complete"),true);
		}
		HX_STACK_LINE(858)
		if ((::Reflect_obj::hasField(options,HX_CSTRING("ease")))){
			HX_STACK_LINE(858)
			ease = options->__Field(HX_CSTRING("ease"),true);
		}
		HX_STACK_LINE(859)
		if ((::Reflect_obj::hasField(options,HX_CSTRING("tweener")))){
			HX_STACK_LINE(859)
			tweener = options->__Field(HX_CSTRING("tweener"),true);
		}
	}
	HX_STACK_LINE(861)
	::com::haxepunk::tweens::misc::MultiVarTween tween = ::com::haxepunk::tweens::misc::MultiVarTween_obj::__new(complete,type);		HX_STACK_VAR(tween,"tween");
	HX_STACK_LINE(862)
	tween->tween(object,values,duration,ease);
	HX_STACK_LINE(863)
	tweener->addTween(tween,null());
	HX_STACK_LINE(864)
	return tween;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(HXP_obj,tween,return )

Array< int > HXP_obj::frames( int from,int to,hx::Null< int >  __o_skip){
int skip = __o_skip.Default(0);
	HX_STACK_PUSH("HXP::frames","com/haxepunk/HXP.hx",874);
	HX_STACK_ARG(from,"from");
	HX_STACK_ARG(to,"to");
	HX_STACK_ARG(skip,"skip");
{
		HX_STACK_LINE(875)
		Array< int > a = Array_obj< int >::__new();		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(876)
		(skip)++;
		HX_STACK_LINE(877)
		if (((from < to))){
			HX_STACK_LINE(878)
			while(((from <= to))){
				HX_STACK_LINE(881)
				a->push(from);
				HX_STACK_LINE(882)
				hx::AddEq(from,skip);
			}
		}
		else{
			HX_STACK_LINE(886)
			while(((from >= to))){
				HX_STACK_LINE(889)
				a->push(from);
				HX_STACK_LINE(890)
				hx::SubEq(from,skip);
			}
		}
		HX_STACK_LINE(893)
		return a;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HXP_obj,frames,return )

Void HXP_obj::shuffle( Dynamic a){
{
		HX_STACK_PUSH("HXP::shuffle","com/haxepunk/HXP.hx",901);
		HX_STACK_ARG(a,"a");
		HX_STACK_LINE(901)
		if ((::Std_obj::is(a,hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(904)
			int i = a->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(i,"i");
			int j;		HX_STACK_VAR(j,"j");
			Dynamic t;		HX_STACK_VAR(t,"t");
			HX_STACK_LINE(905)
			while(((--(i) > (int)0))){
				HX_STACK_LINE(907)
				t = a->__GetItem(i);
				struct _Function_3_1{
					inline static int Block( int &i){
						HX_STACK_PUSH("*::closure","com/haxepunk/HXP.hx",908);
						{
							HX_STACK_LINE(908)
							::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(hx::Mod((::com::haxepunk::HXP_obj::_seed * 16807.0),2147483647.0));
							HX_STACK_LINE(908)
							return ::Std_obj::_int(((Float(::com::haxepunk::HXP_obj::_seed) / Float(2147483647.0)) * ((i + (int)1))));
						}
						return null();
					}
				};
				HX_STACK_LINE(908)
				hx::IndexRef((a).mPtr,i) = a->__GetItem(j = _Function_3_1::Block(i));
				HX_STACK_LINE(909)
				hx::IndexRef((a).mPtr,j) = t;
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,shuffle,(void))

Float HXP_obj::time;

Float HXP_obj::setTime( Float value){
	HX_STACK_PUSH("HXP::setTime","com/haxepunk/HXP.hx",915);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(916)
	::com::haxepunk::HXP_obj::_time = value;
	HX_STACK_LINE(917)
	return ::com::haxepunk::HXP_obj::_time;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HXP_obj,setTime,return )

bool HXP_obj::gotoIsNull( ){
	HX_STACK_PUSH("HXP::gotoIsNull","com/haxepunk/HXP.hx",920);
	HX_STACK_LINE(920)
	return (::com::haxepunk::HXP_obj::_goto == null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HXP_obj,gotoIsNull,return )

::com::haxepunk::World HXP_obj::_world;

::com::haxepunk::World HXP_obj::_goto;

::com::haxepunk::debug::Console HXP_obj::_console;

Float HXP_obj::_time;

Float HXP_obj::_updateTime;

Float HXP_obj::_renderTime;

Float HXP_obj::_gameTime;

Float HXP_obj::_flashTime;

::Hash HXP_obj::_bitmap;

int HXP_obj::_seed;

Float HXP_obj::_volume;

Float HXP_obj::_pan;

::neash::media::SoundTransform HXP_obj::_soundTransform;

Float HXP_obj::DEG;

Float HXP_obj::RAD;

::neash::display::Stage HXP_obj::stage;

::com::haxepunk::Engine HXP_obj::engine;

::neash::geom::Point HXP_obj::point;

::neash::geom::Point HXP_obj::point2;

::neash::geom::Point HXP_obj::zero;

::neash::geom::Rectangle HXP_obj::rect;

::neash::geom::Matrix HXP_obj::matrix;

::neash::display::Sprite HXP_obj::sprite;

::com::haxepunk::Entity HXP_obj::entity;


HXP_obj::HXP_obj()
{
}

void HXP_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HXP);
	HX_MARK_END_CLASS();
}

void HXP_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic HXP_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { return inCallProp ? getPan() : pan; }
		if (HX_FIELD_EQ(inName,"log") ) { return log; }
		if (HX_FIELD_EQ(inName,"DEG") ) { return DEG; }
		if (HX_FIELD_EQ(inName,"RAD") ) { return RAD; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { return rate; }
		if (HX_FIELD_EQ(inName,"sign") ) { return sign_dyn(); }
		if (HX_FIELD_EQ(inName,"lerp") ) { return lerp_dyn(); }
		if (HX_FIELD_EQ(inName,"rand") ) { return rand_dyn(); }
		if (HX_FIELD_EQ(inName,"next") ) { return next_dyn(); }
		if (HX_FIELD_EQ(inName,"prev") ) { return prev_dyn(); }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		if (HX_FIELD_EQ(inName,"time") ) { return time; }
		if (HX_FIELD_EQ(inName,"_pan") ) { return _pan; }
		if (HX_FIELD_EQ(inName,"zero") ) { return zero; }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"fixed") ) { return fixed; }
		if (HX_FIELD_EQ(inName,"world") ) { return inCallProp ? getWorld() : world; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle_dyn(); }
		if (HX_FIELD_EQ(inName,"round") ) { return round_dyn(); }
		if (HX_FIELD_EQ(inName,"clamp") ) { return clamp_dyn(); }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale_dyn(); }
		if (HX_FIELD_EQ(inName,"watch") ) { return watch; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		if (HX_FIELD_EQ(inName,"_goto") ) { return _goto; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		if (HX_FIELD_EQ(inName,"_seed") ) { return _seed; }
		if (HX_FIELD_EQ(inName,"stage") ) { return stage; }
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"screen") ) { return screen; }
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"bounds") ) { return bounds; }
		if (HX_FIELD_EQ(inName,"camera") ) { return camera; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"volume") ) { return inCallProp ? getVolume() : volume; }
		if (HX_FIELD_EQ(inName,"getPan") ) { return getPan_dyn(); }
		if (HX_FIELD_EQ(inName,"setPan") ) { return setPan_dyn(); }
		if (HX_FIELD_EQ(inName,"choose") ) { return choose_dyn(); }
		if (HX_FIELD_EQ(inName,"random") ) { return inCallProp ? getRandom() : random; }
		if (HX_FIELD_EQ(inName,"getRed") ) { return getRed_dyn(); }
		if (HX_FIELD_EQ(inName,"frames") ) { return frames_dyn(); }
		if (HX_FIELD_EQ(inName,"_world") ) { return _world; }
		if (HX_FIELD_EQ(inName,"engine") ) { return engine; }
		if (HX_FIELD_EQ(inName,"point2") ) { return point2; }
		if (HX_FIELD_EQ(inName,"matrix") ) { return matrix; }
		if (HX_FIELD_EQ(inName,"sprite") ) { return sprite; }
		if (HX_FIELD_EQ(inName,"entity") ) { return entity; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { return VERSION; }
		if (HX_FIELD_EQ(inName,"elapsed") ) { return elapsed; }
		if (HX_FIELD_EQ(inName,"tweener") ) { return tweener; }
		if (HX_FIELD_EQ(inName,"focused") ) { return focused; }
		if (HX_FIELD_EQ(inName,"angleXY") ) { return angleXY_dyn(); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"getBlue") ) { return getBlue_dyn(); }
		if (HX_FIELD_EQ(inName,"console") ) { return inCallProp ? getConsole() : console; }
		if (HX_FIELD_EQ(inName,"shuffle") ) { return shuffle_dyn(); }
		if (HX_FIELD_EQ(inName,"setTime") ) { return setTime_dyn(); }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"_volume") ) { return _volume; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getWorld") ) { return getWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"setWorld") ) { return setWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"approach") ) { return approach_dyn(); }
		if (HX_FIELD_EQ(inName,"anchorTo") ) { return anchorTo_dyn(); }
		if (HX_FIELD_EQ(inName,"distance") ) { return distance_dyn(); }
		if (HX_FIELD_EQ(inName,"getGreen") ) { return getGreen_dyn(); }
		if (HX_FIELD_EQ(inName,"timeFlag") ) { return timeFlag_dyn(); }
		if (HX_FIELD_EQ(inName,"_console") ) { return _console; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"BASELAYER") ) { return BASELAYER; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { return frameRate; }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { return halfWidth; }
		if (HX_FIELD_EQ(inName,"swapWorld") ) { return swapWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"setCamera") ) { return setCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"getVolume") ) { return getVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"setVolume") ) { return setVolume_dyn(); }
		if (HX_FIELD_EQ(inName,"colorLerp") ) { return colorLerp_dyn(); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return getRandom_dyn(); }
		if (HX_FIELD_EQ(inName,"getBitmap") ) { return getBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"_gameTime") ) { return _gameTime; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blackColor") ) { return blackColor; }
		if (HX_FIELD_EQ(inName,"halfHeight") ) { return halfHeight; }
		if (HX_FIELD_EQ(inName,"scaleClamp") ) { return scaleClamp_dyn(); }
		if (HX_FIELD_EQ(inName,"randomSeed") ) { return randomSeed; }
		if (HX_FIELD_EQ(inName,"getConsole") ) { return getConsole_dyn(); }
		if (HX_FIELD_EQ(inName,"gotoIsNull") ) { return gotoIsNull_dyn(); }
		if (HX_FIELD_EQ(inName,"_flashTime") ) { return _flashTime; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { return windowWidth; }
		if (HX_FIELD_EQ(inName,"defaultFont") ) { return defaultFont; }
		if (HX_FIELD_EQ(inName,"resetCamera") ) { return resetCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"stepTowards") ) { return stepTowards_dyn(); }
		if (HX_FIELD_EQ(inName,"clampInRect") ) { return clampInRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorRGB") ) { return getColorRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorHSV") ) { return getColorHSV_dyn(); }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { return _updateTime; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { return _renderTime; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { return windowHeight; }
		if (HX_FIELD_EQ(inName,"rotateAround") ) { return rotateAround_dyn(); }
		if (HX_FIELD_EQ(inName,"createBitmap") ) { return createBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"convertColor") ) { return convertColor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"distanceRects") ) { return distanceRects_dyn(); }
		if (HX_FIELD_EQ(inName,"setRandomSeed") ) { return setRandomSeed_dyn(); }
		if (HX_FIELD_EQ(inName,"randomizeSeed") ) { return randomizeSeed_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceSquared") ) { return distanceSquared_dyn(); }
		if (HX_FIELD_EQ(inName,"_soundTransform") ) { return _soundTransform; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"NUMBER_MAX_VALUE") ) { return NUMBER_MAX_VALUE; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"assignedFrameRate") ) { return assignedFrameRate; }
		if (HX_FIELD_EQ(inName,"distanceRectPoint") ) { return distanceRectPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HXP_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pan") ) { if (inCallProp) return setPan(inValue);pan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"log") ) { log=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEG") ) { DEG=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RAD") ) { RAD=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rate") ) { rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"time") ) { if (inCallProp) return setTime(inValue);time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pan") ) { _pan=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zero") ) { zero=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::neash::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fixed") ) { fixed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"world") ) { if (inCallProp) return setWorld(inValue);world=inValue.Cast< ::com::haxepunk::World >(); return inValue; }
		if (HX_FIELD_EQ(inName,"watch") ) { watch=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_goto") ) { _goto=inValue.Cast< ::com::haxepunk::World >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_seed") ) { _seed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stage") ) { stage=inValue.Cast< ::neash::display::Stage >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"screen") ) { screen=inValue.Cast< ::com::haxepunk::Screen >(); return inValue; }
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::neash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast< ::neash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"camera") ) { camera=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"volume") ) { if (inCallProp) return setVolume(inValue);volume=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"random") ) { random=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_world") ) { _world=inValue.Cast< ::com::haxepunk::World >(); return inValue; }
		if (HX_FIELD_EQ(inName,"engine") ) { engine=inValue.Cast< ::com::haxepunk::Engine >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point2") ) { point2=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast< ::neash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sprite") ) { sprite=inValue.Cast< ::neash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"entity") ) { entity=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elapsed") ) { elapsed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tweener") ) { tweener=inValue.Cast< ::com::haxepunk::Tweener >(); return inValue; }
		if (HX_FIELD_EQ(inName,"focused") ) { focused=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"console") ) { console=inValue.Cast< ::com::haxepunk::debug::Console >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< ::Hash >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_volume") ) { _volume=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { _console=inValue.Cast< ::com::haxepunk::debug::Console >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"BASELAYER") ) { BASELAYER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { halfWidth=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_gameTime") ) { _gameTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blackColor") ) { blackColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"halfHeight") ) { halfHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"randomSeed") ) { if (inCallProp) return setRandomSeed(inValue);randomSeed=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashTime") ) { _flashTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"windowWidth") ) { windowWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultFont") ) { defaultFont=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { _updateTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderTime") ) { _renderTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"windowHeight") ) { windowHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_soundTransform") ) { _soundTransform=inValue.Cast< ::neash::media::SoundTransform >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"NUMBER_MAX_VALUE") ) { NUMBER_MAX_VALUE=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"assignedFrameRate") ) { assignedFrameRate=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HXP_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("VERSION"),
	HX_CSTRING("BASELAYER"),
	HX_CSTRING("NUMBER_MAX_VALUE"),
	HX_CSTRING("blackColor"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("windowWidth"),
	HX_CSTRING("windowHeight"),
	HX_CSTRING("fixed"),
	HX_CSTRING("frameRate"),
	HX_CSTRING("assignedFrameRate"),
	HX_CSTRING("elapsed"),
	HX_CSTRING("rate"),
	HX_CSTRING("screen"),
	HX_CSTRING("buffer"),
	HX_CSTRING("bounds"),
	HX_CSTRING("defaultFont"),
	HX_CSTRING("camera"),
	HX_CSTRING("tweener"),
	HX_CSTRING("focused"),
	HX_CSTRING("halfWidth"),
	HX_CSTRING("halfHeight"),
	HX_CSTRING("world"),
	HX_CSTRING("getWorld"),
	HX_CSTRING("setWorld"),
	HX_CSTRING("swapWorld"),
	HX_CSTRING("resize"),
	HX_CSTRING("clear"),
	HX_CSTRING("setCamera"),
	HX_CSTRING("resetCamera"),
	HX_CSTRING("volume"),
	HX_CSTRING("getVolume"),
	HX_CSTRING("setVolume"),
	HX_CSTRING("pan"),
	HX_CSTRING("getPan"),
	HX_CSTRING("setPan"),
	HX_CSTRING("choose"),
	HX_CSTRING("sign"),
	HX_CSTRING("approach"),
	HX_CSTRING("lerp"),
	HX_CSTRING("colorLerp"),
	HX_CSTRING("stepTowards"),
	HX_CSTRING("anchorTo"),
	HX_CSTRING("angle"),
	HX_CSTRING("angleXY"),
	HX_CSTRING("rotateAround"),
	HX_CSTRING("round"),
	HX_CSTRING("distance"),
	HX_CSTRING("distanceSquared"),
	HX_CSTRING("distanceRects"),
	HX_CSTRING("distanceRectPoint"),
	HX_CSTRING("clamp"),
	HX_CSTRING("clampInRect"),
	HX_CSTRING("scale"),
	HX_CSTRING("scaleClamp"),
	HX_CSTRING("randomSeed"),
	HX_CSTRING("setRandomSeed"),
	HX_CSTRING("randomizeSeed"),
	HX_CSTRING("random"),
	HX_CSTRING("getRandom"),
	HX_CSTRING("rand"),
	HX_CSTRING("indexOf"),
	HX_CSTRING("next"),
	HX_CSTRING("prev"),
	HX_CSTRING("swap"),
	HX_CSTRING("getColorRGB"),
	HX_CSTRING("getColorHSV"),
	HX_CSTRING("getRed"),
	HX_CSTRING("getGreen"),
	HX_CSTRING("getBlue"),
	HX_CSTRING("getBitmap"),
	HX_CSTRING("createBitmap"),
	HX_CSTRING("convertColor"),
	HX_CSTRING("timeFlag"),
	HX_CSTRING("console"),
	HX_CSTRING("getConsole"),
	HX_CSTRING("log"),
	HX_CSTRING("watch"),
	HX_CSTRING("tween"),
	HX_CSTRING("frames"),
	HX_CSTRING("shuffle"),
	HX_CSTRING("time"),
	HX_CSTRING("setTime"),
	HX_CSTRING("gotoIsNull"),
	HX_CSTRING("_world"),
	HX_CSTRING("_goto"),
	HX_CSTRING("_console"),
	HX_CSTRING("_time"),
	HX_CSTRING("_updateTime"),
	HX_CSTRING("_renderTime"),
	HX_CSTRING("_gameTime"),
	HX_CSTRING("_flashTime"),
	HX_CSTRING("_bitmap"),
	HX_CSTRING("_seed"),
	HX_CSTRING("_volume"),
	HX_CSTRING("_pan"),
	HX_CSTRING("_soundTransform"),
	HX_CSTRING("DEG"),
	HX_CSTRING("RAD"),
	HX_CSTRING("stage"),
	HX_CSTRING("engine"),
	HX_CSTRING("point"),
	HX_CSTRING("point2"),
	HX_CSTRING("zero"),
	HX_CSTRING("rect"),
	HX_CSTRING("matrix"),
	HX_CSTRING("sprite"),
	HX_CSTRING("entity"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HXP_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HXP_obj::VERSION,"VERSION");
	HX_MARK_MEMBER_NAME(HXP_obj::BASELAYER,"BASELAYER");
	HX_MARK_MEMBER_NAME(HXP_obj::NUMBER_MAX_VALUE,"NUMBER_MAX_VALUE");
	HX_MARK_MEMBER_NAME(HXP_obj::blackColor,"blackColor");
	HX_MARK_MEMBER_NAME(HXP_obj::width,"width");
	HX_MARK_MEMBER_NAME(HXP_obj::height,"height");
	HX_MARK_MEMBER_NAME(HXP_obj::windowWidth,"windowWidth");
	HX_MARK_MEMBER_NAME(HXP_obj::windowHeight,"windowHeight");
	HX_MARK_MEMBER_NAME(HXP_obj::fixed,"fixed");
	HX_MARK_MEMBER_NAME(HXP_obj::frameRate,"frameRate");
	HX_MARK_MEMBER_NAME(HXP_obj::assignedFrameRate,"assignedFrameRate");
	HX_MARK_MEMBER_NAME(HXP_obj::elapsed,"elapsed");
	HX_MARK_MEMBER_NAME(HXP_obj::rate,"rate");
	HX_MARK_MEMBER_NAME(HXP_obj::screen,"screen");
	HX_MARK_MEMBER_NAME(HXP_obj::buffer,"buffer");
	HX_MARK_MEMBER_NAME(HXP_obj::bounds,"bounds");
	HX_MARK_MEMBER_NAME(HXP_obj::defaultFont,"defaultFont");
	HX_MARK_MEMBER_NAME(HXP_obj::camera,"camera");
	HX_MARK_MEMBER_NAME(HXP_obj::tweener,"tweener");
	HX_MARK_MEMBER_NAME(HXP_obj::focused,"focused");
	HX_MARK_MEMBER_NAME(HXP_obj::halfWidth,"halfWidth");
	HX_MARK_MEMBER_NAME(HXP_obj::halfHeight,"halfHeight");
	HX_MARK_MEMBER_NAME(HXP_obj::world,"world");
	HX_MARK_MEMBER_NAME(HXP_obj::volume,"volume");
	HX_MARK_MEMBER_NAME(HXP_obj::pan,"pan");
	HX_MARK_MEMBER_NAME(HXP_obj::randomSeed,"randomSeed");
	HX_MARK_MEMBER_NAME(HXP_obj::random,"random");
	HX_MARK_MEMBER_NAME(HXP_obj::console,"console");
	HX_MARK_MEMBER_NAME(HXP_obj::log,"log");
	HX_MARK_MEMBER_NAME(HXP_obj::watch,"watch");
	HX_MARK_MEMBER_NAME(HXP_obj::time,"time");
	HX_MARK_MEMBER_NAME(HXP_obj::_world,"_world");
	HX_MARK_MEMBER_NAME(HXP_obj::_goto,"_goto");
	HX_MARK_MEMBER_NAME(HXP_obj::_console,"_console");
	HX_MARK_MEMBER_NAME(HXP_obj::_time,"_time");
	HX_MARK_MEMBER_NAME(HXP_obj::_updateTime,"_updateTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_renderTime,"_renderTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_gameTime,"_gameTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_flashTime,"_flashTime");
	HX_MARK_MEMBER_NAME(HXP_obj::_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(HXP_obj::_seed,"_seed");
	HX_MARK_MEMBER_NAME(HXP_obj::_volume,"_volume");
	HX_MARK_MEMBER_NAME(HXP_obj::_pan,"_pan");
	HX_MARK_MEMBER_NAME(HXP_obj::_soundTransform,"_soundTransform");
	HX_MARK_MEMBER_NAME(HXP_obj::DEG,"DEG");
	HX_MARK_MEMBER_NAME(HXP_obj::RAD,"RAD");
	HX_MARK_MEMBER_NAME(HXP_obj::stage,"stage");
	HX_MARK_MEMBER_NAME(HXP_obj::engine,"engine");
	HX_MARK_MEMBER_NAME(HXP_obj::point,"point");
	HX_MARK_MEMBER_NAME(HXP_obj::point2,"point2");
	HX_MARK_MEMBER_NAME(HXP_obj::zero,"zero");
	HX_MARK_MEMBER_NAME(HXP_obj::rect,"rect");
	HX_MARK_MEMBER_NAME(HXP_obj::matrix,"matrix");
	HX_MARK_MEMBER_NAME(HXP_obj::sprite,"sprite");
	HX_MARK_MEMBER_NAME(HXP_obj::entity,"entity");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HXP_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HXP_obj::VERSION,"VERSION");
	HX_VISIT_MEMBER_NAME(HXP_obj::BASELAYER,"BASELAYER");
	HX_VISIT_MEMBER_NAME(HXP_obj::NUMBER_MAX_VALUE,"NUMBER_MAX_VALUE");
	HX_VISIT_MEMBER_NAME(HXP_obj::blackColor,"blackColor");
	HX_VISIT_MEMBER_NAME(HXP_obj::width,"width");
	HX_VISIT_MEMBER_NAME(HXP_obj::height,"height");
	HX_VISIT_MEMBER_NAME(HXP_obj::windowWidth,"windowWidth");
	HX_VISIT_MEMBER_NAME(HXP_obj::windowHeight,"windowHeight");
	HX_VISIT_MEMBER_NAME(HXP_obj::fixed,"fixed");
	HX_VISIT_MEMBER_NAME(HXP_obj::frameRate,"frameRate");
	HX_VISIT_MEMBER_NAME(HXP_obj::assignedFrameRate,"assignedFrameRate");
	HX_VISIT_MEMBER_NAME(HXP_obj::elapsed,"elapsed");
	HX_VISIT_MEMBER_NAME(HXP_obj::rate,"rate");
	HX_VISIT_MEMBER_NAME(HXP_obj::screen,"screen");
	HX_VISIT_MEMBER_NAME(HXP_obj::buffer,"buffer");
	HX_VISIT_MEMBER_NAME(HXP_obj::bounds,"bounds");
	HX_VISIT_MEMBER_NAME(HXP_obj::defaultFont,"defaultFont");
	HX_VISIT_MEMBER_NAME(HXP_obj::camera,"camera");
	HX_VISIT_MEMBER_NAME(HXP_obj::tweener,"tweener");
	HX_VISIT_MEMBER_NAME(HXP_obj::focused,"focused");
	HX_VISIT_MEMBER_NAME(HXP_obj::halfWidth,"halfWidth");
	HX_VISIT_MEMBER_NAME(HXP_obj::halfHeight,"halfHeight");
	HX_VISIT_MEMBER_NAME(HXP_obj::world,"world");
	HX_VISIT_MEMBER_NAME(HXP_obj::volume,"volume");
	HX_VISIT_MEMBER_NAME(HXP_obj::pan,"pan");
	HX_VISIT_MEMBER_NAME(HXP_obj::randomSeed,"randomSeed");
	HX_VISIT_MEMBER_NAME(HXP_obj::random,"random");
	HX_VISIT_MEMBER_NAME(HXP_obj::console,"console");
	HX_VISIT_MEMBER_NAME(HXP_obj::log,"log");
	HX_VISIT_MEMBER_NAME(HXP_obj::watch,"watch");
	HX_VISIT_MEMBER_NAME(HXP_obj::time,"time");
	HX_VISIT_MEMBER_NAME(HXP_obj::_world,"_world");
	HX_VISIT_MEMBER_NAME(HXP_obj::_goto,"_goto");
	HX_VISIT_MEMBER_NAME(HXP_obj::_console,"_console");
	HX_VISIT_MEMBER_NAME(HXP_obj::_time,"_time");
	HX_VISIT_MEMBER_NAME(HXP_obj::_updateTime,"_updateTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_renderTime,"_renderTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_gameTime,"_gameTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_flashTime,"_flashTime");
	HX_VISIT_MEMBER_NAME(HXP_obj::_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(HXP_obj::_seed,"_seed");
	HX_VISIT_MEMBER_NAME(HXP_obj::_volume,"_volume");
	HX_VISIT_MEMBER_NAME(HXP_obj::_pan,"_pan");
	HX_VISIT_MEMBER_NAME(HXP_obj::_soundTransform,"_soundTransform");
	HX_VISIT_MEMBER_NAME(HXP_obj::DEG,"DEG");
	HX_VISIT_MEMBER_NAME(HXP_obj::RAD,"RAD");
	HX_VISIT_MEMBER_NAME(HXP_obj::stage,"stage");
	HX_VISIT_MEMBER_NAME(HXP_obj::engine,"engine");
	HX_VISIT_MEMBER_NAME(HXP_obj::point,"point");
	HX_VISIT_MEMBER_NAME(HXP_obj::point2,"point2");
	HX_VISIT_MEMBER_NAME(HXP_obj::zero,"zero");
	HX_VISIT_MEMBER_NAME(HXP_obj::rect,"rect");
	HX_VISIT_MEMBER_NAME(HXP_obj::matrix,"matrix");
	HX_VISIT_MEMBER_NAME(HXP_obj::sprite,"sprite");
	HX_VISIT_MEMBER_NAME(HXP_obj::entity,"entity");
};

Class HXP_obj::__mClass;

void HXP_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.HXP"), hx::TCanCast< HXP_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void HXP_obj::__boot()
{
	VERSION= HX_CSTRING("1.6.7");
	BASELAYER= (int)10;
	NUMBER_MAX_VALUE= ((int)179 * ::Math_obj::pow((int)10,(int)306));
	blackColor= (int)0;
	frameRate= (int)0;
	rate= (int)1;
	defaultFont= HX_CSTRING("font/04B_03__.ttf");
	camera= ::neash::geom::Point_obj::__new(null(),null());
	tweener= ::com::haxepunk::Tweener_obj::__new();
	focused= false;

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_1)
Void run(Dynamic data){
	HX_STACK_PUSH("*::_Function_0_1","com/haxepunk/HXP.hx",814);
	HX_STACK_ARG(data,"data");
	{
		HX_STACK_LINE(814)
		if (((::com::haxepunk::HXP_obj::_console != null()))){
			HX_STACK_LINE(816)
			::com::haxepunk::HXP_obj::_console->log(data);
		}
	}
	return null();
}
HX_END_LOCAL_FUNC1((void))

	log= ::Reflect_obj::makeVarArgs( Dynamic(new _Function_0_1()));

HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_0_2)
Void run(Dynamic properties){
	HX_STACK_PUSH("*::_Function_0_2","com/haxepunk/HXP.hx",826);
	HX_STACK_ARG(properties,"properties");
	{
		HX_STACK_LINE(826)
		if (((::com::haxepunk::HXP_obj::_console != null()))){
			HX_STACK_LINE(828)
			::com::haxepunk::HXP_obj::_console->watch(properties);
		}
	}
	return null();
}
HX_END_LOCAL_FUNC1((void))

	watch= ::Reflect_obj::makeVarArgs( Dynamic(new _Function_0_2()));
	_world= ::com::haxepunk::World_obj::__new();
	_bitmap= ::Hash_obj::__new();
	_seed= (int)0;
	_volume= (int)1;
	_pan= (int)0;
	_soundTransform= ::neash::media::SoundTransform_obj::__new(null(),null());
	DEG= (Float((int)-180) / Float(::Math_obj::PI));
	RAD= (Float(::Math_obj::PI) / Float((int)-180));
	point= ::neash::geom::Point_obj::__new(null(),null());
	point2= ::neash::geom::Point_obj::__new(null(),null());
	zero= ::neash::geom::Point_obj::__new(null(),null());
	rect= ::neash::geom::Rectangle_obj::__new(null(),null(),null(),null());
	matrix= ::neash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
	sprite= ::neash::display::Sprite_obj::__new();
}

} // end namespace com
} // end namespace haxepunk
