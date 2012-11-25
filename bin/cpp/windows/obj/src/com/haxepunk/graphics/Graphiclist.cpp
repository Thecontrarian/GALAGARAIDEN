#include <hxcpp.h>

#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_com_haxepunk_Graphic
#include <com/haxepunk/Graphic.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Graphiclist
#include <com/haxepunk/graphics/Graphiclist.h>
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
namespace graphics{

Void Graphiclist_obj::__construct(Dynamic graphic)
{
HX_STACK_PUSH("Graphiclist::new","com/haxepunk/graphics/Graphiclist.hx",19);
{
	HX_STACK_LINE(20)
	super::__construct();
	HX_STACK_LINE(23)
	this->_graphics = Array_obj< ::com::haxepunk::Graphic >::__new();
	HX_STACK_LINE(24)
	this->_temp = Array_obj< ::com::haxepunk::Graphic >::__new();
	HX_STACK_LINE(25)
	this->_camera = ::neash::geom::Point_obj::__new(null(),null());
	HX_STACK_LINE(26)
	this->_count = (int)0;
	HX_STACK_LINE(28)
	if (((graphic != null()))){
		HX_STACK_LINE(30)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(30)
		while(((_g < graphic->__Field(HX_CSTRING("length"),true)))){
			HX_STACK_LINE(30)
			Dynamic g = graphic->__GetItem(_g);		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(30)
			++(_g);
			HX_STACK_LINE(30)
			if (((hx::TCast< com::haxepunk::Graphic >::cast(g) != null()))){
				HX_STACK_LINE(30)
				this->add(g);
			}
		}
	}
}
;
	return null();
}

Graphiclist_obj::~Graphiclist_obj() { }

Dynamic Graphiclist_obj::__CreateEmpty() { return  new Graphiclist_obj; }
hx::ObjectPtr< Graphiclist_obj > Graphiclist_obj::__new(Dynamic graphic)
{  hx::ObjectPtr< Graphiclist_obj > result = new Graphiclist_obj();
	result->__construct(graphic);
	return result;}

Dynamic Graphiclist_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Graphiclist_obj > result = new Graphiclist_obj();
	result->__construct(inArgs[0]);
	return result;}

