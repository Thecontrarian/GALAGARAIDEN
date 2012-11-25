#ifndef INCLUDED_com_haxepunk_Tween
#define INCLUDED_com_haxepunk_Tween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(com,haxepunk,Tween)
HX_DECLARE_CLASS2(com,haxepunk,TweenType)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
namespace com{
namespace haxepunk{


class Tween_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Tween_obj OBJ_;
		Tween_obj();
		Void __construct(Float duration,::com::haxepunk::TweenType type,Dynamic complete,Dynamic ease);

	public:
		static hx::ObjectPtr< Tween_obj > __new(Float duration,::com::haxepunk::TweenType type,Dynamic complete,Dynamic ease);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Tween_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tween"); }

		Dynamic _next; /* REM */ 
		Dynamic _prev; /* REM */ 
		::com::haxepunk::Tweener _parent; /* REM */ 
		bool _finish; /* REM */ 
		Float _target; /* REM */ 
		Float _time; /* REM */ 
		Float _t; /* REM */ 
		Dynamic _ease; /* REM */ 
		Dynamic &_ease_dyn() { return _ease;}
		::com::haxepunk::TweenType _type; /* REM */ 
		virtual Float getScale( );
		Dynamic getScale_dyn();

		Float scale; /* REM */ 
		virtual Float setPercent( Float value);
		Dynamic setPercent_dyn();

		virtual Float getPercent( );
		Dynamic getPercent_dyn();

		Float percent; /* REM */ 
		virtual Void finish( );
		Dynamic finish_dyn();

		virtual Void start( );
		Dynamic start_dyn();

		virtual Void update( );
		Dynamic update_dyn();

		Dynamic complete; /* REM */ 
		Dynamic &complete_dyn() { return complete;}
		bool active; /* REM */ 
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_Tween */ 
