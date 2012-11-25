#include <hxcpp.h>

#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_Engine
#include <com/haxepunk/Engine.h>
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
#ifndef INCLUDED_com_haxepunk_Screen
#include <com/haxepunk/Screen.h>
#endif
#ifndef INCLUDED_com_haxepunk_Tweener
#include <com/haxepunk/Tweener.h>
#endif
#ifndef INCLUDED_com_haxepunk_World
#include <com/haxepunk/World.h>
#endif
#ifndef INCLUDED_com_haxepunk_debug_Console
#include <com/haxepunk/debug/Console.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Draw
#include <com/haxepunk/utils/Draw.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Input
#include <com/haxepunk/utils/Input.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_neash_Lib
#include <neash/Lib.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObject
#include <neash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_neash_display_DisplayObjectContainer
#include <neash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_neash_display_IBitmapDrawable
#include <neash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_neash_display_InteractiveObject
#include <neash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_neash_display_MovieClip
#include <neash/display/MovieClip.h>
#endif
#ifndef INCLUDED_neash_display_Sprite
#include <neash/display/Sprite.h>
#endif
#ifndef INCLUDED_neash_display_Stage
#include <neash/display/Stage.h>
#endif
#ifndef INCLUDED_neash_display_StageAlign
#include <neash/display/StageAlign.h>
#endif
#ifndef INCLUDED_neash_display_StageDisplayState
#include <neash/display/StageDisplayState.h>
#endif
#ifndef INCLUDED_neash_display_StageQuality
#include <neash/display/StageQuality.h>
#endif
#ifndef INCLUDED_neash_display_StageScaleMode
#include <neash/display/StageScaleMode.h>
#endif
#ifndef INCLUDED_neash_events_Event
#include <neash/events/Event.h>
#endif
#ifndef INCLUDED_neash_events_EventDispatcher
#include <neash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_neash_events_IEventDispatcher
#include <neash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_neash_geom_Point
#include <neash/geom/Point.h>
#endif
#ifndef INCLUDED_neash_geom_Rectangle
#include <neash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_nme_Lib
#include <nme/Lib.h>
#endif
namespace com{
namespace haxepunk{

Void Engine_obj::__construct(int width,int height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed)
{
HX_STACK_PUSH("Engine::new","com/haxepunk/Engine.hx",51);
Float frameRate = __o_frameRate.Default(60);
bool fixed = __o_fixed.Default(false);
{
	HX_STACK_LINE(52)
	super::__construct();
	HX_STACK_LINE(55)
	::com::haxepunk::HXP_obj::bounds = ::neash::geom::Rectangle_obj::__new((int)0,(int)0,width,height);
	HX_STACK_LINE(56)
	::com::haxepunk::HXP_obj::assignedFrameRate = frameRate;
	HX_STACK_LINE(57)
	::com::haxepunk::HXP_obj::fixed = fixed;
	HX_STACK_LINE(60)
	::com::haxepunk::HXP_obj::engine = hx::ObjectPtr<OBJ_>(this);
	HX_STACK_LINE(61)
	::com::haxepunk::HXP_obj::screen = ::com::haxepunk::Screen_obj::__new();
	HX_STACK_LINE(62)
	::com::haxepunk::HXP_obj::width = width;
	HX_STACK_LINE(63)
	::com::haxepunk::HXP_obj::height = height;
	HX_STACK_LINE(69)
	if (((::com::haxepunk::HXP_obj::randomSeed == (int)0))){
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			::com::haxepunk::HXP_obj::_seed = ::Std_obj::_int(::com::haxepunk::HXP_obj::clamp(::Std_obj::_int((2147483647.0 * ::Math_obj::random())),1.0,2147483646.0));
			HX_STACK_LINE(69)
			::com::haxepunk::HXP_obj::randomSeed = ::com::haxepunk::HXP_obj::_seed;
			HX_STACK_LINE(69)
			::com::haxepunk::HXP_obj::_seed;
		}
	}
	HX_STACK_LINE(72)
	::com::haxepunk::HXP_obj::entity = ::com::haxepunk::Entity_obj::__new(null(),null(),null(),null());
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		::com::haxepunk::HXP_obj::_time = ::neash::Lib_obj::getTimer();
		HX_STACK_LINE(73)
		::com::haxepunk::HXP_obj::_time;
	}
	HX_STACK_LINE(75)
	this->paused = false;
	HX_STACK_LINE(76)
	this->maxElapsed = 0.0333;
	HX_STACK_LINE(77)
	this->maxFrameSkip = (int)5;
	HX_STACK_LINE(78)
	this->tickRate = (int)4;
	HX_STACK_LINE(79)
	this->_frameList = Array_obj< int >::__new();
	HX_STACK_LINE(80)
	this->_flashTime = this->_delta = this->_frameListSum = (int)0;
	HX_STACK_LINE(81)
	this->_frameLast = (int)0;
	HX_STACK_LINE(88)
	this->addEventListener(::neash::events::Event_obj::ADDED_TO_STAGE,this->onStage_dyn(),null(),null(),null());
	HX_STACK_LINE(89)
	::nme::Lib_obj::nmeGetCurrent()->addChild(hx::ObjectPtr<OBJ_>(this));
}
;
	return null();
}