Void Graphiclist_obj::updateCheck( ){
{
		HX_STACK_PUSH("Graphiclist::updateCheck","com/haxepunk/graphics/Graphiclist.hx",141);
		HX_STACK_THIS(this);
		HX_STACK_LINE(142)
		this->active = false;
		HX_STACK_LINE(143)
		{
			HX_STACK_LINE(143)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::com::haxepunk::Graphic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(143)
			while(((_g < _g1->length))){
				HX_STACK_LINE(143)
				::com::haxepunk::Graphic g = _g1->__get(_g);		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(143)
				++(_g);
				HX_STACK_LINE(145)
				if ((g->active)){
					HX_STACK_LINE(147)
					this->active = true;
					HX_STACK_LINE(148)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,updateCheck,(void))

int Graphiclist_obj::getCount( ){
	HX_STACK_PUSH("Graphiclist::getCount","com/haxepunk/graphics/Graphiclist.hx",135);
	HX_STACK_THIS(this);
	HX_STACK_LINE(135)
	return this->_count;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,getCount,return )

Array< ::com::haxepunk::Graphic > Graphiclist_obj::getChildren( ){
	HX_STACK_PUSH("Graphiclist::getChildren","com/haxepunk/graphics/Graphiclist.hx",129);
	HX_STACK_THIS(this);
	HX_STACK_LINE(129)
	return this->_graphics;
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,getChildren,return )

Void Graphiclist_obj::removeAll( ){
{
		HX_STACK_PUSH("Graphiclist::removeAll","com/haxepunk/graphics/Graphiclist.hx",118);
		HX_STACK_THIS(this);
		HX_STACK_LINE(119)
		{
			HX_STACK_LINE(119)
			Dynamic array = this->_graphics;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(119)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(120)
		{
			HX_STACK_LINE(120)
			Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
			HX_STACK_LINE(120)
			array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
		}
		HX_STACK_LINE(121)
		this->_count = (int)0;
		HX_STACK_LINE(122)
		this->active = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Graphiclist_obj,removeAll,(void))

Void Graphiclist_obj::removeAt( hx::Null< int >  __o_index){
int index = __o_index.Default(0);
	HX_STACK_PUSH("Graphiclist::removeAt","com/haxepunk/graphics/Graphiclist.hx",107);
	HX_STACK_THIS(this);
	HX_STACK_ARG(index,"index");
{
		HX_STACK_LINE(108)
		if (((this->_graphics->length == (int)0))){
			HX_STACK_LINE(108)
			return null();
		}
		HX_STACK_LINE(109)
		hx::ModEq(index,this->_graphics->length);
		HX_STACK_LINE(110)
		this->remove(this->_graphics->__get(hx::Mod(index,this->_graphics->length)));
		HX_STACK_LINE(111)
		this->updateCheck();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,removeAt,(void))

::com::haxepunk::Graphic Graphiclist_obj::remove( ::com::haxepunk::Graphic graphic){
	HX_STACK_PUSH("Graphiclist::remove","com/haxepunk/graphics/Graphiclist.hx",86);
	HX_STACK_THIS(this);
	HX_STACK_ARG(graphic,"graphic");
	HX_STACK_LINE(87)
	if (((::Lambda_obj::indexOf(this->_graphics,graphic) < (int)0))){
		HX_STACK_LINE(87)
		return graphic;
	}
	HX_STACK_LINE(88)
	{
		HX_STACK_LINE(88)
		Dynamic array = this->_temp;		HX_STACK_VAR(array,"array");
		HX_STACK_LINE(88)
		array->__Field(HX_CSTRING("splice"),true)((int)0,array->__Field(HX_CSTRING("length"),true));
	}
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::com::haxepunk::Graphic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(90)
		while(((_g < _g1->length))){
			HX_STACK_LINE(90)
			::com::haxepunk::Graphic g = _g1->__get(_g);		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(90)
			++(_g);
			HX_STACK_LINE(92)
			if (((g == graphic))){
				HX_STACK_LINE(92)
				(this->_count)--;
			}
			else{
				HX_STACK_LINE(93)
				this->_temp[this->_temp->length] = g;
			}
		}
	}
	HX_STACK_LINE(95)
	Array< ::com::haxepunk::Graphic > temp = this->_graphics;		HX_STACK_VAR(temp,"temp");
	HX_STACK_LINE(96)
	this->_graphics = this->_temp;
	HX_STACK_LINE(97)
	this->_temp = temp;
	HX_STACK_LINE(98)
	this->updateCheck();
	HX_STACK_LINE(99)
	return graphic;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,remove,return )

::com::haxepunk::Graphic Graphiclist_obj::add( ::com::haxepunk::Graphic graphic){
	HX_STACK_PUSH("Graphiclist::add","com/haxepunk/graphics/Graphiclist.hx",74);
	HX_STACK_THIS(this);
	HX_STACK_ARG(graphic,"graphic");
	HX_STACK_LINE(75)
	this->_graphics[(this->_count)++] = graphic;
	HX_STACK_LINE(76)
	if ((!(this->active))){
		HX_STACK_LINE(76)
		this->active = graphic->active;
	}
	HX_STACK_LINE(77)
	return graphic;
}


HX_DEFINE_DYNAMIC_FUNC1(Graphiclist_obj,add,return )

Void Graphiclist_obj::render( ::neash::display::BitmapData target,::neash::geom::Point point,::neash::geom::Point camera){
{
		HX_STACK_PUSH("Graphiclist::render","com/haxepunk/graphics/Graphiclist.hx",45);
		HX_STACK_THIS(this);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(point,"point");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_LINE(46)
		hx::AddEq(point->x,this->x);
		HX_STACK_LINE(47)
		hx::AddEq(point->y,this->y);
		HX_STACK_LINE(48)
		hx::MultEq(camera->x,this->scrollX);
		HX_STACK_LINE(49)
		hx::MultEq(camera->y,this->scrollY);
		HX_STACK_LINE(51)
		{
			HX_STACK_LINE(51)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			Array< ::com::haxepunk::Graphic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(51)
			while(((_g < _g1->length))){
				HX_STACK_LINE(51)
				::com::haxepunk::Graphic g = _g1->__get(_g);		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(51)
				++(_g);
				HX_STACK_LINE(53)
				if ((g->visible)){
					HX_STACK_LINE(55)
					if ((g->relative)){
						HX_STACK_LINE(57)
						this->_point->x = point->x;
						HX_STACK_LINE(58)
						this->_point->y = point->y;
					}
					else{
						HX_STACK_LINE(60)
						this->_point->x = this->_point->y = (int)0;
					}
					HX_STACK_LINE(61)
					this->_camera->x = camera->x;
					HX_STACK_LINE(62)
					this->_camera->y = camera->y;
					HX_STACK_LINE(63)
					g->render(target,this->_point,this->_camera);
				}
			}
		}
	}
return null();
}


Void Graphiclist_obj::update( ){
{
		HX_STACK_PUSH("Graphiclist::update","com/haxepunk/graphics/Graphiclist.hx",36);
		HX_STACK_THIS(this);
		HX_STACK_LINE(37)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		Array< ::com::haxepunk::Graphic > _g1 = this->_graphics;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(37)
		while(((_g < _g1->length))){
			HX_STACK_LINE(37)
			::com::haxepunk::Graphic g = _g1->__get(_g);		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(37)
			++(_g);
			HX_STACK_LINE(39)
			if ((g->active)){
				HX_STACK_LINE(39)
				g->update();
			}
		}
	}
return null();
}



Graphiclist_obj::Graphiclist_obj()
{
}

void Graphiclist_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Graphiclist);
	HX_MARK_MEMBER_NAME(_camera,"_camera");
	HX_MARK_MEMBER_NAME(_count,"_count");
	HX_MARK_MEMBER_NAME(_temp,"_temp");
	HX_MARK_MEMBER_NAME(_graphics,"_graphics");
	HX_MARK_MEMBER_NAME(count,"count");
	HX_MARK_MEMBER_NAME(children,"children");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Graphiclist_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_camera,"_camera");
	HX_VISIT_MEMBER_NAME(_count,"_count");
	HX_VISIT_MEMBER_NAME(_temp,"_temp");
	HX_VISIT_MEMBER_NAME(_graphics,"_graphics");
	HX_VISIT_MEMBER_NAME(count,"count");
	HX_VISIT_MEMBER_NAME(children,"children");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Graphiclist_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_temp") ) { return _temp; }
		if (HX_FIELD_EQ(inName,"count") ) { return inCallProp ? getCount() : count; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { return _count; }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getCount") ) { return getCount_dyn(); }
		if (HX_FIELD_EQ(inName,"children") ) { return inCallProp ? getChildren() : children; }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { return _graphics; }
		if (HX_FIELD_EQ(inName,"removeAll") ) { return removeAll_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateCheck") ) { return updateCheck_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildren") ) { return getChildren_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Graphiclist_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_temp") ) { _temp=inValue.Cast< Array< ::com::haxepunk::Graphic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"count") ) { count=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_count") ) { _count=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=inValue.Cast< Array< ::com::haxepunk::Graphic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { _graphics=inValue.Cast< Array< ::com::haxepunk::Graphic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Graphiclist_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_camera"));
	outFields->push(HX_CSTRING("_count"));
	outFields->push(HX_CSTRING("_temp"));
	outFields->push(HX_CSTRING("_graphics"));
	outFields->push(HX_CSTRING("count"));
	outFields->push(HX_CSTRING("children"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_camera"),
	HX_CSTRING("_count"),
	HX_CSTRING("_temp"),
	HX_CSTRING("_graphics"),
	HX_CSTRING("updateCheck"),
	HX_CSTRING("getCount"),
	HX_CSTRING("count"),
	HX_CSTRING("getChildren"),
	HX_CSTRING("children"),
	HX_CSTRING("removeAll"),
	HX_CSTRING("removeAt"),
	HX_CSTRING("remove"),
	HX_CSTRING("add"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Graphiclist_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Graphiclist_obj::__mClass,"__mClass");
};

Class Graphiclist_obj::__mClass;

void Graphiclist_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.graphics.Graphiclist"), hx::TCanCast< Graphiclist_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Graphiclist_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics
