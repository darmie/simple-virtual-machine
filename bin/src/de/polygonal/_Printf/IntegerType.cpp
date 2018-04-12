// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_de_polygonal__Printf_IntegerType
#include <de/polygonal/_Printf/IntegerType.h>
#endif
namespace de{
namespace polygonal{
namespace _Printf{

::de::polygonal::_Printf::IntegerType IntegerType_obj::IBin;

::de::polygonal::_Printf::IntegerType IntegerType_obj::ICharacter;

::de::polygonal::_Printf::IntegerType IntegerType_obj::IHex;

::de::polygonal::_Printf::IntegerType IntegerType_obj::IOctal;

::de::polygonal::_Printf::IntegerType IntegerType_obj::ISignedDecimal;

::de::polygonal::_Printf::IntegerType IntegerType_obj::IUnsignedDecimal;

bool IntegerType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("IBin",fe,03,73,30)) { outValue = IntegerType_obj::IBin; return true; }
	if (inName==HX_("ICharacter",20,ea,e0,b8)) { outValue = IntegerType_obj::ICharacter; return true; }
	if (inName==HX_("IHex",12,8e,77,30)) { outValue = IntegerType_obj::IHex; return true; }
	if (inName==HX_("IOctal",c2,a4,7d,ee)) { outValue = IntegerType_obj::IOctal; return true; }
	if (inName==HX_("ISignedDecimal",0c,f4,ed,d6)) { outValue = IntegerType_obj::ISignedDecimal; return true; }
	if (inName==HX_("IUnsignedDecimal",d3,75,52,f6)) { outValue = IntegerType_obj::IUnsignedDecimal; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(IntegerType_obj)

int IntegerType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("IBin",fe,03,73,30)) return 5;
	if (inName==HX_("ICharacter",20,ea,e0,b8)) return 0;
	if (inName==HX_("IHex",12,8e,77,30)) return 4;
	if (inName==HX_("IOctal",c2,a4,7d,ee)) return 3;
	if (inName==HX_("ISignedDecimal",0c,f4,ed,d6)) return 1;
	if (inName==HX_("IUnsignedDecimal",d3,75,52,f6)) return 2;
	return super::__FindIndex(inName);
}

int IntegerType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("IBin",fe,03,73,30)) return 0;
	if (inName==HX_("ICharacter",20,ea,e0,b8)) return 0;
	if (inName==HX_("IHex",12,8e,77,30)) return 0;
	if (inName==HX_("IOctal",c2,a4,7d,ee)) return 0;
	if (inName==HX_("ISignedDecimal",0c,f4,ed,d6)) return 0;
	if (inName==HX_("IUnsignedDecimal",d3,75,52,f6)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val IntegerType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("IBin",fe,03,73,30)) return IBin;
	if (inName==HX_("ICharacter",20,ea,e0,b8)) return ICharacter;
	if (inName==HX_("IHex",12,8e,77,30)) return IHex;
	if (inName==HX_("IOctal",c2,a4,7d,ee)) return IOctal;
	if (inName==HX_("ISignedDecimal",0c,f4,ed,d6)) return ISignedDecimal;
	if (inName==HX_("IUnsignedDecimal",d3,75,52,f6)) return IUnsignedDecimal;
	return super::__Field(inName,inCallProp);
}

static ::String IntegerType_obj_sStaticFields[] = {
	HX_("ICharacter",20,ea,e0,b8),
	HX_("ISignedDecimal",0c,f4,ed,d6),
	HX_("IUnsignedDecimal",d3,75,52,f6),
	HX_("IOctal",c2,a4,7d,ee),
	HX_("IHex",12,8e,77,30),
	HX_("IBin",fe,03,73,30),
	::String(null())
};

static void IntegerType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IntegerType_obj::IBin,"IBin");
	HX_MARK_MEMBER_NAME(IntegerType_obj::ICharacter,"ICharacter");
	HX_MARK_MEMBER_NAME(IntegerType_obj::IHex,"IHex");
	HX_MARK_MEMBER_NAME(IntegerType_obj::IOctal,"IOctal");
	HX_MARK_MEMBER_NAME(IntegerType_obj::ISignedDecimal,"ISignedDecimal");
	HX_MARK_MEMBER_NAME(IntegerType_obj::IUnsignedDecimal,"IUnsignedDecimal");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IntegerType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IntegerType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(IntegerType_obj::IBin,"IBin");
	HX_VISIT_MEMBER_NAME(IntegerType_obj::ICharacter,"ICharacter");
	HX_VISIT_MEMBER_NAME(IntegerType_obj::IHex,"IHex");
	HX_VISIT_MEMBER_NAME(IntegerType_obj::IOctal,"IOctal");
	HX_VISIT_MEMBER_NAME(IntegerType_obj::ISignedDecimal,"ISignedDecimal");
	HX_VISIT_MEMBER_NAME(IntegerType_obj::IUnsignedDecimal,"IUnsignedDecimal");
};
#endif

hx::Class IntegerType_obj::__mClass;

Dynamic __Create_IntegerType_obj() { return new IntegerType_obj; }

void IntegerType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("de.polygonal._Printf.IntegerType","\xac","\x2e","\xd0","\x88"), hx::TCanCast< IntegerType_obj >,IntegerType_obj_sStaticFields,0,
	&__Create_IntegerType_obj, &__Create,
	&super::__SGetClass(), &CreateIntegerType_obj, IntegerType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , IntegerType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &IntegerType_obj::__GetStatic;
}

void IntegerType_obj::__boot()
{
IBin = hx::CreateEnum< IntegerType_obj >(HX_HCSTRING("IBin","\xfe","\x03","\x73","\x30"),5,0);
ICharacter = hx::CreateEnum< IntegerType_obj >(HX_HCSTRING("ICharacter","\x20","\xea","\xe0","\xb8"),0,0);
IHex = hx::CreateEnum< IntegerType_obj >(HX_HCSTRING("IHex","\x12","\x8e","\x77","\x30"),4,0);
IOctal = hx::CreateEnum< IntegerType_obj >(HX_HCSTRING("IOctal","\xc2","\xa4","\x7d","\xee"),3,0);
ISignedDecimal = hx::CreateEnum< IntegerType_obj >(HX_HCSTRING("ISignedDecimal","\x0c","\xf4","\xed","\xd6"),1,0);
IUnsignedDecimal = hx::CreateEnum< IntegerType_obj >(HX_HCSTRING("IUnsignedDecimal","\xd3","\x75","\x52","\xf6"),2,0);
}


} // end namespace de
} // end namespace polygonal
} // end namespace _Printf