Engine_obj::~Engine_obj() { }

Dynamic Engine_obj::__CreateEmpty() { return  new Engine_obj; }
hx::ObjectPtr< Engine_obj > Engine_obj::__new(int width,int height,hx::Null< Float >  __o_frameRate,hx::Null< bool >  __o_fixed)
{  hx::ObjectPtr< Engine_obj > result = new Engine_obj();
	result->__construct(width,height,__o_frameRate,__o_fixed);
	return result;}

Dynamic Engine_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Engine_obj > result = new Engine_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Engine_obj::checkWorld( ){
{
		HX_STACK_PUSH("Engine::checkWorld","com/haxepunk/Engine.hx",318);
		HX_STACK_THIS(this);
		HX_STACK_LINE(319)
		if (((::com::haxepunk::HXP_obj::_goto == null()))){
			HX_STACK_LINE(319)
			return null();
		}
		HX_STACK_LINE(321)
		if (((::com::haxepunk::HXP_obj::_world != null()))){
			HX_STACK_LINE(323)
			::com::haxepunk::HXP_obj::_world->end();
			HX_STACK_LINE(324)
			::com::haxepunk::HXP_obj::_world->updateLists();
			HX_STACK_LINE(325)
			if (((bool(::com::haxepunk::HXP_obj::_world->autoClear) && bool(::com::haxepunk::HXP_obj::_world->getTween())))){
				HX_STACK_LINE(325)
				::com::haxepunk::HXP_obj::_world->clearTweens();
			}
			HX_STACK_LINE(326)
			{
				HX_STACK_LINE(326)
				::com::haxepunk::HXP_obj::_world = ::com::haxepunk::HXP_obj::_goto;
				HX_STACK_LINE(326)
				::com::haxepunk::HXP_obj::_goto = null();
			}
			HX_STACK_LINE(327)
			::com::haxepunk::HXP_obj::camera = ::com::haxepunk::HXP_obj::_world->camera;
			HX_STACK_LINE(328)
			::com::haxepunk::HXP_obj::_world->updateLists();
			HX_STACK_LINE(329)
			::com::haxepunk::HXP_obj::_world->begin();
			HX_STACK_LINE(330)
			::com::haxepunk::HXP_obj::_world->updateLists();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,checkWorld,(void))

Void Engine_obj::onTimer( ){
{
		HX_STACK_PUSH("Engine::onTimer","com/haxepunk/Engine.hx",266);
		HX_STACK_THIS(this);
		HX_STACK_LINE(268)
		this->_time = ::neash::Lib_obj::getTimer();
		HX_STACK_LINE(269)
		hx::AddEq(this->_delta,(this->_time - this->_last));
		HX_STACK_LINE(270)
		this->_last = this->_time;
		HX_STACK_LINE(273)
		if (((this->_delta < this->_rate))){
			HX_STACK_LINE(273)
			return null();
		}
		HX_STACK_LINE(276)
		this->_gameTime = ::Std_obj::_int(this->_time);
		HX_STACK_LINE(277)
		::com::haxepunk::HXP_obj::_flashTime = (this->_time - this->_flashTime);
		HX_STACK_LINE(280)
		if (((this->_delta > this->_skip))){
			HX_STACK_LINE(280)
			this->_delta = this->_skip;
		}
		HX_STACK_LINE(281)
		while(((this->_delta >= this->_rate))){
			HX_STACK_LINE(283)
			::com::haxepunk::HXP_obj::elapsed = ((this->_rate * ::com::haxepunk::HXP_obj::rate) * 0.001);
			HX_STACK_LINE(286)
			this->_updateTime = this->_time;
			HX_STACK_LINE(287)
			hx::SubEq(this->_delta,this->_rate);
			HX_STACK_LINE(288)
			this->_prev = this->_time;
			HX_STACK_LINE(291)
			if ((!(this->paused))){
				HX_STACK_LINE(291)
				this->update();
			}
			struct _Function_2_1{
				inline static ::com::haxepunk::debug::Console Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/Engine.hx",294);
					{
						HX_STACK_LINE(294)
						if (((::com::haxepunk::HXP_obj::_console == null()))){
							HX_STACK_LINE(294)
							::com::haxepunk::HXP_obj::_console = ::com::haxepunk::debug::Console_obj::__new();
						}
						HX_STACK_LINE(294)
						return ::com::haxepunk::HXP_obj::_console;
					}
					return null();
				}
			};
			HX_STACK_LINE(294)
			if (((_Function_2_1::Block() != null()))){
				struct _Function_3_1{
					inline static ::com::haxepunk::debug::Console Block( ){
						HX_STACK_PUSH("*::closure","com/haxepunk/Engine.hx",294);
						{
							HX_STACK_LINE(294)
							if (((::com::haxepunk::HXP_obj::_console == null()))){
								HX_STACK_LINE(294)
								::com::haxepunk::HXP_obj::_console = ::com::haxepunk::debug::Console_obj::__new();
							}
							HX_STACK_LINE(294)
							return ::com::haxepunk::HXP_obj::_console;
						}
						return null();
					}
				};
				HX_STACK_LINE(294)
				(_Function_3_1::Block())->update();
			}
			HX_STACK_LINE(297)
			::com::haxepunk::utils::Input_obj::update();
			HX_STACK_LINE(300)
			this->_time = ::neash::Lib_obj::getTimer();
			HX_STACK_LINE(301)
			::com::haxepunk::HXP_obj::_updateTime = (this->_time - this->_updateTime);
		}
		HX_STACK_LINE(305)
		this->_renderTime = this->_time;
		HX_STACK_LINE(308)
		if ((!(this->paused))){
			HX_STACK_LINE(308)
			this->render();
		}
		HX_STACK_LINE(311)
		this->_time = this->_flashTime = ::neash::Lib_obj::getTimer();
		HX_STACK_LINE(312)
		::com::haxepunk::HXP_obj::_renderTime = (this->_time - this->_renderTime);
		HX_STACK_LINE(313)
		::com::haxepunk::HXP_obj::_gameTime = (this->_time - this->_gameTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,onTimer,(void))

Void Engine_obj::onEnterFrame( ::neash::events::Event e){
{
		HX_STACK_PUSH("Engine::onEnterFrame","com/haxepunk/Engine.hx",232);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(234)
		this->_time = this->_gameTime = ::neash::Lib_obj::getTimer();
		HX_STACK_LINE(235)
		::com::haxepunk::HXP_obj::_flashTime = (this->_time - this->_flashTime);
		HX_STACK_LINE(236)
		this->_updateTime = this->_time;
		HX_STACK_LINE(237)
		::com::haxepunk::HXP_obj::elapsed = (Float(((this->_time - this->_last))) / Float((int)1000));
		HX_STACK_LINE(238)
		if (((::com::haxepunk::HXP_obj::elapsed > this->maxElapsed))){
			HX_STACK_LINE(238)
			::com::haxepunk::HXP_obj::elapsed = this->maxElapsed;
		}
		HX_STACK_LINE(239)
		hx::MultEq(::com::haxepunk::HXP_obj::elapsed,::com::haxepunk::HXP_obj::rate);
		HX_STACK_LINE(240)
		this->_last = this->_time;
		HX_STACK_LINE(243)
		if ((!(this->paused))){
			HX_STACK_LINE(243)
			this->update();
		}
		struct _Function_1_1{
			inline static ::com::haxepunk::debug::Console Block( ){
				HX_STACK_PUSH("*::closure","com/haxepunk/Engine.hx",246);
				{
					HX_STACK_LINE(246)
					if (((::com::haxepunk::HXP_obj::_console == null()))){
						HX_STACK_LINE(246)
						::com::haxepunk::HXP_obj::_console = ::com::haxepunk::debug::Console_obj::__new();
					}
					HX_STACK_LINE(246)
					return ::com::haxepunk::HXP_obj::_console;
				}
				return null();
			}
		};
		HX_STACK_LINE(246)
		if (((_Function_1_1::Block() != null()))){
			struct _Function_2_1{
				inline static ::com::haxepunk::debug::Console Block( ){
					HX_STACK_PUSH("*::closure","com/haxepunk/Engine.hx",246);
					{
						HX_STACK_LINE(246)
						if (((::com::haxepunk::HXP_obj::_console == null()))){
							HX_STACK_LINE(246)
							::com::haxepunk::HXP_obj::_console = ::com::haxepunk::debug::Console_obj::__new();
						}
						HX_STACK_LINE(246)
						return ::com::haxepunk::HXP_obj::_console;
					}
					return null();
				}
			};
			HX_STACK_LINE(246)
			(_Function_2_1::Block())->update();
		}
		HX_STACK_LINE(249)
		::com::haxepunk::utils::Input_obj::update();
		HX_STACK_LINE(252)
		this->_time = this->_renderTime = ::neash::Lib_obj::getTimer();
		HX_STACK_LINE(253)
		::com::haxepunk::HXP_obj::_updateTime = (this->_time - this->_updateTime);
		HX_STACK_LINE(256)
		if ((!(this->paused))){
			HX_STACK_LINE(256)
			this->render();
		}
		HX_STACK_LINE(259)
		this->_time = this->_flashTime = ::neash::Lib_obj::getTimer();
		HX_STACK_LINE(260)
		::com::haxepunk::HXP_obj::_renderTime = (this->_time - this->_renderTime);
		HX_STACK_LINE(261)
		::com::haxepunk::HXP_obj::_gameTime = (this->_time - this->_gameTime);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onEnterFrame,(void))

Void Engine_obj::onStage( ::neash::events::Event e){
{
		HX_STACK_PUSH("Engine::onStage","com/haxepunk/Engine.hx",190);
		HX_STACK_THIS(this);
		HX_STACK_ARG(e,"e");
		HX_STACK_LINE(198)
		this->removeEventListener(::neash::events::Event_obj::ADDED_TO_STAGE,this->onStage_dyn(),null());
		HX_STACK_LINE(199)
		::com::haxepunk::HXP_obj::stage = this->nmeGetStage();
		HX_STACK_LINE(201)
		this->setStageProperties();
		HX_STACK_LINE(204)
		::com::haxepunk::utils::Input_obj::enable();
		HX_STACK_LINE(207)
		if ((!(((::com::haxepunk::HXP_obj::_goto == null()))))){
			HX_STACK_LINE(207)
			this->checkWorld();
		}
		HX_STACK_LINE(210)
		this->init();
		HX_STACK_LINE(213)
		this->_rate = (Float((int)1000) / Float(::com::haxepunk::HXP_obj::assignedFrameRate));
		HX_STACK_LINE(214)
		if ((::com::haxepunk::HXP_obj::fixed)){
			HX_STACK_LINE(217)
			this->_skip = (this->_rate * ((this->maxFrameSkip + (int)1)));
			HX_STACK_LINE(218)
			this->_last = this->_prev = ::neash::Lib_obj::getTimer();
			HX_STACK_LINE(219)
			this->_timer = ::haxe::Timer_obj::__new(this->tickRate);
			HX_STACK_LINE(220)
			this->_timer->run = this->onTimer_dyn();
		}
		else{
			HX_STACK_LINE(225)
			this->_last = ::neash::Lib_obj::getTimer();
			HX_STACK_LINE(226)
			this->addEventListener(::neash::events::Event_obj::ENTER_FRAME,this->onEnterFrame_dyn(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Engine_obj,onStage,(void))

Void Engine_obj::resize( ){
{
		HX_STACK_PUSH("Engine::resize","com/haxepunk/Engine.hx",181);
		HX_STACK_THIS(this);
		HX_STACK_LINE(183)
		::com::haxepunk::HXP_obj::screen->setScaleX((Float(::com::haxepunk::HXP_obj::stage->nmeGetStageWidth()) / Float(::com::haxepunk::HXP_obj::width)));
		HX_STACK_LINE(184)
		::com::haxepunk::HXP_obj::screen->setScaleY((Float(::com::haxepunk::HXP_obj::stage->nmeGetStageHeight()) / Float(::com::haxepunk::HXP_obj::height)));
		HX_STACK_LINE(185)
		::com::haxepunk::HXP_obj::resize(::com::haxepunk::HXP_obj::stage->nmeGetStageWidth(),::com::haxepunk::HXP_obj::stage->nmeGetStageHeight());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,resize,(void))

Void Engine_obj::setStageProperties( ){
{
		HX_STACK_PUSH("Engine::setStageProperties","com/haxepunk/Engine.hx",152);
		HX_STACK_THIS(this);
		HX_STACK_LINE(151)
		Array< ::com::haxepunk::Engine > _g = Array_obj< ::com::haxepunk::Engine >::__new().Add(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(153)
		::com::haxepunk::HXP_obj::stage->nmeSetFrameRate(::com::haxepunk::HXP_obj::assignedFrameRate);
		HX_STACK_LINE(154)
		::com::haxepunk::HXP_obj::stage->nmeSetAlign(::neash::display::StageAlign_obj::TOP_LEFT_dyn());
		HX_STACK_LINE(155)
		::com::haxepunk::HXP_obj::stage->nmeSetQuality(::neash::display::StageQuality_obj::HIGH_dyn());
		HX_STACK_LINE(156)
		::com::haxepunk::HXP_obj::stage->nmeSetScaleMode(::neash::display::StageScaleMode_obj::NO_SCALE_dyn());
		HX_STACK_LINE(157)
		::com::haxepunk::HXP_obj::stage->nmeSetDisplayState(::neash::display::StageDisplayState_obj::NORMAL_dyn());
		HX_STACK_LINE(159)
		this->resize();

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_1,Array< ::com::haxepunk::Engine >,_g)
		Void run(::neash::events::Event e){
			HX_STACK_PUSH("*::_Function_1_1","com/haxepunk/Engine.hx",162);
			HX_STACK_ARG(e,"e");
			{
				HX_STACK_LINE(162)
				_g->__get((int)0)->resize();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(162)
		::com::haxepunk::HXP_obj::stage->addEventListener(::neash::events::Event_obj::RESIZE, Dynamic(new _Function_1_1(_g)),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_2,Array< ::com::haxepunk::Engine >,_g)
		Void run(::neash::events::Event e){
			HX_STACK_PUSH("*::_Function_1_2","com/haxepunk/Engine.hx",166);
			HX_STACK_ARG(e,"e");
			{
				HX_STACK_LINE(167)
				::com::haxepunk::HXP_obj::focused = true;
				HX_STACK_LINE(168)
				_g->__get((int)0)->focusGained();
				HX_STACK_LINE(169)
				::com::haxepunk::HXP_obj::_world->focusGained();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(166)
		::com::haxepunk::HXP_obj::stage->addEventListener(::neash::events::Event_obj::ACTIVATE, Dynamic(new _Function_1_2(_g)),null(),null(),null());

		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_1_3,Array< ::com::haxepunk::Engine >,_g)
		Void run(::neash::events::Event e){
			HX_STACK_PUSH("*::_Function_1_3","com/haxepunk/Engine.hx",172);
			HX_STACK_ARG(e,"e");
			{
				HX_STACK_LINE(173)
				::com::haxepunk::HXP_obj::focused = false;
				HX_STACK_LINE(174)
				_g->__get((int)0)->focusLost();
				HX_STACK_LINE(175)
				::com::haxepunk::HXP_obj::_world->focusLost();
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(172)
		::com::haxepunk::HXP_obj::stage->addEventListener(::neash::events::Event_obj::DEACTIVATE, Dynamic(new _Function_1_3(_g)),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,setStageProperties,(void))

Void Engine_obj::render( ){
{
		HX_STACK_PUSH("Engine::render","com/haxepunk/Engine.hx",128);
		HX_STACK_THIS(this);
		HX_STACK_LINE(130)
		Float t = ::neash::Lib_obj::getTimer();		HX_STACK_VAR(t,"t");
		HX_STACK_LINE(131)
		if (((this->_frameLast == (int)0))){
			HX_STACK_LINE(131)
			this->_frameLast = ::Std_obj::_int(t);
		}
		HX_STACK_LINE(134)
		::com::haxepunk::HXP_obj::screen->swap();
		HX_STACK_LINE(135)
		::com::haxepunk::utils::Draw_obj::resetTarget();
		HX_STACK_LINE(136)
		::com::haxepunk::HXP_obj::screen->refresh();
		HX_STACK_LINE(137)
		if ((::com::haxepunk::HXP_obj::_world->visible)){
			HX_STACK_LINE(137)
			::com::haxepunk::HXP_obj::_world->render();
		}
		HX_STACK_LINE(138)
		::com::haxepunk::HXP_obj::screen->redraw();
		HX_STACK_LINE(141)
		t = ::neash::Lib_obj::getTimer();
		HX_STACK_LINE(142)
		hx::AddEq(this->_frameListSum,this->_frameList[this->_frameList->length] = ::Std_obj::_int((t - this->_frameLast)));
		HX_STACK_LINE(143)
		if (((this->_frameList->length > (int)10))){
			HX_STACK_LINE(143)
			hx::SubEq(this->_frameListSum,this->_frameList->shift());
		}
		HX_STACK_LINE(144)
		::com::haxepunk::HXP_obj::frameRate = (Float((int)1000) / Float(((Float(this->_frameListSum) / Float(this->_frameList->length)))));
		HX_STACK_LINE(145)
		this->_frameLast = t;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,render,(void))

Void Engine_obj::update( ){
{
		HX_STACK_PUSH("Engine::update","com/haxepunk/Engine.hx",112);
		HX_STACK_THIS(this);
		HX_STACK_LINE(113)
		if (((bool(::com::haxepunk::HXP_obj::tweener->active) && bool(::com::haxepunk::HXP_obj::tweener->getTween())))){
			HX_STACK_LINE(113)
			::com::haxepunk::HXP_obj::tweener->updateTweens();
		}
		HX_STACK_LINE(115)
		if ((::com::haxepunk::HXP_obj::_world->active)){
			HX_STACK_LINE(117)
			if ((::com::haxepunk::HXP_obj::_world->getTween())){
				HX_STACK_LINE(117)
				::com::haxepunk::HXP_obj::_world->updateTweens();
			}
			HX_STACK_LINE(118)
			::com::haxepunk::HXP_obj::_world->update();
		}
		HX_STACK_LINE(120)
		::com::haxepunk::HXP_obj::_world->updateLists();
		HX_STACK_LINE(121)
		if ((!(((::com::haxepunk::HXP_obj::_goto == null()))))){
			HX_STACK_LINE(121)
			this->checkWorld();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,update,(void))

Void Engine_obj::focusLost( ){
{
		HX_STACK_PUSH("Engine::focusLost","com/haxepunk/Engine.hx",106);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,focusLost,(void))

Void Engine_obj::focusGained( ){
{
		HX_STACK_PUSH("Engine::focusGained","com/haxepunk/Engine.hx",101);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,focusGained,(void))

Void Engine_obj::init( ){
{
		HX_STACK_PUSH("Engine::init","com/haxepunk/Engine.hx",96);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Engine_obj,init,(void))


Engine_obj::Engine_obj()
{
}

void Engine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Engine);
	HX_MARK_MEMBER_NAME(_frameList,"_frameList");
	HX_MARK_MEMBER_NAME(_frameListSum,"_frameListSum");
	HX_MARK_MEMBER_NAME(_frameLast,"_frameLast");
	HX_MARK_MEMBER_NAME(_flashTime,"_flashTime");
	HX_MARK_MEMBER_NAME(_gameTime,"_gameTime");
	HX_MARK_MEMBER_NAME(_renderTime,"_renderTime");
	HX_MARK_MEMBER_NAME(_updateTime,"_updateTime");
	HX_MARK_MEMBER_NAME(_prev,"_prev");
	HX_MARK_MEMBER_NAME(_skip,"_skip");
	HX_MARK_MEMBER_NAME(_rate,"_rate");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_last,"_last");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_delta,"_delta");
	HX_MARK_MEMBER_NAME(tickRate,"tickRate");
	HX_MARK_MEMBER_NAME(maxFrameSkip,"maxFrameSkip");
	HX_MARK_MEMBER_NAME(maxElapsed,"maxElapsed");
	HX_MARK_MEMBER_NAME(paused,"paused");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Engine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_frameList,"_frameList");
	HX_VISIT_MEMBER_NAME(_frameListSum,"_frameListSum");
	HX_VISIT_MEMBER_NAME(_frameLast,"_frameLast");
	HX_VISIT_MEMBER_NAME(_flashTime,"_flashTime");
	HX_VISIT_MEMBER_NAME(_gameTime,"_gameTime");
	HX_VISIT_MEMBER_NAME(_renderTime,"_renderTime");
	HX_VISIT_MEMBER_NAME(_updateTime,"_updateTime");
	HX_VISIT_MEMBER_NAME(_prev,"_prev");
	HX_VISIT_MEMBER_NAME(_skip,"_skip");
	HX_VISIT_MEMBER_NAME(_rate,"_rate");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_last,"_last");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_delta,"_delta");
	HX_VISIT_MEMBER_NAME(tickRate,"tickRate");
	HX_VISIT_MEMBER_NAME(maxFrameSkip,"maxFrameSkip");
	HX_VISIT_MEMBER_NAME(maxElapsed,"maxElapsed");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Engine_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_prev") ) { return _prev; }
		if (HX_FIELD_EQ(inName,"_skip") ) { return _skip; }
		if (HX_FIELD_EQ(inName,"_rate") ) { return _rate; }
		if (HX_FIELD_EQ(inName,"_last") ) { return _last; }
		if (HX_FIELD_EQ(inName,"_time") ) { return _time; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_delta") ) { return _delta; }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"render") ) { return render_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"onTimer") ) { return onTimer_dyn(); }
		if (HX_FIELD_EQ(inName,"onStage") ) { return onStage_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tickRate") ) { return tickRate; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gameTime") ) { return _gameTime; }
		if (HX_FIELD_EQ(inName,"focusLost") ) { return focusLost_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_frameList") ) { return _frameList; }
		if (HX_FIELD_EQ(inName,"_frameLast") ) { return _frameLast; }
		if (HX_FIELD_EQ(inName,"_flashTime") ) { return _flashTime; }
		if (HX_FIELD_EQ(inName,"checkWorld") ) { return checkWorld_dyn(); }
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { return maxElapsed; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_renderTime") ) { return _renderTime; }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { return _updateTime; }
		if (HX_FIELD_EQ(inName,"focusGained") ) { return focusGained_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onEnterFrame") ) { return onEnterFrame_dyn(); }
		if (HX_FIELD_EQ(inName,"maxFrameSkip") ) { return maxFrameSkip; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameListSum") ) { return _frameListSum; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"setStageProperties") ) { return setStageProperties_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Engine_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_prev") ) { _prev=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skip") ) { _skip=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rate") ) { _rate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_last") ) { _last=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< ::haxe::Timer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_delta") ) { _delta=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tickRate") ) { tickRate=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gameTime") ) { _gameTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_frameList") ) { _frameList=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_frameLast") ) { _frameLast=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_flashTime") ) { _flashTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxElapsed") ) { maxElapsed=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_renderTime") ) { _renderTime=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_updateTime") ) { _updateTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"maxFrameSkip") ) { maxFrameSkip=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_frameListSum") ) { _frameListSum=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Engine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_frameList"));
	outFields->push(HX_CSTRING("_frameListSum"));
	outFields->push(HX_CSTRING("_frameLast"));
	outFields->push(HX_CSTRING("_flashTime"));
	outFields->push(HX_CSTRING("_gameTime"));
	outFields->push(HX_CSTRING("_renderTime"));
	outFields->push(HX_CSTRING("_updateTime"));
	outFields->push(HX_CSTRING("_prev"));
	outFields->push(HX_CSTRING("_skip"));
	outFields->push(HX_CSTRING("_rate"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_last"));
	outFields->push(HX_CSTRING("_time"));
	outFields->push(HX_CSTRING("_delta"));
	outFields->push(HX_CSTRING("tickRate"));
	outFields->push(HX_CSTRING("maxFrameSkip"));
	outFields->push(HX_CSTRING("maxElapsed"));
	outFields->push(HX_CSTRING("paused"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("_frameList"),
	HX_CSTRING("_frameListSum"),
	HX_CSTRING("_frameLast"),
	HX_CSTRING("_flashTime"),
	HX_CSTRING("_gameTime"),
	HX_CSTRING("_renderTime"),
	HX_CSTRING("_updateTime"),
	HX_CSTRING("_prev"),
	HX_CSTRING("_skip"),
	HX_CSTRING("_rate"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_last"),
	HX_CSTRING("_time"),
	HX_CSTRING("_delta"),
	HX_CSTRING("checkWorld"),
	HX_CSTRING("onTimer"),
	HX_CSTRING("onEnterFrame"),
	HX_CSTRING("onStage"),
	HX_CSTRING("resize"),
	HX_CSTRING("setStageProperties"),
	HX_CSTRING("render"),
	HX_CSTRING("update"),
	HX_CSTRING("focusLost"),
	HX_CSTRING("focusGained"),
	HX_CSTRING("init"),
	HX_CSTRING("tickRate"),
	HX_CSTRING("maxFrameSkip"),
	HX_CSTRING("maxElapsed"),
	HX_CSTRING("paused"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Engine_obj::__mClass,"__mClass");
};

Class Engine_obj::__mClass;

void Engine_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.Engine"), hx::TCanCast< Engine_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Engine_obj::__boot()
{
}

} // end namespace com
} // end namespace haxepunk
