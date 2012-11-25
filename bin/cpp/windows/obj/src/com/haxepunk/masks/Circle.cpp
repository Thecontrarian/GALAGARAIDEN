#include <hxcpp.h>

#ifndef INCLUDED_Hash
#include <Hash.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_com_haxepunk_masks_Circle
#include <com/haxepunk/masks/Circle.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Grid
#include <com/haxepunk/masks/Grid.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Hitbox
#include <com/haxepunk/masks/Hitbox.h>
#endif
#ifndef INCLUDED_com_haxepunk_masks_Masklist
#include <com/haxepunk/masks/Masklist.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
#ifndef INCLUDED_com_haxepunk_math_Vector
#include <com/haxepunk/math/Vector.h>
#endif
#ifndef INCLUDED_neash_display_Graphics
#include <neash/display/Graphics.h>
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

Void Circle_obj::__construct(hx::Null< int >  __o_radius,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{
HX_STACK_PUSH("Circle::new","com/haxepunk/masks/Circle.hx",24);
int radius = __o_radius.Default(1);
int x = __o_x.Default(0);
int y = __o_y.Default(0);
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->setRadius(radius);
	HX_STACK_LINE(27)
	this->_x = (x + radius);
	HX_STACK_LINE(28)
	this->_y = (y + radius);
	HX_STACK_LINE(30)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::Mask >()),this->collideMask_dyn());
	HX_STACK_LINE(31)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Circle >()),this->collideCircle_dyn());
	HX_STACK_LINE(32)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >()),this->collideHitbox_dyn());
	HX_STACK_LINE(33)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >()),this->collideGrid_dyn());
}
;
	return null();
}

Circle_obj::~Circle_obj() { }

Dynamic Circle_obj::__CreateEmpty() { return  new Circle_obj; }
hx::ObjectPtr< Circle_obj > Circle_obj::__new(hx::Null< int >  __o_radius,hx::Null< int >  __o_x,hx::Null< int >  __o_y)
{  hx::ObjectPtr< Circle_obj > result = new Circle_obj();
	result->__construct(__o_radius,__o_x,__o_y);
	return result;}

Dynamic Circle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Circle_obj > result = new Circle_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Circle_obj::update( ){
{
		HX_STACK_PUSH("Circle::update","com/haxepunk/masks/Circle.hx",208);
		HX_STACK_THIS(this);
		HX_STACK_LINE(208)
		if (((this->parent != null()))){
			HX_STACK_LINE(212)
			this->parent->originX = (-(this->_x) + this->_radius);
			HX_STACK_LINE(213)
			this->parent->originY = (-(this->_y) + this->_radius);
			HX_STACK_LINE(214)
			this->parent->width = (this->_radius + this->_radius);
			HX_STACK_LINE(215)
			this->parent->height = this->parent->width;
			HX_STACK_LINE(218)
			if (((this->list != null()))){
				HX_STACK_LINE(219)
				this->list->update();
			}
		}
	}
return null();
}


int Circle_obj::setRadius( int value){
	HX_STACK_PUSH("Circle::setRadius","com/haxepunk/masks/Circle.hx",197);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(198)
	if (((this->_radius == value))){
		HX_STACK_LINE(198)
		return value;
	}
	HX_STACK_LINE(199)
	this->_radius = value;
	HX_STACK_LINE(200)
	this->_squaredRadius = (value * value);
	HX_STACK_LINE(201)
	if (((this->list != null()))){
		HX_STACK_LINE(201)
		this->list->update();
	}
	else{
		HX_STACK_LINE(202)
		if (((this->parent != null()))){
			HX_STACK_LINE(202)
			this->update();
		}
	}
	HX_STACK_LINE(203)
	return this->_radius;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,setRadius,return )

int Circle_obj::getRadius( ){
	HX_STACK_PUSH("Circle::getRadius","com/haxepunk/masks/Circle.hx",195);
	HX_STACK_THIS(this);
	HX_STACK_LINE(195)
	return this->_radius;
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,getRadius,return )

int Circle_obj::setY( int value){
	HX_STACK_PUSH("Circle::setY","com/haxepunk/masks/Circle.hx",183);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(184)
	if (((this->_y == value))){
		HX_STACK_LINE(184)
		return value;
	}
	HX_STACK_LINE(185)
	this->_y = value;
	HX_STACK_LINE(186)
	if (((this->list != null()))){
		HX_STACK_LINE(186)
		this->list->update();
	}
	else{
		HX_STACK_LINE(187)
		if (((this->parent != null()))){
			HX_STACK_LINE(187)
			this->update();
		}
	}
	HX_STACK_LINE(188)
	return this->_y;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,setY,return )

