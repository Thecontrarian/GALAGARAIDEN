#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_IntHash
#include <IntHash.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Joystick
#include <com/haxepunk/utils/Joystick.h>
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
#ifndef INCLUDED_neash_display_Stage
#include <neash/display/Stage.h>
#endif
#ifndef INCLUDED_neash_events_Event
#include <neash/events/Event.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_JoystickEvent
#include <neash/events/JoystickEvent.h>
#endif
#ifndef INCLUDED_neash_events_KeyboardEvent
#include <neash/events/KeyboardEvent.h>
#endif
#ifndef INCLUDED_neash_events_MouseEvent
#include <neash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Input_obj::__construct()
{
	return null();
}

Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > result = new Input_obj();
	result->__construct();
	return result;}

::String Input_obj::keyString;

Float Input_obj::deadZone;

int Input_obj::lastKey;

bool Input_obj::mouseDown;

bool Input_obj::mouseUp;

bool Input_obj::mousePressed;

bool Input_obj::mouseReleased;

bool Input_obj::mouseWheel;

int Input_obj::mouseX;

int Input_obj::getMouseX( ){
	HX_STACK_PUSH("Input::getMouseX","com/haxepunk/utils/Input.hx",30);
	HX_STACK_LINE(30)
	return ::com::haxepunk::HXP_obj::screen->getMouseX();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,getMouseX,return )

int Input_obj::mouseY;

int Input_obj::getMouseY( ){
	HX_STACK_PUSH("Input::getMouseY","com/haxepunk/utils/Input.hx",39);
	HX_STACK_LINE(39)
	return ::com::haxepunk::HXP_obj::screen->getMouseY();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,getMouseY,return )

int Input_obj::mouseFlashX;

int Input_obj::getMouseFlashX( ){
	HX_STACK_PUSH("Input::getMouseFlashX","com/haxepunk/utils/Input.hx",48);
	HX_STACK_LINE(48)
	return ::Std_obj::_int(::com::haxepunk::HXP_obj::stage->nmeGetMouseX());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,getMouseFlashX,return )

int Input_obj::mouseFlashY;

int Input_obj::getMouseFlashY( ){
	HX_STACK_PUSH("Input::getMouseFlashY","com/haxepunk/utils/Input.hx",57);
	HX_STACK_LINE(57)
	return ::Std_obj::_int(::com::haxepunk::HXP_obj::stage->nmeGetMouseY());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,getMouseFlashY,return )

