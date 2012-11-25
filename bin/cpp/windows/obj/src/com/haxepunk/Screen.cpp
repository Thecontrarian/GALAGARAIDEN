#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_neash_display_Bitmap
#include <neash/display/Bitmap.h>
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
#ifndef INCLUDED_neash_display_PixelSnapping
#include <neash/display/PixelSnapping.h>
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
#ifndef INCLUDED_neash_filters_BitmapFilter
#include <neash/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_neash_geom_Matrix
#include <neash/geom/Matrix.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_neash_geom_Transform
#include <neash/geom/Transform.h>
#endif
namespace com{
namespace haxepunk{

Void Screen_obj::__construct()
{
HX_STACK_PUSH("Screen::new","com/haxepunk/Screen.hx",21);
{
	HX_STACK_LINE(22)
	this->init();
	HX_STACK_LINE(25)
	::com::haxepunk::HXP_obj::engine->addChild(this->_sprite);
	HX_STACK_LINE(29)
	::com::haxepunk::HXP_obj::engine->addChild(::com::haxepunk::HXP_obj::sprite);
}
;
	return null();
}

Screen_obj::~Screen_obj() { }

Dynamic Screen_obj::__CreateEmpty() { return  new Screen_obj; }
hx::ObjectPtr< Screen_obj > Screen_obj::__new()
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct();
	return result;}

Dynamic Screen_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Screen_obj > result = new Screen_obj();
	result->__construct();
	return result;}

