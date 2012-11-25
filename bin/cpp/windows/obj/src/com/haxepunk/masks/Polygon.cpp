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
#ifndef INCLUDED_com_haxepunk_masks_Polygon
#include <com/haxepunk/masks/Polygon.h>
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

Void Polygon_obj::__construct(Array< ::neash::geom::Point > points,::neash::geom::Point origin)
{
HX_STACK_PUSH("Polygon::new","com/haxepunk/masks/Polygon.hx",24);
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->_points = points;
	HX_STACK_LINE(28)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Hitbox >()),this->collideHitbox_dyn());
	HX_STACK_LINE(29)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Circle >()),this->collideCircle_dyn());
	HX_STACK_LINE(30)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Polygon >()),this->collidePolygon_dyn());
	HX_STACK_LINE(31)
	this->_check->set(::Type_obj::getClassName(hx::ClassOf< ::com::haxepunk::masks::Grid >()),this->collideGrid_dyn());
	HX_STACK_LINE(33)
	this->origin = (  (((origin != null()))) ? ::neash::geom::Point(origin) : ::neash::geom::Point(::neash::geom::Point_obj::__new(null(),null())) );
	HX_STACK_LINE(34)
	this->_angle = (int)0;
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			this->_axes = Array_obj< ::com::haxepunk::math::Vector >::__new();
			HX_STACK_LINE(36)
			Float store;		HX_STACK_VAR(store,"store");
			HX_STACK_LINE(36)
			int numberOfPoints = (this->_points->length - (int)1);		HX_STACK_VAR(numberOfPoints,"numberOfPoints");
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(36)
				while(((_g < numberOfPoints))){
					HX_STACK_LINE(36)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(36)
					::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
					HX_STACK_LINE(36)
					edge->x = (this->_points->__get(i)->x - this->_points->__get((i + (int)1))->x);
					HX_STACK_LINE(36)
					edge->y = (this->_points->__get(i)->y - this->_points->__get((i + (int)1))->y);
					HX_STACK_LINE(36)
					store = edge->y;
					HX_STACK_LINE(36)
					edge->y = -(edge->x);
					HX_STACK_LINE(36)
					edge->x = store;
					HX_STACK_LINE(36)
					edge->normalize((int)1);
					HX_STACK_LINE(36)
					this->_axes->push(edge);
				}
			}
			HX_STACK_LINE(36)
			::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(36)
			edge->x = (this->_points->__get(numberOfPoints)->x - this->_points->__get((int)0)->x);
			HX_STACK_LINE(36)
			edge->y = (this->_points->__get(numberOfPoints)->y - this->_points->__get((int)0)->y);
			HX_STACK_LINE(36)
			store = edge->y;
			HX_STACK_LINE(36)
			edge->y = -(edge->x);
			HX_STACK_LINE(36)
			edge->x = store;
			HX_STACK_LINE(36)
			edge->normalize((int)1);
			HX_STACK_LINE(36)
			this->_axes->push(edge);
		}
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_axes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(36)
			while(((_g1 < _g))){
				HX_STACK_LINE(36)
				int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
				HX_STACK_LINE(36)
				{
					HX_STACK_LINE(36)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->_axes->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(36)
					while(((_g3 < _g2))){
						HX_STACK_LINE(36)
						int jj = (_g3)++;		HX_STACK_VAR(jj,"jj");
						HX_STACK_LINE(36)
						if (((bool((ii == jj)) || bool((::Math_obj::max(ii,jj) >= this->_axes->length))))){
							HX_STACK_LINE(36)
							continue;
						}
						HX_STACK_LINE(36)
						if (((bool((bool((this->_axes->__get(ii)->x == this->_axes->__get(jj)->x)) && bool((this->_axes->__get(ii)->y == this->_axes->__get(jj)->y)))) || bool((bool((-(this->_axes->__get(ii)->x) == this->_axes->__get(jj)->x)) && bool((-(this->_axes->__get(ii)->y) == this->_axes->__get(jj)->y))))))){
							HX_STACK_LINE(36)
							this->_axes->splice(jj,(int)1);
						}
					}
				}
			}
		}
	}
}
;
	return null();
}

Polygon_obj::~Polygon_obj() { }

Dynamic Polygon_obj::__CreateEmpty() { return  new Polygon_obj; }
hx::ObjectPtr< Polygon_obj > Polygon_obj::__new(Array< ::neash::geom::Point > points,::neash::geom::Point origin)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(points,origin);
	return result;}

