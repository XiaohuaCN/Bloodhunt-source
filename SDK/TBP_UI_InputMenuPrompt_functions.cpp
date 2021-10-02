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
//		Name   -> Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.SetText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_InputMenuPrompt_C::SetText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.SetText");

	UTBP_UI_InputMenuPrompt_C_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InputMenuPrompt_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.PreConstruct");

	UTBP_UI_InputMenuPrompt_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_InputMenuPrompt_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.OnInitialized");

	UTBP_UI_InputMenuPrompt_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.Internal_OnInputPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_InputMenuPrompt_C::Internal_OnInputPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.Internal_OnInputPressed");

	UTBP_UI_InputMenuPrompt_C_Internal_OnInputPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.BndEvt__TBP_UI_TransitionMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_InputMenuPrompt_C::BndEvt__TBP_UI_TransitionMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.BndEvt__TBP_UI_TransitionMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UTBP_UI_InputMenuPrompt_C_BndEvt__TBP_UI_TransitionMenuButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.RestartAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_InputMenuPrompt_C::RestartAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.RestartAnimation");

	UTBP_UI_InputMenuPrompt_C_RestartAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.ExecuteUbergraph_TBP_UI_InputMenuPrompt
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InputMenuPrompt_C::ExecuteUbergraph_TBP_UI_InputMenuPrompt(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.ExecuteUbergraph_TBP_UI_InputMenuPrompt");

	UTBP_UI_InputMenuPrompt_C_ExecuteUbergraph_TBP_UI_InputMenuPrompt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.OnInputPressed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_InputMenuPrompt_C::OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputMenuPrompt.TBP_UI_InputMenuPrompt_C.OnInputPressed__DelegateSignature");

	UTBP_UI_InputMenuPrompt_C_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
