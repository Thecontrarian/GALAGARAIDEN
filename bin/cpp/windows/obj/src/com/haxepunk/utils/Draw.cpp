#include <hxcpp.h>

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
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Image
#include <com/haxepunk/graphics/Image.h>
#endif
#ifndef INCLUDED_com_haxepunk_graphics_Text
#include <com/haxepunk/graphics/Text.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Draw
#include <com/haxepunk/utils/Draw.h>
#endif
#ifndef INCLUDED_neash_display_BitmapData
#include <neash/display/BitmapData.h>
#endif
#ifndef INCLUDED_neash_display_BlendMode
#include <neash/display/BlendMode.h>
#endif
#ifndef INCLUDED_neash_display_CapsStyle
#include <neash/display/CapsStyle.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_Graphics
#include <neash/display/Graphics.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_JointStyle
#include <neash/display/JointStyle.h>
#endif
#ifndef INCLUDED_neash_display_LineScaleMode
#include <neash/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_geom_ColorTransform
#include <neash/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_neash_geom_Matrix
#include <neash/geom/Matrix.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Draw_obj::__construct()
{
	return null();
}

Draw_obj::~Draw_obj() { }

Dynamic Draw_obj::__CreateEmpty() { return  new Draw_obj; }
hx::ObjectPtr< Draw_obj > Draw_obj::__new()
{  hx::ObjectPtr< Draw_obj > result = new Draw_obj();
	result->__construct();
	return result;}

Dynamic Draw_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Draw_obj > result = new Draw_obj();
	result->__construct();
	return result;}

::neash::display::BlendMode Draw_obj::blend;