Dynamic Polygon_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Polygon_obj > result = new Polygon_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Polygon_obj::updateAxes( ){
{
		HX_STACK_PUSH("Polygon::updateAxes","com/haxepunk/masks/Polygon.hx",462);
		HX_STACK_THIS(this);
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			this->_axes = Array_obj< ::com::haxepunk::math::Vector >::__new();
			HX_STACK_LINE(463)
			Float store;		HX_STACK_VAR(store,"store");
			HX_STACK_LINE(463)
			int numberOfPoints = (this->_points->length - (int)1);		HX_STACK_VAR(numberOfPoints,"numberOfPoints");
			HX_STACK_LINE(463)
			{
				HX_STACK_LINE(463)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(463)
				while(((_g < numberOfPoints))){
					HX_STACK_LINE(463)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(463)
					::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
					HX_STACK_LINE(463)
					edge->x = (this->_points->__get(i)->x - this->_points->__get((i + (int)1))->x);
					HX_STACK_LINE(463)
					edge->y = (this->_points->__get(i)->y - this->_points->__get((i + (int)1))->y);
					HX_STACK_LINE(463)
					store = edge->y;
					HX_STACK_LINE(463)
					edge->y = -(edge->x);
					HX_STACK_LINE(463)
					edge->x = store;
					HX_STACK_LINE(463)
					edge->normalize((int)1);
					HX_STACK_LINE(463)
					this->_axes->push(edge);
				}
			}
			HX_STACK_LINE(463)
			::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
			HX_STACK_LINE(463)
			edge->x = (this->_points->__get(numberOfPoints)->x - this->_points->__get((int)0)->x);
			HX_STACK_LINE(463)
			edge->y = (this->_points->__get(numberOfPoints)->y - this->_points->__get((int)0)->y);
			HX_STACK_LINE(463)
			store = edge->y;
			HX_STACK_LINE(463)
			edge->y = -(edge->x);
			HX_STACK_LINE(463)
			edge->x = store;
			HX_STACK_LINE(463)
			edge->normalize((int)1);
			HX_STACK_LINE(463)
			this->_axes->push(edge);
		}
		HX_STACK_LINE(464)
		{
			HX_STACK_LINE(464)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_axes->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(464)
			while(((_g1 < _g))){
				HX_STACK_LINE(464)
				int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
				HX_STACK_LINE(464)
				{
					HX_STACK_LINE(464)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					int _g2 = this->_axes->length;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(464)
					while(((_g3 < _g2))){
						HX_STACK_LINE(464)
						int jj = (_g3)++;		HX_STACK_VAR(jj,"jj");
						HX_STACK_LINE(464)
						if (((bool((ii == jj)) || bool((::Math_obj::max(ii,jj) >= this->_axes->length))))){
							HX_STACK_LINE(464)
							continue;
						}
						HX_STACK_LINE(464)
						if (((bool((bool((this->_axes->__get(ii)->x == this->_axes->__get(jj)->x)) && bool((this->_axes->__get(ii)->y == this->_axes->__get(jj)->y)))) || bool((bool((-(this->_axes->__get(ii)->x) == this->_axes->__get(jj)->x)) && bool((-(this->_axes->__get(ii)->y) == this->_axes->__get(jj)->y))))))){
							HX_STACK_LINE(464)
							this->_axes->splice(jj,(int)1);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,updateAxes,(void))

Void Polygon_obj::update( ){
{
		HX_STACK_PUSH("Polygon::update","com/haxepunk/masks/Polygon.hx",446);
		HX_STACK_THIS(this);
		HX_STACK_LINE(447)
		this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
		HX_STACK_LINE(448)
		this->width = ::Math_obj::ceil((::com::haxepunk::masks::Polygon_obj::firstProj->max - ::com::haxepunk::masks::Polygon_obj::firstProj->min));
		HX_STACK_LINE(449)
		this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
		HX_STACK_LINE(450)
		this->height = ::Math_obj::ceil((::com::haxepunk::masks::Polygon_obj::secondProj->max - ::com::haxepunk::masks::Polygon_obj::secondProj->min));
		HX_STACK_LINE(453)
		this->parent->width = this->width;
		HX_STACK_LINE(454)
		this->parent->height = this->height;
		HX_STACK_LINE(457)
		this->parent->originX = ::Std_obj::_int((Float((((this->width - ::com::haxepunk::masks::Polygon_obj::firstProj->max) - ::com::haxepunk::masks::Polygon_obj::firstProj->min))) / Float((int)2)));
		HX_STACK_LINE(458)
		this->parent->originY = ::Std_obj::_int((Float((((this->height - ::com::haxepunk::masks::Polygon_obj::secondProj->max) - ::com::haxepunk::masks::Polygon_obj::secondProj->min))) / Float((int)2)));
	}
return null();
}


Array< ::neash::geom::Point > Polygon_obj::setPoints( Array< ::neash::geom::Point > value){
	HX_STACK_PUSH("Polygon::setPoints","com/haxepunk/masks/Polygon.hx",435);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(436)
	if (((this->_points == value))){
		HX_STACK_LINE(436)
		return value;
	}
	HX_STACK_LINE(437)
	this->_points = value;
	HX_STACK_LINE(439)
	if (((this->list != null()))){
		HX_STACK_LINE(439)
		{
			HX_STACK_LINE(439)
			{
				HX_STACK_LINE(439)
				this->_axes = Array_obj< ::com::haxepunk::math::Vector >::__new();
				HX_STACK_LINE(439)
				Float store;		HX_STACK_VAR(store,"store");
				HX_STACK_LINE(439)
				int numberOfPoints = (this->_points->length - (int)1);		HX_STACK_VAR(numberOfPoints,"numberOfPoints");
				HX_STACK_LINE(439)
				{
					HX_STACK_LINE(439)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(439)
					while(((_g < numberOfPoints))){
						HX_STACK_LINE(439)
						int i = (_g)++;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(439)
						::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
						HX_STACK_LINE(439)
						edge->x = (this->_points->__get(i)->x - this->_points->__get((i + (int)1))->x);
						HX_STACK_LINE(439)
						edge->y = (this->_points->__get(i)->y - this->_points->__get((i + (int)1))->y);
						HX_STACK_LINE(439)
						store = edge->y;
						HX_STACK_LINE(439)
						edge->y = -(edge->x);
						HX_STACK_LINE(439)
						edge->x = store;
						HX_STACK_LINE(439)
						edge->normalize((int)1);
						HX_STACK_LINE(439)
						this->_axes->push(edge);
					}
				}
				HX_STACK_LINE(439)
				::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
				HX_STACK_LINE(439)
				edge->x = (this->_points->__get(numberOfPoints)->x - this->_points->__get((int)0)->x);
				HX_STACK_LINE(439)
				edge->y = (this->_points->__get(numberOfPoints)->y - this->_points->__get((int)0)->y);
				HX_STACK_LINE(439)
				store = edge->y;
				HX_STACK_LINE(439)
				edge->y = -(edge->x);
				HX_STACK_LINE(439)
				edge->x = store;
				HX_STACK_LINE(439)
				edge->normalize((int)1);
				HX_STACK_LINE(439)
				this->_axes->push(edge);
			}
			HX_STACK_LINE(439)
			{
				HX_STACK_LINE(439)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_axes->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(439)
				while(((_g1 < _g))){
					HX_STACK_LINE(439)
					int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
					HX_STACK_LINE(439)
					{
						HX_STACK_LINE(439)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						int _g2 = this->_axes->length;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(439)
						while(((_g3 < _g2))){
							HX_STACK_LINE(439)
							int jj = (_g3)++;		HX_STACK_VAR(jj,"jj");
							HX_STACK_LINE(439)
							if (((bool((ii == jj)) || bool((::Math_obj::max(ii,jj) >= this->_axes->length))))){
								HX_STACK_LINE(439)
								continue;
							}
							HX_STACK_LINE(439)
							if (((bool((bool((this->_axes->__get(ii)->x == this->_axes->__get(jj)->x)) && bool((this->_axes->__get(ii)->y == this->_axes->__get(jj)->y)))) || bool((bool((-(this->_axes->__get(ii)->x) == this->_axes->__get(jj)->x)) && bool((-(this->_axes->__get(ii)->y) == this->_axes->__get(jj)->y))))))){
								HX_STACK_LINE(439)
								this->_axes->splice(jj,(int)1);
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(439)
		this->update();
	}
	else{
		HX_STACK_LINE(440)
		if (((this->parent != null()))){
			HX_STACK_LINE(440)
			{
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					this->_axes = Array_obj< ::com::haxepunk::math::Vector >::__new();
					HX_STACK_LINE(440)
					Float store;		HX_STACK_VAR(store,"store");
					HX_STACK_LINE(440)
					int numberOfPoints = (this->_points->length - (int)1);		HX_STACK_VAR(numberOfPoints,"numberOfPoints");
					HX_STACK_LINE(440)
					{
						HX_STACK_LINE(440)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(440)
						while(((_g < numberOfPoints))){
							HX_STACK_LINE(440)
							int i = (_g)++;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(440)
							::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
							HX_STACK_LINE(440)
							edge->x = (this->_points->__get(i)->x - this->_points->__get((i + (int)1))->x);
							HX_STACK_LINE(440)
							edge->y = (this->_points->__get(i)->y - this->_points->__get((i + (int)1))->y);
							HX_STACK_LINE(440)
							store = edge->y;
							HX_STACK_LINE(440)
							edge->y = -(edge->x);
							HX_STACK_LINE(440)
							edge->x = store;
							HX_STACK_LINE(440)
							edge->normalize((int)1);
							HX_STACK_LINE(440)
							this->_axes->push(edge);
						}
					}
					HX_STACK_LINE(440)
					::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
					HX_STACK_LINE(440)
					edge->x = (this->_points->__get(numberOfPoints)->x - this->_points->__get((int)0)->x);
					HX_STACK_LINE(440)
					edge->y = (this->_points->__get(numberOfPoints)->y - this->_points->__get((int)0)->y);
					HX_STACK_LINE(440)
					store = edge->y;
					HX_STACK_LINE(440)
					edge->y = -(edge->x);
					HX_STACK_LINE(440)
					edge->x = store;
					HX_STACK_LINE(440)
					edge->normalize((int)1);
					HX_STACK_LINE(440)
					this->_axes->push(edge);
				}
				HX_STACK_LINE(440)
				{
					HX_STACK_LINE(440)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = this->_axes->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(440)
					while(((_g1 < _g))){
						HX_STACK_LINE(440)
						int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
						HX_STACK_LINE(440)
						{
							HX_STACK_LINE(440)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							int _g2 = this->_axes->length;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(440)
							while(((_g3 < _g2))){
								HX_STACK_LINE(440)
								int jj = (_g3)++;		HX_STACK_VAR(jj,"jj");
								HX_STACK_LINE(440)
								if (((bool((ii == jj)) || bool((::Math_obj::max(ii,jj) >= this->_axes->length))))){
									HX_STACK_LINE(440)
									continue;
								}
								HX_STACK_LINE(440)
								if (((bool((bool((this->_axes->__get(ii)->x == this->_axes->__get(jj)->x)) && bool((this->_axes->__get(ii)->y == this->_axes->__get(jj)->y)))) || bool((bool((-(this->_axes->__get(ii)->x) == this->_axes->__get(jj)->x)) && bool((-(this->_axes->__get(ii)->y) == this->_axes->__get(jj)->y))))))){
									HX_STACK_LINE(440)
									this->_axes->splice(jj,(int)1);
								}
							}
						}
					}
				}
			}
			HX_STACK_LINE(440)
			this->update();
		}
	}
	HX_STACK_LINE(441)
	return this->_points;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,setPoints,return )

Array< ::neash::geom::Point > Polygon_obj::getPoints( ){
	HX_STACK_PUSH("Polygon::getPoints","com/haxepunk/masks/Polygon.hx",433);
	HX_STACK_THIS(this);
	HX_STACK_LINE(433)
	return this->_points;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,getPoints,return )

Float Polygon_obj::setAngle( Float value){
	HX_STACK_PUSH("Polygon::setAngle","com/haxepunk/masks/Polygon.hx",410);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(411)
	if (((value == this->_angle))){
		HX_STACK_LINE(411)
		return value;
	}
	HX_STACK_LINE(412)
	this->rotate((this->_angle - value));
	HX_STACK_LINE(413)
	if (((this->list != null()))){
		HX_STACK_LINE(413)
		this->update();
	}
	else{
		HX_STACK_LINE(414)
		if (((this->parent != null()))){
			HX_STACK_LINE(414)
			this->update();
		}
	}
	HX_STACK_LINE(415)
	return this->_angle = value;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,setAngle,return )

Float Polygon_obj::getAngle( ){
	HX_STACK_PUSH("Polygon::getAngle","com/haxepunk/masks/Polygon.hx",408);
	HX_STACK_THIS(this);
	HX_STACK_LINE(408)
	return this->_angle;
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,getAngle,return )

Void Polygon_obj::debugDraw( ::neash::display::Graphics graphics,Float scaleX,Float scaleY){
{
		HX_STACK_PUSH("Polygon::debugDraw","com/haxepunk/masks/Polygon.hx",389);
		HX_STACK_THIS(this);
		HX_STACK_ARG(graphics,"graphics");
		HX_STACK_ARG(scaleX,"scaleX");
		HX_STACK_ARG(scaleY,"scaleY");
		HX_STACK_LINE(389)
		if (((this->parent != null()))){
			HX_STACK_LINE(392)
			Float offsetX = (this->parent->x - ::com::haxepunk::HXP_obj::camera->x);		HX_STACK_VAR(offsetX,"offsetX");
			Float offsetY = (this->parent->y - ::com::haxepunk::HXP_obj::camera->y);		HX_STACK_VAR(offsetY,"offsetY");
			HX_STACK_LINE(395)
			graphics->moveTo((((this->_points->__get((this->_points->length - (int)1))->x + offsetX)) * scaleX),(((this->_points->__get((this->_points->length - (int)1))->y + offsetY)) * scaleY));
			HX_STACK_LINE(396)
			{
				HX_STACK_LINE(396)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(396)
				while(((_g1 < _g))){
					HX_STACK_LINE(396)
					int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
					HX_STACK_LINE(398)
					graphics->lineTo((((this->_points->__get(ii)->x + offsetX)) * scaleX),(((this->_points->__get(ii)->y + offsetY)) * scaleY));
				}
			}
		}
	}
return null();
}


Void Polygon_obj::rotate( Float angle){
{
		HX_STACK_PUSH("Polygon::rotate","com/haxepunk/masks/Polygon.hx",362);
		HX_STACK_THIS(this);
		HX_STACK_ARG(angle,"angle");
		HX_STACK_LINE(363)
		hx::MultEq(angle,(Float(::Math_obj::PI) / Float((int)-180)));
		HX_STACK_LINE(365)
		{
			HX_STACK_LINE(365)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::neash::geom::Point > _g1 = this->_points;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(365)
			while(((_g < _g1->length))){
				HX_STACK_LINE(365)
				::neash::geom::Point p = _g1->__get(_g);		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(365)
				++(_g);
				HX_STACK_LINE(367)
				Float dx = (p->x - this->origin->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(368)
				Float dy = (p->y - this->origin->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(370)
				Float pointAngle = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(pointAngle,"pointAngle");
				HX_STACK_LINE(371)
				Float length = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(373)
				p->x = ((::Math_obj::cos((pointAngle + angle)) * length) + this->origin->x);
				HX_STACK_LINE(374)
				p->y = ((::Math_obj::sin((pointAngle + angle)) * length) + this->origin->y);
			}
		}
		HX_STACK_LINE(376)
		{
			HX_STACK_LINE(376)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::com::haxepunk::math::Vector > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(376)
			while(((_g < _g1->length))){
				HX_STACK_LINE(376)
				::com::haxepunk::math::Vector ax = _g1->__get(_g);		HX_STACK_VAR(ax,"ax");
				HX_STACK_LINE(376)
				++(_g);
				HX_STACK_LINE(379)
				Float axisAngle = ::Math_obj::atan2(ax->y,ax->x);		HX_STACK_VAR(axisAngle,"axisAngle");
				HX_STACK_LINE(381)
				ax->x = ::Math_obj::cos((axisAngle + angle));
				HX_STACK_LINE(382)
				ax->y = ::Math_obj::sin((axisAngle + angle));
			}
		}
		HX_STACK_LINE(384)
		hx::AddEq(this->_angle,angle);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,rotate,(void))

Void Polygon_obj::project( ::com::haxepunk::math::Vector axis,::com::haxepunk::math::Projection projection){
{
		HX_STACK_PUSH("Polygon::project","com/haxepunk/masks/Polygon.hx",340);
		HX_STACK_THIS(this);
		HX_STACK_ARG(axis,"axis");
		HX_STACK_ARG(projection,"projection");
		struct _Function_1_1{
			inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this,::com::haxepunk::math::Vector &axis){
				HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",341);
				{
					HX_STACK_LINE(341)
					::neash::geom::Point p = __this->_points->__get((int)0);		HX_STACK_VAR(p,"p");
					HX_STACK_LINE(341)
					return ((axis->x * p->x) + (axis->y * p->y));
				}
				return null();
			}
		};
		HX_STACK_LINE(341)
		Float min = _Function_1_1::Block(this,axis);		HX_STACK_VAR(min,"min");
		Float max = min;		HX_STACK_VAR(max,"max");
		HX_STACK_LINE(344)
		{
			HX_STACK_LINE(344)
			int _g1 = (int)1;		HX_STACK_VAR(_g1,"_g1");
			int _g = this->_points->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(344)
			while(((_g1 < _g))){
				HX_STACK_LINE(344)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				struct _Function_3_1{
					inline static Float Block( ::com::haxepunk::masks::Polygon_obj *__this,::com::haxepunk::math::Vector &axis,int &i){
						HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",346);
						{
							HX_STACK_LINE(346)
							::neash::geom::Point p = __this->_points->__get(i);		HX_STACK_VAR(p,"p");
							HX_STACK_LINE(346)
							return ((axis->x * p->x) + (axis->y * p->y));
						}
						return null();
					}
				};
				HX_STACK_LINE(346)
				Float cur = _Function_3_1::Block(this,axis,i);		HX_STACK_VAR(cur,"cur");
				HX_STACK_LINE(348)
				if (((cur < min))){
					HX_STACK_LINE(349)
					min = cur;
				}
				else{
					HX_STACK_LINE(352)
					if (((cur > max))){
						HX_STACK_LINE(353)
						max = cur;
					}
				}
			}
		}
		HX_STACK_LINE(357)
		projection->min = min;
		HX_STACK_LINE(358)
		projection->max = max;
	}
return null();
}


bool Polygon_obj::collidePolygon( ::com::haxepunk::masks::Polygon other){
	HX_STACK_PUSH("Polygon::collidePolygon","com/haxepunk/masks/Polygon.hx",301);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(302)
	Float offsetX = (this->parent->x - other->parent->x);		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(303)
	Float offsetY = (this->parent->y - other->parent->y);		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(305)
	{
		HX_STACK_LINE(305)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::com::haxepunk::math::Vector > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(305)
		while(((_g < _g1->length))){
			HX_STACK_LINE(305)
			::com::haxepunk::math::Vector a = _g1->__get(_g);		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(305)
			++(_g);
			HX_STACK_LINE(307)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(308)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(311)
			Float offset = ((offsetX * a->x) + (offsetY * a->y));		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(312)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(313)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",315);
					{
						HX_STACK_LINE(315)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(315)
						return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(315)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(316)
				return false;
			}
		}
	}
	HX_STACK_LINE(321)
	{
		HX_STACK_LINE(321)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::com::haxepunk::math::Vector > _g1 = other->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(321)
		while(((_g < _g1->length))){
			HX_STACK_LINE(321)
			::com::haxepunk::math::Vector a = _g1->__get(_g);		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(321)
			++(_g);
			HX_STACK_LINE(323)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(324)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(327)
			Float offset = ((offsetX * a->x) + (offsetY * a->y));		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(328)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(329)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",331);
					{
						HX_STACK_LINE(331)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(331)
						return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(331)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(332)
				return false;
			}
		}
	}
	HX_STACK_LINE(336)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collidePolygon,return )

bool Polygon_obj::collideMask( ::com::haxepunk::Mask other){
	HX_STACK_PUSH("Polygon::collideMask","com/haxepunk/masks/Polygon.hx",256);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(257)
	Float offset;		HX_STACK_VAR(offset,"offset");
	Float offsetX = (this->parent->x - other->parent->x);		HX_STACK_VAR(offsetX,"offsetX");
	Float offsetY = (this->parent->y - other->parent->y);		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(261)
	this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(262)
	other->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(264)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(265)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetY);
	struct _Function_1_1{
		inline static bool Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",267);
			{
				HX_STACK_LINE(267)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(267)
				return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(267)
	if ((_Function_1_1::Block())){
		HX_STACK_LINE(268)
		return false;
	}
	HX_STACK_LINE(272)
	this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(273)
	other->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(275)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(276)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetX);
	struct _Function_1_2{
		inline static bool Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",278);
			{
				HX_STACK_LINE(278)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
				HX_STACK_LINE(278)
				return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(278)
	if ((_Function_1_2::Block())){
		HX_STACK_LINE(279)
		return false;
	}
	HX_STACK_LINE(283)
	{
		HX_STACK_LINE(283)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::com::haxepunk::math::Vector > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(283)
		while(((_g < _g1->length))){
			HX_STACK_LINE(283)
			::com::haxepunk::math::Vector a = _g1->__get(_g);		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(283)
			++(_g);
			HX_STACK_LINE(285)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(286)
			other->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(288)
			Float offset1 = ((offsetX * a->x) + (offsetY * a->y));		HX_STACK_VAR(offset1,"offset1");
			HX_STACK_LINE(289)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset1);
			HX_STACK_LINE(290)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset1);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",292);
					{
						HX_STACK_LINE(292)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						::com::haxepunk::math::Projection other1 = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other1,"other1");
						HX_STACK_LINE(292)
						return (bool((_this->min > other1->max)) || bool((_this->max < other1->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(292)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(293)
				return false;
			}
		}
	}
	HX_STACK_LINE(297)
	return true;
}


bool Polygon_obj::collideHitbox( ::com::haxepunk::masks::Hitbox hitbox){
	HX_STACK_PUSH("Polygon::collideHitbox","com/haxepunk/masks/Polygon.hx",211);
	HX_STACK_THIS(this);
	HX_STACK_ARG(hitbox,"hitbox");
	HX_STACK_LINE(212)
	Float offset;		HX_STACK_VAR(offset,"offset");
	Float offsetX = (this->parent->x - hitbox->parent->x);		HX_STACK_VAR(offsetX,"offsetX");
	Float offsetY = (this->parent->y - hitbox->parent->y);		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(216)
	this->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(217)
	hitbox->project(::com::haxepunk::masks::Polygon_obj::vertical,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(219)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetY);
	HX_STACK_LINE(220)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetY);
	struct _Function_1_1{
		inline static bool Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",222);
			{
				HX_STACK_LINE(222)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(222)
				return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(222)
	if ((_Function_1_1::Block())){
		HX_STACK_LINE(223)
		return false;
	}
	HX_STACK_LINE(227)
	this->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(228)
	hitbox->project(::com::haxepunk::masks::Polygon_obj::horizontal,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(230)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offsetX);
	HX_STACK_LINE(231)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offsetX);
	struct _Function_1_2{
		inline static bool Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",233);
			{
				HX_STACK_LINE(233)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(233)
				return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(233)
	if ((_Function_1_2::Block())){
		HX_STACK_LINE(234)
		return false;
	}
	HX_STACK_LINE(238)
	{
		HX_STACK_LINE(238)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::com::haxepunk::math::Vector > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(238)
		while(((_g < _g1->length))){
			HX_STACK_LINE(238)
			::com::haxepunk::math::Vector a = _g1->__get(_g);		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(238)
			++(_g);
			HX_STACK_LINE(240)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(241)
			hitbox->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(243)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(244)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(245)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",247);
					{
						HX_STACK_LINE(247)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(247)
						return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(247)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(248)
				return false;
			}
		}
	}
	HX_STACK_LINE(252)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideHitbox,return )

bool Polygon_obj::collideCircle( ::com::haxepunk::masks::Circle circle){
	HX_STACK_PUSH("Polygon::collideCircle","com/haxepunk/masks/Polygon.hx",152);
	HX_STACK_THIS(this);
	HX_STACK_ARG(circle,"circle");
	HX_STACK_LINE(153)
	Float offset;		HX_STACK_VAR(offset,"offset");
	HX_STACK_LINE(156)
	Float distanceSquared = ((int)179 * ::Math_obj::pow((int)10,(int)306));		HX_STACK_VAR(distanceSquared,"distanceSquared");
	HX_STACK_LINE(157)
	::neash::geom::Point closestPoint = null();		HX_STACK_VAR(closestPoint,"closestPoint");
	HX_STACK_LINE(158)
	{
		HX_STACK_LINE(158)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::neash::geom::Point > _g1 = this->_points;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(158)
		while(((_g < _g1->length))){
			HX_STACK_LINE(158)
			::neash::geom::Point p = _g1->__get(_g);		HX_STACK_VAR(p,"p");
			HX_STACK_LINE(158)
			++(_g);
			HX_STACK_LINE(160)
			Float dx = (((this->parent->x + p->x) - circle->parent->x) - circle->_radius);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(161)
			Float dy = (((this->parent->y + p->y) - circle->parent->y) - circle->_radius);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(162)
			Float tempDistance = ((dx * dx) + (dy * dy));		HX_STACK_VAR(tempDistance,"tempDistance");
			HX_STACK_LINE(164)
			if (((tempDistance < distanceSquared))){
				HX_STACK_LINE(166)
				distanceSquared = tempDistance;
				HX_STACK_LINE(167)
				closestPoint = p;
			}
		}
	}
	HX_STACK_LINE(171)
	Float offsetX = ((this->parent->x - circle->parent->x) - circle->_radius);		HX_STACK_VAR(offsetX,"offsetX");
	HX_STACK_LINE(172)
	Float offsetY = ((this->parent->y - circle->parent->y) - circle->_radius);		HX_STACK_VAR(offsetY,"offsetY");
	HX_STACK_LINE(176)
	::com::haxepunk::masks::Polygon_obj::_axis->x = ((circle->parent->y - this->parent->y) + closestPoint->y);
	HX_STACK_LINE(177)
	::com::haxepunk::masks::Polygon_obj::_axis->y = ((this->parent->x + closestPoint->x) - circle->parent->x);
	HX_STACK_LINE(178)
	::com::haxepunk::masks::Polygon_obj::_axis->normalize((int)1);
	HX_STACK_LINE(180)
	this->project(::com::haxepunk::masks::Polygon_obj::_axis,::com::haxepunk::masks::Polygon_obj::firstProj);
	HX_STACK_LINE(181)
	circle->project(::com::haxepunk::masks::Polygon_obj::_axis,::com::haxepunk::masks::Polygon_obj::secondProj);
	HX_STACK_LINE(183)
	offset = ((offsetX * ::com::haxepunk::masks::Polygon_obj::_axis->x) + (offsetY * ::com::haxepunk::masks::Polygon_obj::_axis->y));
	HX_STACK_LINE(184)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
	HX_STACK_LINE(185)
	hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
	struct _Function_1_1{
		inline static bool Block( ){
			HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",187);
			{
				HX_STACK_LINE(187)
				::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
				::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
				HX_STACK_LINE(187)
				return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
			}
			return null();
		}
	};
	HX_STACK_LINE(187)
	if ((_Function_1_1::Block())){
		HX_STACK_LINE(188)
		return false;
	}
	HX_STACK_LINE(192)
	{
		HX_STACK_LINE(192)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::com::haxepunk::math::Vector > _g1 = this->_axes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(192)
		while(((_g < _g1->length))){
			HX_STACK_LINE(192)
			::com::haxepunk::math::Vector a = _g1->__get(_g);		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(192)
			++(_g);
			HX_STACK_LINE(194)
			this->project(a,::com::haxepunk::masks::Polygon_obj::firstProj);
			HX_STACK_LINE(195)
			circle->project(a,::com::haxepunk::masks::Polygon_obj::secondProj);
			HX_STACK_LINE(197)
			offset = ((offsetX * a->x) + (offsetY * a->y));
			HX_STACK_LINE(198)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->min,offset);
			HX_STACK_LINE(199)
			hx::AddEq(::com::haxepunk::masks::Polygon_obj::firstProj->max,offset);
			struct _Function_3_1{
				inline static bool Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/masks/Polygon.hx",201);
					{
						HX_STACK_LINE(201)
						::com::haxepunk::math::Projection _this = ::com::haxepunk::masks::Polygon_obj::firstProj;		HX_STACK_VAR(_this,"_this");
						::com::haxepunk::math::Projection other = ::com::haxepunk::masks::Polygon_obj::secondProj;		HX_STACK_VAR(other,"other");
						HX_STACK_LINE(201)
						return (bool((_this->min > other->max)) || bool((_this->max < other->min)));
					}
					return null();
				}
			};
			HX_STACK_LINE(201)
			if ((_Function_3_1::Block())){
				HX_STACK_LINE(202)
				return false;
			}
		}
	}
	HX_STACK_LINE(207)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideCircle,return )

bool Polygon_obj::collideGrid( ::com::haxepunk::masks::Grid grid){
	HX_STACK_PUSH("Polygon::collideGrid","com/haxepunk/masks/Polygon.hx",96);
	HX_STACK_THIS(this);
	HX_STACK_ARG(grid,"grid");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = (this->_points->length - (int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(97)
		while(((_g1 < _g))){
			HX_STACK_LINE(97)
			int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
			HX_STACK_LINE(99)
			Float p1X = (Float(((this->parent->x + this->_points->__get(ii)->x))) / Float(::Std_obj::_int(grid->_tile->width)));		HX_STACK_VAR(p1X,"p1X");
			HX_STACK_LINE(100)
			Float p1Y = (Float(((this->parent->y + this->_points->__get(ii)->y))) / Float(::Std_obj::_int(grid->_tile->height)));		HX_STACK_VAR(p1Y,"p1Y");
			HX_STACK_LINE(101)
			Float p2X = (Float(((this->parent->x + this->_points->__get((ii + (int)1))->x))) / Float(::Std_obj::_int(grid->_tile->width)));		HX_STACK_VAR(p2X,"p2X");
			HX_STACK_LINE(102)
			Float p2Y = (Float(((this->parent->y + this->_points->__get((ii + (int)1))->y))) / Float(::Std_obj::_int(grid->_tile->height)));		HX_STACK_VAR(p2Y,"p2Y");
			HX_STACK_LINE(104)
			Float k = (Float(((p2Y - p1Y))) / Float(((p2X - p1X))));		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(105)
			Float m = (p1Y - (k * p1X));		HX_STACK_VAR(m,"m");
			HX_STACK_LINE(107)
			Float min;		HX_STACK_VAR(min,"min");
			HX_STACK_LINE(108)
			Float max;		HX_STACK_VAR(max,"max");
			HX_STACK_LINE(110)
			if (((p2X > p1X))){
				HX_STACK_LINE(110)
				min = p1X;
				HX_STACK_LINE(110)
				max = p2X;
			}
			else{
				HX_STACK_LINE(111)
				max = p1X;
				HX_STACK_LINE(111)
				min = p2X;
			}
			HX_STACK_LINE(113)
			Float x = min;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(114)
			while(((x < max))){
				HX_STACK_LINE(116)
				int y = ::Std_obj::_int(((k * x) + m));		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(117)
				if ((grid->getTile(::Std_obj::_int(x),y))){
					HX_STACK_LINE(118)
					return true;
				}
				HX_STACK_LINE(120)
				(x)++;
			}
		}
	}
	HX_STACK_LINE(124)
	Float p1X = (Float(((this->parent->x + this->_points->__get((this->_points->length - (int)1))->x))) / Float(::Std_obj::_int(grid->_tile->width)));		HX_STACK_VAR(p1X,"p1X");
	HX_STACK_LINE(125)
	Float p1Y = (Float(((this->parent->y + this->_points->__get((this->_points->length - (int)1))->y))) / Float(::Std_obj::_int(grid->_tile->height)));		HX_STACK_VAR(p1Y,"p1Y");
	HX_STACK_LINE(126)
	Float p2X = (Float(((this->parent->x + this->_points->__get((int)0)->x))) / Float(::Std_obj::_int(grid->_tile->width)));		HX_STACK_VAR(p2X,"p2X");
	HX_STACK_LINE(127)
	Float p2Y = (Float(((this->parent->y + this->_points->__get((int)0)->y))) / Float(::Std_obj::_int(grid->_tile->height)));		HX_STACK_VAR(p2Y,"p2Y");
	HX_STACK_LINE(129)
	Float k = (Float(((p2Y - p1Y))) / Float(((p2X - p1X))));		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(130)
	Float m = (p1Y - (k * p1X));		HX_STACK_VAR(m,"m");
	HX_STACK_LINE(132)
	Float min;		HX_STACK_VAR(min,"min");
	HX_STACK_LINE(133)
	Float max;		HX_STACK_VAR(max,"max");
	HX_STACK_LINE(135)
	if (((p2X > p1X))){
		HX_STACK_LINE(135)
		min = p1X;
		HX_STACK_LINE(135)
		max = p2X;
	}
	else{
		HX_STACK_LINE(136)
		max = p1X;
		HX_STACK_LINE(136)
		min = p2X;
	}
	HX_STACK_LINE(138)
	Float x = min;		HX_STACK_VAR(x,"x");
	HX_STACK_LINE(139)
	while(((x < max))){
		HX_STACK_LINE(141)
		int y = ::Std_obj::_int(((k * x) + m));		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(142)
		if ((grid->getTile(::Std_obj::_int(x),y))){
			HX_STACK_LINE(143)
			return true;
		}
		HX_STACK_LINE(145)
		(x)++;
	}
	HX_STACK_LINE(148)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,collideGrid,return )

Void Polygon_obj::removeDuplicateAxes( ){
{
		HX_STACK_PUSH("Polygon::removeDuplicateAxes","com/haxepunk/masks/Polygon.hx",71);
		HX_STACK_THIS(this);
		HX_STACK_LINE(72)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		int _g = this->_axes->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(72)
		while(((_g1 < _g))){
			HX_STACK_LINE(72)
			int ii = (_g1)++;		HX_STACK_VAR(ii,"ii");
			HX_STACK_LINE(74)
			{
				HX_STACK_LINE(74)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				int _g2 = this->_axes->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(74)
				while(((_g3 < _g2))){
					HX_STACK_LINE(74)
					int jj = (_g3)++;		HX_STACK_VAR(jj,"jj");
					HX_STACK_LINE(76)
					if (((bool((ii == jj)) || bool((::Math_obj::max(ii,jj) >= this->_axes->length))))){
						HX_STACK_LINE(76)
						continue;
					}
					HX_STACK_LINE(80)
					if (((bool((bool((this->_axes->__get(ii)->x == this->_axes->__get(jj)->x)) && bool((this->_axes->__get(ii)->y == this->_axes->__get(jj)->y)))) || bool((bool((-(this->_axes->__get(ii)->x) == this->_axes->__get(jj)->x)) && bool((-(this->_axes->__get(ii)->y) == this->_axes->__get(jj)->y))))))){
						HX_STACK_LINE(82)
						this->_axes->splice(jj,(int)1);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,removeDuplicateAxes,(void))

Void Polygon_obj::generateAxes( ){
{
		HX_STACK_PUSH("Polygon::generateAxes","com/haxepunk/masks/Polygon.hx",40);
		HX_STACK_THIS(this);
		HX_STACK_LINE(41)
		this->_axes = Array_obj< ::com::haxepunk::math::Vector >::__new();
		HX_STACK_LINE(42)
		Float store;		HX_STACK_VAR(store,"store");
		HX_STACK_LINE(43)
		int numberOfPoints = (this->_points->length - (int)1);		HX_STACK_VAR(numberOfPoints,"numberOfPoints");
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(44)
			while(((_g < numberOfPoints))){
				HX_STACK_LINE(44)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(46)
				::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
				HX_STACK_LINE(47)
				edge->x = (this->_points->__get(i)->x - this->_points->__get((i + (int)1))->x);
				HX_STACK_LINE(48)
				edge->y = (this->_points->__get(i)->y - this->_points->__get((i + (int)1))->y);
				HX_STACK_LINE(51)
				store = edge->y;
				HX_STACK_LINE(52)
				edge->y = -(edge->x);
				HX_STACK_LINE(53)
				edge->x = store;
				HX_STACK_LINE(54)
				edge->normalize((int)1);
				HX_STACK_LINE(56)
				this->_axes->push(edge);
			}
		}
		HX_STACK_LINE(58)
		::com::haxepunk::math::Vector edge = ::com::haxepunk::math::Vector_obj::__new(null(),null());		HX_STACK_VAR(edge,"edge");
		HX_STACK_LINE(60)
		edge->x = (this->_points->__get(numberOfPoints)->x - this->_points->__get((int)0)->x);
		HX_STACK_LINE(61)
		edge->y = (this->_points->__get(numberOfPoints)->y - this->_points->__get((int)0)->y);
		HX_STACK_LINE(62)
		store = edge->y;
		HX_STACK_LINE(63)
		edge->y = -(edge->x);
		HX_STACK_LINE(64)
		edge->x = store;
		HX_STACK_LINE(65)
		edge->normalize((int)1);
		HX_STACK_LINE(67)
		this->_axes->push(edge);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Polygon_obj,generateAxes,(void))

::com::haxepunk::masks::Polygon Polygon_obj::createPolygon( hx::Null< int >  __o_sides,hx::Null< Float >  __o_radius,hx::Null< Float >  __o_angle){
int sides = __o_sides.Default(3);
Float radius = __o_radius.Default(100);
Float angle = __o_angle.Default(0);
	HX_STACK_PUSH("Polygon::createPolygon","com/haxepunk/masks/Polygon.hx",475);
	HX_STACK_ARG(sides,"sides");
	HX_STACK_ARG(radius,"radius");
	HX_STACK_ARG(angle,"angle");
{
		HX_STACK_LINE(476)
		if (((sides < (int)3))){
			HX_STACK_LINE(476)
			hx::Throw (HX_CSTRING("The polygon needs at least 3 sides"));
		}
		HX_STACK_LINE(479)
		Float rotationAngle = (Float((::Math_obj::PI * (int)2)) / Float(sides));		HX_STACK_VAR(rotationAngle,"rotationAngle");
		HX_STACK_LINE(482)
		Array< ::neash::geom::Point > points = Array_obj< ::neash::geom::Point >::__new();		HX_STACK_VAR(points,"points");
		HX_STACK_LINE(484)
		{
			HX_STACK_LINE(484)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(484)
			while(((_g < sides))){
				HX_STACK_LINE(484)
				int ii = (_g)++;		HX_STACK_VAR(ii,"ii");
				HX_STACK_LINE(486)
				Float tempAngle = (ii * rotationAngle);		HX_STACK_VAR(tempAngle,"tempAngle");
				HX_STACK_LINE(487)
				::neash::geom::Point p = ::neash::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(p,"p");
				HX_STACK_LINE(488)
				p->x = (::Math_obj::cos(tempAngle) * radius);
				HX_STACK_LINE(489)
				p->y = (::Math_obj::sin(tempAngle) * radius);
				HX_STACK_LINE(490)
				points->push(p);
			}
		}
		HX_STACK_LINE(493)
		::com::haxepunk::masks::Polygon poly = ::com::haxepunk::masks::Polygon_obj::__new(points,null());		HX_STACK_VAR(poly,"poly");
		HX_STACK_LINE(494)
		poly->setAngle(angle);
		HX_STACK_LINE(495)
		return poly;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Polygon_obj,createPolygon,return )

::com::haxepunk::masks::Polygon Polygon_obj::createFromArray( Array< Float > points){
	HX_STACK_PUSH("Polygon::createFromArray","com/haxepunk/masks/Polygon.hx",503);
	HX_STACK_ARG(points,"points");
	HX_STACK_LINE(504)
	Array< ::neash::geom::Point > p = Array_obj< ::neash::geom::Point >::__new();		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(506)
	int ii = (int)0;		HX_STACK_VAR(ii,"ii");
	HX_STACK_LINE(507)
	while(((ii < points->length))){
		HX_STACK_LINE(508)
		p->push(::neash::geom::Point_obj::__new(points->__get((ii)++),points->__get((ii)++)));
	}
	HX_STACK_LINE(511)
	return ::com::haxepunk::masks::Polygon_obj::__new(p,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Polygon_obj,createFromArray,return )

::com::haxepunk::math::Vector Polygon_obj::_axis;

::com::haxepunk::math::Projection Polygon_obj::firstProj;

::com::haxepunk::math::Projection Polygon_obj::secondProj;

::com::haxepunk::math::Vector Polygon_obj::vertical;

::com::haxepunk::math::Vector Polygon_obj::horizontal;


Polygon_obj::Polygon_obj()
{
}

void Polygon_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Polygon);
	HX_MARK_MEMBER_NAME(_axes,"_axes");
	HX_MARK_MEMBER_NAME(_points,"_points");
	HX_MARK_MEMBER_NAME(_angle,"_angle");
	HX_MARK_MEMBER_NAME(points,"points");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(origin,"origin");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Polygon_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_axes,"_axes");
	HX_VISIT_MEMBER_NAME(_points,"_points");
	HX_VISIT_MEMBER_NAME(_angle,"_angle");
	HX_VISIT_MEMBER_NAME(points,"points");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(origin,"origin");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Polygon_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { return _axis; }
		if (HX_FIELD_EQ(inName,"_axes") ) { return _axes; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"angle") ) { return inCallProp ? getAngle() : angle; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { return _angle; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"points") ) { return inCallProp ? getPoints() : points; }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate_dyn(); }
		if (HX_FIELD_EQ(inName,"origin") ) { return origin; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { return _points; }
		if (HX_FIELD_EQ(inName,"project") ) { return project_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { return vertical; }
		if (HX_FIELD_EQ(inName,"setAngle") ) { return setAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"getAngle") ) { return getAngle_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { return firstProj; }
		if (HX_FIELD_EQ(inName,"setPoints") ) { return setPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"getPoints") ) { return getPoints_dyn(); }
		if (HX_FIELD_EQ(inName,"debugDraw") ) { return debugDraw_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { return secondProj; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { return horizontal; }
		if (HX_FIELD_EQ(inName,"updateAxes") ) { return updateAxes_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return collideMask_dyn(); }
		if (HX_FIELD_EQ(inName,"collideGrid") ) { return collideGrid_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"generateAxes") ) { return generateAxes_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createPolygon") ) { return createPolygon_dyn(); }
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return collideHitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"collideCircle") ) { return collideCircle_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"collidePolygon") ) { return collidePolygon_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createFromArray") ) { return createFromArray_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"removeDuplicateAxes") ) { return removeDuplicateAxes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Polygon_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_axis") ) { _axis=inValue.Cast< ::com::haxepunk::math::Vector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_axes") ) { _axes=inValue.Cast< Array< ::com::haxepunk::math::Vector > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { if (inCallProp) return setAngle(inValue);angle=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_angle") ) { _angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"points") ) { if (inCallProp) return setPoints(inValue);points=inValue.Cast< Array< ::neash::geom::Point > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"origin") ) { origin=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_points") ) { _points=inValue.Cast< Array< ::neash::geom::Point > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertical") ) { vertical=inValue.Cast< ::com::haxepunk::math::Vector >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"firstProj") ) { firstProj=inValue.Cast< ::com::haxepunk::math::Projection >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"secondProj") ) { secondProj=inValue.Cast< ::com::haxepunk::math::Projection >(); return inValue; }
		if (HX_FIELD_EQ(inName,"horizontal") ) { horizontal=inValue.Cast< ::com::haxepunk::math::Vector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Polygon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_axes"));
	outFields->push(HX_CSTRING("_points"));
	outFields->push(HX_CSTRING("_angle"));
	outFields->push(HX_CSTRING("points"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("origin"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("createPolygon"),
	HX_CSTRING("createFromArray"),
	HX_CSTRING("_axis"),
	HX_CSTRING("firstProj"),
	HX_CSTRING("secondProj"),
	HX_CSTRING("vertical"),
	HX_CSTRING("horizontal"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_axes"),
	HX_CSTRING("_points"),
	HX_CSTRING("_angle"),
	HX_CSTRING("updateAxes"),
	HX_CSTRING("update"),
	HX_CSTRING("setPoints"),
	HX_CSTRING("getPoints"),
	HX_CSTRING("points"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("setAngle"),
	HX_CSTRING("getAngle"),
	HX_CSTRING("angle"),
	HX_CSTRING("debugDraw"),
	HX_CSTRING("rotate"),
	HX_CSTRING("project"),
	HX_CSTRING("collidePolygon"),
	HX_CSTRING("collideMask"),
	HX_CSTRING("collideHitbox"),
	HX_CSTRING("collideCircle"),
	HX_CSTRING("collideGrid"),
	HX_CSTRING("removeDuplicateAxes"),
	HX_CSTRING("generateAxes"),
	HX_CSTRING("origin"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Polygon_obj::_axis,"_axis");
	HX_MARK_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_MARK_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_MARK_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Polygon_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Polygon_obj::_axis,"_axis");
	HX_VISIT_MEMBER_NAME(Polygon_obj::firstProj,"firstProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::secondProj,"secondProj");
	HX_VISIT_MEMBER_NAME(Polygon_obj::vertical,"vertical");
	HX_VISIT_MEMBER_NAME(Polygon_obj::horizontal,"horizontal");
};

Class Polygon_obj::__mClass;

void Polygon_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.masks.Polygon"), hx::TCanCast< Polygon_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Polygon_obj::__boot()
{
	_axis= ::com::haxepunk::math::Vector_obj::__new(null(),null());
	firstProj= ::com::haxepunk::math::Projection_obj::__new();
	secondProj= ::com::haxepunk::math::Projection_obj::__new();
	vertical= ::com::haxepunk::math::Vector_obj::__new((int)0,(int)1);
	horizontal= ::com::haxepunk::math::Vector_obj::__new((int)1,(int)0);
}

} // end namespace com
} // end namespace haxepunk
} // end namespace masks
