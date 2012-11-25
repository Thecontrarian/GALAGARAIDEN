#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_haxepunk_utils_Key
#include <com/haxepunk/utils/Key.h>
#endif
namespace com{
namespace haxepunk{
namespace utils{

Void Key_obj::__construct()
{
	return null();
}

Key_obj::~Key_obj() { }

Dynamic Key_obj::__CreateEmpty() { return  new Key_obj; }
hx::ObjectPtr< Key_obj > Key_obj::__new()
{  hx::ObjectPtr< Key_obj > result = new Key_obj();
	result->__construct();
	return result;}

Dynamic Key_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Key_obj > result = new Key_obj();
	result->__construct();
	return result;}

int Key_obj::ANY;

int Key_obj::LEFT;

int Key_obj::UP;

int Key_obj::RIGHT;

int Key_obj::DOWN;

int Key_obj::ENTER;

int Key_obj::COMMAND;

int Key_obj::CONTROL;

int Key_obj::SPACE;

int Key_obj::SHIFT;

int Key_obj::BACKSPACE;

int Key_obj::CAPS_LOCK;

int Key_obj::DELETE;

int Key_obj::END;

int Key_obj::ESCAPE;

int Key_obj::HOME;

int Key_obj::INSERT;

int Key_obj::TAB;

int Key_obj::PAGE_DOWN;

int Key_obj::PAGE_UP;

int Key_obj::LEFT_SQUARE_BRACKET;

int Key_obj::RIGHT_SQUARE_BRACKET;

int Key_obj::A;

int Key_obj::B;

int Key_obj::C;

int Key_obj::D;

int Key_obj::E;

int Key_obj::F;

int Key_obj::G;

int Key_obj::H;

int Key_obj::I;

int Key_obj::J;

int Key_obj::K;

int Key_obj::L;

int Key_obj::M;

int Key_obj::N;

int Key_obj::O;

int Key_obj::P;

int Key_obj::Q;

int Key_obj::R;

int Key_obj::S;

int Key_obj::T;

int Key_obj::U;

int Key_obj::V;

int Key_obj::W;

int Key_obj::X;

int Key_obj::Y;

int Key_obj::Z;

int Key_obj::F1;

int Key_obj::F2;

int Key_obj::F3;

int Key_obj::F4;

int Key_obj::F5;

int Key_obj::F6;

int Key_obj::F7;

int Key_obj::F8;

int Key_obj::F9;

int Key_obj::F10;

int Key_obj::F11;

int Key_obj::F12;

int Key_obj::F13;

int Key_obj::F14;

int Key_obj::F15;

int Key_obj::DIGIT_0;

int Key_obj::DIGIT_1;

int Key_obj::DIGIT_2;

int Key_obj::DIGIT_3;

int Key_obj::DIGIT_4;

int Key_obj::DIGIT_5;

int Key_obj::DIGIT_6;

int Key_obj::DIGIT_7;

int Key_obj::DIGIT_8;

int Key_obj::DIGIT_9;

int Key_obj::NUMPAD_0;

int Key_obj::NUMPAD_1;

int Key_obj::NUMPAD_2;

int Key_obj::NUMPAD_3;

int Key_obj::NUMPAD_4;

int Key_obj::NUMPAD_5;

int Key_obj::NUMPAD_6;

int Key_obj::NUMPAD_7;

int Key_obj::NUMPAD_8;

int Key_obj::NUMPAD_9;

int Key_obj::NUMPAD_ADD;

int Key_obj::NUMPAD_DECIMAL;

int Key_obj::NUMPAD_DIVIDE;

int Key_obj::NUMPAD_ENTER;

int Key_obj::NUMPAD_MULTIPLY;

int Key_obj::NUMPAD_SUBTRACT;

::String Key_obj::nameOfKey( int _char){
	HX_STACK_PUSH("Key::nameOfKey","com/haxepunk/utils/Key.hx",137);
	HX_STACK_ARG(_char,"char");
	HX_STACK_LINE(138)
	if (((bool((_char >= (int)97)) && bool((_char <= (int)122))))){
		HX_STACK_LINE(138)
		return ::String::fromCharCode(_char);
	}
	HX_STACK_LINE(139)
	if (((bool((_char >= (int)112)) && bool((_char <= (int)126))))){
		HX_STACK_LINE(139)
		return (HX_CSTRING("F") + ::Std_obj::string((_char - (int)111)));
	}
	HX_STACK_LINE(140)
	if (((bool((_char >= (int)96)) && bool((_char <= (int)105))))){
		HX_STACK_LINE(140)
		return (HX_CSTRING("NUMPAD ") + ::Std_obj::string((_char - (int)96)));
	}
	HX_STACK_LINE(141)
	switch( (int)(_char)){
		case (int)37: {
			HX_STACK_LINE(143)
			return HX_CSTRING("LEFT");
		}
		;break;
		case (int)38: {
			HX_STACK_LINE(144)
			return HX_CSTRING("UP");
		}
		;break;
		case (int)39: {
			HX_STACK_LINE(145)
			return HX_CSTRING("RIGHT");
		}
		;break;
		case (int)40: {
			HX_STACK_LINE(146)
			return HX_CSTRING("DOWN");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(148)
			return HX_CSTRING("ENTER");
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(149)
			return HX_CSTRING("CONTROL");
		}
		;break;
		case (int)32: {
			HX_STACK_LINE(150)
			return HX_CSTRING("SPACE");
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(151)
			return HX_CSTRING("SHIFT");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(152)
			return HX_CSTRING("BACKSPACE");
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(153)
			return HX_CSTRING("CAPS LOCK");
		}
		;break;
		case (int)46: {
			HX_STACK_LINE(154)
			return HX_CSTRING("DELETE");
		}
		;break;
		case (int)35: {
			HX_STACK_LINE(155)
			return HX_CSTRING("END");
		}
		;break;
		case (int)27: {
			HX_STACK_LINE(156)
			return HX_CSTRING("ESCAPE");
		}
		;break;
		case (int)36: {
			HX_STACK_LINE(157)
			return HX_CSTRING("HOME");
		}
		;break;
		case (int)45: {
			HX_STACK_LINE(158)
			return HX_CSTRING("INSERT");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(159)
			return HX_CSTRING("TAB");
		}
		;break;
		case (int)34: {
			HX_STACK_LINE(160)
			return HX_CSTRING("PAGE DOWN");
		}
		;break;
		case (int)33: {
			HX_STACK_LINE(161)
			return HX_CSTRING("PAGE UP");
		}
		;break;
		case (int)107: {
			HX_STACK_LINE(163)
			return HX_CSTRING("NUMPAD ADD");
		}
		;break;
		case (int)110: {
			HX_STACK_LINE(164)
			return HX_CSTRING("NUMPAD DECIMAL");
		}
		;break;
		case (int)111: {
			HX_STACK_LINE(165)
			return HX_CSTRING("NUMPAD DIVIDE");
		}
		;break;
		case (int)108: {
			HX_STACK_LINE(166)
			return HX_CSTRING("NUMPAD ENTER");
		}
		;break;
		case (int)106: {
			HX_STACK_LINE(167)
			return HX_CSTRING("NUMPAD MULTIPLY");
		}
		;break;
		case (int)109: {
			HX_STACK_LINE(168)
			return HX_CSTRING("NUMPAD SUBTRACT");
		}
		;break;
	}
	HX_STACK_LINE(170)
	return ::String::fromCharCode(_char);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Key_obj,nameOfKey,return )


Key_obj::Key_obj()
{
}

void Key_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Key);
	HX_MARK_END_CLASS();
}