int Circle_obj::getY( ){
	HX_STACK_PUSH("Circle::getY","com/haxepunk/masks/Circle.hx",181);
	HX_STACK_THIS(this);
	HX_STACK_LINE(181)
	return this->_y;
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,getY,return )

int Circle_obj::setX( int value){
	HX_STACK_PUSH("Circle::setX","com/haxepunk/masks/Circle.hx",169);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(170)
	if (((this->_x == value))){
		HX_STACK_LINE(170)
		return value;
	}
	HX_STACK_LINE(171)
	this->_x = value;
	HX_STACK_LINE(172)
	if (((this->list != null()))){
		HX_STACK_LINE(172)
		this->list->update();
	}
	else{
		HX_STACK_LINE(173)
		if (((this->parent != null()))){
			HX_STACK_LINE(173)
			this->update();
		}
	}
	HX_STACK_LINE(174)
	return this->_x;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,setX,return )

int Circle_obj::getX( ){
	HX_STACK_PUSH("Circle::getX","com/haxepunk/masks/Circle.hx",167);
	HX_STACK_THIS(this);
	HX_STACK_LINE(167)
	return this->_x;
}


HX_DEFINE_DYNAMIC_FUNC0(Circle_obj,getX,return )

Void Circle_obj::debugDraw( ::neash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_PUSH("Circle::debugDraw","com/haxepunk/masks/Circle.hx",159);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphics,"graphics");
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_ARG(scaleY,"scaleY");
		HX_STACK_LINE(159)
		graphics->drawCircle(((((this->parent->x + this->_x) - ::com::haxepunk::HXP_obj::camera->x)) * scaleX),((((this->parent->y + this->_y) - ::com::haxepunk::HXP_obj::camera->y)) * scaleY),(this->_radius * scaleX));
	}
return null();
}


Void Circle_obj::project( ::com::haxepunk::math::Vector axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_PUSH("Circle::project","com/haxepunk/masks/Circle.hx",153);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(projection,"projection");
		HX_STACK_LINE(154)
		projection->min = -(this->_radius);
		HX_STACK_LINE(155)
		projection->max = this->_radius;
	}
return null();
}


bool Circle_obj::collideHitbox( ::com::haxepunk::masks::Hitbox other){
	HX_STACK_PUSH("Circle::collideHitbox","com/haxepunk/masks/Circle.hx",136);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(137)
	Float dx = ::Math_obj::abs((((this->parent->x + this->_x) - other->parent->x) + other->getX()));		HX_STACK_VAR(dx,"dx");
	Float dy = ::Math_obj::abs((((this->parent->y + this->_y) - other->parent->y) + other->getY()));		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(140)
	if (((bool((dx <= other->getWidth())) || bool((dy <= other->getHeight()))))){
		HX_STACK_LINE(141)
		return true;
	}
	HX_STACK_LINE(144)
	if (((bool((dx > (other->getWidth() + this->_radius))) || bool((dy > (other->getHeight() + this->_radius)))))){
		HX_STACK_LINE(145)
		return false;
	}
	HX_STACK_LINE(149)
	return (((dx * dx) + (dy * dy)) <= this->_squaredRadius);
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideHitbox,return )

