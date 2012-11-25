#ifndef INCLUDED_com_haxepunk_HXP
#define INCLUDED_com_haxepunk_HXP

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Hash)
HX_DECLARE_CLASS2(com,haxepunk,Engine)
HX_DECLARE_CLASS2(com,haxepunk,Entity)
HX_DECLARE_CLASS2(com,haxepunk,HXP)
HX_DECLARE_CLASS2(com,haxepunk,Screen)
HX_DECLARE_CLASS2(com,haxepunk,Tween)
HX_DECLARE_CLASS2(com,haxepunk,Tweener)
HX_DECLARE_CLASS2(com,haxepunk,World)
HX_DECLARE_CLASS3(com,haxepunk,debug,Console)
HX_DECLARE_CLASS4(com,haxepunk,tweens,misc,MultiVarTween)
HX_DECLARE_CLASS2(neash,display,BitmapData)
HX_DECLARE_CLASS2(neash,display,DisplayObject)
HX_DECLARE_CLASS2(neash,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(neash,display,IBitmapDrawable)
HX_DECLARE_CLASS2(neash,display,InteractiveObject)
HX_DECLARE_CLASS2(neash,display,Sprite)
HX_DECLARE_CLASS2(neash,display,Stage)
HX_DECLARE_CLASS2(neash,events,EventDispatcher)
HX_DECLARE_CLASS2(neash,events,IEventDispatcher)
HX_DECLARE_CLASS2(neash,geom,Matrix)
HX_DECLARE_CLASS2(neash,geom,Point)
HX_DECLARE_CLASS2(neash,geom,Rectangle)
HX_DECLARE_CLASS2(neash,media,SoundTransform)
namespace com{
namespace haxepunk{


class HXP_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HXP_obj OBJ_;
		HXP_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< HXP_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~HXP_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HXP"); }

		static ::String VERSION; /* REM */ 
		static int BASELAYER; /* REM */ 
		static Float NUMBER_MAX_VALUE; /* REM */ 
		static int blackColor; /* REM */ 
		static int width; /* REM */ 
		static int height; /* REM */ 
		static int windowWidth; /* REM */ 
		static int windowHeight; /* REM */ 
		static bool fixed; /* REM */ 
		static Float frameRate; /* REM */ 
		static Float assignedFrameRate; /* REM */ 
		static Float elapsed; /* REM */ 
		static Float rate; /* REM */ 
		static ::com::haxepunk::Screen screen; /* REM */ 
		static ::neash::display::BitmapData buffer; /* REM */ 
		static ::neash::geom::Rectangle bounds; /* REM */ 
		static ::String defaultFont; /* REM */ 
		static ::neash::geom::Point camera; /* REM */ 
		static ::com::haxepunk::Tweener tweener; /* REM */ 
		static bool focused; /* REM */ 
		static Float halfWidth; /* REM */ 
		static Float halfHeight; /* REM */ 
		static ::com::haxepunk::World world; /* REM */ 
		static ::com::haxepunk::World getWorld( );
		static Dynamic getWorld_dyn();

		static ::com::haxepunk::World setWorld( ::com::haxepunk::World value);
		static Dynamic setWorld_dyn();

		static Void swapWorld( );
		static Dynamic swapWorld_dyn();

		static Void resize( int width,int height);
		static Dynamic resize_dyn();

		static Void clear( Dynamic array);
		static Dynamic clear_dyn();

		static Void setCamera( hx::Null< Float >  x,hx::Null< Float >  y);
		static Dynamic setCamera_dyn();

		static Void resetCamera( );
		static Dynamic resetCamera_dyn();

		static Float volume; /* REM */ 
		static Float getVolume( );
		static Dynamic getVolume_dyn();

		static Float setVolume( Float value);
		static Dynamic setVolume_dyn();

		static Float pan; /* REM */ 
		static Float getPan( );
		static Dynamic getPan_dyn();

		static Float setPan( Float value);
		static Dynamic setPan_dyn();

		static Dynamic choose( Dynamic objs);
		static Dynamic choose_dyn();

		static int sign( Float value);
		static Dynamic sign_dyn();

		static Float approach( Float value,Float target,Float amount);
		static Dynamic approach_dyn();

		static Float lerp( Float a,Float b,hx::Null< Float >  t);
		static Dynamic lerp_dyn();

		static int colorLerp( int fromColor,int toColor,hx::Null< Float >  t);
		static Dynamic colorLerp_dyn();

		static Void stepTowards( Dynamic object,Float x,Float y,hx::Null< Float >  distance);
		static Dynamic stepTowards_dyn();

		static Void anchorTo( Dynamic object,Dynamic anchor,hx::Null< Float >  distance);
		static Dynamic anchorTo_dyn();

		static Float angle( Float x1,Float y1,Float x2,Float y2);
		static Dynamic angle_dyn();

		static Void angleXY( Dynamic object,Float angle,hx::Null< Float >  length,hx::Null< Float >  x,hx::Null< Float >  y);
		static Dynamic angleXY_dyn();

		static Void rotateAround( Dynamic object,Dynamic anchor,hx::Null< Float >  angle,hx::Null< bool >  relative);
		static Dynamic rotateAround_dyn();

		static Float round( Float num,int precision);
		static Dynamic round_dyn();

		static Float distance( Float x1,Float y1,hx::Null< Float >  x2,hx::Null< Float >  y2);
		static Dynamic distance_dyn();

		static Float distanceSquared( Float x1,Float y1,hx::Null< Float >  x2,hx::Null< Float >  y2);
		static Dynamic distanceSquared_dyn();

		static Float distanceRects( Float x1,Float y1,Float w1,Float h1,Float x2,Float y2,Float w2,Float h2);
		static Dynamic distanceRects_dyn();

		static Float distanceRectPoint( Float px,Float py,Float rx,Float ry,Float rw,Float rh);
		static Dynamic distanceRectPoint_dyn();

		static Float clamp( Float value,Float min,Float max);
		static Dynamic clamp_dyn();

		static Void clampInRect( Dynamic object,Float x,Float y,Float width,Float height,hx::Null< Float >  padding);
		static Dynamic clampInRect_dyn();

		static Float scale( Float value,Float min,Float max,Float min2,Float max2);
		static Dynamic scale_dyn();

		static Float scaleClamp( Float value,Float min,Float max,Float min2,Float max2);
		static Dynamic scaleClamp_dyn();

		static int randomSeed; /* REM */ 
		static int setRandomSeed( int value);
		static Dynamic setRandomSeed_dyn();

		static Void randomizeSeed( );
		static Dynamic randomizeSeed_dyn();

		static Float random; /* REM */ 
		static Float getRandom( );
		static Dynamic getRandom_dyn();

		static int rand( int amount);
		static Dynamic rand_dyn();

		static int indexOf( Dynamic a,Dynamic v);
		static Dynamic indexOf_dyn();

		static Dynamic next( Dynamic current,Dynamic options,hx::Null< bool >  loop);
		static Dynamic next_dyn();

		static Dynamic prev( Dynamic current,Dynamic options,hx::Null< bool >  loop);
		static Dynamic prev_dyn();

		static Dynamic swap( Dynamic current,Dynamic a,Dynamic b);
		static Dynamic swap_dyn();

		static int getColorRGB( hx::Null< int >  R,hx::Null< int >  G,hx::Null< int >  B);
		static Dynamic getColorRGB_dyn();

		static int getColorHSV( Float h,Float s,Float v);
		static Dynamic getColorHSV_dyn();

		static int getRed( int color);
		static Dynamic getRed_dyn();

		static int getGreen( int color);
		static Dynamic getGreen_dyn();

		static int getBlue( int color);
		static Dynamic getBlue_dyn();

		static ::neash::display::BitmapData getBitmap( Dynamic source);
		static Dynamic getBitmap_dyn();

		static ::neash::display::BitmapData createBitmap( int width,int height,Dynamic transparent,Dynamic color);
		static Dynamic createBitmap_dyn();

		static Dynamic convertColor( int color);
		static Dynamic convertColor_dyn();

		static Float timeFlag( );
		static Dynamic timeFlag_dyn();

		static ::com::haxepunk::debug::Console console; /* REM */ 
		static ::com::haxepunk::debug::Console getConsole( );
		static Dynamic getConsole_dyn();

		static Dynamic log; /* REM */ 
		static Dynamic watch; /* REM */ 
		static ::com::haxepunk::tweens::misc::MultiVarTween tween( Dynamic object,Dynamic values,Float duration,Dynamic options);
		static Dynamic tween_dyn();

		static Array< int > frames( int from,int to,hx::Null< int >  skip);
		static Dynamic frames_dyn();

		static Void shuffle( Dynamic a);
		static Dynamic shuffle_dyn();

		static Float time; /* REM */ 
		static Float setTime( Float value);
		static Dynamic setTime_dyn();

		static bool gotoIsNull( );
		static Dynamic gotoIsNull_dyn();

		static ::com::haxepunk::World _world; /* REM */ 
		static ::com::haxepunk::World _goto; /* REM */ 
		static ::com::haxepunk::debug::Console _console; /* REM */ 
		static Float _time; /* REM */ 
		static Float _updateTime; /* REM */ 
		static Float _renderTime; /* REM */ 
		static Float _gameTime; /* REM */ 
		static Float _flashTime; /* REM */ 
		static ::Hash _bitmap; /* REM */ 
		static int _seed; /* REM */ 
		static Float _volume; /* REM */ 
		static Float _pan; /* REM */ 
		static ::neash::media::SoundTransform _soundTransform; /* REM */ 
		static Float DEG; /* REM */ 
		static Float RAD; /* REM */ 
		static ::neash::display::Stage stage; /* REM */ 
		static ::com::haxepunk::Engine engine; /* REM */ 
		static ::neash::geom::Point point; /* REM */ 
		static ::neash::geom::Point point2; /* REM */ 
		static ::neash::geom::Point zero; /* REM */ 
		static ::neash::geom::Rectangle rect; /* REM */ 
		static ::neash::geom::Matrix matrix; /* REM */ 
		static ::neash::display::Sprite sprite; /* REM */ 
		static ::com::haxepunk::Entity entity; /* REM */ 
};

} // end namespace com
} // end namespace haxepunk

#endif /* INCLUDED_com_haxepunk_HXP */ 
