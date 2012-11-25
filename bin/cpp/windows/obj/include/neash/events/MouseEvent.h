#ifndef INCLUDED_neash_events_MouseEvent
#define INCLUDED_neash_events_MouseEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <neash/events/Event.h>
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,events,Event)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,events,MouseEvent)
HX_DECLARE_CLASS2(neash,geom,Point)
namespace neash{
namespace events{


class MouseEvent_obj : public ::neash::events::Event_obj{
	public:
		typedef ::neash::events::Event_obj super;
		typedef MouseEvent_obj OBJ_;
		MouseEvent_obj();
		Void __construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,::neash::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount);

	public:
		static hx::ObjectPtr< MouseEvent_obj > __new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable,hx::Null< Float >  __o_localX,hx::Null< Float >  __o_localY,::neash::display::InteractiveObject relatedObject,hx::Null< bool >  __o_ctrlKey,hx::Null< bool >  __o_altKey,hx::Null< bool >  __o_shiftKey,hx::Null< bool >  __o_buttonDown,hx::Null< int >  __o_delta,hx::Null< bool >  __o_commandKey,hx::Null< int >  __o_clickCount);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~MouseEvent_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MouseEvent"); }

		virtual Void updateAfterEvent( );
		Dynamic updateAfterEvent_dyn();

		virtual ::String toString( );

		virtual ::neash::events::MouseEvent nmeCreateSimilar( ::String inType,::neash::display::InteractiveObject related,::neash::display::InteractiveObject targ);
		Dynamic nmeCreateSimilar_dyn();

		virtual ::neash::events::Event clone( );

		Float stageY; /* REM */ 
		Float stageX; /* REM */ 
		bool shiftKey; /* REM */ 
		::neash::display::InteractiveObject relatedObject; /* REM */ 
		Float localY; /* REM */ 
		Float localX; /* REM */ 
		int delta; /* REM */ 
		bool ctrlKey; /* REM */ 
		bool commandKey; /* REM */ 
		int clickCount; /* REM */ 
		bool buttonDown; /* REM */ 
		bool altKey; /* REM */ 
		static ::String DOUBLE_CLICK; /* REM */ 
		static ::String CLICK; /* REM */ 
		static ::String MIDDLE_CLICK; /* REM */ 
		static ::String MIDDLE_MOUSE_DOWN; /* REM */ 
		static ::String MIDDLE_MOUSE_UP; /* REM */ 
		static ::String MOUSE_DOWN; /* REM */ 
		static ::String MOUSE_MOVE; /* REM */ 
		static ::String MOUSE_OUT; /* REM */ 
		static ::String MOUSE_OVER; /* REM */ 
		static ::String MOUSE_UP; /* REM */ 
		static ::String MOUSE_WHEEL; /* REM */ 
		static ::String RIGHT_CLICK; /* REM */ 
		static ::String RIGHT_MOUSE_DOWN; /* REM */ 
		static ::String RIGHT_MOUSE_UP; /* REM */ 
		static ::String ROLL_OUT; /* REM */ 
		static ::String ROLL_OVER; /* REM */ 
		static int efLeftDown; /* REM */ 
		static int efShiftDown; /* REM */ 
		static int efCtrlDown; /* REM */ 
		static int efAltDown; /* REM */ 
		static int efCommandDown; /* REM */ 
		static ::neash::events::MouseEvent nmeCreate( ::String inType,Dynamic inEvent,::neash::geom::Point inLocal,::neash::display::InteractiveObject inTarget);
		static Dynamic nmeCreate_dyn();

};

} // end namespace neash
} // end namespace events

#endif /* INCLUDED_neash_events_MouseEvent */ 