bool Circle_obj::collideGrid( ::com::haxepunk::masks::Grid other){
	HX_STACK_PUSH("Circle::collideGrid","com/haxepunk/masks/Circle.hx",65);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(66)
	Float thisX = (this->parent->x + this->_x);		HX_STACK_VAR(thisX,"thisX");
	Float thisY = (this->parent->y + this->_y);		HX_STACK_VAR(thisY,"thisY");
	Float otherX = (other->parent->x + other->getX());		HX_STACK_VAR(otherX,"otherX");
	Float otherY = (other->parent->y + other->getY());		HX_STACK_VAR(otherY,"otherY");
	Float entityDistX = (thisX - otherX);		HX_STACK_VAR(entityDistX,"entityDistX");
	Float entityDistY = (thisY - otherY);		HX_STACK_VAR(entityDistY,"entityDistY");
	HX_STACK_LINE(73)
	int minx = ::Math_obj::floor((Float(((entityDistX - this->_radius))) / Float(::Std_obj::_int(other->_tile->width))));		HX_STACK_VAR(minx,"minx");
	int miny = ::Math_obj::floor((Float(((entityDistY - this->_radius))) / Float(::Std_obj::_int(other->_tile->height))));		HX_STACK_VAR(miny,"miny");
	int maxx = ::Math_obj::ceil((Float(((entityDistX + this->_radius))) / Float(::Std_obj::_int(other->_tile->width))));		HX_STACK_VAR(maxx,"maxx");
	int maxy = ::Math_obj::ceil((Float(((entityDistY + this->_radius))) / Float(::Std_obj::_int(other->_tile->height))));		HX_STACK_VAR(maxy,"maxy");
	HX_STACK_LINE(78)
	if (((minx < (int)0))){
		HX_STACK_LINE(78)
		minx = (int)0;
	}
	HX_STACK_LINE(79)
	if (((miny < (int)0))){
		HX_STACK_LINE(79)
		miny = (int)0;
	}
	HX_STACK_LINE(80)
	if (((maxx > other->columns))){
		HX_STACK_LINE(80)
		maxx = other->columns;
	}
	HX_STACK_LINE(81)
	if (((maxy > other->rows))){
		HX_STACK_LINE(81)
		maxy = other->rows;
	}
	HX_STACK_LINE(83)
	int midx = ::Math_obj::floor((Float(((maxx + minx))) / Float((int)2)));		HX_STACK_VAR(midx,"midx");
	int midy = ::Math_obj::floor((Float(((maxy + miny))) / Float((int)2)));		HX_STACK_VAR(midy,"midy");
	Float dx;		HX_STACK_VAR(dx,"dx");
	Float dy;		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(87)
	{
		HX_STACK_LINE(87)
		int _g = minx;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(87)
		while(((_g < maxx))){
			HX_STACK_LINE(87)
			int xx = (_g)++;		HX_STACK_VAR(xx,"xx");
			HX_STACK_LINE(89)
			{
				HX_STACK_LINE(89)
				int _g1 = miny;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(89)
				while(((_g1 < maxy))){
					HX_STACK_LINE(89)
					int yy = (_g1)++;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(91)
					if ((other->getTile(xx,yy))){
						HX_STACK_LINE(93)
						if (((xx <= midx))){
							HX_STACK_LINE(94)
							if (((yy <= midy))){
								HX_STACK_LINE(97)
								dx = (entityDistX - (((xx + (int)1)) * ::Std_obj::_int(other->_tile->width)));
								HX_STACK_LINE(98)
								dy = (entityDistX - (((yy + (int)1)) * ::Std_obj::_int(other->_tile->height)));
								HX_STACK_LINE(99)
								if (((((dx * dx) + (dy * dy)) < this->_squaredRadius))){
									HX_STACK_LINE(100)
									return true;
								}
							}
							else{
								HX_STACK_LINE(104)
								dx = (entityDistX - (((xx + (int)1)) * ::Std_obj::_int(other->_tile->width)));
								HX_STACK_LINE(105)
								dy = (entityDistX - (yy * ::Std_obj::_int(other->_tile->height)));
								HX_STACK_LINE(106)
								if (((((dx * dx) + (dy * dy)) < this->_squaredRadius))){
									HX_STACK_LINE(107)
									return true;
								}
							}
						}
						else{
							HX_STACK_LINE(111)
							if (((yy <= midy))){
								HX_STACK_LINE(114)
								dx = (entityDistX - (xx * ::Std_obj::_int(other->_tile->width)));
								HX_STACK_LINE(115)
								dy = (entityDistX - (((yy + (int)1)) * ::Std_obj::_int(other->_tile->height)));
								HX_STACK_LINE(116)
								if (((((dx * dx) + (dy * dy)) < this->_squaredRadius))){
									HX_STACK_LINE(117)
									return true;
								}
							}
							else{
								HX_STACK_LINE(121)
								dx = (entityDistX - (xx * ::Std_obj::_int(other->_tile->width)));
								HX_STACK_LINE(122)
								dy = (entityDistX - (yy * ::Std_obj::_int(other->_tile->height)));
								HX_STACK_LINE(123)
								if (((((dx * dx) + (dy * dy)) < this->_squaredRadius))){
									HX_STACK_LINE(124)
									return true;
								}
							}
						}
						HX_STACK_LINE(127)
						return true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(131)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideGrid,return )

bool Circle_obj::collideCircle( ::com::haxepunk::masks::Circle other){
	HX_STACK_PUSH("Circle::collideCircle","com/haxepunk/masks/Circle.hx",58);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(59)
	Float dx = ((this->parent->x + this->_x) - ((other->parent->x + other->_x)));		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(60)
	Float dy = ((this->parent->y + this->_y) - ((other->parent->y + other->_y)));		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(61)
	return (((dx * dx) + (dy * dy)) < ::Math_obj::pow((this->_radius + other->_radius),(int)2));
}


HX_DEFINE_DYNAMIC_FUNC1(Circle_obj,collideCircle,return )

bool Circle_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_PUSH("Circle::collideMask","com/haxepunk/masks/Circle.hx",38);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(39)
	Float distanceX = ::Math_obj::abs((((this->parent->x + this->_x) - other->parent->x) - (other->parent->width * 0.5)));		HX_STACK_VAR(distanceX,"distanceX");
	Float distanceY = ::Math_obj::abs((((this->parent->y + this->_y) - other->parent->y) - (other->parent->height * 0.5)));		HX_STACK_VAR(distanceY,"distanceY");
	HX_STACK_LINE(42)
	if (((bool((distanceX > ((other->parent->width * 0.5) + this->_radius))) || bool((distanceY > ((other->parent->height * 0.5) + this->_radius)))))){
		HX_STACK_LINE(44)
		return false;
	}
	HX_STACK_LINE(47)
	if (((bool((distanceX <= (other->parent->width * 0.5))) || bool((distanceY <= (other->parent->height * 0.5)))))){
		HX_STACK_LINE(48)
		return true;
	}
	HX_STACK_LINE(51)
	Float distanceToCorner = ((((distanceX - (other->parent->width * 0.5))) * ((distanceX - (other->parent->width * 0.5)))) + (((distanceY - (other->parent->height * 0.5))) * ((distanceY - (other->parent->height * 0.5)))));		HX_STACK_VAR(distanceToCorner,"distanceToCorner");
	HX_STACK_LINE(54)
	return (distanceToCorner <= this->_squaredRadius);
}



Circle_obj::Circle_obj()
{
}

void Circle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Circle);
	HX_MARK_MEMBER_NAME(_squaredRadius,"_squaredRadius");
	HX_MARK_MEMBER_NAME(_radius,"_radius");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(radius,"radius");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Circle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_squaredRadius,"_squaredRadius");
	HX_VISIT_MEMBER_NAME(_radius,"_radius");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(radius,"radius");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Circle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return inCallProp ? getY() : y; }
		if (HX_FIELD_EQ(inName,"x") ) { return inCallProp ? getX() : x; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"setY") ) { return setY_dyn(); }
		if (HX_FIELD_EQ(inName,"getY") ) { return getY_dyn(); }
		if (HX_FIELD_EQ(inName,"setX") ) { return setX_dyn(); }
		if (HX_FIELD_EQ(inName,"getX") ) { return getX_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"radius") ) { return inCallProp ? getRadius() : radius; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { return _radius; }
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setRadius") ) { return setRadius_dyn(); }
		if (HX_FIELD_EQ(inName,"getRadius") ) { return getRadius_dyn(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"collideCircle") ) { return collideCircle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_squaredRadius") ) { return _squaredRadius; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Circle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp) return setY(inValue);y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp) return setX(inValue);x=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"radius") ) { if (inCallProp) return setRadius(inValue);radius=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_radius") ) { _radius=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_squaredRadius") ) { _squaredRadius=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Circle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_squaredRadius"));
	outFields->push(HX_CSTRING("_radius"));
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("radius"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_squaredRadius"),
	HX_CSTRING("_radius"),
	HX_CSTRING("_y"),
	HX_CSTRING("_x"),
	HX_CSTRING("update"),
	HX_CSTRING("setRadius"),
	HX_CSTRING("getRadius"),
	HX_CSTRING("radius"),
	HX_CSTRING("setY"),
	HX_CSTRING("getY"),
	HX_CSTRING("y"),
	HX_CSTRING("setX"),
	HX_CSTRING("getX"),
	HX_CSTRING("x"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("project"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideGrid"),
	HX_CSTRING("collideCircle"),
	HX_CSTRING("collideMask"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Circle_obj::__mClass,"__mClass");
};

Class Circle_obj::__mClass;

void Circle_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Circle"), hx::TCanCast< Circle_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Circle_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
