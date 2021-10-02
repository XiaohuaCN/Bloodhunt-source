// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_AnimatedCompletionIcon.TBP_UI_AnimatedCompletionIcon_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_AnimatedCompletionIcon_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_AnimatedCompletionIcon.TBP_UI_AnimatedCompletionIcon_C.Show");

	UTBP_UI_AnimatedCompletionIcon_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_AnimatedCompletionIcon.TBP_UI_AnimatedCompletionIcon_C.Animate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_AnimatedCompletionIcon_C::Animate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_AnimatedCompletionIcon.TBP_UI_AnimatedCompletionIcon_C.Animate");

	UTBP_UI_AnimatedCompletionIcon_C_Animate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
