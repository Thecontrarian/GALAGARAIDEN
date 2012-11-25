#include <hxcpp.h>

#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_Tilesheet
#include <neash/display/Tilesheet.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
namespace com{
namespace haxepunk{

Void Graphic_obj::__construct()
{
HX_STACK_PUSH("Graphic::new","com/haxepunk/Graphic.hx",53);
{
	HX_STACK_LINE(54)
	this->active = false;
	HX_STACK_LINE(55)
	this->visible = true;
	HX_STACK_LINE(56)
	this->x = this->y = (int)0;
	HX_STACK_LINE(57)
	this->scrollX = this->scrollY = (int)1;
	HX_STACK_LINE(58)
	this->relative = true;
	HX_STACK_LINE(59)
	this->_scroll = true;
	HX_STACK_LINE(60)
	this->_point = ::neash::geom::Point_obj::__new(null(),null());
}
;
	return null();
}

Graphic_obj::~Graphic_obj() { }

Dynamic Graphic_obj::__CreateEmpty() { return  new Graphic_obj; }
hx::ObjectPtr< Graphic_obj > Graphic_obj::__new()
{  hx::ObjectPtr< Graphic_obj > result = new Graphic_obj();
	result->__construct();
	return result;}

Dynamic Graphic_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphic_obj > result = new Graphic_obj();
	result->__construct();
	return result;}

Void Graphic_obj::render( ::neash::display::BitmapData target,::neash::geom::Point point,::neash::geom::Point camera){
{
		HX_STACK_PUSH("Graphic::render","com/haxepunk/Graphic.hx",77);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(camera,"camera");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Graphic_obj,render,(void))

Void Graphic_obj::update( ){
{
		HX_STACK_PUSH("Graphic::update","com/haxepunk/Graphic.hx",67);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphic_obj,update,(void))


Graphic_obj::Graphic_obj()
{
}

void Graphic_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphic);
	HX_MARK_MEMBER_NAME(imageID,"imageID");
	HX_MARK_MEMBER_NAME(_tileSheet,"_tileSheet");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_scroll,"_scroll");
	HX_MARK_MEMBER_NAME(assign,"assign");
	HX_MARK_MEMBER_NAME(relative,"relative");
	HX_MARK_MEMBER_NAME(scrollY,"scrollY");
	HX_MARK_MEMBER_NAME(scrollX,"scrollX");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void Graphic_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(imageID,"imageID");
	HX_VISIT_MEMBER_NAME(_tileSheet,"_tileSheet");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_scroll,"_scroll");
	HX_VISIT_MEMBER_NAME(assign,"assign");
	HX_VISIT_MEMBER_NAME(relative,"relative");
	HX_VISIT_MEMBER_NAME(scrollY,"scrollY");
	HX_VISIT_MEMBER_NAME(scrollX,"scrollX");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic Graphic_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"assign") ) { return assign; }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"imageID") ) { return imageID; }
		if (HX_FIELD_EQ(inName,"_scroll") ) { return _scroll; }
		if (HX_FIELD_EQ(inName,"scrollY") ) { return scrollY; }
		if (HX_FIELD_EQ(inName,"scrollX") ) { return scrollX; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"relative") ) { return relative; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileSheet") ) { return _tileSheet; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphic_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"assign") ) { assign=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"imageID") ) { imageID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_scroll") ) { _scroll=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollY") ) { scrollY=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scrollX") ) { scrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"relative") ) { relative=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_tileSheet") ) { _tileSheet=inValue.Cast< ::neash::display::Tilesheet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphic_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("imageID"));
	outFields->push(HX_CSTRING("_tileSheet"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_scroll"));
	outFields->push(HX_CSTRING("relative"));
	outFields->push(HX_CSTRING("scrollY"));
	outFields->push(HX_CSTRING("scrollX"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("active"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("imageID"),
	HX_CSTRING("_tileSheet"),
	HX_CSTRING("_point"),
	HX_CSTRING("_scroll"),
	HX_CSTRING("assign"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	HX_CSTRING("relative"),
	HX_CSTRING("scrollY"),
	HX_CSTRING("scrollX"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("visible"),
	HX_CSTRING("active"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphic_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphic_obj::__mClass,"__mClass");
};

Class Graphic_obj::__mClass;

void Graphic_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Graphic"), hx::TCanCast< Graphic_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Graphic_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
