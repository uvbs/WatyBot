#pragma once
#include <Windows.h>

public ref class CMS
{
public:
	static DWORD ReadPointer(unsigned long ulBase, int iOffset);
	static double ReadDoublePointer(DWORD ulBase, INT iOffset);
	static bool WritePointer(unsigned long ulBase, int iOffset, int iValue);
	static HWND FindProcessWindow();
	static void SendKey(int Key);
	static void SpamKey(int Key);
	static void SendSwitch(int index);
	static void SpamSwitch(int index);

	static property bool UsingAutoSkill;
	static property int MaxHP;
	static property int MaxMP;
	static property bool UsingPots;
	static property int SAWSIL;
	static property int SLWSB;

	static property int MobCount{int get();}
	static property int ItemCount{int get();}
	static property int PeopleCount{int get();}
	static property int CharX{int get();}
	static property int CharY{int get();}
	static property int CharHP{int get();}
	static property int CharMP{int get();}
	static property double CharEXP{double get();}
	static property int MapId{int get();}
	static property int AttackCount{int get();}
	static property int Tubi{int get(); void set(int i);}
	static property int Breath{int get(); void set(int i);}
	static property int Channel{int get();}
	static property int PetFullness{int get();}
	static property bool gotMSCRC{bool get();}
	static property bool InGame{bool get();}
	static property HWND MSHWND{HWND get();}
};
