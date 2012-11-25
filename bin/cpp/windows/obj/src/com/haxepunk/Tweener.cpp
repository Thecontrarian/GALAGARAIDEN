#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Tween
#include <com/haxepunk/Tween.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
namespace com{
namespace haxepunk{

Void Tweener_obj::__construct()
{
HX_STACK_PUSH("Tweener::new","com/haxepunk/Tweener.hx",11);
{
	HX_STACK_LINE(12)
	this->active = true;
	HX_STACK_LINE(13)
	this->autoClear = false;
}
;
	return null();
}

Tweener_obj::~Tweener_obj() { }

Dynamic Tweener_obj::__CreateEmpty() { return  new Tweener_obj; }
hx::ObjectPtr< Tweener_obj > Tweener_obj::__new()
{  hx::ObjectPtr< Tweener_obj > result = new Tweener_obj();
	result->__construct();
	return result;}

Dynamic Tweener_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tweener_obj > result = new Tweener_obj();
	result->__construct();
	return result;}

bool Tweener_obj::getTween( ){
	HX_STACK_PUSH("Tweener::getTween","com/haxepunk/Tweener.hx",84);
	HX_STACK_THIS(this);
	HX_STACK_LINE(84)
	return (this->_tween != null());
}


HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,getTween,return )

Void Tweener_obj::updateTweens( ){
{
		HX_STACK_PUSH("Tweener::updateTweens","com/haxepunk/Tweener.hx",68);
		HX_STACK_THIS(this);
		HX_STACK_LINE(69)
		::com::haxepunk::Tween t;		HX_STACK_VAR(t,"t");
		Dynamic ft = this->_tween;		HX_STACK_VAR(ft,"ft");
		HX_STACK_LINE(71)
		while(((ft != null()))){
			HX_STACK_LINE(73)
			t = hx::TCast< com::haxepunk::Tween >::cast(ft);
			HX_STACK_LINE(74)
			if ((t->active)){
				HX_STACK_LINE(76)
				t->update();
				HX_STACK_LINE(77)
				if ((ft->__Field(HX_CSTRING("_finish"),true))){
					HX_STACK_LINE(77)
					ft->__Field(HX_CSTRING("finish"),true)();
				}
			}
			HX_STACK_LINE(79)
			ft = ft->__Field(HX_CSTRING("_next"),true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,updateTweens,(void))

Void Tweener_obj::clearTweens( ){
{
		HX_STACK_PUSH("Tweener::clearTweens","com/haxepunk/Tweener.hx",55);
		HX_STACK_THIS(this);
		HX_STACK_LINE(56)
		::com::haxepunk::Tween t;		HX_STACK_VAR(t,"t");
		Dynamic ft = this->_tween;		HX_STACK_VAR(ft,"ft");
		HX_STACK_LINE(58)
		Dynamic fn;		HX_STACK_VAR(fn,"fn");
		HX_STACK_LINE(59)
		while(((ft != null()))){
			HX_STACK_LINE(61)
			fn = ft->__Field(HX_CSTRING("_next"),true);
			HX_STACK_LINE(62)
			this->removeTween(hx::TCast< com::haxepunk::Tween >::cast(ft));
			HX_STACK_LINE(63)
			ft = fn;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,clearTweens,(void))

::com::haxepunk::Tween Tweener_obj::removeTween( ::com::haxepunk::Tween t){
	HX_STACK_PUSH("Tweener::removeTween","com/haxepunk/Tweener.hx",35);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_LINE(36)
	Dynamic ft = t;		HX_STACK_VAR(ft,"ft");
	HX_STACK_LINE(37)
	if (((ft->__Field(HX_CSTRING("_parent"),true) != hx::ObjectPtr<OBJ_>(this)))){
		HX_STACK_LINE(37)
		hx::Throw (HX_CSTRING("Core object does not contain Tween."));
	}
	HX_STACK_LINE(38)
	if (((ft->__Field(HX_CSTRING("_next"),true) != null()))){
		HX_STACK_LINE(38)
		ft->__Field(HX_CSTRING("_next"),true)->__FieldRef(HX_CSTRING("_prev")) = ft->__Field(HX_CSTRING("_prev"),true);
	}
	HX_STACK_LINE(39)
	if (((ft->__Field(HX_CSTRING("_prev"),true) != null()))){
		HX_STACK_LINE(40)
		ft->__Field(HX_CSTRING("_prev"),true)->__FieldRef(HX_CSTRING("_next")) = ft->__Field(HX_CSTRING("_next"),true);
	}
	else{
		HX_STACK_LINE(44)
		if (((ft->__Field(HX_CSTRING("_next"),true) != null()))){
			HX_STACK_LINE(46)
			this->_tween = hx::TCast< com::haxepunk::Tween >::cast(ft->__Field(HX_CSTRING("_next"),true));
		}
	}
	HX_STACK_LINE(48)
	ft->__FieldRef(HX_CSTRING("_next")) = ft->__FieldRef(HX_CSTRING("_prev")) = null();
	HX_STACK_LINE(49)
	ft->__FieldRef(HX_CSTRING("_parent")) = null();
	HX_STACK_LINE(50)
	t->active = false;
	HX_STACK_LINE(51)
	return t;
}


HX_DEFINE_DYNAMIC_FUNC1(Tweener_obj,removeTween,return )

::com::haxepunk::Tween Tweener_obj::addTween( ::com::haxepunk::Tween t,hx::Null< bool >  __o_start){
bool start = __o_start.Default(false);
	HX_STACK_PUSH("Tweener::addTween","com/haxepunk/Tweener.hx",22);
	HX_STACK_THIS(this);
	HX_STACK_ARG(t,"t");
	HX_STACK_ARG(start,"start");
{
		HX_STACK_LINE(23)
		Dynamic ft = t;		HX_STACK_VAR(ft,"ft");
		HX_STACK_LINE(24)
		if (((ft->__Field(HX_CSTRING("_parent"),true) != null()))){
			HX_STACK_LINE(24)
			hx::Throw (HX_CSTRING("Cannot add a Tween object more than once."));
		}
		HX_STACK_LINE(25)
		ft->__FieldRef(HX_CSTRING("_parent")) = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(26)
		ft->__FieldRef(HX_CSTRING("_next")) = this->_tween;
		HX_STACK_LINE(27)
		Dynamic friendTween = this->_tween;		HX_STACK_VAR(friendTween,"friendTween");
		HX_STACK_LINE(28)
		if (((this->_tween != null()))){
			HX_STACK_LINE(28)
			friendTween->__FieldRef(HX_CSTRING("_prev")) = t;
		}
		HX_STACK_LINE(29)
		this->_tween = t;
		HX_STACK_LINE(30)
		if ((start)){
			HX_STACK_LINE(30)
			this->_tween->start();
		}
		HX_STACK_LINE(31)
		return t;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Tweener_obj,addTween,return )

Void Tweener_obj::update( ){
{
		HX_STACK_PUSH("Tweener::update","com/haxepunk/Tweener.hx",17);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tweener_obj,update,(void))


Tweener_obj::Tweener_obj()
{
}

void Tweener_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tweener);
	HX_MARK_MEMBER_NAME(_tween,"_tween");
	HX_MARK_MEMBER_NAME(hasTween,"hasTween");
	HX_MARK_MEMBER_NAME(autoClear,"autoClear");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void Tweener_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tween,"_tween");
	HX_VISIT_MEMBER_NAME(hasTween,"hasTween");
	HX_VISIT_MEMBER_NAME(autoClear,"autoClear");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic Tweener_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_tween") ) { return _tween; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTween") ) { return getTween_dyn(); }
		if (HX_FIELD_EQ(inName,"hasTween") ) { return inCallProp ? getTween() : hasTween; }
		if (HX_FIELD_EQ(inName,"addTween") ) { return addTween_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoClear") ) { return autoClear; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clearTweens") ) { return clearTweens_dyn(); }
		if (HX_FIELD_EQ(inName,"removeTween") ) { return removeTween_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateTweens") ) { return updateTweens_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tweener_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_tween") ) { _tween=inValue.Cast< ::com::haxepunk::Tween >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"hasTween") ) { hasTween=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"autoClear") ) { autoClear=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tweener_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_tween"));
	outFields->push(HX_CSTRING("hasTween"));
	outFields->push(HX_CSTRING("autoClear"));
	outFields->push(HX_CSTRING("active"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_tween"),
	HX_CSTRING("getTween"),
	HX_CSTRING("hasTween"),
	HX_CSTRING("updateTweens"),
	HX_CSTRING("clearTweens"),
	HX_CSTRING("removeTween"),
	HX_CSTRING("addTween"),
	HX_CSTRING("update"),
	HX_CSTRING("autoClear"),
	HX_CSTRING("active"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tweener_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tweener_obj::__mClass,"__mClass");
};

Class Tweener_obj::__mClass;

void Tweener_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Tweener"), hx::TCanCast< Tweener_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Tweener_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
