#include "TMainForm.h"
/*
void __cdecl TMainForm_M_TitleSelectClick_OpenSSG(TSSGCtrl &ssgCtrl, TSSGScriptStruct &selectScript, int &nowSelectSubjectIndex)
{
	ChangeSubjectPanel(ssgCtrl::atDIR);
	nowSelectSubjectIndex = -2;
	ssgCtrl.OpenSSG(&selectScript);
}
*/
__declspec(naked) void __cdecl TMainForm_M_TitleSelectClick_OpenSSG()
{
	__asm
	{
		push    8
		push    ebx
		call    TMainForm_ChangeSubjectPanel
		add     esp, 8
		mov     ecx, 004FCE80H
		mov     dword ptr [ebx + 554H], -2
		jmp     ecx
	}
}
