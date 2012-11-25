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
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
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
#ifndef INCLUDED_com_haxepunk_World
#include <com/haxepunk/World.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Graphiclist
#include <com/haxepunk/graphics/Graphiclist.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
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
namespace com{
namespace haxepunk{

Void Entity_obj::__construct(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask)
{
HX_STACK_PUSH("Entity::new","com/haxepunk/Entity.hx",88);
Float x = __o_x.Default(0);
Float y = __o_y.Default(0);
{
	HX_STACK_LINE(89)
	super::__construct();
	HX_STACK_LINE(90)
	this->visible = true;
	HX_STACK_LINE(91)
	this->collidable = true;
	HX_STACK_LINE(92)
	this->x = x;
	HX_STACK_LINE(93)
	this->y = y;
	HX_STACK_LINE(95)
	this->originX = this->originY = (int)0;
	HX_STACK_LINE(96)
	this->width = this->height = (int)0;
	HX_STACK_LINE(97)
	this->_moveX = this->_moveY = (int)0;
	HX_STACK_LINE(98)
	this->_type = HX_CSTRING("");
	HX_STACK_LINE(99)
	this->_name = HX_CSTRING("");
	HX_STACK_LINE(101)
	this->HITBOX = ::com::haxepunk::Mask_obj::__new();
	HX_STACK_LINE(102)
	this->_point = ::com::haxepunk::HXP_obj::point;
	HX_STACK_LINE(103)
	this->_camera = ::com::haxepunk::HXP_obj::point2;
	HX_STACK_LINE(105)
	if (((graphic != null()))){
		HX_STACK_LINE(105)
		this->setGraphic(graphic);
	}
	HX_STACK_LINE(106)
	if (((mask != null()))){
		HX_STACK_LINE(106)
		this->setMask(mask);
	}
	HX_STACK_LINE(107)
	this->HITBOX->assignTo(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(108)
	this->_class = ::Type_obj::getClassName(::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this)));
	HX_STACK_LINE(110)
	this->setLayer((int)10);
}
;
	return null();
}

Entity_obj::~Entity_obj() { }

Dynamic Entity_obj::__CreateEmpty() { return  new Entity_obj; }
hx::ObjectPtr< Entity_obj > Entity_obj::__new(hx::Null< Float >  __o_x,hx::Null< Float >  __o_y,::com::haxepunk::Graphic graphic,::com::haxepunk::Mask mask)
{  hx::ObjectPtr< Entity_obj > result = new Entity_obj();
	result->__construct(__o_x,__o_y,graphic,mask);
	return result;}

Dynamic Entity_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Entity_obj > result = new Entity_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Entity_obj::clampVertical( Float top,Float bottom,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_PUSH("Entity::clampVertical","com/haxepunk/Entity.hx",837);
	HX_STACK_THIS(this);
	HX_STACK_ARG(top,"top");
	HX_STACK_ARG(bottom,"bottom");
	HX_STACK_ARG(padding,"padding");
{
		HX_STACK_LINE(838)
		if ((((this->y - this->originY) < (top + padding)))){
			HX_STACK_LINE(838)
			this->y = ((top + this->originY) + padding);
		}
		HX_STACK_LINE(839)
		if (((((this->y - this->originY) + this->height) > (bottom - padding)))){
			HX_STACK_LINE(839)
			this->y = (((bottom - this->height) + this->originY) - padding);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,clampVertical,(void))

Void Entity_obj::clampHorizontal( Float left,Float right,hx::Null< Float >  __o_padding){
Float padding = __o_padding.Default(0);
	HX_STACK_PUSH("Entity::clampHorizontal","com/haxepunk/Entity.hx",825);
	HX_STACK_THIS(this);
	HX_STACK_ARG(left,"left");
	HX_STACK_ARG(right,"right");
	HX_STACK_ARG(padding,"padding");
{
		HX_STACK_LINE(826)
		if ((((this->x - this->originX) < (left + padding)))){
			HX_STACK_LINE(826)
			this->x = ((left + this->originX) + padding);
		}
		HX_STACK_LINE(827)
		if (((((this->x - this->originX) + this->width) > (right - padding)))){
			HX_STACK_LINE(827)
			this->x = (((right - this->width) + this->originX) - padding);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,clampHorizontal,(void))

Void Entity_obj::moveCollideY( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Entity::moveCollideY","com/haxepunk/Entity.hx",814);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,moveCollideY,(void))

Void Entity_obj::moveCollideX( ::com::haxepunk::Entity e){
{
		HX_STACK_PUSH("Entity::moveCollideX","com/haxepunk/Entity.hx",805);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,moveCollideX,(void))

Void Entity_obj::moveTowards( Float x,Float y,Float amount,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Entity::moveTowards","com/haxepunk/Entity.hx",793);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(amount,"amount");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(794)
		this->_point->x = (x - this->x);
		HX_STACK_LINE(795)
		this->_point->y = (y - this->y);
		HX_STACK_LINE(796)
		this->_point->normalize(amount);
		HX_STACK_LINE(797)
		this->moveBy(this->_point->x,this->_point->y,solidType,sweep);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Entity_obj,moveTowards,(void))

Void Entity_obj::moveTo( Float x,Float y,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Entity::moveTo","com/haxepunk/Entity.hx",780);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(780)
		this->moveBy((x - this->x),(y - this->y),solidType,sweep);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,moveTo,(void))

Void Entity_obj::moveBy( Float x,Float y,Dynamic solidType,hx::Null< bool >  __o_sweep){
bool sweep = __o_sweep.Default(false);
	HX_STACK_PUSH("Entity::moveBy","com/haxepunk/Entity.hx",712);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(solidType,"solidType");
	HX_STACK_ARG(sweep,"sweep");
{
		HX_STACK_LINE(713)
		hx::AddEq(this->_moveX,x);
		HX_STACK_LINE(714)
		hx::AddEq(this->_moveY,y);
		HX_STACK_LINE(715)
		x = ::Math_obj::round(this->_moveX);
		HX_STACK_LINE(716)
		y = ::Math_obj::round(this->_moveY);
		HX_STACK_LINE(717)
		hx::SubEq(this->_moveX,x);
		HX_STACK_LINE(718)
		hx::SubEq(this->_moveY,y);
		HX_STACK_LINE(719)
		if (((solidType != null()))){
			HX_STACK_LINE(721)
			int sign;		HX_STACK_VAR(sign,"sign");
			::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(722)
			if (((x != (int)0))){
				HX_STACK_LINE(723)
				if (((bool(this->collidable) && bool(((bool(sweep) || bool((this->collideTypes(solidType,(this->x + x),this->y) != null())))))))){
					HX_STACK_LINE(726)
					sign = (  (((x > (int)0))) ? int((int)1) : int((int)-1) );
					HX_STACK_LINE(727)
					while(((x != (int)0))){
						HX_STACK_LINE(728)
						if ((((e = this->collideTypes(solidType,(this->x + sign),this->y)) != null()))){
							HX_STACK_LINE(731)
							this->moveCollideX(e);
							HX_STACK_LINE(732)
							break;
						}
						else{
							HX_STACK_LINE(736)
							hx::AddEq(this->x,sign);
							HX_STACK_LINE(737)
							hx::SubEq(x,sign);
						}
					}
				}
				else{
					HX_STACK_LINE(741)
					hx::AddEq(this->x,x);
				}
			}
			HX_STACK_LINE(743)
			if (((y != (int)0))){
				HX_STACK_LINE(744)
				if (((bool(this->collidable) && bool(((bool(sweep) || bool((this->collideTypes(solidType,this->x,(this->y + y)) != null())))))))){
					HX_STACK_LINE(747)
					sign = (  (((y > (int)0))) ? int((int)1) : int((int)-1) );
					HX_STACK_LINE(748)
					while(((y != (int)0))){
						HX_STACK_LINE(749)
						if ((((e = this->collideTypes(solidType,this->x,(this->y + sign))) != null()))){
							HX_STACK_LINE(752)
							this->moveCollideY(e);
							HX_STACK_LINE(753)
							break;
						}
						else{
							HX_STACK_LINE(757)
							hx::AddEq(this->y,sign);
							HX_STACK_LINE(758)
							hx::SubEq(y,sign);
						}
					}
				}
				else{
					HX_STACK_LINE(762)
					hx::AddEq(this->y,y);
				}
			}
		}
		else{
			HX_STACK_LINE(767)
			hx::AddEq(this->x,x);
			HX_STACK_LINE(768)
			hx::AddEq(this->y,y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,moveBy,(void))

::String Entity_obj::toString( ){
	HX_STACK_PUSH("Entity::toString","com/haxepunk/Entity.hx",700);
	HX_STACK_THIS(this);
	HX_STACK_LINE(700)
	return this->_class;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,toString,return )

Float Entity_obj::distanceToRect( Float rx,Float ry,Float rwidth,Float rheight){
	HX_STACK_PUSH("Entity::distanceToRect","com/haxepunk/Entity.hx",691);
	HX_STACK_THIS(this);
	HX_STACK_ARG(rx,"rx");
	HX_STACK_ARG(ry,"ry");
	HX_STACK_ARG(rwidth,"rwidth");
	HX_STACK_ARG(rheight,"rheight");
	HX_STACK_LINE(691)
	return ::com::haxepunk::HXP_obj::distanceRects(rx,ry,rwidth,rheight,(this->x - this->originX),(this->y - this->originY),this->width,this->height);
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,distanceToRect,return )

Float Entity_obj::distanceToPoint( Float px,Float py,hx::Null< bool >  __o_useHitbox){
bool useHitbox = __o_useHitbox.Default(false);
	HX_STACK_PUSH("Entity::distanceToPoint","com/haxepunk/Entity.hx",677);
	HX_STACK_THIS(this);
	HX_STACK_ARG(px,"px");
	HX_STACK_ARG(py,"py");
	HX_STACK_ARG(useHitbox,"useHitbox");
{
		HX_STACK_LINE(677)
		if ((!(useHitbox))){
			HX_STACK_LINE(678)
			return ::Math_obj::sqrt(((((this->x - px)) * ((this->x - px))) + (((this->y - py)) * ((this->y - py)))));
		}
		else{
			HX_STACK_LINE(679)
			return ::com::haxepunk::HXP_obj::distanceRectPoint(px,py,(this->x - this->originX),(this->y - this->originY),this->width,this->height);
		}
		HX_STACK_LINE(677)
		return 0.;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,distanceToPoint,return )

Float Entity_obj::distanceFrom( ::com::haxepunk::Entity e,hx::Null< bool >  __o_useHitboxes){
bool useHitboxes = __o_useHitboxes.Default(false);
	HX_STACK_PUSH("Entity::distanceFrom","com/haxepunk/Entity.hx",664);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(useHitboxes,"useHitboxes");
{
		HX_STACK_LINE(664)
		if ((!(useHitboxes))){
			HX_STACK_LINE(665)
			return ::Math_obj::sqrt(((((this->x - e->x)) * ((this->x - e->x))) + (((this->y - e->y)) * ((this->y - e->y)))));
		}
		else{
			HX_STACK_LINE(666)
			return ::com::haxepunk::HXP_obj::distanceRects((this->x - this->originX),(this->y - this->originY),this->width,this->height,(e->x - e->originX),(e->y - e->originY),e->width,e->height);
		}
		HX_STACK_LINE(664)
		return 0.;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,distanceFrom,return )

Void Entity_obj::centerOrigin( ){
{
		HX_STACK_PUSH("Entity::centerOrigin","com/haxepunk/Entity.hx",652);
		HX_STACK_THIS(this);
		HX_STACK_LINE(653)
		this->originX = ::Std_obj::_int((Float(this->width) / Float((int)2)));
		HX_STACK_LINE(654)
		this->originY = ::Std_obj::_int((Float(this->height) / Float((int)2)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,centerOrigin,(void))

Void Entity_obj::setOrigin( hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_PUSH("Entity::setOrigin","com/haxepunk/Entity.hx",643);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(644)
		this->originX = x;
		HX_STACK_LINE(645)
		this->originY = y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Entity_obj,setOrigin,(void))

Void Entity_obj::setHitboxTo( Dynamic o){
{
		HX_STACK_PUSH("Entity::setHitboxTo","com/haxepunk/Entity.hx",614);
		HX_STACK_THIS(this);
		HX_STACK_ARG(o,"o");
		HX_STACK_LINE(614)
		::com::haxepunk::HXP_obj::log(HX_CSTRING("setHitboxTo not supported on this platform"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,setHitboxTo,(void))

Void Entity_obj::setHitbox( hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_originX,hx::Null< int >  __o_originY){
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int originX = __o_originX.Default(0);
int originY = __o_originY.Default(0);
	HX_STACK_PUSH("Entity::setHitbox","com/haxepunk/Entity.hx",602);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(originX,"originX");
	HX_STACK_ARG(originY,"originY");
{
		HX_STACK_LINE(603)
		this->width = width;
		HX_STACK_LINE(604)
		this->height = height;
		HX_STACK_LINE(605)
		this->originX = originX;
		HX_STACK_LINE(606)
		this->originY = originY;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,setHitbox,(void))

::com::haxepunk::Graphic Entity_obj::addGraphic( ::com::haxepunk::Graphic g){
	HX_STACK_PUSH("Entity::addGraphic","com/haxepunk/Entity.hx",582);
	HX_STACK_THIS(this);
	HX_STACK_ARG(g,"g");
	HX_STACK_LINE(583)
	if ((::Std_obj::is(this->_graphic,hx::ClassOf< ::com::haxepunk::graphics::Graphiclist >()))){
		HX_STACK_LINE(583)
		(hx::TCast< com::haxepunk::graphics::Graphiclist >::cast(this->_graphic))->add(g);
	}
	else{
		HX_STACK_LINE(586)
		::com::haxepunk::graphics::Graphiclist list = ::com::haxepunk::graphics::Graphiclist_obj::__new(null());		HX_STACK_VAR(list,"list");
		HX_STACK_LINE(587)
		if (((this->_graphic != null()))){
			HX_STACK_LINE(587)
			list->add(this->_graphic);
		}
		HX_STACK_LINE(588)
		list->add(g);
		HX_STACK_LINE(589)
		this->setGraphic(list);
	}
	HX_STACK_LINE(591)
	return g;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,addGraphic,return )

::String Entity_obj::setName( ::String value){
	HX_STACK_PUSH("Entity::setName","com/haxepunk/Entity.hx",564);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(565)
	if (((this->_name == value))){
		HX_STACK_LINE(565)
		return this->_name;
	}
	HX_STACK_LINE(566)
	if ((!(this->_added))){
		HX_STACK_LINE(568)
		this->_name = value;
		HX_STACK_LINE(569)
		return this->_name;
	}
	HX_STACK_LINE(571)
	if (((this->_name != HX_CSTRING("")))){
		HX_STACK_LINE(571)
		this->_world->unregisterName(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(572)
	this->_name = value;
	HX_STACK_LINE(573)
	if (((value != HX_CSTRING("")))){
		HX_STACK_LINE(573)
		this->_world->registerName(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(574)
	return this->_name;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,setName,return )

::String Entity_obj::getName( ){
	HX_STACK_PUSH("Entity::getName","com/haxepunk/Entity.hx",562);
	HX_STACK_THIS(this);
	HX_STACK_LINE(562)
	return this->_name;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getName,return )

::com::haxepunk::Graphic Entity_obj::setGraphic( ::com::haxepunk::Graphic value){
	HX_STACK_PUSH("Entity::setGraphic","com/haxepunk/Entity.hx",554);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(555)
	if (((this->_graphic == value))){
		HX_STACK_LINE(555)
		return value;
	}
	HX_STACK_LINE(556)
	this->_graphic = value;
	HX_STACK_LINE(557)
	if (((bool((value != null())) && bool((value->assign_dyn() != null()))))){
		HX_STACK_LINE(557)
		value->assign();
	}
	HX_STACK_LINE(558)
	return this->_graphic;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,setGraphic,return )

::com::haxepunk::Graphic Entity_obj::getGraphic( ){
	HX_STACK_PUSH("Entity::getGraphic","com/haxepunk/Entity.hx",552);
	HX_STACK_THIS(this);
	HX_STACK_LINE(552)
	return this->_graphic;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getGraphic,return )

::com::haxepunk::Mask Entity_obj::setMask( ::com::haxepunk::Mask value){
	HX_STACK_PUSH("Entity::setMask","com/haxepunk/Entity.hx",540);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(541)
	if (((this->_mask == value))){
		HX_STACK_LINE(541)
		return value;
	}
	HX_STACK_LINE(542)
	if (((this->_mask != null()))){
		HX_STACK_LINE(542)
		this->_mask->assignTo(null());
	}
	HX_STACK_LINE(543)
	this->_mask = value;
	HX_STACK_LINE(544)
	if (((value != null()))){
		HX_STACK_LINE(544)
		this->_mask->assignTo(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(545)
	return this->_mask;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,setMask,return )

::com::haxepunk::Mask Entity_obj::getMask( ){
	HX_STACK_PUSH("Entity::getMask","com/haxepunk/Entity.hx",538);
	HX_STACK_THIS(this);
	HX_STACK_LINE(538)
	return this->_mask;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getMask,return )

::String Entity_obj::setType( ::String value){
	HX_STACK_PUSH("Entity::setType","com/haxepunk/Entity.hx",520);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(521)
	if (((this->_type == value))){
		HX_STACK_LINE(521)
		return this->_type;
	}
	HX_STACK_LINE(522)
	if ((!(this->_added))){
		HX_STACK_LINE(524)
		this->_type = value;
		HX_STACK_LINE(525)
		return this->_type;
	}
	HX_STACK_LINE(527)
	if (((this->_type != HX_CSTRING("")))){
		HX_STACK_LINE(527)
		this->_world->removeType(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(528)
	this->_type = value;
	HX_STACK_LINE(529)
	if (((value != HX_CSTRING("")))){
		HX_STACK_LINE(529)
		this->_world->addType(hx::ObjectPtr<OBJ_>(this));
	}
	HX_STACK_LINE(530)
	return this->_type;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,setType,return )

::String Entity_obj::getType( ){
	HX_STACK_PUSH("Entity::getType","com/haxepunk/Entity.hx",518);
	HX_STACK_THIS(this);
	HX_STACK_LINE(518)
	return this->_type;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getType,return )

int Entity_obj::setLayer( int value){
	HX_STACK_PUSH("Entity::setLayer","com/haxepunk/Entity.hx",495);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(496)
	if (((this->_layer == value))){
		HX_STACK_LINE(496)
		return this->_layer;
	}
	HX_STACK_LINE(498)
	if (((value < (int)0))){
		HX_STACK_LINE(499)
		::haxe::Log_obj::trace(HX_CSTRING("Negative layers may not work properly if you aren't using flash"),hx::SourceInfo(HX_CSTRING("Entity.hx"),500,HX_CSTRING("com.haxepunk.Entity"),HX_CSTRING("setLayer")));
	}
	HX_STACK_LINE(503)
	if ((!(this->_added))){
		HX_STACK_LINE(505)
		this->_layer = value;
		HX_STACK_LINE(506)
		return this->_layer;
	}
	HX_STACK_LINE(508)
	this->_world->removeRender(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(509)
	this->_layer = value;
	HX_STACK_LINE(510)
	this->_world->addRender(hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(511)
	return this->_layer;
}


HX_DEFINE_DYNAMIC_FUNC1(Entity_obj,setLayer,return )

int Entity_obj::getLayer( ){
	HX_STACK_PUSH("Entity::getLayer","com/haxepunk/Entity.hx",493);
	HX_STACK_THIS(this);
	HX_STACK_LINE(493)
	return this->_layer;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getLayer,return )

Float Entity_obj::getBottom( ){
	HX_STACK_PUSH("Entity::getBottom","com/haxepunk/Entity.hx",487);
	HX_STACK_THIS(this);
	HX_STACK_LINE(487)
	return ((this->y - this->originY) + this->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getBottom,return )

Float Entity_obj::getTop( ){
	HX_STACK_PUSH("Entity::getTop","com/haxepunk/Entity.hx",481);
	HX_STACK_THIS(this);
	HX_STACK_LINE(481)
	return (this->y - this->originY);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getTop,return )

Float Entity_obj::getRight( ){
	HX_STACK_PUSH("Entity::getRight","com/haxepunk/Entity.hx",475);
	HX_STACK_THIS(this);
	HX_STACK_LINE(475)
	return ((this->x - this->originX) + this->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getRight,return )

Float Entity_obj::getLeft( ){
	HX_STACK_PUSH("Entity::getLeft","com/haxepunk/Entity.hx",469);
	HX_STACK_THIS(this);
	HX_STACK_LINE(469)
	return (this->x - this->originX);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getLeft,return )

Float Entity_obj::getCenterY( ){
	HX_STACK_PUSH("Entity::getCenterY","com/haxepunk/Entity.hx",463);
	HX_STACK_THIS(this);
	HX_STACK_LINE(463)
	return ((this->y - this->originY) + (Float(this->height) / Float((int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getCenterY,return )

Float Entity_obj::getCenterX( ){
	HX_STACK_PUSH("Entity::getCenterX","com/haxepunk/Entity.hx",457);
	HX_STACK_THIS(this);
	HX_STACK_LINE(457)
	return ((this->x - this->originX) + (Float(this->width) / Float((int)2)));
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getCenterX,return )

Float Entity_obj::getHalfHeight( ){
	HX_STACK_PUSH("Entity::getHalfHeight","com/haxepunk/Entity.hx",451);
	HX_STACK_THIS(this);
	HX_STACK_LINE(451)
	return (Float(this->height) / Float((int)2));
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getHalfHeight,return )

Float Entity_obj::getHalfWidth( ){
	HX_STACK_PUSH("Entity::getHalfWidth","com/haxepunk/Entity.hx",445);
	HX_STACK_THIS(this);
	HX_STACK_LINE(445)
	return (Float(this->width) / Float((int)2));
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getHalfWidth,return )

::com::haxepunk::World Entity_obj::getWorld( ){
	HX_STACK_PUSH("Entity::getWorld","com/haxepunk/Entity.hx",437);
	HX_STACK_THIS(this);
	HX_STACK_LINE(437)
	return this->_world;
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getWorld,return )

bool Entity_obj::getOnCamera( ){
	HX_STACK_PUSH("Entity::getOnCamera","com/haxepunk/Entity.hx",428);
	HX_STACK_THIS(this);
	HX_STACK_LINE(428)
	return this->collideRect(this->x,this->y,::com::haxepunk::HXP_obj::camera->x,::com::haxepunk::HXP_obj::camera->y,::com::haxepunk::HXP_obj::width,::com::haxepunk::HXP_obj::height);
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,getOnCamera,return )

Void Entity_obj::collideTypesInto( Array< ::String > types,Float x,Float y,Dynamic array){
{
		HX_STACK_PUSH("Entity::collideTypesInto","com/haxepunk/Entity.hx",418);
		HX_STACK_THIS(this);
		HX_STACK_ARG(types,"types");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(array,"array");
		HX_STACK_LINE(419)
		if (((this->_world == null()))){
			HX_STACK_LINE(419)
			return null();
		}
		HX_STACK_LINE(420)
		{
			HX_STACK_LINE(420)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(420)
			while(((_g < types->length))){
				HX_STACK_LINE(420)
				::String type = types->__get(_g);		HX_STACK_VAR(type,"type");
				HX_STACK_LINE(420)
				++(_g);
				HX_STACK_LINE(420)
				this->collideInto(type,x,y,array);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,collideTypesInto,(void))

Void Entity_obj::collideInto( ::String type,Float x,Float y,Dynamic array){
{
		HX_STACK_PUSH("Entity::collideInto","com/haxepunk/Entity.hx",362);
		HX_STACK_THIS(this);
		HX_STACK_ARG(type,"type");
		HX_STACK_ARG(x,"x");
		HX_STACK_ARG(y,"y");
		HX_STACK_ARG(array,"array");
		HX_STACK_LINE(363)
		if (((this->_world == null()))){
			HX_STACK_LINE(363)
			return null();
		}
		HX_STACK_LINE(365)
		Dynamic e;		HX_STACK_VAR(e,"e");
		Dynamic fe = this->_world->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
		HX_STACK_LINE(367)
		if (((bool(!(this->collidable)) || bool((fe == null()))))){
			HX_STACK_LINE(367)
			return null();
		}
		HX_STACK_LINE(369)
		this->_x = this->x;
		HX_STACK_LINE(369)
		this->_y = this->y;
		HX_STACK_LINE(370)
		this->x = x;
		HX_STACK_LINE(370)
		this->y = y;
		HX_STACK_LINE(371)
		int n = array->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(373)
		if (((this->_mask == null()))){
			HX_STACK_LINE(375)
			while(((fe != null()))){
				HX_STACK_LINE(377)
				e = fe;
				HX_STACK_LINE(378)
				if (((bool((bool((bool((bool((bool((((x - this->originX) + this->width) > (e->__Field(HX_CSTRING("x"),true) - e->__Field(HX_CSTRING("originX"),true)))) && bool((((y - this->originY) + this->height) > (e->__Field(HX_CSTRING("y"),true) - e->__Field(HX_CSTRING("originY"),true)))))) && bool(((x - this->originX) < ((e->__Field(HX_CSTRING("x"),true) - e->__Field(HX_CSTRING("originX"),true)) + e->__Field(HX_CSTRING("width"),true)))))) && bool(((y - this->originY) < ((e->__Field(HX_CSTRING("y"),true) - e->__Field(HX_CSTRING("originY"),true)) + e->__Field(HX_CSTRING("height"),true)))))) && bool(e->__Field(HX_CSTRING("collidable"),true)))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
					HX_STACK_LINE(383)
					if (((bool((e->__Field(HX_CSTRING("_mask"),true) == null())) || bool(e->__Field(HX_CSTRING("_mask"),true)->__Field(HX_CSTRING("collide"),true)(this->HITBOX))))){
						HX_STACK_LINE(384)
						hx::IndexRef((array).mPtr,(n)++) = e;
					}
				}
				HX_STACK_LINE(386)
				fe = fe->__Field(HX_CSTRING("_typeNext"),true);
			}
			HX_STACK_LINE(388)
			this->x = this->_x;
			HX_STACK_LINE(388)
			this->y = this->_y;
			HX_STACK_LINE(389)
			return null();
		}
		HX_STACK_LINE(392)
		while(((fe != null()))){
			HX_STACK_LINE(394)
			e = fe;
			HX_STACK_LINE(395)
			if (((bool((bool((bool((bool((bool((((x - this->originX) + this->width) > (e->__Field(HX_CSTRING("x"),true) - e->__Field(HX_CSTRING("originX"),true)))) && bool((((y - this->originY) + this->height) > (e->__Field(HX_CSTRING("y"),true) - e->__Field(HX_CSTRING("originY"),true)))))) && bool(((x - this->originX) < ((e->__Field(HX_CSTRING("x"),true) - e->__Field(HX_CSTRING("originX"),true)) + e->__Field(HX_CSTRING("width"),true)))))) && bool(((y - this->originY) < ((e->__Field(HX_CSTRING("y"),true) - e->__Field(HX_CSTRING("originY"),true)) + e->__Field(HX_CSTRING("height"),true)))))) && bool(e->__Field(HX_CSTRING("collidable"),true)))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
				HX_STACK_LINE(400)
				if ((this->_mask->collide((  (((e->__Field(HX_CSTRING("_mask"),true) != null()))) ? ::com::haxepunk::Mask(e->__Field(HX_CSTRING("_mask"),true)) : ::com::haxepunk::Mask(e->__Field(HX_CSTRING("HITBOX"),true)) )))){
					HX_STACK_LINE(401)
					hx::IndexRef((array).mPtr,(n)++) = e;
				}
			}
			HX_STACK_LINE(403)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(405)
		this->x = this->_x;
		HX_STACK_LINE(405)
		this->y = this->_y;
		HX_STACK_LINE(406)
		return null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,collideInto,(void))

bool Entity_obj::collidePoint( Float x,Float y,Float pX,Float pY){
	HX_STACK_PUSH("Entity::collidePoint","com/haxepunk/Entity.hx",331);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(pX,"pX");
	HX_STACK_ARG(pY,"pY");
	HX_STACK_LINE(332)
	if (((bool((bool((bool((pX >= (x - this->originX))) && bool((pY >= (y - this->originY))))) && bool((pX < ((x - this->originX) + this->width))))) && bool((pY < ((y - this->originY) + this->height)))))){
		HX_STACK_LINE(335)
		if (((this->_mask == null()))){
			HX_STACK_LINE(335)
			return true;
		}
		HX_STACK_LINE(336)
		this->_x = this->x;
		HX_STACK_LINE(336)
		this->_y = this->y;
		HX_STACK_LINE(337)
		this->x = x;
		HX_STACK_LINE(337)
		this->y = y;
		HX_STACK_LINE(338)
		::com::haxepunk::HXP_obj::entity->x = pX;
		HX_STACK_LINE(339)
		::com::haxepunk::HXP_obj::entity->y = pY;
		HX_STACK_LINE(340)
		::com::haxepunk::HXP_obj::entity->width = (int)1;
		HX_STACK_LINE(341)
		::com::haxepunk::HXP_obj::entity->height = (int)1;
		HX_STACK_LINE(342)
		if ((this->_mask->collide(::com::haxepunk::HXP_obj::entity->HITBOX))){
			HX_STACK_LINE(344)
			this->x = this->_x;
			HX_STACK_LINE(344)
			this->y = this->_y;
			HX_STACK_LINE(345)
			return true;
		}
		HX_STACK_LINE(347)
		this->x = this->_x;
		HX_STACK_LINE(347)
		this->y = this->_y;
		HX_STACK_LINE(348)
		return false;
	}
	HX_STACK_LINE(350)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC4(Entity_obj,collidePoint,return )

bool Entity_obj::collideRect( Float x,Float y,Float rX,Float rY,Float rWidth,Float rHeight){
	HX_STACK_PUSH("Entity::collideRect","com/haxepunk/Entity.hx",300);
	HX_STACK_THIS(this);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(rX,"rX");
	HX_STACK_ARG(rY,"rY");
	HX_STACK_ARG(rWidth,"rWidth");
	HX_STACK_ARG(rHeight,"rHeight");
	HX_STACK_LINE(301)
	if (((bool((bool((bool((((x - this->originX) + this->width) >= rX)) && bool((((y - this->originY) + this->height) >= rY)))) && bool(((x - this->originX) <= (rX + rWidth))))) && bool(((y - this->originY) <= (rY + rHeight)))))){
		HX_STACK_LINE(304)
		if (((this->_mask == null()))){
			HX_STACK_LINE(304)
			return true;
		}
		HX_STACK_LINE(305)
		this->_x = this->x;
		HX_STACK_LINE(305)
		this->_y = this->y;
		HX_STACK_LINE(306)
		this->x = x;
		HX_STACK_LINE(306)
		this->y = y;
		HX_STACK_LINE(307)
		::com::haxepunk::HXP_obj::entity->x = rX;
		HX_STACK_LINE(308)
		::com::haxepunk::HXP_obj::entity->y = rY;
		HX_STACK_LINE(309)
		::com::haxepunk::HXP_obj::entity->width = ::Std_obj::_int(rWidth);
		HX_STACK_LINE(310)
		::com::haxepunk::HXP_obj::entity->height = ::Std_obj::_int(rHeight);
		HX_STACK_LINE(311)
		if ((this->_mask->collide(::com::haxepunk::HXP_obj::entity->HITBOX))){
			HX_STACK_LINE(313)
			this->x = this->_x;
			HX_STACK_LINE(313)
			this->y = this->_y;
			HX_STACK_LINE(314)
			return true;
		}
		HX_STACK_LINE(316)
		this->x = this->_x;
		HX_STACK_LINE(316)
		this->y = this->_y;
		HX_STACK_LINE(317)
		return false;
	}
	HX_STACK_LINE(319)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC6(Entity_obj,collideRect,return )

Dynamic Entity_obj::collideWith( Dynamic e,Float x,Float y){
	HX_STACK_PUSH("Entity::collideWith","com/haxepunk/Entity.hx",259);
	HX_STACK_THIS(this);
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(260)
	this->_x = this->x;
	HX_STACK_LINE(260)
	this->_y = this->y;
	HX_STACK_LINE(261)
	this->x = x;
	HX_STACK_LINE(261)
	this->y = y;
	HX_STACK_LINE(263)
	if (((bool((bool((bool((bool((bool((((x - this->originX) + this->width) > (e->__Field(HX_CSTRING("x"),true) - e->__Field(HX_CSTRING("originX"),true)))) && bool((((y - this->originY) + this->height) > (e->__Field(HX_CSTRING("y"),true) - e->__Field(HX_CSTRING("originY"),true)))))) && bool(((x - this->originX) < ((e->__Field(HX_CSTRING("x"),true) - e->__Field(HX_CSTRING("originX"),true)) + e->__Field(HX_CSTRING("width"),true)))))) && bool(((y - this->originY) < ((e->__Field(HX_CSTRING("y"),true) - e->__Field(HX_CSTRING("originY"),true)) + e->__Field(HX_CSTRING("height"),true)))))) && bool(this->collidable))) && bool(e->__Field(HX_CSTRING("collidable"),true))))){
		HX_STACK_LINE(269)
		if (((this->_mask == null()))){
			HX_STACK_LINE(271)
			if (((bool((e->__Field(HX_CSTRING("_mask"),true) == null())) || bool(e->__Field(HX_CSTRING("_mask"),true)->__Field(HX_CSTRING("collide"),true)(this->HITBOX))))){
				HX_STACK_LINE(273)
				this->x = this->_x;
				HX_STACK_LINE(273)
				this->y = this->_y;
				HX_STACK_LINE(274)
				return e;
			}
			HX_STACK_LINE(276)
			this->x = this->_x;
			HX_STACK_LINE(276)
			this->y = this->_y;
			HX_STACK_LINE(277)
			return null();
		}
		HX_STACK_LINE(279)
		if ((this->_mask->collide((  (((e->__Field(HX_CSTRING("_mask"),true) != null()))) ? ::com::haxepunk::Mask(e->__Field(HX_CSTRING("_mask"),true)) : ::com::haxepunk::Mask(e->__Field(HX_CSTRING("HITBOX"),true)) )))){
			HX_STACK_LINE(281)
			this->x = this->_x;
			HX_STACK_LINE(281)
			this->y = this->_y;
			HX_STACK_LINE(282)
			return e;
		}
	}
	HX_STACK_LINE(285)
	this->x = this->_x;
	HX_STACK_LINE(285)
	this->y = this->_y;
	HX_STACK_LINE(286)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,collideWith,return )

::com::haxepunk::Entity Entity_obj::collideTypes( Dynamic types,Float x,Float y){
	HX_STACK_PUSH("Entity::collideTypes","com/haxepunk/Entity.hx",227);
	HX_STACK_THIS(this);
	HX_STACK_ARG(types,"types");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(228)
	if (((this->_world == null()))){
		HX_STACK_LINE(228)
		return null();
	}
	HX_STACK_LINE(230)
	if ((::Std_obj::is(types,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(231)
		return this->collide(types,x,y);
	}
	else{
		HX_STACK_LINE(236)
		Array< ::String > a = types;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(237)
		if (((a != null()))){
			HX_STACK_LINE(239)
			::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
			HX_STACK_LINE(240)
			{
				HX_STACK_LINE(240)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(240)
				while(((_g < a->length))){
					HX_STACK_LINE(240)
					::String type = a->__get(_g);		HX_STACK_VAR(type,"type");
					HX_STACK_LINE(240)
					++(_g);
					HX_STACK_LINE(242)
					e = this->collide(type,x,y);
					HX_STACK_LINE(243)
					if (((e != null()))){
						HX_STACK_LINE(243)
						return e;
					}
				}
			}
		}
	}
	HX_STACK_LINE(248)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,collideTypes,return )

::com::haxepunk::Entity Entity_obj::collide( ::String type,Float x,Float y){
	HX_STACK_PUSH("Entity::collide","com/haxepunk/Entity.hx",165);
	HX_STACK_THIS(this);
	HX_STACK_ARG(type,"type");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_LINE(166)
	if (((this->_world == null()))){
		HX_STACK_LINE(166)
		return null();
	}
	HX_STACK_LINE(168)
	::com::haxepunk::Entity e;		HX_STACK_VAR(e,"e");
	Dynamic fe = this->_world->_typeFirst->get(type);		HX_STACK_VAR(fe,"fe");
	HX_STACK_LINE(170)
	if (((bool(!(this->collidable)) || bool((fe == null()))))){
		HX_STACK_LINE(170)
		return null();
	}
	HX_STACK_LINE(172)
	this->_x = this->x;
	HX_STACK_LINE(172)
	this->_y = this->y;
	HX_STACK_LINE(173)
	this->x = x;
	HX_STACK_LINE(173)
	this->y = y;
	HX_STACK_LINE(175)
	if (((this->_mask == null()))){
		HX_STACK_LINE(177)
		while(((fe != null()))){
			HX_STACK_LINE(179)
			e = hx::TCast< com::haxepunk::Entity >::cast(fe);
			HX_STACK_LINE(180)
			if (((bool((bool((bool((bool((bool((((x - this->originX) + this->width) > (e->x - e->originX))) && bool((((y - this->originY) + this->height) > (e->y - e->originY))))) && bool(((x - this->originX) < ((e->x - e->originX) + e->width))))) && bool(((y - this->originY) < ((e->y - e->originY) + e->height))))) && bool(e->collidable))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
				HX_STACK_LINE(185)
				if (((bool((e->_mask == null())) || bool(e->_mask->collide(this->HITBOX))))){
					HX_STACK_LINE(188)
					this->x = this->_x;
					HX_STACK_LINE(188)
					this->y = this->_y;
					HX_STACK_LINE(189)
					return e;
				}
			}
			HX_STACK_LINE(192)
			fe = fe->__Field(HX_CSTRING("_typeNext"),true);
		}
		HX_STACK_LINE(194)
		this->x = this->_x;
		HX_STACK_LINE(194)
		this->y = this->_y;
		HX_STACK_LINE(195)
		return null();
	}
	HX_STACK_LINE(198)
	while(((fe != null()))){
		HX_STACK_LINE(200)
		e = hx::TCast< com::haxepunk::Entity >::cast(fe);
		HX_STACK_LINE(201)
		if (((bool((bool((bool((bool((bool((((x - this->originX) + this->width) > (e->x - e->originX))) && bool((((y - this->originY) + this->height) > (e->y - e->originY))))) && bool(((x - this->originX) < ((e->x - e->originX) + e->width))))) && bool(((y - this->originY) < ((e->y - e->originY) + e->height))))) && bool(e->collidable))) && bool((e != hx::ObjectPtr<OBJ_>(this)))))){
			HX_STACK_LINE(206)
			if ((this->_mask->collide((  (((e->_mask != null()))) ? ::com::haxepunk::Mask(e->_mask) : ::com::haxepunk::Mask(e->HITBOX) )))){
				HX_STACK_LINE(209)
				this->x = this->_x;
				HX_STACK_LINE(209)
				this->y = this->_y;
				HX_STACK_LINE(210)
				return e;
			}
		}
		HX_STACK_LINE(213)
		fe = fe->__Field(HX_CSTRING("_typeNext"),true);
	}
	HX_STACK_LINE(215)
	this->x = this->_x;
	HX_STACK_LINE(215)
	this->y = this->_y;
	HX_STACK_LINE(216)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Entity_obj,collide,return )

Void Entity_obj::render( ){
{
		HX_STACK_PUSH("Entity::render","com/haxepunk/Entity.hx",142);
		HX_STACK_THIS(this);
		HX_STACK_LINE(142)
		if (((bool((this->_graphic != null())) && bool(this->_graphic->visible)))){
			HX_STACK_LINE(145)
			if ((this->_graphic->relative)){
				HX_STACK_LINE(147)
				this->_point->x = this->x;
				HX_STACK_LINE(148)
				this->_point->y = this->y;
			}
			else{
				HX_STACK_LINE(150)
				this->_point->x = this->_point->y = (int)0;
			}
			HX_STACK_LINE(151)
			this->_camera->x = ::com::haxepunk::HXP_obj::camera->x;
			HX_STACK_LINE(152)
			this->_camera->y = ::com::haxepunk::HXP_obj::camera->y;
			HX_STACK_LINE(153)
			this->_graphic->render((  (((this->renderTarget != null()))) ? ::neash::display::BitmapData(this->renderTarget) : ::neash::display::BitmapData(::com::haxepunk::HXP_obj::buffer) ),this->_point,this->_camera);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,render,(void))

Void Entity_obj::update( ){
{
		HX_STACK_PUSH("Entity::update","com/haxepunk/Entity.hx",133);
		HX_STACK_THIS(this);
	}
return null();
}


Void Entity_obj::removed( ){
{
		HX_STACK_PUSH("Entity::removed","com/haxepunk/Entity.hx",125);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,removed,(void))

Void Entity_obj::added( ){
{
		HX_STACK_PUSH("Entity::added","com/haxepunk/Entity.hx",117);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Entity_obj,added,(void))


Entity_obj::Entity_obj()
{
}

void Entity_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Entity);
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_graphic,"_graphic");
	HX_MARK_MEMBER_NAME(_moveY,"_moveY");
	HX_MARK_MEMBER_NAME(_moveX,"_moveX");
	HX_MARK_MEMBER_NAME(_y,"_y");
	HX_MARK_MEMBER_NAME(_x,"_x");
	HX_MARK_MEMBER_NAME(_mask,"_mask");
	HX_MARK_MEMBER_NAME(HITBOX,"HITBOX");
	HX_MARK_MEMBER_NAME(_recycleNext,"_recycleNext");
	HX_MARK_MEMBER_NAME(_typeNext,"_typeNext");
	HX_MARK_MEMBER_NAME(_typePrev,"_typePrev");
	HX_MARK_MEMBER_NAME(_renderNext,"_renderNext");
	HX_MARK_MEMBER_NAME(_renderPrev,"_renderPrev");
	HX_MARK_MEMBER_NAME(_updateNext,"_updateNext");
	HX_MARK_MEMBER_NAME(_updatePrev,"_updatePrev");
	HX_MARK_MEMBER_NAME(_name,"_name");
	HX_MARK_MEMBER_NAME(_layer,"_layer");
	HX_MARK_MEMBER_NAME(_type,"_type");
	HX_MARK_MEMBER_NAME(_added,"_added");
	HX_MARK_MEMBER_NAME(_world,"_world");
	HX_MARK_MEMBER_NAME(_class,"_class");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(graphic,"graphic");
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(layer,"layer");
	HX_MARK_MEMBER_NAME(bottom,"bottom");
	HX_MARK_MEMBER_NAME(top,"top");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(centerY,"centerY");
	HX_MARK_MEMBER_NAME(centerX,"centerX");
	HX_MARK_MEMBER_NAME(halfHeight,"halfHeight");
	HX_MARK_MEMBER_NAME(halfWidth,"halfWidth");
	HX_MARK_MEMBER_NAME(world,"world");
	HX_MARK_MEMBER_NAME(onCamera,"onCamera");
	HX_MARK_MEMBER_NAME(renderTarget,"renderTarget");
	HX_MARK_MEMBER_NAME(originY,"originY");
	HX_MARK_MEMBER_NAME(originX,"originX");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(collidable,"collidable");
	HX_MARK_MEMBER_NAME(visible,"visible");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Entity_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_graphic,"_graphic");
	HX_VISIT_MEMBER_NAME(_moveY,"_moveY");
	HX_VISIT_MEMBER_NAME(_moveX,"_moveX");
	HX_VISIT_MEMBER_NAME(_y,"_y");
	HX_VISIT_MEMBER_NAME(_x,"_x");
	HX_VISIT_MEMBER_NAME(_mask,"_mask");
	HX_VISIT_MEMBER_NAME(HITBOX,"HITBOX");
	HX_VISIT_MEMBER_NAME(_recycleNext,"_recycleNext");
	HX_VISIT_MEMBER_NAME(_typeNext,"_typeNext");
	HX_VISIT_MEMBER_NAME(_typePrev,"_typePrev");
	HX_VISIT_MEMBER_NAME(_renderNext,"_renderNext");
	HX_VISIT_MEMBER_NAME(_renderPrev,"_renderPrev");
	HX_VISIT_MEMBER_NAME(_updateNext,"_updateNext");
	HX_VISIT_MEMBER_NAME(_updatePrev,"_updatePrev");
	HX_VISIT_MEMBER_NAME(_name,"_name");
	HX_VISIT_MEMBER_NAME(_layer,"_layer");
	HX_VISIT_MEMBER_NAME(_type,"_type");
	HX_VISIT_MEMBER_NAME(_added,"_added");
	HX_VISIT_MEMBER_NAME(_world,"_world");
	HX_VISIT_MEMBER_NAME(_class,"_class");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(graphic,"graphic");
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(layer,"layer");
	HX_VISIT_MEMBER_NAME(bottom,"bottom");
	HX_VISIT_MEMBER_NAME(top,"top");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(centerY,"centerY");
	HX_VISIT_MEMBER_NAME(centerX,"centerX");
	HX_VISIT_MEMBER_NAME(halfHeight,"halfHeight");
	HX_VISIT_MEMBER_NAME(halfWidth,"halfWidth");
	HX_VISIT_MEMBER_NAME(world,"world");
	HX_VISIT_MEMBER_NAME(onCamera,"onCamera");
	HX_VISIT_MEMBER_NAME(renderTarget,"renderTarget");
	HX_VISIT_MEMBER_NAME(originY,"originY");
	HX_VISIT_MEMBER_NAME(originX,"originX");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(collidable,"collidable");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Entity_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { return _y; }
		if (HX_FIELD_EQ(inName,"_x") ) { return _x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { return inCallProp ? getTop() : top; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return inCallProp ? getName() : name; }
		if (HX_FIELD_EQ(inName,"mask") ) { return inCallProp ? getMask() : mask; }
		if (HX_FIELD_EQ(inName,"type") ) { return inCallProp ? getType() : type; }
		if (HX_FIELD_EQ(inName,"left") ) { return inCallProp ? getLeft() : left; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mask") ) { return _mask; }
		if (HX_FIELD_EQ(inName,"_name") ) { return _name; }
		if (HX_FIELD_EQ(inName,"_type") ) { return _type; }
		if (HX_FIELD_EQ(inName,"layer") ) { return inCallProp ? getLayer() : layer; }
		if (HX_FIELD_EQ(inName,"right") ) { return inCallProp ? getRight() : right; }
		if (HX_FIELD_EQ(inName,"world") ) { return inCallProp ? getWorld() : world; }
		if (HX_FIELD_EQ(inName,"added") ) { return added_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { return _moveY; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { return _moveX; }
		if (HX_FIELD_EQ(inName,"HITBOX") ) { return HITBOX; }
		if (HX_FIELD_EQ(inName,"_layer") ) { return _layer; }
		if (HX_FIELD_EQ(inName,"_added") ) { return _added; }
		if (HX_FIELD_EQ(inName,"_world") ) { return _world; }
		if (HX_FIELD_EQ(inName,"_class") ) { return _class; }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveBy") ) { return moveBy_dyn(); }
		if (HX_FIELD_EQ(inName,"bottom") ) { return inCallProp ? getBottom() : bottom; }
		if (HX_FIELD_EQ(inName,"getTop") ) { return getTop_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		if (HX_FIELD_EQ(inName,"setName") ) { return setName_dyn(); }
		if (HX_FIELD_EQ(inName,"getName") ) { return getName_dyn(); }
		if (HX_FIELD_EQ(inName,"graphic") ) { return inCallProp ? getGraphic() : graphic; }
		if (HX_FIELD_EQ(inName,"setMask") ) { return setMask_dyn(); }
		if (HX_FIELD_EQ(inName,"getMask") ) { return getMask_dyn(); }
		if (HX_FIELD_EQ(inName,"setType") ) { return setType_dyn(); }
		if (HX_FIELD_EQ(inName,"getType") ) { return getType_dyn(); }
		if (HX_FIELD_EQ(inName,"getLeft") ) { return getLeft_dyn(); }
		if (HX_FIELD_EQ(inName,"centerY") ) { return inCallProp ? getCenterY() : centerY; }
		if (HX_FIELD_EQ(inName,"centerX") ) { return inCallProp ? getCenterX() : centerX; }
		if (HX_FIELD_EQ(inName,"collide") ) { return collide_dyn(); }
		if (HX_FIELD_EQ(inName,"removed") ) { return removed_dyn(); }
		if (HX_FIELD_EQ(inName,"originY") ) { return originY; }
		if (HX_FIELD_EQ(inName,"originX") ) { return originX; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_graphic") ) { return _graphic; }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"setLayer") ) { return setLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		if (HX_FIELD_EQ(inName,"getRight") ) { return getRight_dyn(); }
		if (HX_FIELD_EQ(inName,"getWorld") ) { return getWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"onCamera") ) { return inCallProp ? getOnCamera() : onCamera; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_typeNext") ) { return _typeNext; }
		if (HX_FIELD_EQ(inName,"_typePrev") ) { return _typePrev; }
		if (HX_FIELD_EQ(inName,"setOrigin") ) { return setOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"setHitbox") ) { return setHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"getBottom") ) { return getBottom_dyn(); }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { return inCallProp ? getHalfWidth() : halfWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return addGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"setGraphic") ) { return setGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"getGraphic") ) { return getGraphic_dyn(); }
		if (HX_FIELD_EQ(inName,"getCenterY") ) { return getCenterY_dyn(); }
		if (HX_FIELD_EQ(inName,"getCenterX") ) { return getCenterX_dyn(); }
		if (HX_FIELD_EQ(inName,"halfHeight") ) { return inCallProp ? getHalfHeight() : halfHeight; }
		if (HX_FIELD_EQ(inName,"collidable") ) { return collidable; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_renderNext") ) { return _renderNext; }
		if (HX_FIELD_EQ(inName,"_renderPrev") ) { return _renderPrev; }
		if (HX_FIELD_EQ(inName,"_updateNext") ) { return _updateNext; }
		if (HX_FIELD_EQ(inName,"_updatePrev") ) { return _updatePrev; }
		if (HX_FIELD_EQ(inName,"moveTowards") ) { return moveTowards_dyn(); }
		if (HX_FIELD_EQ(inName,"setHitboxTo") ) { return setHitboxTo_dyn(); }
		if (HX_FIELD_EQ(inName,"getOnCamera") ) { return getOnCamera_dyn(); }
		if (HX_FIELD_EQ(inName,"collideInto") ) { return collideInto_dyn(); }
		if (HX_FIELD_EQ(inName,"collideRect") ) { return collideRect_dyn(); }
		if (HX_FIELD_EQ(inName,"collideWith") ) { return collideWith_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_recycleNext") ) { return _recycleNext; }
		if (HX_FIELD_EQ(inName,"moveCollideY") ) { return moveCollideY_dyn(); }
		if (HX_FIELD_EQ(inName,"moveCollideX") ) { return moveCollideX_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceFrom") ) { return distanceFrom_dyn(); }
		if (HX_FIELD_EQ(inName,"centerOrigin") ) { return centerOrigin_dyn(); }
		if (HX_FIELD_EQ(inName,"getHalfWidth") ) { return getHalfWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"collidePoint") ) { return collidePoint_dyn(); }
		if (HX_FIELD_EQ(inName,"collideTypes") ) { return collideTypes_dyn(); }
		if (HX_FIELD_EQ(inName,"renderTarget") ) { return renderTarget; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clampVertical") ) { return clampVertical_dyn(); }
		if (HX_FIELD_EQ(inName,"getHalfHeight") ) { return getHalfHeight_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"distanceToRect") ) { return distanceToRect_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"clampHorizontal") ) { return clampHorizontal_dyn(); }
		if (HX_FIELD_EQ(inName,"distanceToPoint") ) { return distanceToPoint_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collideTypesInto") ) { return collideTypesInto_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Entity_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"_y") ) { _y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_x") ) { _x=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"top") ) { top=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp) return setName(inValue);name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mask") ) { if (inCallProp) return setMask(inValue);mask=inValue.Cast< ::com::haxepunk::Mask >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { if (inCallProp) return setType(inValue);type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< Float >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_mask") ) { _mask=inValue.Cast< ::com::haxepunk::Mask >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_name") ) { _name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_type") ) { _type=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layer") ) { if (inCallProp) return setLayer(inValue);layer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"world") ) { world=inValue.Cast< ::com::haxepunk::World >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveY") ) { _moveY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_moveX") ) { _moveX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HITBOX") ) { HITBOX=inValue.Cast< ::com::haxepunk::Mask >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_layer") ) { _layer=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_added") ) { _added=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_world") ) { _world=inValue.Cast< ::com::haxepunk::World >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_class") ) { _class=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bottom") ) { bottom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"graphic") ) { if (inCallProp) return setGraphic(inValue);graphic=inValue.Cast< ::com::haxepunk::Graphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centerY") ) { centerY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"centerX") ) { centerX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originY") ) { originY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"originX") ) { originX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_graphic") ) { _graphic=inValue.Cast< ::com::haxepunk::Graphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onCamera") ) { onCamera=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_typeNext") ) { _typeNext=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_typePrev") ) { _typePrev=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"halfWidth") ) { halfWidth=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"halfHeight") ) { halfHeight=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"collidable") ) { collidable=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_renderNext") ) { _renderNext=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_renderPrev") ) { _renderPrev=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateNext") ) { _updateNext=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updatePrev") ) { _updatePrev=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_recycleNext") ) { _recycleNext=inValue.Cast< ::com::haxepunk::Entity >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderTarget") ) { renderTarget=inValue.Cast< ::neash::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Entity_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_camera"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_graphic"));
	outFields->push(HX_CSTRING("_moveY"));
	outFields->push(HX_CSTRING("_moveX"));
	outFields->push(HX_CSTRING("_y"));
	outFields->push(HX_CSTRING("_x"));
	outFields->push(HX_CSTRING("_mask"));
	outFields->push(HX_CSTRING("HITBOX"));
	outFields->push(HX_CSTRING("_recycleNext"));
	outFields->push(HX_CSTRING("_typeNext"));
	outFields->push(HX_CSTRING("_typePrev"));
	outFields->push(HX_CSTRING("_renderNext"));
	outFields->push(HX_CSTRING("_renderPrev"));
	outFields->push(HX_CSTRING("_updateNext"));
	outFields->push(HX_CSTRING("_updatePrev"));
	outFields->push(HX_CSTRING("_name"));
	outFields->push(HX_CSTRING("_layer"));
	outFields->push(HX_CSTRING("_type"));
	outFields->push(HX_CSTRING("_added"));
	outFields->push(HX_CSTRING("_world"));
	outFields->push(HX_CSTRING("_class"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("graphic"));
	outFields->push(HX_CSTRING("mask"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("layer"));
	outFields->push(HX_CSTRING("bottom"));
	outFields->push(HX_CSTRING("top"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("centerY"));
	outFields->push(HX_CSTRING("centerX"));
	outFields->push(HX_CSTRING("halfHeight"));
	outFields->push(HX_CSTRING("halfWidth"));
	outFields->push(HX_CSTRING("world"));
	outFields->push(HX_CSTRING("onCamera"));
	outFields->push(HX_CSTRING("renderTarget"));
	outFields->push(HX_CSTRING("originY"));
	outFields->push(HX_CSTRING("originX"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("collidable"));
	outFields->push(HX_CSTRING("visible"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_camera"),
	HX_CSTRING("_point"),
	HX_CSTRING("_graphic"),
	HX_CSTRING("_moveY"),
	HX_CSTRING("_moveX"),
	HX_CSTRING("_y"),
	HX_CSTRING("_x"),
	HX_CSTRING("_mask"),
	HX_CSTRING("HITBOX"),
	HX_CSTRING("_recycleNext"),
	HX_CSTRING("_typeNext"),
	HX_CSTRING("_typePrev"),
	HX_CSTRING("_renderNext"),
	HX_CSTRING("_renderPrev"),
	HX_CSTRING("_updateNext"),
	HX_CSTRING("_updatePrev"),
	HX_CSTRING("_name"),
	HX_CSTRING("_layer"),
	HX_CSTRING("_type"),
	HX_CSTRING("_added"),
	HX_CSTRING("_world"),
	HX_CSTRING("_class"),
	HX_CSTRING("clampVertical"),
	HX_CSTRING("clampHorizontal"),
	HX_CSTRING("moveCollideY"),
	HX_CSTRING("moveCollideX"),
	HX_CSTRING("moveTowards"),
	HX_CSTRING("moveTo"),
	HX_CSTRING("moveBy"),
	HX_CSTRING("toString"),
	HX_CSTRING("distanceToRect"),
	HX_CSTRING("distanceToPoint"),
	HX_CSTRING("distanceFrom"),
	HX_CSTRING("centerOrigin"),
	HX_CSTRING("setOrigin"),
	HX_CSTRING("setHitboxTo"),
	HX_CSTRING("setHitbox"),
	HX_CSTRING("addGraphic"),
	HX_CSTRING("setName"),
	HX_CSTRING("getName"),
	HX_CSTRING("name"),
	HX_CSTRING("setGraphic"),
	HX_CSTRING("getGraphic"),
	HX_CSTRING("graphic"),
	HX_CSTRING("setMask"),
	HX_CSTRING("getMask"),
	HX_CSTRING("mask"),
	HX_CSTRING("setType"),
	HX_CSTRING("getType"),
	HX_CSTRING("type"),
	HX_CSTRING("setLayer"),
	HX_CSTRING("getLayer"),
	HX_CSTRING("layer"),
	HX_CSTRING("getBottom"),
	HX_CSTRING("bottom"),
	HX_CSTRING("getTop"),
	HX_CSTRING("top"),
	HX_CSTRING("getRight"),
	HX_CSTRING("right"),
	HX_CSTRING("getLeft"),
	HX_CSTRING("left"),
	HX_CSTRING("getCenterY"),
	HX_CSTRING("centerY"),
	HX_CSTRING("getCenterX"),
	HX_CSTRING("centerX"),
	HX_CSTRING("getHalfHeight"),
	HX_CSTRING("halfHeight"),
	HX_CSTRING("getHalfWidth"),
	HX_CSTRING("halfWidth"),
	HX_CSTRING("getWorld"),
	HX_CSTRING("world"),
	HX_CSTRING("getOnCamera"),
	HX_CSTRING("onCamera"),
	HX_CSTRING("collideTypesInto"),
	HX_CSTRING("collideInto"),
	HX_CSTRING("collidePoint"),
	HX_CSTRING("collideRect"),
	HX_CSTRING("collideWith"),
	HX_CSTRING("collideTypes"),
	HX_CSTRING("collide"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	HX_CSTRING("removed"),
	HX_CSTRING("added"),
	HX_CSTRING("renderTarget"),
	HX_CSTRING("originY"),
	HX_CSTRING("originX"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("collidable"),
	HX_CSTRING("visible"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Entity_obj::__mClass,"__mClass");
};

Class Entity_obj::__mClass;

void Entity_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Entity"), hx::TCanCast< Entity_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Entity_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