void Key_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Key_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { return A; }
		if (HX_FIELD_EQ(inName,"B") ) { return B; }
		if (HX_FIELD_EQ(inName,"C") ) { return C; }
		if (HX_FIELD_EQ(inName,"D") ) { return D; }
		if (HX_FIELD_EQ(inName,"E") ) { return E; }
		if (HX_FIELD_EQ(inName,"F") ) { return F; }
		if (HX_FIELD_EQ(inName,"G") ) { return G; }
		if (HX_FIELD_EQ(inName,"H") ) { return H; }
		if (HX_FIELD_EQ(inName,"I") ) { return I; }
		if (HX_FIELD_EQ(inName,"J") ) { return J; }
		if (HX_FIELD_EQ(inName,"K") ) { return K; }
		if (HX_FIELD_EQ(inName,"L") ) { return L; }
		if (HX_FIELD_EQ(inName,"M") ) { return M; }
		if (HX_FIELD_EQ(inName,"N") ) { return N; }
		if (HX_FIELD_EQ(inName,"O") ) { return O; }
		if (HX_FIELD_EQ(inName,"P") ) { return P; }
		if (HX_FIELD_EQ(inName,"Q") ) { return Q; }
		if (HX_FIELD_EQ(inName,"R") ) { return R; }
		if (HX_FIELD_EQ(inName,"S") ) { return S; }
		if (HX_FIELD_EQ(inName,"T") ) { return T; }
		if (HX_FIELD_EQ(inName,"U") ) { return U; }
		if (HX_FIELD_EQ(inName,"V") ) { return V; }
		if (HX_FIELD_EQ(inName,"W") ) { return W; }
		if (HX_FIELD_EQ(inName,"X") ) { return X; }
		if (HX_FIELD_EQ(inName,"Y") ) { return Y; }
		if (HX_FIELD_EQ(inName,"Z") ) { return Z; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { return UP; }
		if (HX_FIELD_EQ(inName,"F1") ) { return F1; }
		if (HX_FIELD_EQ(inName,"F2") ) { return F2; }
		if (HX_FIELD_EQ(inName,"F3") ) { return F3; }
		if (HX_FIELD_EQ(inName,"F4") ) { return F4; }
		if (HX_FIELD_EQ(inName,"F5") ) { return F5; }
		if (HX_FIELD_EQ(inName,"F6") ) { return F6; }
		if (HX_FIELD_EQ(inName,"F7") ) { return F7; }
		if (HX_FIELD_EQ(inName,"F8") ) { return F8; }
		if (HX_FIELD_EQ(inName,"F9") ) { return F9; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { return ANY; }
		if (HX_FIELD_EQ(inName,"END") ) { return END; }
		if (HX_FIELD_EQ(inName,"TAB") ) { return TAB; }
		if (HX_FIELD_EQ(inName,"F10") ) { return F10; }
		if (HX_FIELD_EQ(inName,"F11") ) { return F11; }
		if (HX_FIELD_EQ(inName,"F12") ) { return F12; }
		if (HX_FIELD_EQ(inName,"F13") ) { return F13; }
		if (HX_FIELD_EQ(inName,"F14") ) { return F14; }
		if (HX_FIELD_EQ(inName,"F15") ) { return F15; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { return LEFT; }
		if (HX_FIELD_EQ(inName,"DOWN") ) { return DOWN; }
		if (HX_FIELD_EQ(inName,"HOME") ) { return HOME; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { return RIGHT; }
		if (HX_FIELD_EQ(inName,"ENTER") ) { return ENTER; }
		if (HX_FIELD_EQ(inName,"SPACE") ) { return SPACE; }
		if (HX_FIELD_EQ(inName,"SHIFT") ) { return SHIFT; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DELETE") ) { return DELETE; }
		if (HX_FIELD_EQ(inName,"ESCAPE") ) { return ESCAPE; }
		if (HX_FIELD_EQ(inName,"INSERT") ) { return INSERT; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"COMMAND") ) { return COMMAND; }
		if (HX_FIELD_EQ(inName,"CONTROL") ) { return CONTROL; }
		if (HX_FIELD_EQ(inName,"PAGE_UP") ) { return PAGE_UP; }
		if (HX_FIELD_EQ(inName,"DIGIT_0") ) { return DIGIT_0; }
		if (HX_FIELD_EQ(inName,"DIGIT_1") ) { return DIGIT_1; }
		if (HX_FIELD_EQ(inName,"DIGIT_2") ) { return DIGIT_2; }
		if (HX_FIELD_EQ(inName,"DIGIT_3") ) { return DIGIT_3; }
		if (HX_FIELD_EQ(inName,"DIGIT_4") ) { return DIGIT_4; }
		if (HX_FIELD_EQ(inName,"DIGIT_5") ) { return DIGIT_5; }
		if (HX_FIELD_EQ(inName,"DIGIT_6") ) { return DIGIT_6; }
		if (HX_FIELD_EQ(inName,"DIGIT_7") ) { return DIGIT_7; }
		if (HX_FIELD_EQ(inName,"DIGIT_8") ) { return DIGIT_8; }
		if (HX_FIELD_EQ(inName,"DIGIT_9") ) { return DIGIT_9; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NUMPAD_0") ) { return NUMPAD_0; }
		if (HX_FIELD_EQ(inName,"NUMPAD_1") ) { return NUMPAD_1; }
		if (HX_FIELD_EQ(inName,"NUMPAD_2") ) { return NUMPAD_2; }
		if (HX_FIELD_EQ(inName,"NUMPAD_3") ) { return NUMPAD_3; }
		if (HX_FIELD_EQ(inName,"NUMPAD_4") ) { return NUMPAD_4; }
		if (HX_FIELD_EQ(inName,"NUMPAD_5") ) { return NUMPAD_5; }
		if (HX_FIELD_EQ(inName,"NUMPAD_6") ) { return NUMPAD_6; }
		if (HX_FIELD_EQ(inName,"NUMPAD_7") ) { return NUMPAD_7; }
		if (HX_FIELD_EQ(inName,"NUMPAD_8") ) { return NUMPAD_8; }
		if (HX_FIELD_EQ(inName,"NUMPAD_9") ) { return NUMPAD_9; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"BACKSPACE") ) { return BACKSPACE; }
		if (HX_FIELD_EQ(inName,"CAPS_LOCK") ) { return CAPS_LOCK; }
		if (HX_FIELD_EQ(inName,"PAGE_DOWN") ) { return PAGE_DOWN; }
		if (HX_FIELD_EQ(inName,"nameOfKey") ) { return nameOfKey_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NUMPAD_ADD") ) { return NUMPAD_ADD; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"NUMPAD_ENTER") ) { return NUMPAD_ENTER; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"NUMPAD_DIVIDE") ) { return NUMPAD_DIVIDE; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"NUMPAD_DECIMAL") ) { return NUMPAD_DECIMAL; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NUMPAD_MULTIPLY") ) { return NUMPAD_MULTIPLY; }
		if (HX_FIELD_EQ(inName,"NUMPAD_SUBTRACT") ) { return NUMPAD_SUBTRACT; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"LEFT_SQUARE_BRACKET") ) { return LEFT_SQUARE_BRACKET; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"RIGHT_SQUARE_BRACKET") ) { return RIGHT_SQUARE_BRACKET; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Key_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"A") ) { A=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"B") ) { B=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"C") ) { C=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"D") ) { D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"E") ) { E=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F") ) { F=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"G") ) { G=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"H") ) { H=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"I") ) { I=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"J") ) { J=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"K") ) { K=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"L") ) { L=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"M") ) { M=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"N") ) { N=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"O") ) { O=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"P") ) { P=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Q") ) { Q=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"R") ) { R=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"S") ) { S=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"T") ) { T=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"U") ) { U=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"V") ) { V=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"W") ) { W=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"X") ) { X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Y") ) { Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"Z") ) { Z=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"UP") ) { UP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F1") ) { F1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F2") ) { F2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F3") ) { F3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F4") ) { F4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F5") ) { F5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F6") ) { F6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F7") ) { F7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F8") ) { F8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F9") ) { F9=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ANY") ) { ANY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"END") ) { END=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TAB") ) { TAB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F10") ) { F10=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F11") ) { F11=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F12") ) { F12=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F13") ) { F13=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F14") ) { F14=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"F15") ) { F15=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"LEFT") ) { LEFT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DOWN") ) { DOWN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HOME") ) { HOME=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"RIGHT") ) { RIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ENTER") ) { ENTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SPACE") ) { SPACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHIFT") ) { SHIFT=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"DELETE") ) { DELETE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ESCAPE") ) { ESCAPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INSERT") ) { INSERT=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"COMMAND") ) { COMMAND=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONTROL") ) { CONTROL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAGE_UP") ) { PAGE_UP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DIGIT_0") ) { DIGIT_0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DIGIT_1") ) { DIGIT_1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DIGIT_2") ) { DIGIT_2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DIGIT_3") ) { DIGIT_3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DIGIT_4") ) { DIGIT_4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DIGIT_5") ) { DIGIT_5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DIGIT_6") ) { DIGIT_6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DIGIT_7") ) { DIGIT_7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DIGIT_8") ) { DIGIT_8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DIGIT_9") ) { DIGIT_9=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"NUMPAD_0") ) { NUMPAD_0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_1") ) { NUMPAD_1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_2") ) { NUMPAD_2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_3") ) { NUMPAD_3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_4") ) { NUMPAD_4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_5") ) { NUMPAD_5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_6") ) { NUMPAD_6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_7") ) { NUMPAD_7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_8") ) { NUMPAD_8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_9") ) { NUMPAD_9=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"BACKSPACE") ) { BACKSPACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CAPS_LOCK") ) { CAPS_LOCK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PAGE_DOWN") ) { PAGE_DOWN=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"NUMPAD_ADD") ) { NUMPAD_ADD=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"NUMPAD_ENTER") ) { NUMPAD_ENTER=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"NUMPAD_DIVIDE") ) { NUMPAD_DIVIDE=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"NUMPAD_DECIMAL") ) { NUMPAD_DECIMAL=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"NUMPAD_MULTIPLY") ) { NUMPAD_MULTIPLY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NUMPAD_SUBTRACT") ) { NUMPAD_SUBTRACT=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"LEFT_SQUARE_BRACKET") ) { LEFT_SQUARE_BRACKET=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"RIGHT_SQUARE_BRACKET") ) { RIGHT_SQUARE_BRACKET=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Key_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("ANY"),
	HX_CSTRING("LEFT"),
	HX_CSTRING("UP"),
	HX_CSTRING("RIGHT"),
	HX_CSTRING("DOWN"),
	HX_CSTRING("ENTER"),
	HX_CSTRING("COMMAND"),
	HX_CSTRING("CONTROL"),
	HX_CSTRING("SPACE"),
	HX_CSTRING("SHIFT"),
	HX_CSTRING("BACKSPACE"),
	HX_CSTRING("CAPS_LOCK"),
	HX_CSTRING("DELETE"),
	HX_CSTRING("END"),
	HX_CSTRING("ESCAPE"),
	HX_CSTRING("HOME"),
	HX_CSTRING("INSERT"),
	HX_CSTRING("TAB"),
	HX_CSTRING("PAGE_DOWN"),
	HX_CSTRING("PAGE_UP"),
	HX_CSTRING("LEFT_SQUARE_BRACKET"),
	HX_CSTRING("RIGHT_SQUARE_BRACKET"),
	HX_CSTRING("A"),
	HX_CSTRING("B"),
	HX_CSTRING("C"),
	HX_CSTRING("D"),
	HX_CSTRING("E"),
	HX_CSTRING("F"),
	HX_CSTRING("G"),
	HX_CSTRING("H"),
	HX_CSTRING("I"),
	HX_CSTRING("J"),
	HX_CSTRING("K"),
	HX_CSTRING("L"),
	HX_CSTRING("M"),
	HX_CSTRING("N"),
	HX_CSTRING("O"),
	HX_CSTRING("P"),
	HX_CSTRING("Q"),
	HX_CSTRING("R"),
	HX_CSTRING("S"),
	HX_CSTRING("T"),
	HX_CSTRING("U"),
	HX_CSTRING("V"),
	HX_CSTRING("W"),
	HX_CSTRING("X"),
	HX_CSTRING("Y"),
	HX_CSTRING("Z"),
	HX_CSTRING("F1"),
	HX_CSTRING("F2"),
	HX_CSTRING("F3"),
	HX_CSTRING("F4"),
	HX_CSTRING("F5"),
	HX_CSTRING("F6"),
	HX_CSTRING("F7"),
	HX_CSTRING("F8"),
	HX_CSTRING("F9"),
	HX_CSTRING("F10"),
	HX_CSTRING("F11"),
	HX_CSTRING("F12"),
	HX_CSTRING("F13"),
	HX_CSTRING("F14"),
	HX_CSTRING("F15"),
	HX_CSTRING("DIGIT_0"),
	HX_CSTRING("DIGIT_1"),
	HX_CSTRING("DIGIT_2"),
	HX_CSTRING("DIGIT_3"),
	HX_CSTRING("DIGIT_4"),
	HX_CSTRING("DIGIT_5"),
	HX_CSTRING("DIGIT_6"),
	HX_CSTRING("DIGIT_7"),
	HX_CSTRING("DIGIT_8"),
	HX_CSTRING("DIGIT_9"),
	HX_CSTRING("NUMPAD_0"),
	HX_CSTRING("NUMPAD_1"),
	HX_CSTRING("NUMPAD_2"),
	HX_CSTRING("NUMPAD_3"),
	HX_CSTRING("NUMPAD_4"),
	HX_CSTRING("NUMPAD_5"),
	HX_CSTRING("NUMPAD_6"),
	HX_CSTRING("NUMPAD_7"),
	HX_CSTRING("NUMPAD_8"),
	HX_CSTRING("NUMPAD_9"),
	HX_CSTRING("NUMPAD_ADD"),
	HX_CSTRING("NUMPAD_DECIMAL"),
	HX_CSTRING("NUMPAD_DIVIDE"),
	HX_CSTRING("NUMPAD_ENTER"),
	HX_CSTRING("NUMPAD_MULTIPLY"),
	HX_CSTRING("NUMPAD_SUBTRACT"),
	HX_CSTRING("nameOfKey"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Key_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Key_obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(Key_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Key_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(Key_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Key_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Key_obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(Key_obj::COMMAND,"COMMAND");
	HX_MARK_MEMBER_NAME(Key_obj::CONTROL,"CONTROL");
	HX_MARK_MEMBER_NAME(Key_obj::SPACE,"SPACE");
	HX_MARK_MEMBER_NAME(Key_obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(Key_obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(Key_obj::CAPS_LOCK,"CAPS_LOCK");
	HX_MARK_MEMBER_NAME(Key_obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(Key_obj::END,"END");
	HX_MARK_MEMBER_NAME(Key_obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(Key_obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(Key_obj::INSERT,"INSERT");
	HX_MARK_MEMBER_NAME(Key_obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(Key_obj::PAGE_DOWN,"PAGE_DOWN");
	HX_MARK_MEMBER_NAME(Key_obj::PAGE_UP,"PAGE_UP");
	HX_MARK_MEMBER_NAME(Key_obj::LEFT_SQUARE_BRACKET,"LEFT_SQUARE_BRACKET");
	HX_MARK_MEMBER_NAME(Key_obj::RIGHT_SQUARE_BRACKET,"RIGHT_SQUARE_BRACKET");
	HX_MARK_MEMBER_NAME(Key_obj::A,"A");
	HX_MARK_MEMBER_NAME(Key_obj::B,"B");
	HX_MARK_MEMBER_NAME(Key_obj::C,"C");
	HX_MARK_MEMBER_NAME(Key_obj::D,"D");
	HX_MARK_MEMBER_NAME(Key_obj::E,"E");
	HX_MARK_MEMBER_NAME(Key_obj::F,"F");
	HX_MARK_MEMBER_NAME(Key_obj::G,"G");
	HX_MARK_MEMBER_NAME(Key_obj::H,"H");
	HX_MARK_MEMBER_NAME(Key_obj::I,"I");
	HX_MARK_MEMBER_NAME(Key_obj::J,"J");
	HX_MARK_MEMBER_NAME(Key_obj::K,"K");
	HX_MARK_MEMBER_NAME(Key_obj::L,"L");
	HX_MARK_MEMBER_NAME(Key_obj::M,"M");
	HX_MARK_MEMBER_NAME(Key_obj::N,"N");
	HX_MARK_MEMBER_NAME(Key_obj::O,"O");
	HX_MARK_MEMBER_NAME(Key_obj::P,"P");
	HX_MARK_MEMBER_NAME(Key_obj::Q,"Q");
	HX_MARK_MEMBER_NAME(Key_obj::R,"R");
	HX_MARK_MEMBER_NAME(Key_obj::S,"S");
	HX_MARK_MEMBER_NAME(Key_obj::T,"T");
	HX_MARK_MEMBER_NAME(Key_obj::U,"U");
	HX_MARK_MEMBER_NAME(Key_obj::V,"V");
	HX_MARK_MEMBER_NAME(Key_obj::W,"W");
	HX_MARK_MEMBER_NAME(Key_obj::X,"X");
	HX_MARK_MEMBER_NAME(Key_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(Key_obj::Z,"Z");
	HX_MARK_MEMBER_NAME(Key_obj::F1,"F1");
	HX_MARK_MEMBER_NAME(Key_obj::F2,"F2");
	HX_MARK_MEMBER_NAME(Key_obj::F3,"F3");
	HX_MARK_MEMBER_NAME(Key_obj::F4,"F4");
	HX_MARK_MEMBER_NAME(Key_obj::F5,"F5");
	HX_MARK_MEMBER_NAME(Key_obj::F6,"F6");
	HX_MARK_MEMBER_NAME(Key_obj::F7,"F7");
	HX_MARK_MEMBER_NAME(Key_obj::F8,"F8");
	HX_MARK_MEMBER_NAME(Key_obj::F9,"F9");
	HX_MARK_MEMBER_NAME(Key_obj::F10,"F10");
	HX_MARK_MEMBER_NAME(Key_obj::F11,"F11");
	HX_MARK_MEMBER_NAME(Key_obj::F12,"F12");
	HX_MARK_MEMBER_NAME(Key_obj::F13,"F13");
	HX_MARK_MEMBER_NAME(Key_obj::F14,"F14");
	HX_MARK_MEMBER_NAME(Key_obj::F15,"F15");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_0,"DIGIT_0");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_1,"DIGIT_1");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_2,"DIGIT_2");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_3,"DIGIT_3");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_4,"DIGIT_4");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_5,"DIGIT_5");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_6,"DIGIT_6");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_7,"DIGIT_7");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_8,"DIGIT_8");
	HX_MARK_MEMBER_NAME(Key_obj::DIGIT_9,"DIGIT_9");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_0,"NUMPAD_0");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_1,"NUMPAD_1");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_2,"NUMPAD_2");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_3,"NUMPAD_3");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_4,"NUMPAD_4");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_5,"NUMPAD_5");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_6,"NUMPAD_6");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_7,"NUMPAD_7");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_8,"NUMPAD_8");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_9,"NUMPAD_9");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_ADD,"NUMPAD_ADD");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_DECIMAL,"NUMPAD_DECIMAL");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_DIVIDE,"NUMPAD_DIVIDE");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_ENTER,"NUMPAD_ENTER");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_MULTIPLY,"NUMPAD_MULTIPLY");
	HX_MARK_MEMBER_NAME(Key_obj::NUMPAD_SUBTRACT,"NUMPAD_SUBTRACT");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Key_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Key_obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(Key_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Key_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(Key_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Key_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(Key_obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(Key_obj::COMMAND,"COMMAND");
	HX_VISIT_MEMBER_NAME(Key_obj::CONTROL,"CONTROL");
	HX_VISIT_MEMBER_NAME(Key_obj::SPACE,"SPACE");
	HX_VISIT_MEMBER_NAME(Key_obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(Key_obj::BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(Key_obj::CAPS_LOCK,"CAPS_LOCK");
	HX_VISIT_MEMBER_NAME(Key_obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(Key_obj::END,"END");
	HX_VISIT_MEMBER_NAME(Key_obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(Key_obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(Key_obj::INSERT,"INSERT");
	HX_VISIT_MEMBER_NAME(Key_obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(Key_obj::PAGE_DOWN,"PAGE_DOWN");
	HX_VISIT_MEMBER_NAME(Key_obj::PAGE_UP,"PAGE_UP");
	HX_VISIT_MEMBER_NAME(Key_obj::LEFT_SQUARE_BRACKET,"LEFT_SQUARE_BRACKET");
	HX_VISIT_MEMBER_NAME(Key_obj::RIGHT_SQUARE_BRACKET,"RIGHT_SQUARE_BRACKET");
	HX_VISIT_MEMBER_NAME(Key_obj::A,"A");
	HX_VISIT_MEMBER_NAME(Key_obj::B,"B");
	HX_VISIT_MEMBER_NAME(Key_obj::C,"C");
	HX_VISIT_MEMBER_NAME(Key_obj::D,"D");
	HX_VISIT_MEMBER_NAME(Key_obj::E,"E");
	HX_VISIT_MEMBER_NAME(Key_obj::F,"F");
	HX_VISIT_MEMBER_NAME(Key_obj::G,"G");
	HX_VISIT_MEMBER_NAME(Key_obj::H,"H");
	HX_VISIT_MEMBER_NAME(Key_obj::I,"I");
	HX_VISIT_MEMBER_NAME(Key_obj::J,"J");
	HX_VISIT_MEMBER_NAME(Key_obj::K,"K");
	HX_VISIT_MEMBER_NAME(Key_obj::L,"L");
	HX_VISIT_MEMBER_NAME(Key_obj::M,"M");
	HX_VISIT_MEMBER_NAME(Key_obj::N,"N");
	HX_VISIT_MEMBER_NAME(Key_obj::O,"O");
	HX_VISIT_MEMBER_NAME(Key_obj::P,"P");
	HX_VISIT_MEMBER_NAME(Key_obj::Q,"Q");
	HX_VISIT_MEMBER_NAME(Key_obj::R,"R");
	HX_VISIT_MEMBER_NAME(Key_obj::S,"S");
	HX_VISIT_MEMBER_NAME(Key_obj::T,"T");
	HX_VISIT_MEMBER_NAME(Key_obj::U,"U");
	HX_VISIT_MEMBER_NAME(Key_obj::V,"V");
	HX_VISIT_MEMBER_NAME(Key_obj::W,"W");
	HX_VISIT_MEMBER_NAME(Key_obj::X,"X");
	HX_VISIT_MEMBER_NAME(Key_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(Key_obj::Z,"Z");
	HX_VISIT_MEMBER_NAME(Key_obj::F1,"F1");
	HX_VISIT_MEMBER_NAME(Key_obj::F2,"F2");
	HX_VISIT_MEMBER_NAME(Key_obj::F3,"F3");
	HX_VISIT_MEMBER_NAME(Key_obj::F4,"F4");
	HX_VISIT_MEMBER_NAME(Key_obj::F5,"F5");
	HX_VISIT_MEMBER_NAME(Key_obj::F6,"F6");
	HX_VISIT_MEMBER_NAME(Key_obj::F7,"F7");
	HX_VISIT_MEMBER_NAME(Key_obj::F8,"F8");
	HX_VISIT_MEMBER_NAME(Key_obj::F9,"F9");
	HX_VISIT_MEMBER_NAME(Key_obj::F10,"F10");
	HX_VISIT_MEMBER_NAME(Key_obj::F11,"F11");
	HX_VISIT_MEMBER_NAME(Key_obj::F12,"F12");
	HX_VISIT_MEMBER_NAME(Key_obj::F13,"F13");
	HX_VISIT_MEMBER_NAME(Key_obj::F14,"F14");
	HX_VISIT_MEMBER_NAME(Key_obj::F15,"F15");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_0,"DIGIT_0");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_1,"DIGIT_1");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_2,"DIGIT_2");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_3,"DIGIT_3");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_4,"DIGIT_4");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_5,"DIGIT_5");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_6,"DIGIT_6");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_7,"DIGIT_7");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_8,"DIGIT_8");
	HX_VISIT_MEMBER_NAME(Key_obj::DIGIT_9,"DIGIT_9");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_0,"NUMPAD_0");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_1,"NUMPAD_1");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_2,"NUMPAD_2");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_3,"NUMPAD_3");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_4,"NUMPAD_4");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_5,"NUMPAD_5");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_6,"NUMPAD_6");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_7,"NUMPAD_7");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_8,"NUMPAD_8");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_9,"NUMPAD_9");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_ADD,"NUMPAD_ADD");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_DECIMAL,"NUMPAD_DECIMAL");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_DIVIDE,"NUMPAD_DIVIDE");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_ENTER,"NUMPAD_ENTER");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_MULTIPLY,"NUMPAD_MULTIPLY");
	HX_VISIT_MEMBER_NAME(Key_obj::NUMPAD_SUBTRACT,"NUMPAD_SUBTRACT");
};