Void Input_obj::define( ::String name,Array< int > keys){
{
		HX_STACK_PUSH("Input::define","com/haxepunk/utils/Input.hx",67);
		HX_STACK_ARG(name,"name");
		HX_STACK_ARG(keys,"keys");
		HX_STACK_LINE(67)
		::com::haxepunk::utils::Input_obj::_control->set(name,keys);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Input_obj,define,(void))

bool Input_obj::check( Dynamic input){
	HX_STACK_PUSH("Input::check","com/haxepunk/utils/Input.hx",77);
	HX_STACK_ARG(input,"input");
	HX_STACK_LINE(78)
	if ((::Std_obj::is(input,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(80)
		Array< int > v = ::com::haxepunk::utils::Input_obj::_control->get(input);		HX_STACK_VAR(v,"v");
		int i = v->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(82)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(84)
			if (((v->__get(i) < (int)0))){
				HX_STACK_LINE(86)
				if (((::com::haxepunk::utils::Input_obj::_keyNum > (int)0))){
					HX_STACK_LINE(86)
					return true;
				}
				HX_STACK_LINE(87)
				continue;
			}
			HX_STACK_LINE(89)
			if (((::com::haxepunk::utils::Input_obj::_key->__get(v->__get(i)) == true))){
				HX_STACK_LINE(89)
				return true;
			}
		}
		HX_STACK_LINE(91)
		return false;
	}
	HX_STACK_LINE(93)
	return (  (((input < (int)0))) ? bool((::com::haxepunk::utils::Input_obj::_keyNum > (int)0)) : bool(::com::haxepunk::utils::Input_obj::_key->__get(input)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,check,return )

bool Input_obj::pressed( Dynamic input){
	HX_STACK_PUSH("Input::pressed","com/haxepunk/utils/Input.hx",102);
	HX_STACK_ARG(input,"input");
	HX_STACK_LINE(103)
	if ((::Std_obj::is(input,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(105)
		Array< int > v = ::com::haxepunk::utils::Input_obj::_control->get(input);		HX_STACK_VAR(v,"v");
		int i = v->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(107)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(108)
			if (((  (((v->__get(i) < (int)0))) ? bool((::com::haxepunk::utils::Input_obj::_pressNum != (int)0)) : bool((::com::haxepunk::utils::Input_obj::indexOf(::com::haxepunk::utils::Input_obj::_press,v->__get(i)) >= (int)0)) ))){
				HX_STACK_LINE(109)
				return true;
			}
		}
		HX_STACK_LINE(111)
		return false;
	}
	HX_STACK_LINE(113)
	return (  (((input < (int)0))) ? bool((::com::haxepunk::utils::Input_obj::_pressNum != (int)0)) : bool((::com::haxepunk::utils::Input_obj::indexOf(::com::haxepunk::utils::Input_obj::_press,input) >= (int)0)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,pressed,return )

bool Input_obj::released( Dynamic input){
	HX_STACK_PUSH("Input::released","com/haxepunk/utils/Input.hx",122);
	HX_STACK_ARG(input,"input");
	HX_STACK_LINE(123)
	if ((::Std_obj::is(input,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(125)
		Array< int > v = ::com::haxepunk::utils::Input_obj::_control->get(input);		HX_STACK_VAR(v,"v");
		int i = v->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(127)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(128)
			if (((  (((v->__get(i) < (int)0))) ? bool((::com::haxepunk::utils::Input_obj::_releaseNum != (int)0)) : bool((::com::haxepunk::utils::Input_obj::indexOf(::com::haxepunk::utils::Input_obj::_release,v->__get(i)) >= (int)0)) ))){
				HX_STACK_LINE(129)
				return true;
			}
		}
		HX_STACK_LINE(131)
		return false;
	}
	HX_STACK_LINE(133)
	return (  (((input < (int)0))) ? bool((::com::haxepunk::utils::Input_obj::_releaseNum != (int)0)) : bool((::com::haxepunk::utils::Input_obj::indexOf(::com::haxepunk::utils::Input_obj::_release,input) >= (int)0)) );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,released,return )

int Input_obj::indexOf( Array< int > a,int v){
	HX_STACK_PUSH("Input::indexOf","com/haxepunk/utils/Input.hx",143);
	HX_STACK_ARG(a,"a");
	HX_STACK_ARG(v,"v");
	HX_STACK_LINE(144)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(145)
	{
		HX_STACK_LINE(145)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(145)
		while(((_g < a->length))){
			HX_STACK_LINE(145)
			int v2 = a->__get(_g);		HX_STACK_VAR(v2,"v2");
			HX_STACK_LINE(145)
			++(_g);
			HX_STACK_LINE(146)
			if (((v == v2))){
				HX_STACK_LINE(147)
				return i;
			}
			HX_STACK_LINE(148)
			(i)++;
		}
	}
	HX_STACK_LINE(150)
	return (int)-1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Input_obj,indexOf,return )

::com::haxepunk::utils::Joystick Input_obj::joystick( int id){
	HX_STACK_PUSH("Input::joystick","com/haxepunk/utils/Input.hx",154);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(155)
	::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::_joysticks->get(id);		HX_STACK_VAR(joy,"joy");
	HX_STACK_LINE(156)
	if (((joy == null()))){
		HX_STACK_LINE(158)
		joy = ::com::haxepunk::utils::Joystick_obj::__new();
		HX_STACK_LINE(159)
		::com::haxepunk::utils::Input_obj::_joysticks->set(id,joy);
	}
	HX_STACK_LINE(161)
	return joy;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,joystick,return )

Void Input_obj::enable( ){
{
		HX_STACK_PUSH("Input::enable","com/haxepunk/utils/Input.hx",165);
		HX_STACK_LINE(165)
		if (((bool(!(::com::haxepunk::utils::Input_obj::_enabled)) && bool((::com::haxepunk::HXP_obj::stage != null()))))){
			HX_STACK_LINE(168)
			::com::haxepunk::HXP_obj::stage->addEventListener(::neash::events::KeyboardEvent_obj::KEY_DOWN,::com::haxepunk::utils::Input_obj::onKeyDown_dyn(),false,(int)2,null());
			HX_STACK_LINE(169)
			::com::haxepunk::HXP_obj::stage->addEventListener(::neash::events::KeyboardEvent_obj::KEY_UP,::com::haxepunk::utils::Input_obj::onKeyUp_dyn(),false,(int)2,null());
			HX_STACK_LINE(170)
			::com::haxepunk::HXP_obj::stage->addEventListener(::neash::events::MouseEvent_obj::MOUSE_DOWN,::com::haxepunk::utils::Input_obj::onMouseDown_dyn(),false,(int)2,null());
			HX_STACK_LINE(171)
			::com::haxepunk::HXP_obj::stage->addEventListener(::neash::events::MouseEvent_obj::MOUSE_UP,::com::haxepunk::utils::Input_obj::onMouseUp_dyn(),false,(int)2,null());
			HX_STACK_LINE(172)
			::com::haxepunk::HXP_obj::stage->addEventListener(::neash::events::MouseEvent_obj::MOUSE_WHEEL,::com::haxepunk::utils::Input_obj::onMouseWheel_dyn(),false,(int)2,null());
			HX_STACK_LINE(175)
			::com::haxepunk::HXP_obj::stage->addEventListener(::neash::events::JoystickEvent_obj::AXIS_MOVE,::com::haxepunk::utils::Input_obj::onJoyAxisMove_dyn(),null(),null(),null());
			HX_STACK_LINE(176)
			::com::haxepunk::HXP_obj::stage->addEventListener(::neash::events::JoystickEvent_obj::BALL_MOVE,::com::haxepunk::utils::Input_obj::onJoyBallMove_dyn(),null(),null(),null());
			HX_STACK_LINE(177)
			::com::haxepunk::HXP_obj::stage->addEventListener(::neash::events::JoystickEvent_obj::BUTTON_DOWN,::com::haxepunk::utils::Input_obj::onJoyButtonDown_dyn(),null(),null(),null());
			HX_STACK_LINE(178)
			::com::haxepunk::HXP_obj::stage->addEventListener(::neash::events::JoystickEvent_obj::BUTTON_UP,::com::haxepunk::utils::Input_obj::onJoyButtonUp_dyn(),null(),null(),null());
			HX_STACK_LINE(179)
			::com::haxepunk::HXP_obj::stage->addEventListener(::neash::events::JoystickEvent_obj::HAT_MOVE,::com::haxepunk::utils::Input_obj::onJoyHatMove_dyn(),null(),null(),null());
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,enable,(void))

Void Input_obj::update( ){
{
		HX_STACK_PUSH("Input::update","com/haxepunk/utils/Input.hx",185);
		HX_STACK_LINE(186)
		while((((::com::haxepunk::utils::Input_obj::_pressNum)-- > (int)-1))){
			HX_STACK_LINE(186)
			::com::haxepunk::utils::Input_obj::_press[::com::haxepunk::utils::Input_obj::_pressNum] = (int)-1;
		}
		HX_STACK_LINE(187)
		::com::haxepunk::utils::Input_obj::_pressNum = (int)0;
		HX_STACK_LINE(188)
		while((((::com::haxepunk::utils::Input_obj::_releaseNum)-- > (int)-1))){
			HX_STACK_LINE(188)
			::com::haxepunk::utils::Input_obj::_release[::com::haxepunk::utils::Input_obj::_releaseNum] = (int)-1;
		}
		HX_STACK_LINE(189)
		::com::haxepunk::utils::Input_obj::_releaseNum = (int)0;
		HX_STACK_LINE(190)
		if ((::com::haxepunk::utils::Input_obj::mousePressed)){
			HX_STACK_LINE(190)
			::com::haxepunk::utils::Input_obj::mousePressed = false;
		}
		HX_STACK_LINE(191)
		if ((::com::haxepunk::utils::Input_obj::mouseReleased)){
			HX_STACK_LINE(191)
			::com::haxepunk::utils::Input_obj::mouseReleased = false;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Input_obj,update,(void))

Void Input_obj::onKeyDown( ::neash::events::KeyboardEvent e){
{
		HX_STACK_PUSH("Input::onKeyDown","com/haxepunk/utils/Input.hx",195);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(196)
		int code = ::com::haxepunk::utils::Input_obj::lastKey = e->keyCode;		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(198)
		if (((code == (int)8))){
			HX_STACK_LINE(198)
			::com::haxepunk::utils::Input_obj::keyString = ::com::haxepunk::utils::Input_obj::keyString.substr((int)0,(::com::haxepunk::utils::Input_obj::keyString.length - (int)1));
		}
		else{
			HX_STACK_LINE(199)
			if (((bool((bool((bool((code > (int)47)) && bool((code < (int)58)))) || bool((bool((code > (int)64)) && bool((code < (int)91)))))) || bool((code == (int)32))))){
				HX_STACK_LINE(201)
				if (((::com::haxepunk::utils::Input_obj::keyString.length > (int)100))){
					HX_STACK_LINE(201)
					::com::haxepunk::utils::Input_obj::keyString = ::com::haxepunk::utils::Input_obj::keyString.substr((int)1,null());
				}
				HX_STACK_LINE(202)
				::String _char = ::String::fromCharCode(code);		HX_STACK_VAR(_char,"char");
				HX_STACK_LINE(207)
				hx::AddEq(::com::haxepunk::utils::Input_obj::keyString,_char);
			}
		}
		HX_STACK_LINE(210)
		if ((!(::com::haxepunk::utils::Input_obj::_key->__get(code)))){
			HX_STACK_LINE(212)
			::com::haxepunk::utils::Input_obj::_key[code] = true;
			HX_STACK_LINE(213)
			(::com::haxepunk::utils::Input_obj::_keyNum)++;
			HX_STACK_LINE(214)
			::com::haxepunk::utils::Input_obj::_press[(::com::haxepunk::utils::Input_obj::_pressNum)++] = code;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onKeyDown,(void))

Void Input_obj::onKeyUp( ::neash::events::KeyboardEvent e){
{
		HX_STACK_PUSH("Input::onKeyUp","com/haxepunk/utils/Input.hx",219);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(220)
		int code = e->keyCode;		HX_STACK_VAR(code,"code");
		HX_STACK_LINE(221)
		if ((::com::haxepunk::utils::Input_obj::_key->__get(code))){
			HX_STACK_LINE(223)
			::com::haxepunk::utils::Input_obj::_key[code] = false;
			HX_STACK_LINE(224)
			(::com::haxepunk::utils::Input_obj::_keyNum)--;
			HX_STACK_LINE(225)
			::com::haxepunk::utils::Input_obj::_release[(::com::haxepunk::utils::Input_obj::_releaseNum)++] = code;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onKeyUp,(void))

Void Input_obj::onMouseDown( ::neash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onMouseDown","com/haxepunk/utils/Input.hx",230);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(230)
		if ((!(::com::haxepunk::utils::Input_obj::mouseDown))){
			HX_STACK_LINE(233)
			::com::haxepunk::utils::Input_obj::mouseDown = true;
			HX_STACK_LINE(234)
			::com::haxepunk::utils::Input_obj::mouseUp = false;
			HX_STACK_LINE(235)
			::com::haxepunk::utils::Input_obj::mousePressed = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseDown,(void))

Void Input_obj::onMouseUp( ::neash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onMouseUp","com/haxepunk/utils/Input.hx",240);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(241)
		::com::haxepunk::utils::Input_obj::mouseDown = false;
		HX_STACK_LINE(242)
		::com::haxepunk::utils::Input_obj::mouseUp = true;
		HX_STACK_LINE(243)
		::com::haxepunk::utils::Input_obj::mouseReleased = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseUp,(void))

Void Input_obj::onMouseWheel( ::neash::events::MouseEvent e){
{
		HX_STACK_PUSH("Input::onMouseWheel","com/haxepunk/utils/Input.hx",247);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(248)
		::com::haxepunk::utils::Input_obj::mouseWheel = true;
		HX_STACK_LINE(249)
		::com::haxepunk::utils::Input_obj::_mouseWheelDelta = e->delta;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onMouseWheel,(void))

Void Input_obj::onJoyAxisMove( ::neash::events::JoystickEvent e){
{
		HX_STACK_PUSH("Input::onJoyAxisMove","com/haxepunk/utils/Input.hx",255);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(256)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(258)
		joy->connected = true;
		HX_STACK_LINE(259)
		joy->axis->x = (  (((::Math_obj::abs(e->x) < ::com::haxepunk::utils::Input_obj::deadZone))) ? Float((int)0) : Float(e->x) );
		HX_STACK_LINE(260)
		joy->axis->y = (  (((::Math_obj::abs(e->y) < ::com::haxepunk::utils::Input_obj::deadZone))) ? Float((int)0) : Float(e->y) );
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyAxisMove,(void))

Void Input_obj::onJoyBallMove( ::neash::events::JoystickEvent e){
{
		HX_STACK_PUSH("Input::onJoyBallMove","com/haxepunk/utils/Input.hx",264);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(265)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(267)
		joy->connected = true;
		HX_STACK_LINE(268)
		joy->ball->x = (  (((::Math_obj::abs(e->x) < ::com::haxepunk::utils::Input_obj::deadZone))) ? Float((int)0) : Float(e->x) );
		HX_STACK_LINE(269)
		joy->ball->y = (  (((::Math_obj::abs(e->y) < ::com::haxepunk::utils::Input_obj::deadZone))) ? Float((int)0) : Float(e->y) );
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyBallMove,(void))

Void Input_obj::onJoyButtonDown( ::neash::events::JoystickEvent e){
{
		HX_STACK_PUSH("Input::onJoyButtonDown","com/haxepunk/utils/Input.hx",273);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(274)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(276)
		joy->connected = true;
		HX_STACK_LINE(277)
		if (((e->id < (int)8))){
			HX_STACK_LINE(278)
			joy->buttons[e->id] = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyButtonDown,(void))

Void Input_obj::onJoyButtonUp( ::neash::events::JoystickEvent e){
{
		HX_STACK_PUSH("Input::onJoyButtonUp","com/haxepunk/utils/Input.hx",282);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(283)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(285)
		joy->connected = true;
		HX_STACK_LINE(286)
		if (((e->id < (int)8))){
			HX_STACK_LINE(287)
			joy->buttons[e->id] = false;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyButtonUp,(void))

Void Input_obj::onJoyHatMove( ::neash::events::JoystickEvent e){
{
		HX_STACK_PUSH("Input::onJoyHatMove","com/haxepunk/utils/Input.hx",291);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(292)
		::com::haxepunk::utils::Joystick joy = ::com::haxepunk::utils::Input_obj::joystick(e->device);		HX_STACK_VAR(joy,"joy");
		HX_STACK_LINE(294)
		joy->connected = true;
		HX_STACK_LINE(295)
		joy->hat->x = (  (((::Math_obj::abs(e->x) < ::com::haxepunk::utils::Input_obj::deadZone))) ? Float((int)0) : Float(e->x) );
		HX_STACK_LINE(296)
		joy->hat->y = (  (((::Math_obj::abs(e->y) < ::com::haxepunk::utils::Input_obj::deadZone))) ? Float((int)0) : Float(e->y) );
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Input_obj,onJoyHatMove,(void))

int Input_obj::kKeyStringMax;

bool Input_obj::_enabled;

::IntHash Input_obj::_joysticks;

Array< bool > Input_obj::_key;

int Input_obj::_keyNum;

Array< int > Input_obj::_press;

int Input_obj::_pressNum;

Array< int > Input_obj::_release;

int Input_obj::_releaseNum;

::Hash Input_obj::_control;

int Input_obj::_mouseWheelDelta;


Input_obj::Input_obj()
{
}

void Input_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Input);
	HX_MARK_END_CLASS();
}

void Input_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Input_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_key") ) { return _key; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"check") ) { return check_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp ? getMouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp ? getMouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"define") ) { return define_dyn(); }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"_press") ) { return _press; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lastKey") ) { return lastKey; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { return mouseUp; }
		if (HX_FIELD_EQ(inName,"pressed") ) { return pressed_dyn(); }
		if (HX_FIELD_EQ(inName,"indexOf") ) { return indexOf_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyUp") ) { return onKeyUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_keyNum") ) { return _keyNum; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { return deadZone; }
		if (HX_FIELD_EQ(inName,"released") ) { return released_dyn(); }
		if (HX_FIELD_EQ(inName,"joystick") ) { return joystick_dyn(); }
		if (HX_FIELD_EQ(inName,"_enabled") ) { return _enabled; }
		if (HX_FIELD_EQ(inName,"_release") ) { return _release; }
		if (HX_FIELD_EQ(inName,"_control") ) { return _control; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyString") ) { return keyString; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { return mouseDown; }
		if (HX_FIELD_EQ(inName,"getMouseX") ) { return getMouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseY") ) { return getMouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"onKeyDown") ) { return onKeyDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"_pressNum") ) { return _pressNum; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mouseWheel") ) { return mouseWheel; }
		if (HX_FIELD_EQ(inName,"_joysticks") ) { return _joysticks; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseFlashX") ) { return inCallProp ? getMouseFlashX() : mouseFlashX; }
		if (HX_FIELD_EQ(inName,"mouseFlashY") ) { return inCallProp ? getMouseFlashY() : mouseFlashY; }
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"_releaseNum") ) { return _releaseNum; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mousePressed") ) { return mousePressed; }
		if (HX_FIELD_EQ(inName,"onMouseWheel") ) { return onMouseWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyHatMove") ) { return onJoyHatMove_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseReleased") ) { return mouseReleased; }
		if (HX_FIELD_EQ(inName,"onJoyAxisMove") ) { return onJoyAxisMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyBallMove") ) { return onJoyBallMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onJoyButtonUp") ) { return onJoyButtonUp_dyn(); }
		if (HX_FIELD_EQ(inName,"kKeyStringMax") ) { return kKeyStringMax; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getMouseFlashX") ) { return getMouseFlashX_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseFlashY") ) { return getMouseFlashY_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"onJoyButtonDown") ) { return onJoyButtonDown_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseWheelDelta") ) { return _mouseWheelDelta; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Input_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_key") ) { _key=inValue.Cast< Array< bool > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_press") ) { _press=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lastKey") ) { lastKey=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseUp") ) { mouseUp=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_keyNum") ) { _keyNum=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"deadZone") ) { deadZone=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_enabled") ) { _enabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_release") ) { _release=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_control") ) { _control=inValue.Cast< ::Hash >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"keyString") ) { keyString=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseDown") ) { mouseDown=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pressNum") ) { _pressNum=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"mouseWheel") ) { mouseWheel=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_joysticks") ) { _joysticks=inValue.Cast< ::IntHash >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"mouseFlashX") ) { mouseFlashX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseFlashY") ) { mouseFlashY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_releaseNum") ) { _releaseNum=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mousePressed") ) { mousePressed=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseReleased") ) { mouseReleased=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"kKeyStringMax") ) { kKeyStringMax=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_mouseWheelDelta") ) { _mouseWheelDelta=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Input_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("keyString"),
	HX_CSTRING("deadZone"),
	HX_CSTRING("lastKey"),
	HX_CSTRING("mouseDown"),
	HX_CSTRING("mouseUp"),
	HX_CSTRING("mousePressed"),
	HX_CSTRING("mouseReleased"),
	HX_CSTRING("mouseWheel"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("getMouseX"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("getMouseY"),
	HX_CSTRING("mouseFlashX"),
	HX_CSTRING("getMouseFlashX"),
	HX_CSTRING("mouseFlashY"),
	HX_CSTRING("getMouseFlashY"),
	HX_CSTRING("define"),
	HX_CSTRING("check"),
	HX_CSTRING("pressed"),
	HX_CSTRING("released"),
	HX_CSTRING("indexOf"),
	HX_CSTRING("joystick"),
	HX_CSTRING("enable"),
	HX_CSTRING("update"),
	HX_CSTRING("onKeyDown"),
	HX_CSTRING("onKeyUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseWheel"),
	HX_CSTRING("onJoyAxisMove"),
	HX_CSTRING("onJoyBallMove"),
	HX_CSTRING("onJoyButtonDown"),
	HX_CSTRING("onJoyButtonUp"),
	HX_CSTRING("onJoyHatMove"),
	HX_CSTRING("kKeyStringMax"),
	HX_CSTRING("_enabled"),
	HX_CSTRING("_joysticks"),
	HX_CSTRING("_key"),
	HX_CSTRING("_keyNum"),
	HX_CSTRING("_press"),
	HX_CSTRING("_pressNum"),
	HX_CSTRING("_release"),
	HX_CSTRING("_releaseNum"),
	HX_CSTRING("_control"),
	HX_CSTRING("_mouseWheelDelta"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Input_obj::keyString,"keyString");
	HX_MARK_MEMBER_NAME(Input_obj::deadZone,"deadZone");
	HX_MARK_MEMBER_NAME(Input_obj::lastKey,"lastKey");
	HX_MARK_MEMBER_NAME(Input_obj::mouseDown,"mouseDown");
	HX_MARK_MEMBER_NAME(Input_obj::mouseUp,"mouseUp");
	HX_MARK_MEMBER_NAME(Input_obj::mousePressed,"mousePressed");
	HX_MARK_MEMBER_NAME(Input_obj::mouseReleased,"mouseReleased");
	HX_MARK_MEMBER_NAME(Input_obj::mouseWheel,"mouseWheel");
	HX_MARK_MEMBER_NAME(Input_obj::mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(Input_obj::mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(Input_obj::mouseFlashX,"mouseFlashX");
	HX_MARK_MEMBER_NAME(Input_obj::mouseFlashY,"mouseFlashY");
	HX_MARK_MEMBER_NAME(Input_obj::kKeyStringMax,"kKeyStringMax");
	HX_MARK_MEMBER_NAME(Input_obj::_enabled,"_enabled");
	HX_MARK_MEMBER_NAME(Input_obj::_joysticks,"_joysticks");
	HX_MARK_MEMBER_NAME(Input_obj::_key,"_key");
	HX_MARK_MEMBER_NAME(Input_obj::_keyNum,"_keyNum");
	HX_MARK_MEMBER_NAME(Input_obj::_press,"_press");
	HX_MARK_MEMBER_NAME(Input_obj::_pressNum,"_pressNum");
	HX_MARK_MEMBER_NAME(Input_obj::_release,"_release");
	HX_MARK_MEMBER_NAME(Input_obj::_releaseNum,"_releaseNum");
	HX_MARK_MEMBER_NAME(Input_obj::_control,"_control");
	HX_MARK_MEMBER_NAME(Input_obj::_mouseWheelDelta,"_mouseWheelDelta");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Input_obj::keyString,"keyString");
	HX_VISIT_MEMBER_NAME(Input_obj::deadZone,"deadZone");
	HX_VISIT_MEMBER_NAME(Input_obj::lastKey,"lastKey");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseDown,"mouseDown");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseUp,"mouseUp");
	HX_VISIT_MEMBER_NAME(Input_obj::mousePressed,"mousePressed");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseReleased,"mouseReleased");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseWheel,"mouseWheel");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseFlashX,"mouseFlashX");
	HX_VISIT_MEMBER_NAME(Input_obj::mouseFlashY,"mouseFlashY");
	HX_VISIT_MEMBER_NAME(Input_obj::kKeyStringMax,"kKeyStringMax");
	HX_VISIT_MEMBER_NAME(Input_obj::_enabled,"_enabled");
	HX_VISIT_MEMBER_NAME(Input_obj::_joysticks,"_joysticks");
	HX_VISIT_MEMBER_NAME(Input_obj::_key,"_key");
	HX_VISIT_MEMBER_NAME(Input_obj::_keyNum,"_keyNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_press,"_press");
	HX_VISIT_MEMBER_NAME(Input_obj::_pressNum,"_pressNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_release,"_release");
	HX_VISIT_MEMBER_NAME(Input_obj::_releaseNum,"_releaseNum");
	HX_VISIT_MEMBER_NAME(Input_obj::_control,"_control");
	HX_VISIT_MEMBER_NAME(Input_obj::_mouseWheelDelta,"_mouseWheelDelta");
};

Class Input_obj::__mClass;

void Input_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.Input"), hx::TCanCast< Input_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Input_obj::__boot()
{
	keyString= HX_CSTRING("");
	deadZone= 0.05;
	kKeyStringMax= (int)100;
	_enabled= false;
	_joysticks= ::IntHash_obj::__new();
	_key= Array_obj< bool >::__new();
	_keyNum= (int)0;
	_press= Array_obj< int >::__new();
	_pressNum= (int)0;
	_release= Array_obj< int >::__new();
	_releaseNum= (int)0;
	_control= ::Hash_obj::__new();
	_mouseWheelDelta= (int)0;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
