#ifndef INCLUDED_com_haxepunk_graphics_Text
#define INCLUDED_com_haxepunk_graphics_Text

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <com/haxepunk/graphics/Image.h>
HX_DECLARE_CLASS2(com,haxepunk,Graphic)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Image)
HX_DECLARE_CLASS3(com,haxepunk,graphics,Text)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,text,TextField)
HX_DECLARE_CLASS2(neash,text,TextFormat)
namespace com{
namespace haxepunk{
namespace graphics{


class Text_obj : public ::com::haxepunk::graphics::Image_obj{
	public:
		typedef ::com::haxepunk::graphics::Image_obj super;
		typedef Text_obj OBJ_;
		Text_obj();
		Void __construct(::String text,Dynamic __o_x,Dynamic __o_y,Dynamic __o_width,Dynamic __o_height,Dynamic options);

	public:
		static hx::ObjectPtr< Text_obj > __new(::String text,Dynamic __o_x,Dynamic __o_y,Dynamic __o_width,Dynamic __o_height,Dynamic options);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~Text_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Text"); }

		::neash::text::TextFormat _form; /* REM */ 
		::neash::text::TextField _field; /* REM */ 
		virtual int setSize( int value);
		Dynamic setSize_dyn();

		int size; /* REM */ 
		virtual ::String setFont( ::String value);
		Dynamic setFont_dyn();

		::String font; /* REM */ 
		virtual ::String setText( ::String value);
		Dynamic setText_dyn();

		::String text; /* REM */ 
		int textHeight; /* REM */ 
		int textWidth; /* REM */ 
		bool resizable; /* REM */ 
		virtual Void updateBuffer( hx::Null< bool >  clearBefore);

};

} // end namespace com
} // end namespace haxepunk
} // end namespace graphics

#endif /* INCLUDED_com_haxepunk_graphics_Text */ 
