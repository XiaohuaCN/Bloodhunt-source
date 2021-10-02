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
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.SetTitleText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       TitleText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ConfirmMenu_C::SetTitleText(const struct FText& TitleText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.SetTitleText");

	UTBP_UI_ConfirmMenu_C_SetTitleText_Params params;
	params.TitleText = TitleText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               TryFadeOut                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ConfirmMenu_C::Hide(bool TryFadeOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Hide");

	UTBP_UI_ConfirmMenu_C_Hide_Params params;
	params.TryFadeOut = TryFadeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ConfirmMenu_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Show");

	UTBP_UI_ConfirmMenu_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ConfirmMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.PreConstruct");

	UTBP_UI_ConfirmMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Yes
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ConfirmMenu_C::Yes()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Yes");

	UTBP_UI_ConfirmMenu_C_Yes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.No
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ConfirmMenu_C::No()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.No");

	UTBP_UI_ConfirmMenu_C_No_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.BndEvt__ConfirmWidget_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ConfirmMenu_C::BndEvt__ConfirmWidget_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.BndEvt__ConfirmWidget_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature");

	UTBP_UI_ConfirmMenu_C_BndEvt__ConfirmWidget_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.BndEvt__DeclineWidget_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ConfirmMenu_C::BndEvt__DeclineWidget_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.BndEvt__DeclineWidget_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature");

	UTBP_UI_ConfirmMenu_C_BndEvt__DeclineWidget_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ConfirmMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Construct");

	UTBP_UI_ConfirmMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ConfirmMenu_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.OnInitialized");

	UTBP_UI_ConfirmMenu_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.OnFadeOutFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ConfirmMenu_C::OnFadeOutFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.OnFadeOutFinished");

	UTBP_UI_ConfirmMenu_C_OnFadeOutFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.InitCountdown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InSeconds                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ConfirmMenu_C::InitCountdown(int InSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.InitCountdown");

	UTBP_UI_ConfirmMenu_C_InitCountdown_Params params;
	params.InSeconds = InSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.StopCountdown
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ConfirmMenu_C::StopCountdown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.StopCountdown");

	UTBP_UI_ConfirmMenu_C_StopCountdown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.ExecuteUbergraph_TBP_UI_ConfirmMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ConfirmMenu_C::ExecuteUbergraph_TBP_UI_ConfirmMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.ExecuteUbergraph_TBP_UI_ConfirmMenu");

	UTBP_UI_ConfirmMenu_C_ExecuteUbergraph_TBP_UI_ConfirmMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.CountdownFinished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ConfirmMenu_C::CountdownFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.CountdownFinished__DelegateSignature");

	UTBP_UI_ConfirmMenu_C_CountdownFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Decline__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ConfirmMenu_C::Decline__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Decline__DelegateSignature");

	UTBP_UI_ConfirmMenu_C_Decline__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Confirm__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ConfirmMenu_C::Confirm__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmMenu.TBP_UI_ConfirmMenu_C.Confirm__DelegateSignature");

	UTBP_UI_ConfirmMenu_C_Confirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
