#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_math_Projection
#include <com/haxepunk/math/Projection.h>
#endif
namespace com{
namespace haxepunk{
namespace math{

Void Projection_obj::__construct()
{
HX_STACK_PUSH("Projection::new","com/haxepunk/math/Projection.hx",10);
{
	HX_STACK_LINE(10)
	this->max = this->min = (int)0;
}
;
	return null();
}

Projection_obj::~Projection_obj() { }

Dynamic Projection_obj::__CreateEmpty() { return  new Projection_obj; }
hx::ObjectPtr< Projection_obj > Projection_obj::__new()
{  hx::ObjectPtr< Projection_obj > result = new Projection_obj();
	result->__construct();
	return result;}

Dynamic Projection_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Projection_obj > result = new Projection_obj();
	result->__construct();
	return result;}

::String Projection_obj::toString( ){
	HX_STACK_PUSH("Projection::toString","com/haxepunk/math/Projection.hx",25);
	HX_STACK_THIS(this);
	HX_STACK_LINE(25)
	return ((((HX_CSTRING("[ ") + this->min) + HX_CSTRING(", ")) + this->max) + HX_CSTRING(" ]"));
}


HX_DEFINE_DYNAMIC_FUNC0(Projection_obj,toString,return )

Float Projection_obj::getOverlap( ::com::haxepunk::math::Projection other){
	HX_STACK_PUSH("Projection::getOverlap","com/haxepunk/math/Projection.hx",20);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(20)
	return (  (((this->max > other->max))) ? Float((this->max - other->min)) : Float((other->max - this->min)) );
}


HX_DEFINE_DYNAMIC_FUNC1(Projection_obj,getOverlap,return )

bool Projection_obj::overlaps( ::com::haxepunk::math::Projection other){
	HX_STACK_PUSH("Projection::overlaps","com/haxepunk/math/Projection.hx",15);
	HX_STACK_THIS(this);
	HX_STACK_ARG(other,"other");
	HX_STACK_LINE(15)
	return (bool((this->min > other->max)) || bool((this->max < other->min)));
}


HX_DEFINE_DYNAMIC_FUNC1(Projection_obj,overlaps,return )


Projection_obj::Projection_obj()
{
}

void Projection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Projection);
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_END_CLASS();
}

void Projection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
}

Dynamic Projection_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		if (HX_FIELD_EQ(inName,"overlaps") ) { return overlaps_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getOverlap") ) { return getOverlap_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Projection_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Projection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("toString"),
	HX_CSTRING("getOverlap"),
	HX_CSTRING("overlaps"),
	HX_CSTRING("min"),
	HX_CSTRING("max"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Projection_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Projection_obj::__mClass,"__mClass");
};

Class Projection_obj::__mClass;

void Projection_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.math.Projection"), hx::TCanCast< Projection_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Projection_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace math
