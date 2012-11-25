#ifndef INCLUDED_neash_system_System
#define INCLUDED_neash_system_System

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(neash,system,System)
namespace neash{
namespace system{


class System_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef System_obj OBJ_;
		System_obj();
		Void __construct();

	public:
		static hx::ObjectPtr< System_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~System_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("System"); }

		static ::String deviceID; /* REM */ 
		static int totalMemory; /* REM */ 
		static Void exit( Dynamic inCode);
		static Dynamic exit_dyn();

		static Void gc( );
		static Dynamic gc_dyn();

		static ::String nmeGetDeviceID( );
		static Dynamic nmeGetDeviceID_dyn();

		static int nmeGetTotalMemory( );
		static Dynamic nmeGetTotalMemory_dyn();

		static Dynamic nme_get_unique_device_identifier; /* REM */ 
		static Dynamic &nme_get_unique_device_identifier_dyn() { return nme_get_unique_device_identifier;}
};

} // end namespace neash
} // end namespace system

#endif /* INCLUDED_neash_system_System */ 
