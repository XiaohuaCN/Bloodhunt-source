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
//		Name   -> Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.ShowErrorString
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     InSourceString                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_ErrorPrompt_C::ShowErrorString(const struct FString& InSourceString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.ShowErrorString");

	UTBP_UI_ErrorPrompt_C_ShowErrorString_Params params;
	params.InSourceString = InSourceString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.BndEvt__ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ErrorPrompt_C::BndEvt__ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.BndEvt__ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature");

	UTBP_UI_ErrorPrompt_C_BndEvt__ConfirmMenu_K2Node_ComponentBoundEvent_0_Confirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.ExecuteUbergraph_TBP_UI_ErrorPrompt
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ErrorPrompt_C::ExecuteUbergraph_TBP_UI_ErrorPrompt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.ExecuteUbergraph_TBP_UI_ErrorPrompt");

	UTBP_UI_ErrorPrompt_C_ExecuteUbergraph_TBP_UI_ErrorPrompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.OnClose__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ErrorPrompt_C::OnClose__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ErrorPrompt.TBP_UI_ErrorPrompt_C.OnClose__DelegateSignature");

	UTBP_UI_ErrorPrompt_C_OnClose__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