Void Draw_obj::setTarget( ::neash::display::BitmapData target,::neash::geom::Point camera,::neash::display::BlendMode blend){
{
		HX_STACK_PUSH("Draw::setTarget","com/haxepunk/utils/Draw.hx",35);
		HX_STACK_ARG(target,"target");
		HX_STACK_ARG(camera,"camera");
		HX_STACK_ARG(blend,"blend");
		HX_STACK_LINE(36)
		::com::haxepunk::utils::Draw_obj::_target = target;
		HX_STACK_LINE(37)
		::com::haxepunk::utils::Draw_obj::_camera = (  (((camera != null()))) ? ::neash::geom::Point(camera) : ::neash::geom::Point(::com::haxepunk::HXP_obj::zero) );
		HX_STACK_LINE(38)
		::com::haxepunk::utils::Draw_obj::blend = blend;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Draw_obj,setTarget,(void))

Void Draw_obj::resetTarget( ){
{
		HX_STACK_PUSH("Draw::resetTarget","com/haxepunk/utils/Draw.hx",45);
		HX_STACK_LINE(46)
		::com::haxepunk::utils::Draw_obj::_target = ::com::haxepunk::HXP_obj::buffer;
		HX_STACK_LINE(47)
		::com::haxepunk::utils::Draw_obj::_camera = ::com::haxepunk::HXP_obj::camera;
		HX_STACK_LINE(48)
		::com::haxepunk::utils::Draw_obj::blend = null();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Draw_obj,resetTarget,(void))

Void Draw_obj::drawToScreen( ){
{
		HX_STACK_PUSH("Draw::drawToScreen","com/haxepunk/utils/Draw.hx",52);
		HX_STACK_LINE(52)
		::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::Type_obj::getEnumName(::Type_obj::getEnum(::com::haxepunk::utils::Draw_obj::blend)),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Draw_obj,drawToScreen,(void))

Void Draw_obj::line( int x1,int y1,int x2,int y2,hx::Null< int >  __o_color){
int color = __o_color.Default(16777215);
	HX_STACK_PUSH("Draw::line","com/haxepunk/utils/Draw.hx",70);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(71)
		if (((color < (int)-16777216))){
			HX_STACK_LINE(71)
			color = (int((int)-16777216) | int(color));
		}
		HX_STACK_LINE(74)
		::neash::display::BitmapData screen = ::com::haxepunk::utils::Draw_obj::_target;		HX_STACK_VAR(screen,"screen");
		Float X = ::Math_obj::abs((x2 - x1));		HX_STACK_VAR(X,"X");
		Float Y = ::Math_obj::abs((y2 - y1));		HX_STACK_VAR(Y,"Y");
		int xx;		HX_STACK_VAR(xx,"xx");
		int yy;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(81)
		x1 = ::Std_obj::_int(::com::haxepunk::HXP_obj::clamp((x1 - ::com::haxepunk::utils::Draw_obj::_camera->x),(int)0,(screen->nmeGetWidth() - (int)1)));
		HX_STACK_LINE(82)
		y1 = ::Std_obj::_int(::com::haxepunk::HXP_obj::clamp((y1 - ::com::haxepunk::utils::Draw_obj::_camera->y),(int)0,(screen->nmeGetHeight() - (int)1)));
		HX_STACK_LINE(83)
		x2 = ::Std_obj::_int(::com::haxepunk::HXP_obj::clamp((x2 - ::com::haxepunk::utils::Draw_obj::_camera->x),(int)0,(screen->nmeGetWidth() - (int)1)));
		HX_STACK_LINE(84)
		y2 = ::Std_obj::_int(::com::haxepunk::HXP_obj::clamp((y2 - ::com::haxepunk::utils::Draw_obj::_camera->y),(int)0,(screen->nmeGetHeight() - (int)1)));
		HX_STACK_LINE(87)
		if (((X == (int)0))){
			HX_STACK_LINE(89)
			if (((Y == (int)0))){
				HX_STACK_LINE(91)
				screen->setPixel32(x1,y1,color);
				HX_STACK_LINE(92)
				return null();
			}
			HX_STACK_LINE(95)
			yy = (  (((y2 > y1))) ? int((int)1) : int((int)-1) );
			HX_STACK_LINE(96)
			while(((y1 != y2))){
				HX_STACK_LINE(98)
				screen->setPixel32(x1,y1,color);
				HX_STACK_LINE(99)
				hx::AddEq(y1,yy);
			}
			HX_STACK_LINE(101)
			screen->setPixel32(x2,y2,color);
			HX_STACK_LINE(102)
			return null();
		}
		HX_STACK_LINE(105)
		if (((Y == (int)0))){
			HX_STACK_LINE(108)
			xx = (  (((x2 > x1))) ? int((int)1) : int((int)-1) );
			HX_STACK_LINE(109)
			while(((x1 != x2))){
				HX_STACK_LINE(111)
				screen->setPixel32(x1,y1,color);
				HX_STACK_LINE(112)
				hx::AddEq(x1,xx);
			}
			HX_STACK_LINE(114)
			screen->setPixel32(x2,y2,color);
			HX_STACK_LINE(115)
			return null();
		}
		HX_STACK_LINE(118)
		xx = (  (((x2 > x1))) ? int((int)1) : int((int)-1) );
		HX_STACK_LINE(119)
		yy = (  (((y2 > y1))) ? int((int)1) : int((int)-1) );
		HX_STACK_LINE(120)
		Float c = (int)0;		HX_STACK_VAR(c,"c");
		Float slope;		HX_STACK_VAR(slope,"slope");
		HX_STACK_LINE(123)
		if (((X > Y))){
			HX_STACK_LINE(125)
			slope = (Float(Y) / Float(X));
			HX_STACK_LINE(126)
			c = .5;
			HX_STACK_LINE(127)
			while(((x1 != x2))){
				HX_STACK_LINE(129)
				screen->setPixel32(x1,y1,color);
				HX_STACK_LINE(130)
				hx::AddEq(x1,xx);
				HX_STACK_LINE(131)
				hx::AddEq(c,slope);
				HX_STACK_LINE(132)
				if (((c >= (int)1))){
					HX_STACK_LINE(134)
					hx::AddEq(y1,yy);
					HX_STACK_LINE(135)
					hx::SubEq(c,(int)1);
				}
			}
			HX_STACK_LINE(138)
			screen->setPixel32(x2,y2,color);
		}
		else{
			HX_STACK_LINE(142)
			slope = (Float(X) / Float(Y));
			HX_STACK_LINE(143)
			c = .5;
			HX_STACK_LINE(144)
			while(((y1 != y2))){
				HX_STACK_LINE(146)
				screen->setPixel32(x1,y1,color);
				HX_STACK_LINE(147)
				hx::AddEq(y1,yy);
				HX_STACK_LINE(148)
				hx::AddEq(c,slope);
				HX_STACK_LINE(149)
				if (((c >= (int)1))){
					HX_STACK_LINE(151)
					hx::AddEq(x1,xx);
					HX_STACK_LINE(152)
					hx::SubEq(c,(int)1);
				}
			}
			HX_STACK_LINE(155)
			screen->setPixel32(x2,y2,color);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Draw_obj,line,(void))

Void Draw_obj::linePlus( int x1,int y1,int x2,int y2,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< Float >  __o_thick){
int color = __o_color.Default(-16777216);
Float alpha = __o_alpha.Default(1);
Float thick = __o_thick.Default(1);
	HX_STACK_PUSH("Draw::linePlus","com/haxepunk/utils/Draw.hx",170);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(alpha,"alpha");
	HX_STACK_ARG(thick,"thick");
{
		HX_STACK_LINE(171)
		::com::haxepunk::utils::Draw_obj::_graphics->clear();
		HX_STACK_LINE(172)
		::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,color,alpha,false,::neash::display::LineScaleMode_obj::NONE_dyn(),null(),null(),null());
		HX_STACK_LINE(173)
		::com::haxepunk::utils::Draw_obj::_graphics->moveTo((x1 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y1 - ::com::haxepunk::utils::Draw_obj::_camera->y));
		HX_STACK_LINE(174)
		::com::haxepunk::utils::Draw_obj::_graphics->lineTo((x2 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y2 - ::com::haxepunk::utils::Draw_obj::_camera->y));
		HX_STACK_LINE(175)
		::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::Type_obj::getEnumName(::Type_obj::getEnum(::com::haxepunk::utils::Draw_obj::blend)),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Draw_obj,linePlus,(void))

Void Draw_obj::rect( int x,int y,int width,int height,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_PUSH("Draw::rect","com/haxepunk/utils/Draw.hx",188);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(189)
		if (((bool((alpha >= (int)1)) && bool((::com::haxepunk::utils::Draw_obj::blend == null()))))){
			HX_STACK_LINE(191)
			if (((color < (int)-16777216))){
				HX_STACK_LINE(191)
				color = (int((int)-16777216) | int(color));
			}
			HX_STACK_LINE(192)
			::com::haxepunk::utils::Draw_obj::_rect->x = (x - ::com::haxepunk::utils::Draw_obj::_camera->x);
			HX_STACK_LINE(193)
			::com::haxepunk::utils::Draw_obj::_rect->y = (y - ::com::haxepunk::utils::Draw_obj::_camera->y);
			HX_STACK_LINE(194)
			::com::haxepunk::utils::Draw_obj::_rect->width = width;
			HX_STACK_LINE(195)
			::com::haxepunk::utils::Draw_obj::_rect->height = height;
			HX_STACK_LINE(196)
			::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
			HX_STACK_LINE(197)
			return null();
		}
		HX_STACK_LINE(199)
		if (((color >= (int)-16777216))){
			HX_STACK_LINE(199)
			color = (int((int)16777215) & int(color));
		}
		HX_STACK_LINE(200)
		::com::haxepunk::utils::Draw_obj::_graphics->clear();
		HX_STACK_LINE(201)
		::com::haxepunk::utils::Draw_obj::_graphics->beginFill(color,alpha);
		HX_STACK_LINE(202)
		::com::haxepunk::utils::Draw_obj::_graphics->drawRect((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),width,height);
		HX_STACK_LINE(203)
		::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::Type_obj::getEnumName(::Type_obj::getEnum(::com::haxepunk::utils::Draw_obj::blend)),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Draw_obj,rect,(void))

Void Draw_obj::circle( int x,int y,int radius,hx::Null< int >  __o_color){
int color = __o_color.Default(16777215);
	HX_STACK_PUSH("Draw::circle","com/haxepunk/utils/Draw.hx",214);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(radius,"radius");
	HX_STACK_ARG(color,"color");
{
		HX_STACK_LINE(215)
		if (((color < (int)-16777216))){
			HX_STACK_LINE(215)
			color = (int((int)-16777216) | int(color));
		}
		HX_STACK_LINE(216)
		hx::SubEq(x,::Std_obj::_int(::com::haxepunk::utils::Draw_obj::_camera->x));
		HX_STACK_LINE(217)
		hx::SubEq(y,::Std_obj::_int(::com::haxepunk::utils::Draw_obj::_camera->y));
		HX_STACK_LINE(218)
		int f = ((int)1 - radius);		HX_STACK_VAR(f,"f");
		int fx = (int)1;		HX_STACK_VAR(fx,"fx");
		int fy = ((int)-2 * radius);		HX_STACK_VAR(fy,"fy");
		int xx = (int)0;		HX_STACK_VAR(xx,"xx");
		int yy = radius;		HX_STACK_VAR(yy,"yy");
		HX_STACK_LINE(223)
		::com::haxepunk::utils::Draw_obj::_target->setPixel32(x,(y + radius),color);
		HX_STACK_LINE(224)
		::com::haxepunk::utils::Draw_obj::_target->setPixel32(x,(y - radius),color);
		HX_STACK_LINE(225)
		::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + radius),y,color);
		HX_STACK_LINE(226)
		::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - radius),y,color);
		HX_STACK_LINE(227)
		while(((xx < yy))){
			HX_STACK_LINE(229)
			if (((f >= (int)0))){
				HX_STACK_LINE(231)
				(yy)--;
				HX_STACK_LINE(232)
				hx::AddEq(fy,(int)2);
				HX_STACK_LINE(233)
				hx::AddEq(f,fy);
			}
			HX_STACK_LINE(235)
			(xx)++;
			HX_STACK_LINE(236)
			hx::AddEq(fx,(int)2);
			HX_STACK_LINE(237)
			hx::AddEq(f,fx);
			HX_STACK_LINE(238)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + xx),(y + yy),color);
			HX_STACK_LINE(239)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - xx),(y + yy),color);
			HX_STACK_LINE(240)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + xx),(y - yy),color);
			HX_STACK_LINE(241)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - xx),(y - yy),color);
			HX_STACK_LINE(242)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + yy),(y + xx),color);
			HX_STACK_LINE(243)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - yy),(y + xx),color);
			HX_STACK_LINE(244)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32((x + yy),(y - xx),color);
			HX_STACK_LINE(245)
			::com::haxepunk::utils::Draw_obj::_target->setPixel32((x - yy),(y - xx),color);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,circle,(void))

