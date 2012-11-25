#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_haxepunk_Entity
#include <com/haxepunk/Entity.h>
#endif
#ifndef INCLUDED_com_haxepunk_HXP
#include <com/haxepunk/HXP.h>
#endif
#ifndef INCLUDED_com_haxepunk_Mask
#include <com/haxepunk/Mask.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Pixelmask
#include <com/haxepunk/masks/Pixelmask.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace masks{

Void Pixelmask_obj::__construct(Dynamic source,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_PUSH("Pixelmask::new","com/haxepunk/masks/Pixelmask.hx",26);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(27)
	super::__construct(null(),null(),null(),null());
	HX_STACK_LINE(30)
	if ((::Std_obj::is(source,hx::ClassOf< ::neash::display::BitmapData >()))){
		HX_STACK_LINE(30)
		this->_data = source;
	}
	else{
		HX_STACK_LINE(31)
		this->_data = ::com::haxepunk::HXP_obj::getBitmap(source);
	}
	HX_STACK_LINE(32)
	if (((this->_data == null()))){
		HX_STACK_LINE(32)
		hx::Throw (HX_CSTRING("Invalid Pixelmask source image."));
	}
	HX_STACK_LINE(34)
	this->threshold = (int)1;
	HX_STACK_LINE(36)
	this->_rect = ::com::haxepunk::HXP_obj::rect;
	HX_STACK_LINE(37)
	this->_point = ::com::haxepunk::HXP_obj::point;
	HX_STACK_LINE(38)
	this->_point2 = ::com::haxepunk::HXP_obj::point2;
	HX_STACK_LINE(41)
	this->_width = this->getData()->nmeGetWidth();
	HX_STACK_LINE(42)
	this->_height = this->getData()->nmeGetHeight();
	HX_STACK_LINE(43)
	this->_x = x;
	HX_STACK_LINE(44)
	this->_y = y;
	HX_STACK_LINE(47)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >()),this->collideMask_dyn());
	HX_STACK_LINE(48)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Pixelmask >()),this->collidePixelmask_dyn());
	HX_STACK_LINE(49)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >()),this->collideHitbox_dyn());
}
;
	return null();
}

Pixelmask_obj::~Pixelmask_obj() { }

Dynamic Pixelmask_obj::__CreateEmpty() { return  new Pixelmask_obj; }
hx::ObjectPtr< Pixelmask_obj > Pixelmask_obj::__new(Dynamic source,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Pixelmask_obj > result = new Pixelmask_obj();
	result->__construct(source,__o_x,__o_y);
	return result;}

Dynamic Pixelmask_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Pixelmask_obj > result = new Pixelmask_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::neash::display::BitmapData Pixelmask_obj::setData( ::neash::display::BitmapData value){
	HX_STACK_PUSH("Pixelmask::setData","com/haxepunk/masks/Pixelmask.hx",104);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(105)
	this->_data = value;
	HX_STACK_LINE(106)
	this->_width = value->nmeGetWidth();
	HX_STACK_LINE(107)
	this->_height = value->nmeGetHeight();
	HX_STACK_LINE(108)
	this->update();
	HX_STACK_LINE(109)
	return this->_data;
}


HX_DEFINE_DYNAMIC_FUNC1(Pixelmask_obj,setData,return )

::neash::display::BitmapData Pixelmask_obj::getData( ){
	HX_STACK_PUSH("Pixelmask::getData","com/haxepunk/masks/Pixelmask.hx",102);
	HX_STACK_THIS(this);
	HX_STACK_LINE(102)
	return this->_data;
}


HX_DEFINE_DYNAMIC_FUNC0(Pixelmask_obj,getData,return )

bool Pixelmask_obj::collidePixelmask( ::com::haxepunk::masks::Pixelmask other){
	HX_STACK_PUSH("Pixelmask::collidePixelmask","com/haxepunk/masks/Pixelmask.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(87)
	this->_point->x = (this->parent->x + this->_x);
	HX_STACK_LINE(88)
	this->_point->y = (this->parent->y + this->_y);
	HX_STACK_LINE(89)
	this->_point2->x = (other->parent->x + other->_x);
	HX_STACK_LINE(90)
	this->_point2->y = (other->parent->y + other->_y);
	HX_STACK_LINE(94)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Pixelmask_obj,collidePixelmask,return )

bool Pixelmask_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_PUSH("Pixelmask::collideHitbox","com/haxepunk/masks/Pixelmask.hx",70);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(71)
	this->_point->x = (this->parent->x + this->_x);
	HX_STACK_LINE(72)
	this->_point->y = (this->parent->y + this->_y);
	HX_STACK_LINE(73)
	this->_rect->x = (other->parent->x + other->_x);
	HX_STACK_LINE(74)
	this->_rect->y = (other->parent->y + other->_y);
	HX_STACK_LINE(75)
	this->_rect->width = other->_width;
	HX_STACK_LINE(76)
	this->_rect->height = other->_height;
	HX_STACK_LINE(80)
	return false;
}


bool Pixelmask_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_PUSH("Pixelmask::collideMask","com/haxepunk/masks/Pixelmask.hx",54);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(55)
	this->_point->x = (this->parent->x + this->_x);
	HX_STACK_LINE(56)
	this->_point->y = (this->parent->y + this->_y);
	HX_STACK_LINE(57)
	this->_rect->x = (other->parent->x - other->parent->originX);
	HX_STACK_LINE(58)
	this->_rect->y = (other->parent->y - other->parent->originY);
	HX_STACK_LINE(59)
	this->_rect->width = other->parent->width;
	HX_STACK_LINE(60)
	this->_rect->height = other->parent->height;
	HX_STACK_LINE(64)
	return false;
}



Pixelmask_obj::Pixelmask_obj()
{
}

void Pixelmask_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pixelmask);
	HX_MARK_MEMBER_NAME(_point2,"_point2");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_data,"_data");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(threshold,"threshold");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Pixelmask_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_point2,"_point2");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_data,"_data");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(threshold,"threshold");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Pixelmask_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return inCallProp ? getData() : data; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		if (HX_FIELD_EQ(inName,"_data") ) { return _data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { return _point2; }
		if (HX_FIELD_EQ(inName,"setData") ) { return setData_dyn(); }
		if (HX_FIELD_EQ(inName,"getData") ) { return getData_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collidePixelmask") ) { return collidePixelmask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Pixelmask_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp) return setData(inValue);data=inValue.Cast< ::neash::display::BitmapData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::neash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_data") ) { _data=inValue.Cast< ::neash::display::BitmapData >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_point2") ) { _point2=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"threshold") ) { threshold=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pixelmask_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_point2"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_rect"));
	outFields->push(HX_CSTRING("_data"));
	outFields->push(HX_CSTRING("data"));
	outFields->push(HX_CSTRING("threshold"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_point2"),
	HX_CSTRING("_point"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_data"),
	HX_CSTRING("setData"),
	HX_CSTRING("getData"),
	HX_CSTRING("data"),
	HX_CSTRING("collidePixelmask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("threshold"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Pixelmask_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Pixelmask_obj::__mClass,"__mClass");
};

Class Pixelmask_obj::__mClass;

void Pixelmask_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Pixelmask"), hx::TCanCast< Pixelmask_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Pixelmask_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