::com::haxepunk::graphics::Image Screen_obj::capture( ){
	HX_STACK_PUSH("Screen::capture","com/haxepunk/Screen.hx",265);
	HX_STACK_THIS(this);
	HX_STACK_LINE(265)
	return ::com::haxepunk::graphics::Image_obj::__new(this->_bitmap->__get(this->_current)->bitmapData->clone(),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,capture,return )

int Screen_obj::getMouseY( ){
	HX_STACK_PUSH("Screen::getMouseY","com/haxepunk/Screen.hx",258);
	HX_STACK_THIS(this);
	HX_STACK_LINE(258)
	return ::Std_obj::_int((Float(((::com::haxepunk::HXP_obj::stage->nmeGetMouseY() - this->y))) / Float(((this->scaleY * this->scale)))));
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,getMouseY,return )

int Screen_obj::getMouseX( ){
	HX_STACK_PUSH("Screen::getMouseX","com/haxepunk/Screen.hx",252);
	HX_STACK_THIS(this);
	HX_STACK_LINE(252)
	return ::Std_obj::_int((Float(((::com::haxepunk::HXP_obj::stage->nmeGetMouseX() - this->x))) / Float(((this->scaleX * this->scale)))));
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,getMouseX,return )

bool Screen_obj::setSmoothing( bool value){
	HX_STACK_PUSH("Screen::setSmoothing","com/haxepunk/Screen.hx",236);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(236)
	this->_bitmap->__get((int)0)->nmeSetSmoothing(this->_bitmap->__get((int)1)->nmeSetSmoothing(value));
	HX_STACK_LINE(236)
	return value;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,setSmoothing,return )

bool Screen_obj::getSmoothing( ){
	HX_STACK_PUSH("Screen::getSmoothing","com/haxepunk/Screen.hx",235);
	HX_STACK_THIS(this);
	HX_STACK_LINE(235)
	return this->_bitmap->__get((int)0)->smoothing;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,getSmoothing,return )

Float Screen_obj::setAngle( Float value){
	HX_STACK_PUSH("Screen::setAngle","com/haxepunk/Screen.hx",224);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(225)
	if (((this->_angle == (value * ((Float(::Math_obj::PI) / Float((int)-180))))))){
		HX_STACK_LINE(225)
		return value;
	}
	HX_STACK_LINE(226)
	this->_angle = (value * ((Float(::Math_obj::PI) / Float((int)-180))));
	HX_STACK_LINE(227)
	this->update();
	HX_STACK_LINE(228)
	return this->_angle;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,setAngle,return )

Float Screen_obj::getAngle( ){
	HX_STACK_PUSH("Screen::getAngle","com/haxepunk/Screen.hx",222);
	HX_STACK_THIS(this);
	HX_STACK_LINE(222)
	return (this->_angle * ((Float((int)-180) / Float(::Math_obj::PI))));
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,getAngle,return )

Float Screen_obj::setScale( Float value){
	HX_STACK_PUSH("Screen::setScale","com/haxepunk/Screen.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(212)
	if (((this->scale == value))){
		HX_STACK_LINE(212)
		return value;
	}
	HX_STACK_LINE(213)
	this->scale = value;
	HX_STACK_LINE(214)
	this->update();
	HX_STACK_LINE(215)
	return this->scale;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,setScale,return )

Float Screen_obj::setScaleY( Float value){
	HX_STACK_PUSH("Screen::setScaleY","com/haxepunk/Screen.hx",198);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(199)
	if (((this->scaleY == value))){
		HX_STACK_LINE(199)
		return value;
	}
	HX_STACK_LINE(200)
	this->scaleY = value;
	HX_STACK_LINE(201)
	this->update();
	HX_STACK_LINE(202)
	return this->scaleY;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,setScaleY,return )

Float Screen_obj::setScaleX( Float value){
	HX_STACK_PUSH("Screen::setScaleX","com/haxepunk/Screen.hx",186);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(187)
	if (((this->scaleX == value))){
		HX_STACK_LINE(187)
		return value;
	}
	HX_STACK_LINE(188)
	this->scaleX = value;
	HX_STACK_LINE(189)
	this->update();
	HX_STACK_LINE(190)
	return this->scaleX;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,setScaleX,return )

int Screen_obj::setOriginY( int value){
	HX_STACK_PUSH("Screen::setOriginY","com/haxepunk/Screen.hx",174);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(175)
	if (((this->originY == value))){
		HX_STACK_LINE(175)
		return value;
	}
	HX_STACK_LINE(176)
	this->originY = value;
	HX_STACK_LINE(177)
	this->update();
	HX_STACK_LINE(178)
	return this->originY;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,setOriginY,return )

int Screen_obj::setOriginX( int value){
	HX_STACK_PUSH("Screen::setOriginX","com/haxepunk/Screen.hx",162);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(163)
	if (((this->originX == value))){
		HX_STACK_LINE(163)
		return value;
	}
	HX_STACK_LINE(164)
	this->originX = value;
	HX_STACK_LINE(165)
	this->update();
	HX_STACK_LINE(166)
	return this->originX;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,setOriginX,return )

int Screen_obj::setY( int value){
	HX_STACK_PUSH("Screen::setY","com/haxepunk/Screen.hx",150);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(151)
	if (((this->y == value))){
		HX_STACK_LINE(151)
		return value;
	}
	HX_STACK_LINE(152)
	this->y = value;
	HX_STACK_LINE(153)
	this->update();
	HX_STACK_LINE(154)
	return this->y;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,setY,return )

int Screen_obj::setX( int value){
	HX_STACK_PUSH("Screen::setX","com/haxepunk/Screen.hx",138);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(139)
	if (((this->x == value))){
		HX_STACK_LINE(139)
		return value;
	}
	HX_STACK_LINE(140)
	this->x = value;
	HX_STACK_LINE(141)
	this->update();
	HX_STACK_LINE(142)
	return this->x;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,setX,return )

int Screen_obj::setColor( int value){
	HX_STACK_PUSH("Screen::setColor","com/haxepunk/Screen.hx",131);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(131)
	this->_color = (int((int)-16777216) | int(value));
	HX_STACK_LINE(131)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,setColor,return )

int Screen_obj::getColor( ){
	HX_STACK_PUSH("Screen::getColor","com/haxepunk/Screen.hx",130);
	HX_STACK_THIS(this);
	HX_STACK_LINE(130)
	return this->_color;
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,getColor,return )

Void Screen_obj::update( ){
{
		HX_STACK_PUSH("Screen::update","com/haxepunk/Screen.hx",113);
		HX_STACK_THIS(this);
		HX_STACK_LINE(114)
		if (((this->_matrix == null()))){
			HX_STACK_LINE(114)
			return null();
		}
		HX_STACK_LINE(115)
		this->_matrix->b = this->_matrix->c = (int)0;
		HX_STACK_LINE(116)
		this->_matrix->a = (this->scaleX * this->scale);
		HX_STACK_LINE(117)
		this->_matrix->d = (this->scaleY * this->scale);
		HX_STACK_LINE(118)
		this->_matrix->tx = (-(this->originX) * this->_matrix->a);
		HX_STACK_LINE(119)
		this->_matrix->ty = (-(this->originY) * this->_matrix->d);
		HX_STACK_LINE(120)
		if (((this->_angle != (int)0))){
			HX_STACK_LINE(120)
			this->_matrix->rotate(this->_angle);
		}
		HX_STACK_LINE(121)
		hx::AddEq(this->_matrix->tx,(((this->originX * this->scaleX) * this->scale) + this->x));
		HX_STACK_LINE(122)
		hx::AddEq(this->_matrix->ty,(((this->originY * this->scaleX) * this->scale) + this->y));
		HX_STACK_LINE(123)
		this->_sprite->nmeGetTransform()->nmeSetMatrix(this->_matrix);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,update,(void))

Void Screen_obj::redraw( ){
{
		HX_STACK_PUSH("Screen::redraw","com/haxepunk/Screen.hx",105);
		HX_STACK_THIS(this);
		HX_STACK_LINE(107)
		this->_bitmap->__get(this->_current)->nmeSetVisible(true);
		HX_STACK_LINE(108)
		this->_bitmap->__get(((int)1 - this->_current))->nmeSetVisible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,redraw,(void))

Void Screen_obj::refresh( ){
{
		HX_STACK_PUSH("Screen::refresh","com/haxepunk/Screen.hx",92);
		HX_STACK_THIS(this);
		HX_STACK_LINE(92)
		::com::haxepunk::HXP_obj::buffer->fillRect(::com::haxepunk::HXP_obj::bounds,this->_color);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,refresh,(void))

Void Screen_obj::addFilter( Array< ::neash::filters::BitmapFilter > filter){
{
		HX_STACK_PUSH("Screen::addFilter","com/haxepunk/Screen.hx",84);
		HX_STACK_THIS(this);
		HX_STACK_ARG(filter,"filter");
		HX_STACK_LINE(84)
		this->_sprite->nmeSetFilters(filter);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Screen_obj,addFilter,(void))

Void Screen_obj::swap( ){
{
		HX_STACK_PUSH("Screen::swap","com/haxepunk/Screen.hx",78);
		HX_STACK_THIS(this);
		HX_STACK_LINE(79)
		this->_current = ((int)1 - this->_current);
		HX_STACK_LINE(80)
		::com::haxepunk::HXP_obj::buffer = this->_bitmap->__get(this->_current)->bitmapData;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,swap,(void))

Void Screen_obj::resize( ){
{
		HX_STACK_PUSH("Screen::resize","com/haxepunk/Screen.hx",51);
		HX_STACK_THIS(this);
		HX_STACK_LINE(52)
		if (((this->_bitmap->__get((int)0) != null()))){
			HX_STACK_LINE(54)
			this->_sprite->removeChild(this->_bitmap->__get((int)0));
			HX_STACK_LINE(55)
			this->_sprite->removeChild(this->_bitmap->__get((int)1));
			HX_STACK_LINE(57)
			this->_bitmap->__get((int)0)->bitmapData->dispose();
			HX_STACK_LINE(58)
			this->_bitmap->__get((int)1)->bitmapData->dispose();
		}
		HX_STACK_LINE(61)
		this->width = ::com::haxepunk::HXP_obj::width;
		HX_STACK_LINE(62)
		this->height = ::com::haxepunk::HXP_obj::height;
		HX_STACK_LINE(64)
		this->_bitmap[(int)0] = ::neash::display::Bitmap_obj::__new(::com::haxepunk::HXP_obj::createBitmap(this->width,this->height,null(),null()),::neash::display::PixelSnapping_obj::NEVER_dyn(),null());
		HX_STACK_LINE(65)
		this->_bitmap[(int)1] = ::neash::display::Bitmap_obj::__new(::com::haxepunk::HXP_obj::createBitmap(this->width,this->height,null(),null()),::neash::display::PixelSnapping_obj::NEVER_dyn(),null());
		HX_STACK_LINE(67)
		this->_sprite->addChild(this->_bitmap->__get((int)0))->nmeSetVisible(true);
		HX_STACK_LINE(68)
		this->_sprite->addChild(this->_bitmap->__get((int)1))->nmeSetVisible(false);
		HX_STACK_LINE(69)
		::com::haxepunk::HXP_obj::buffer = this->_bitmap->__get((int)0)->bitmapData;
		HX_STACK_LINE(71)
		this->_current = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,resize,(void))

Void Screen_obj::init( ){
{
		HX_STACK_PUSH("Screen::init","com/haxepunk/Screen.hx",34);
		HX_STACK_THIS(this);
		HX_STACK_LINE(35)
		this->_sprite = ::neash::display::Sprite_obj::__new();
		HX_STACK_LINE(36)
		this->_bitmap = Array_obj< ::neash::display::Bitmap >::__new();
		HX_STACK_LINE(37)
		this->setX(this->setY(this->setOriginX(this->setOriginY((int)0))));
		HX_STACK_LINE(38)
		this->_angle = this->_current = (int)0;
		HX_STACK_LINE(39)
		this->setScale(this->setScaleX(this->setScaleY((int)1)));
		HX_STACK_LINE(40)
		this->_color = (int)2105376;
		HX_STACK_LINE(41)
		this->_matrix = ::neash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		HX_STACK_LINE(42)
		this->update();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Screen_obj,init,(void))


Screen_obj::Screen_obj()
{
}

void Screen_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Screen);
	HX_MARK_MEMBER_NAME(_color,"_color");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_current,"_current");
	HX_MARK_MEMBER_NAME(_bitmap,"_bitmap");
	HX_MARK_MEMBER_NAME(_sprite,"_sprite");
	HX_MARK_MEMBER_NAME(mouseY,"mouseY");
	HX_MARK_MEMBER_NAME(mouseX,"mouseX");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(scaleY,"scaleY");
	HX_MARK_MEMBER_NAME(scaleX,"scaleX");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_END_CLASS();
}

void Screen_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_color,"_color");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_current,"_current");
	HX_VISIT_MEMBER_NAME(_bitmap,"_bitmap");
	HX_VISIT_MEMBER_NAME(_sprite,"_sprite");
	HX_VISIT_MEMBER_NAME(mouseY,"mouseY");
	HX_VISIT_MEMBER_NAME(mouseX,"mouseX");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(scaleY,"scaleY");
	HX_VISIT_MEMBER_NAME(scaleX,"scaleX");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(color,"color");
}

Dynamic Screen_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"setY") ) { return setY_dyn(); }
		if (HX_FIELD_EQ(inName,"setX") ) { return setX_dyn(); }
		if (HX_FIELD_EQ(inName,"swap") ) { return swap_dyn(); }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"angle") ) { return inCallProp ? getAngle() : angle; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"color") ) { return inCallProp ? getColor() : color; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { return _color; }
		if (HX_FIELD_EQ(inName,"_angle") ) { return _angle; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { return inCallProp ? getMouseY() : mouseY; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { return inCallProp ? getMouseX() : mouseX; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { return scaleY; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { return scaleX; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"redraw") ) { return redraw_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { return _bitmap; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { return _sprite; }
		if (HX_FIELD_EQ(inName,"capture") ) { return capture_dyn(); }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"refresh") ) { return refresh_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { return _current; }
		if (HX_FIELD_EQ(inName,"setAngle") ) { return setAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngle") ) { return getAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"setScale") ) { return setScale_dyn(); }
		if (HX_FIELD_EQ(inName,"setColor") ) { return setColor_dyn(); }
		if (HX_FIELD_EQ(inName,"getColor") ) { return getColor_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getMouseY") ) { return getMouseY_dyn(); }
		if (HX_FIELD_EQ(inName,"getMouseX") ) { return getMouseX_dyn(); }
		if (HX_FIELD_EQ(inName,"smoothing") ) { return inCallProp ? getSmoothing() : smoothing; }
		if (HX_FIELD_EQ(inName,"setScaleY") ) { return setScaleY_dyn(); }
		if (HX_FIELD_EQ(inName,"setScaleX") ) { return setScaleX_dyn(); }
		if (HX_FIELD_EQ(inName,"addFilter") ) { return addFilter_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setOriginY") ) { return setOriginY_dyn(); }
		if (HX_FIELD_EQ(inName,"setOriginX") ) { return setOriginX_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setSmoothing") ) { return setSmoothing_dyn(); }
		if (HX_FIELD_EQ(inName,"getSmoothing") ) { return getSmoothing_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Screen_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return setY(inValue);y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return setX(inValue);x=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp) return setAngle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { if (inCallProp) return setScale(inValue);scale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { if (inCallProp) return setColor(inValue);color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_color") ) { _color=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseY") ) { mouseY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mouseX") ) { mouseX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleY") ) { if (inCallProp) return setScaleY(inValue);scaleY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleX") ) { if (inCallProp) return setScaleX(inValue);scaleX=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::neash::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_bitmap") ) { _bitmap=inValue.Cast< Array< ::neash::display::Bitmap > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_sprite") ) { _sprite=inValue.Cast< ::neash::display::Sprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { if (inCallProp) return setOriginY(inValue);originY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { if (inCallProp) return setOriginX(inValue);originX=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_current") ) { _current=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { if (inCallProp) return setSmoothing(inValue);smoothing=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Screen_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_color"));
	outFields->push(HX_CSTRING("_angle"));
	outFields->push(HX_CSTRING("_matrix"));
	outFields->push(HX_CSTRING("_current"));
	outFields->push(HX_CSTRING("_bitmap"));
	outFields->push(HX_CSTRING("_sprite"));
	outFields->push(HX_CSTRING("mouseY"));
	outFields->push(HX_CSTRING("mouseX"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("smoothing"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("scaleY"));
	outFields->push(HX_CSTRING("scaleX"));
	outFields->push(HX_CSTRING("originY"));
	outFields->push(HX_CSTRING("originX"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("color"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_color"),
	HX_CSTRING("_angle"),
	HX_CSTRING("_matrix"),
	HX_CSTRING("_current"),
	HX_CSTRING("_bitmap"),
	HX_CSTRING("_sprite"),
	HX_CSTRING("capture"),
	HX_CSTRING("getMouseY"),
	HX_CSTRING("mouseY"),
	HX_CSTRING("getMouseX"),
	HX_CSTRING("mouseX"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("setSmoothing"),
	HX_CSTRING("getSmoothing"),
	HX_CSTRING("smoothing"),
	HX_CSTRING("setAngle"),
	HX_CSTRING("getAngle"),
	HX_CSTRING("angle"),
	HX_CSTRING("setScale"),
	HX_CSTRING("scale"),
	HX_CSTRING("setScaleY"),
	HX_CSTRING("scaleY"),
	HX_CSTRING("setScaleX"),
	HX_CSTRING("scaleX"),
	HX_CSTRING("setOriginY"),
	HX_CSTRING("originY"),
	HX_CSTRING("setOriginX"),
	HX_CSTRING("originX"),
	HX_CSTRING("setY"),
	HX_CSTRING("y"),
	HX_CSTRING("setX"),
	HX_CSTRING("x"),
	HX_CSTRING("setColor"),
	HX_CSTRING("getColor"),
	HX_CSTRING("color"),
	HX_CSTRING("update"),
	HX_CSTRING("redraw"),
	HX_CSTRING("refresh"),
	HX_CSTRING("addFilter"),
	HX_CSTRING("swap"),
	HX_CSTRING("resize"),
	HX_CSTRING("init"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Screen_obj::__mClass,"__mClass");
};

Class Screen_obj::__mClass;

void Screen_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Screen"), hx::TCanCast< Screen_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Screen_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