Class Key_obj::__mClass;

void Key_obj::__register()
{
	Static(__mClass) = hx::RegisterClass(HX_CSTRING("com.haxepunk.utils.Key"), hx::TCanCast< Key_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Key_obj::__boot()
{
	ANY= (int)-1;
	LEFT= (int)37;
	UP= (int)38;
	RIGHT= (int)39;
	DOWN= (int)40;
	ENTER= (int)13;
	COMMAND= (int)15;
	CONTROL= (int)17;
	SPACE= (int)32;
	SHIFT= (int)16;
	BACKSPACE= (int)8;
	CAPS_LOCK= (int)20;
	DELETE= (int)46;
	END= (int)35;
	ESCAPE= (int)27;
	HOME= (int)36;
	INSERT= (int)45;
	TAB= (int)9;
	PAGE_DOWN= (int)34;
	PAGE_UP= (int)33;
	LEFT_SQUARE_BRACKET= (int)219;
	RIGHT_SQUARE_BRACKET= (int)221;
	A= (int)97;
	B= (int)98;
	C= (int)99;
	D= (int)100;
	E= (int)101;
	F= (int)102;
	G= (int)103;
	H= (int)104;
	I= (int)105;
	J= (int)106;
	K= (int)107;
	L= (int)108;
	M= (int)109;
	N= (int)110;
	O= (int)111;
	P= (int)112;
	Q= (int)113;
	R= (int)114;
	S= (int)115;
	T= (int)116;
	U= (int)117;
	V= (int)118;
	W= (int)119;
	X= (int)120;
	Y= (int)121;
	Z= (int)122;
	F1= (int)112;
	F2= (int)113;
	F3= (int)114;
	F4= (int)115;
	F5= (int)116;
	F6= (int)117;
	F7= (int)118;
	F8= (int)119;
	F9= (int)120;
	F10= (int)121;
	F11= (int)122;
	F12= (int)123;
	F13= (int)124;
	F14= (int)125;
	F15= (int)126;
	DIGIT_0= (int)48;
	DIGIT_1= (int)49;
	DIGIT_2= (int)50;
	DIGIT_3= (int)51;
	DIGIT_4= (int)52;
	DIGIT_5= (int)53;
	DIGIT_6= (int)54;
	DIGIT_7= (int)55;
	DIGIT_8= (int)56;
	DIGIT_9= (int)57;
	NUMPAD_0= (int)96;
	NUMPAD_1= (int)97;
	NUMPAD_2= (int)98;
	NUMPAD_3= (int)99;
	NUMPAD_4= (int)100;
	NUMPAD_5= (int)101;
	NUMPAD_6= (int)102;
	NUMPAD_7= (int)103;
	NUMPAD_8= (int)104;
	NUMPAD_9= (int)105;
	NUMPAD_ADD= (int)107;
	NUMPAD_DECIMAL= (int)110;
	NUMPAD_DIVIDE= (int)111;
	NUMPAD_ENTER= (int)108;
	NUMPAD_MULTIPLY= (int)106;
	NUMPAD_SUBTRACT= (int)109;
}

} // end namespace com
} // end namespace haxepunk
} // end namespace utils
