// Generated by Haxe 3.4.7
#ifndef INCLUDED_de_polygonal_Printf
#define INCLUDED_de_polygonal_Printf

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(de,polygonal,Printf)
HX_DECLARE_CLASS3(de,polygonal,_Printf,FormatToken)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,IntMap)

namespace de{
namespace polygonal{


class HXCPP_CLASS_ATTRIBUTES Printf_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Printf_obj OBJ_;
		Printf_obj();

	public:
		enum { _hx_ClassId = 0x64d01cd9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="de.polygonal.Printf")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"de.polygonal.Printf"); }

		hx::ObjectPtr< Printf_obj > __new() {
			hx::ObjectPtr< Printf_obj > __this = new Printf_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Printf_obj > __alloc(hx::Ctx *_hx_ctx) {
			Printf_obj *__this = (Printf_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Printf_obj), false, "de.polygonal.Printf"));
			*(void **)__this = Printf_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Printf_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Printf","\xb9","\x43","\xf6","\xe5"); }

		static void __boot();
		static  ::haxe::ds::IntMap dataTypeMap;
		static  ::haxe::ds::IntMap formatIntFuncHash;
		static  ::haxe::ds::IntMap formatFloatFuncHash;
		static  ::haxe::ds::IntMap formatStringFuncHash;
		static bool _initialized;
		static void init();
		static ::Dynamic init_dyn();

		static  ::haxe::ds::IntMap makeDataTypeMap();
		static ::Dynamic makeDataTypeMap_dyn();

		static ::String format(::String fmt,::cpp::VirtualArray args);
		static ::Dynamic format_dyn();

		static ::Array< ::Dynamic> tokenize(::String fmt);
		static ::Dynamic tokenize_dyn();

		static ::String formatBinary(int value, ::Dynamic args);
		static ::Dynamic formatBinary_dyn();

		static ::String formatOctal(int value, ::Dynamic args);
		static ::Dynamic formatOctal_dyn();

		static ::String formatHexadecimal(int value, ::Dynamic args);
		static ::Dynamic formatHexadecimal_dyn();

		static ::String formatUnsignedDecimal(int value, ::Dynamic args);
		static ::Dynamic formatUnsignedDecimal_dyn();

		static ::String formatNaturalFloat(Float value, ::Dynamic args);
		static ::Dynamic formatNaturalFloat_dyn();

		static ::String formatScientific(Float value, ::Dynamic args);
		static ::Dynamic formatScientific_dyn();

		static ::String formatSignedDecimal(int value, ::Dynamic args);
		static ::Dynamic formatSignedDecimal_dyn();

		static ::String formatString(::String x, ::Dynamic args);
		static ::Dynamic formatString_dyn();

		static ::String formatNormalFloat(Float value, ::Dynamic args);
		static ::Dynamic formatNormalFloat_dyn();

		static ::String formatCharacter(int x, ::Dynamic args);
		static ::Dynamic formatCharacter_dyn();

		static ::String padNumber(::String x,Float n,int flags,int width);
		static ::Dynamic padNumber_dyn();

		static ::String lpad(::String s,::String c,int l);
		static ::Dynamic lpad_dyn();

		static ::String rpad(::String s,::String c,int l);
		static ::Dynamic rpad_dyn();

		static ::String toHex(int x);
		static ::Dynamic toHex_dyn();

		static ::String toOct(int x);
		static ::Dynamic toOct_dyn();

		static int iabs(int x);
		static ::Dynamic iabs_dyn();

		static ::String str( ::Dynamic x);
		static ::Dynamic str_dyn();

		static int codeAt(::String x,int i);
		static ::Dynamic codeAt_dyn();

		static bool isDigit(int x);
		static ::Dynamic isDigit_dyn();

		static Float roundTo(Float x,Float y);
		static ::Dynamic roundTo_dyn();

};

} // end namespace de
} // end namespace polygonal

#endif /* INCLUDED_de_polygonal_Printf */ 
