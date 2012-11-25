#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
#ifndef INCLUDED_com_haxepunk_TweenType
#include <com/haxepunk/TweenType.h>
#endif
#ifndef INCLUDED_com_haxepunk_tweens_misc_MultiVarTween
#include <com/haxepunk/tweens/misc/MultiVarTween.h>
#endif
namespace com{
namespace haxepunk{
namespace tweens{
namespace misc{

Void MultiVarTween_obj::__construct(Dynamic complete,::com::haxepunk::TweenType type)
{
HX_STACK_PUSH("MultiVarTween::new","com/haxepunk/tweens/misc/MultiVarTween.hx",17);
{
	HX_STACK_LINE(18)
	this->_vars = Array_obj< ::String >::__new();
	HX_STACK_LINE(19)
	this->_start = Array_obj< Float >::__new();
	HX_STACK_LINE(20)
	this->_range = Array_obj< Float >::__new();
	HX_STACK_LINE(22)
	super::__construct((int)0,type,complete,null());
}
;
	return null();
}

MultiVarTween_obj::~MultiVarTween_obj() { }

Dynamic MultiVarTween_obj::__CreateEmpty() { return  new MultiVarTween_obj; }
hx::ObjectPtr< MultiVarTween_obj > MultiVarTween_obj::__new(Dynamic complete,::com::haxepunk::TweenType type)
{  hx::ObjectPtr< MultiVarTween_obj > result = new MultiVarTween_obj();
	result->__construct(complete,type);
	return result;}

Dynamic MultiVarTween_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MultiVarTween_obj > result = new MultiVarTween_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void MultiVarTween_obj::update( ){
{
		HX_STACK_PUSH("MultiVarTween::update","com/haxepunk/tweens/misc/MultiVarTween.hx",69);
		HX_STACK_THIS(this);
		HX_STACK_LINE(70)
		this->super::update();
		HX_STACK_LINE(71)
		int i = this->_vars->length;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(72)
		Dynamic setter;		HX_STACK_VAR(setter,"setter");
		HX_STACK_LINE(74)
		setter = ::Reflect_obj::setField_dyn();
		HX_STACK_LINE(78)
		while((((i)-- > (int)0))){
			HX_STACK_LINE(79)
			setter(this->_object,this->_vars->__get(i),(this->_start->__get(i) + (this->_range->__get(i) * this->_t))).Cast< Void >();
		}
	}
return null();
}


Void MultiVarTween_obj::tween( Dynamic object,Dynamic properties,Float duration,Dynamic ease){
{
		HX_STACK_PUSH("MultiVarTween::tween","com/haxepunk/tweens/misc/MultiVarTween.hx",33);
		HX_STACK_THIS(this);
		HX_STACK_ARG(object,"object");
		HX_STACK_ARG(properties,"properties");
		HX_STACK_ARG(duration,"duration");
		HX_STACK_ARG(ease,"ease");
		HX_STACK_LINE(34)
		this->_object = object;
		HX_STACK_LINE(35)
		{
			HX_STACK_LINE(35)
			Dynamic array = this->_vars;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(35)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(36)
		{
			HX_STACK_LINE(36)
			Dynamic array = this->_start;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(36)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(37)
		{
			HX_STACK_LINE(37)
			Dynamic array = this->_range;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(37)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(38)
		this->_target = duration;
		HX_STACK_LINE(39)
		this->_ease = ease;
		HX_STACK_LINE(40)
		::String p;		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(42)
		Array< ::String > fields = null();		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(43)
		if ((::Reflect_obj::isObject(properties))){
			HX_STACK_LINE(44)
			fields = ::Reflect_obj::fields(properties);
		}
		else{
			HX_STACK_LINE(48)
			hx::Throw (HX_CSTRING("Unsupported MultiVar properties container - use Object containing key/value pairs."));
		}
		HX_STACK_LINE(52)
		{
			HX_STACK_LINE(52)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			while(((_g < fields->length))){
				HX_STACK_LINE(52)
				::String p1 = fields->__get(_g);		HX_STACK_VAR(p1,"p1");
				HX_STACK_LINE(52)
				++(_g);
				HX_STACK_LINE(54)
				Float a = (  (((object == null()))) ? Dynamic(null()) : Dynamic(object->__Field(p1,true)) );		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(56)
				if ((::Math_obj::isNaN(a))){
					HX_STACK_LINE(57)
					hx::Throw (((HX_CSTRING("The property \"") + p1) + HX_CSTRING("\" is not numeric.")));
				}
				HX_STACK_LINE(60)
				this->_vars->push(p1);
				HX_STACK_LINE(61)
				this->_start->push(a);
				HX_STACK_LINE(62)
				this->_range->push((::Reflect_obj::field(properties,p1) - a));
			}
		}
		HX_STACK_LINE(64)
		this->start();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(MultiVarTween_obj,tween,(void))


MultiVarTween_obj::MultiVarTween_obj()
{
}

void MultiVarTween_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MultiVarTween);
	HX_MARK_MEMBER_NAME(_range,"_range");
	HX_MARK_MEMBER_NAME(_start,"_start");
	HX_MARK_MEMBER_NAME(_vars,"_vars");
	HX_MARK_MEMBER_NAME(_object,"_object");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MultiVarTween_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_range,"_range");
	HX_VISIT_MEMBER_NAME(_start,"_start");
	HX_VISIT_MEMBER_NAME(_vars,"_vars");
	HX_VISIT_MEMBER_NAME(_object,"_object");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic MultiVarTween_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_vars") ) { return _vars; }
		if (HX_FIELD_EQ(inName,"tween") ) { return tween_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_range") ) { return _range; }
		if (HX_FIELD_EQ(inName,"_start") ) { return _start; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { return _object; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MultiVarTween_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_vars") ) { _vars=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_range") ) { _range=inValue.Cast< Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_start") ) { _start=inValue.Cast< Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_object") ) { _object=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MultiVarTween_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_range"));
	outFields->push(HX_CSTRING("_start"));
	outFields->push(HX_CSTRING("_vars"));
	outFields->push(HX_CSTRING("_object"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_range"),
	HX_CSTRING("_start"),
	HX_CSTRING("_vars"),
	HX_CSTRING("_object"),
	HX_CSTRING("update"),
	HX_CSTRING("tween"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MultiVarTween_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MultiVarTween_obj::__mClass,"__mClass");
};

Class MultiVarTween_obj::__mClass;

void MultiVarTween_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.tweens.misc.MultiVarTween"), hx::TCanCast< MultiVarTween_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void MultiVarTween_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace tweens
} // end namespace misc