Void Draw_obj::circlePlus( int x,int y,Float radius,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha,hx::Null< bool >  __o_fill,hx::Null< int >  __o_thick){
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
bool fill = __o_fill.Default(true);
int thick = __o_thick.Default(1);
	HX_STACK_PUSH("Draw::circlePlus","com/haxepunk/utils/Draw.hx",260);
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(radius,"radius");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(alpha,"alpha");
	HX_STACK_ARG(fill,"fill");
	HX_STACK_ARG(thick,"thick");
{
		HX_STACK_LINE(261)
		::com::haxepunk::utils::Draw_obj::_graphics->clear();
		HX_STACK_LINE(262)
		if ((fill)){
			HX_STACK_LINE(264)
			::com::haxepunk::utils::Draw_obj::_graphics->beginFill((int(color) & int((int)16777215)),alpha);
			HX_STACK_LINE(265)
			::com::haxepunk::utils::Draw_obj::_graphics->drawCircle((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),radius);
			HX_STACK_LINE(266)
			::com::haxepunk::utils::Draw_obj::_graphics->endFill();
		}
		else{
			HX_STACK_LINE(270)
			::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,(int(color) & int((int)16777215)),alpha,null(),null(),null(),null(),null());
			HX_STACK_LINE(271)
			::com::haxepunk::utils::Draw_obj::_graphics->drawCircle((x - ::com::haxepunk::utils::Draw_obj::_camera->x),(y - ::com::haxepunk::utils::Draw_obj::_camera->y),radius);
		}
		HX_STACK_LINE(273)
		::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::Type_obj::getEnumName(::Type_obj::getEnum(::com::haxepunk::utils::Draw_obj::blend)),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(Draw_obj,circlePlus,(void))

Void Draw_obj::hitbox( ::com::haxepunk::Entity e,hx::Null< bool >  __o_outline,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
bool outline = __o_outline.Default(true);
int color = __o_color.Default(16777215);
Float alpha = __o_alpha.Default(1);
	HX_STACK_PUSH("Draw::hitbox","com/haxepunk/utils/Draw.hx",284);
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(outline,"outline");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(285)
		if ((outline)){
			HX_STACK_LINE(287)
			if (((color < (int)-16777216))){
				HX_STACK_LINE(287)
				color = (int((int)-16777216) | int(color));
			}
			HX_STACK_LINE(288)
			int x = ::Std_obj::_int(((e->x - e->originX) - ::com::haxepunk::utils::Draw_obj::_camera->x));		HX_STACK_VAR(x,"x");
			int y = ::Std_obj::_int(((e->y - e->originY) - ::com::haxepunk::utils::Draw_obj::_camera->y));		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(290)
			::com::haxepunk::utils::Draw_obj::_rect->x = x;
			HX_STACK_LINE(291)
			::com::haxepunk::utils::Draw_obj::_rect->y = y;
			HX_STACK_LINE(292)
			::com::haxepunk::utils::Draw_obj::_rect->width = e->width;
			HX_STACK_LINE(293)
			::com::haxepunk::utils::Draw_obj::_rect->height = (int)1;
			HX_STACK_LINE(294)
			::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
			HX_STACK_LINE(295)
			hx::AddEq(::com::haxepunk::utils::Draw_obj::_rect->y,(e->height - (int)1));
			HX_STACK_LINE(296)
			::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
			HX_STACK_LINE(297)
			::com::haxepunk::utils::Draw_obj::_rect->y = y;
			HX_STACK_LINE(298)
			::com::haxepunk::utils::Draw_obj::_rect->width = (int)1;
			HX_STACK_LINE(299)
			::com::haxepunk::utils::Draw_obj::_rect->height = e->height;
			HX_STACK_LINE(300)
			::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
			HX_STACK_LINE(301)
			hx::AddEq(::com::haxepunk::utils::Draw_obj::_rect->x,(e->width - (int)1));
			HX_STACK_LINE(302)
			::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
			HX_STACK_LINE(303)
			return null();
		}
		HX_STACK_LINE(305)
		if (((bool((alpha >= (int)1)) && bool((::com::haxepunk::utils::Draw_obj::blend == null()))))){
			HX_STACK_LINE(307)
			if (((color < (int)-16777216))){
				HX_STACK_LINE(307)
				color = (int((int)-16777216) | int(color));
			}
			HX_STACK_LINE(308)
			::com::haxepunk::utils::Draw_obj::_rect->x = ((e->x - e->originX) - ::com::haxepunk::utils::Draw_obj::_camera->x);
			HX_STACK_LINE(309)
			::com::haxepunk::utils::Draw_obj::_rect->y = ((e->y - e->originY) - ::com::haxepunk::utils::Draw_obj::_camera->y);
			HX_STACK_LINE(310)
			::com::haxepunk::utils::Draw_obj::_rect->width = e->width;
			HX_STACK_LINE(311)
			::com::haxepunk::utils::Draw_obj::_rect->height = e->height;
			HX_STACK_LINE(312)
			::com::haxepunk::utils::Draw_obj::_target->fillRect(::com::haxepunk::utils::Draw_obj::_rect,color);
			HX_STACK_LINE(313)
			return null();
		}
		HX_STACK_LINE(315)
		if (((color >= (int)-16777216))){
			HX_STACK_LINE(315)
			color = (int((int)16777215) & int(color));
		}
		HX_STACK_LINE(316)
		::com::haxepunk::utils::Draw_obj::_graphics->clear();
		HX_STACK_LINE(317)
		::com::haxepunk::utils::Draw_obj::_graphics->beginFill(color,alpha);
		HX_STACK_LINE(318)
		::com::haxepunk::utils::Draw_obj::_graphics->drawRect(((e->x - e->originX) - ::com::haxepunk::utils::Draw_obj::_camera->x),((e->y - e->originY) - ::com::haxepunk::utils::Draw_obj::_camera->y),e->width,e->height);
		HX_STACK_LINE(319)
		::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::Type_obj::getEnumName(::Type_obj::getEnum(::com::haxepunk::utils::Draw_obj::blend)),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,hitbox,(void))

Void Draw_obj::curve( int x1,int y1,int x2,int y2,int x3,int y3,hx::Null< Float >  __o_thick,hx::Null< int >  __o_color,hx::Null< Float >  __o_alpha){
Float thick = __o_thick.Default(1);
int color = __o_color.Default(0);
Float alpha = __o_alpha.Default(1);
	HX_STACK_PUSH("Draw::curve","com/haxepunk/utils/Draw.hx",334);
	HX_STACK_ARG(x1,"x1");
	HX_STACK_ARG(y1,"y1");
	HX_STACK_ARG(x2,"x2");
	HX_STACK_ARG(y2,"y2");
	HX_STACK_ARG(x3,"x3");
	HX_STACK_ARG(y3,"y3");
	HX_STACK_ARG(thick,"thick");
	HX_STACK_ARG(color,"color");
	HX_STACK_ARG(alpha,"alpha");
{
		HX_STACK_LINE(335)
		::com::haxepunk::utils::Draw_obj::_graphics->clear();
		HX_STACK_LINE(336)
		::com::haxepunk::utils::Draw_obj::_graphics->lineStyle(thick,color,alpha,null(),null(),null(),null(),null());
		HX_STACK_LINE(337)
		::com::haxepunk::utils::Draw_obj::_graphics->moveTo((x1 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y1 - ::com::haxepunk::utils::Draw_obj::_camera->y));
		HX_STACK_LINE(338)
		::com::haxepunk::utils::Draw_obj::_graphics->curveTo((x2 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y2 - ::com::haxepunk::utils::Draw_obj::_camera->y),(x3 - ::com::haxepunk::utils::Draw_obj::_camera->x),(y3 - ::com::haxepunk::utils::Draw_obj::_camera->y));
		HX_STACK_LINE(339)
		::com::haxepunk::utils::Draw_obj::_target->draw(::com::haxepunk::HXP_obj::sprite,null(),null(),::Type_obj::getEnumName(::Type_obj::getEnum(::com::haxepunk::utils::Draw_obj::blend)),null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(Draw_obj,curve,(void))

Void Draw_obj::graphic( ::com::haxepunk::Graphic g,hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
	HX_STACK_PUSH("Draw::graphic","com/haxepunk/utils/Draw.hx",349);
	HX_STACK_ARG(g,"g");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
{
		HX_STACK_LINE(349)
		if ((g->visible)){
			HX_STACK_LINE(352)
			if ((g->relative)){
				HX_STACK_LINE(354)
				::com::haxepunk::HXP_obj::point->x = x;
				HX_STACK_LINE(355)
				::com::haxepunk::HXP_obj::point->y = y;
			}
			else{
				HX_STACK_LINE(357)
				::com::haxepunk::HXP_obj::point->x = ::com::haxepunk::HXP_obj::point->y = (int)0;
			}
			HX_STACK_LINE(358)
			::com::haxepunk::HXP_obj::point2->x = ::com::haxepunk::HXP_obj::camera->x;
			HX_STACK_LINE(359)
			::com::haxepunk::HXP_obj::point2->y = ::com::haxepunk::HXP_obj::camera->y;
			HX_STACK_LINE(360)
			g->render(::com::haxepunk::utils::Draw_obj::_target,::com::haxepunk::HXP_obj::point,::com::haxepunk::HXP_obj::point2);
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Draw_obj,graphic,(void))

Void Draw_obj::entity( ::com::haxepunk::Entity e,Dynamic __o_x,Dynamic __o_y,Dynamic __o_addEntityPosition){
Dynamic x = __o_x.Default(0);
Dynamic y = __o_y.Default(0);
Dynamic addEntityPosition = __o_addEntityPosition.Default(false);
	HX_STACK_PUSH("Draw::entity","com/haxepunk/utils/Draw.hx",372);
	HX_STACK_ARG(e,"e");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(addEntityPosition,"addEntityPosition");
{
		HX_STACK_LINE(372)
		if (((bool(e->visible) && bool((e->_graphic != null()))))){
			HX_STACK_LINE(374)
			if ((addEntityPosition)){
				HX_STACK_LINE(375)
				::com::haxepunk::utils::Draw_obj::graphic(e->_graphic,::Std_obj::_int((x + e->x)),::Std_obj::_int((y + e->y)));
			}
			else{
				HX_STACK_LINE(376)
				::com::haxepunk::utils::Draw_obj::graphic(e->_graphic,x,y);
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,entity,(void))

Void Draw_obj::text( ::String text,Dynamic __o_x,Dynamic __o_y,Dynamic options){
Dynamic x = __o_x.Default(0);
Dynamic y = __o_y.Default(0);
	HX_STACK_PUSH("Draw::text","com/haxepunk/utils/Draw.hx",388);
	HX_STACK_ARG(text,"text");
	HX_STACK_ARG(x,"x");
	HX_STACK_ARG(y,"y");
	HX_STACK_ARG(options,"options");
{
		HX_STACK_LINE(389)
		::com::haxepunk::graphics::Text textGfx = ::com::haxepunk::graphics::Text_obj::__new(text,x,y,(int)0,(int)0,options);		HX_STACK_VAR(textGfx,"textGfx");
		HX_STACK_LINE(390)
		textGfx->render(::com::haxepunk::utils::Draw_obj::_target,::com::haxepunk::HXP_obj::zero,::com::haxepunk::utils::Draw_obj::_camera);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Draw_obj,text,(void))

::neash::display::BitmapData Draw_obj::_target;

::neash::geom::Point Draw_obj::_camera;

::neash::display::Graphics Draw_obj::_graphics;

::neash::geom::Rectangle Draw_obj::_rect;

::neash::geom::Matrix Draw_obj::_matrix;


Draw_obj::Draw_obj()
{
}

void Draw_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Draw);
	HX_MARK_END_CLASS();
}

void Draw_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Draw_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"line") ) { return line_dyn(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return rect_dyn(); }
		if (HX_FIELD_EQ(inName,"text") ) { return text_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"curve") ) { return curve_dyn(); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return _rect; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"circle") ) { return circle_dyn(); }
		if (HX_FIELD_EQ(inName,"hitbox") ) { return hitbox_dyn(); }
		if (HX_FIELD_EQ(inName,"entity") ) { return entity_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return graphic_dyn(); }
		if (HX_FIELD_EQ(inName,"_target") ) { return _target; }
		if (HX_FIELD_EQ(inName,"_camera") ) { return _camera; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return _matrix; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"linePlus") ) { return linePlus_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setTarget") ) { return setTarget_dyn(); }
		if (HX_FIELD_EQ(inName,"_graphics") ) { return _graphics; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"circlePlus") ) { return circlePlus_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resetTarget") ) { return resetTarget_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"drawToScreen") ) { return drawToScreen_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Draw_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::neash::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast< ::neash::geom::Rectangle >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_target") ) { _target=inValue.Cast< ::neash::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_camera") ) { _camera=inValue.Cast< ::neash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast< ::neash::geom::Matrix >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_graphics") ) { _graphics=inValue.Cast< ::neash::display::Graphics >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Draw_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("blend"),
	HX_CSTRING("setTarget"),
	HX_CSTRING("resetTarget"),
	HX_CSTRING("drawToScreen"),
	HX_CSTRING("line"),
	HX_CSTRING("linePlus"),
	HX_CSTRING("rect"),
	HX_CSTRING("circle"),
	HX_CSTRING("circlePlus"),
	HX_CSTRING("hitbox"),
	HX_CSTRING("curve"),
	HX_CSTRING("graphic"),
	HX_CSTRING("entity"),
	HX_CSTRING("text"),
	HX_CSTRING("_target"),
	HX_CSTRING("_camera"),
	HX_CSTRING("_graphics"),
	HX_CSTRING("_rect"),
	HX_CSTRING("_matrix"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Draw_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Draw_obj::blend,"blend");
	HX_MARK_MEMBER_NAME(Draw_obj::_target,"_target");
	HX_MARK_MEMBER_NAME(Draw_obj::_camera,"_camera");
	HX_MARK_MEMBER_NAME(Draw_obj::_graphics,"_graphics");
	HX_MARK_MEMBER_NAME(Draw_obj::_rect,"_rect");
	HX_MARK_MEMBER_NAME(Draw_obj::_matrix,"_matrix");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Draw_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Draw_obj::blend,"blend");
	HX_VISIT_MEMBER_NAME(Draw_obj::_target,"_target");
	HX_VISIT_MEMBER_NAME(Draw_obj::_camera,"_camera");
	HX_VISIT_MEMBER_NAME(Draw_obj::_graphics,"_graphics");
	HX_VISIT_MEMBER_NAME(Draw_obj::_rect,"_rect");
	HX_VISIT_MEMBER_NAME(Draw_obj::_matrix,"_matrix");
};

Class Draw_obj::__mClass;

void Draw_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.Draw"), hx::TCanCast< Draw_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Draw_obj::__boot()
{
	_graphics= ::com::haxepunk::HXP_obj::sprite->nmeGetGraphics();
	_rect= ::com::haxepunk::HXP_obj::rect;
	_matrix= ::neash::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
