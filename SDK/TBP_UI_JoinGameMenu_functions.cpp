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
//		Name   -> Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.OnFailed_EBC24ED74F5F36E2DCB45EB973C97E17
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_JoinGameMenu_C::OnFailed_EBC24ED74F5F36E2DCB45EB973C97E17()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.OnFailed_EBC24ED74F5F36E2DCB45EB973C97E17");

	UTBP_UI_JoinGameMenu_C_OnFailed_EBC24ED74F5F36E2DCB45EB973C97E17_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.OnSuccess_EBC24ED74F5F36E2DCB45EB973C97E17
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_JoinGameMenu_C::OnSuccess_EBC24ED74F5F36E2DCB45EB973C97E17()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.OnSuccess_EBC24ED74F5F36E2DCB45EB973C97E17");

	UTBP_UI_JoinGameMenu_C_OnSuccess_EBC24ED74F5F36E2DCB45EB973C97E17_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.HandleFailure
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_JoinGameMenu_C::HandleFailure()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.HandleFailure");

	UTBP_UI_JoinGameMenu_C_HandleFailure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.Join
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerBpFindSessionSelectedSession          FoundSession                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_JoinGameMenu_C::Join(const struct FTigerBpFindSessionSelectedSession& FoundSession)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.Join");

	UTBP_UI_JoinGameMenu_C_Join_Params params;
	params.FoundSession = FoundSession;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.OnFadeInComplete
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_JoinGameMenu_C::OnFadeInComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.OnFadeInComplete");

	UTBP_UI_JoinGameMenu_C_OnFadeInComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_JoinGameMenu_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.PreConstruct");

	UTBP_UI_JoinGameMenu_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.WidgetAnimationEvt_CountdownAnimation_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UTBP_UI_JoinGameMenu_C::WidgetAnimationEvt_CountdownAnimation_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.WidgetAnimationEvt_CountdownAnimation_K2Node_WidgetAnimationEvent_1");

	UTBP_UI_JoinGameMenu_C_WidgetAnimationEvt_CountdownAnimation_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.TriggerCountdownAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewCountDownValue                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_JoinGameMenu_C::TriggerCountdownAnimation(int NewCountDownValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.TriggerCountdownAnimation");

	UTBP_UI_JoinGameMenu_C_TriggerCountdownAnimation_Params params;
	params.NewCountDownValue = NewCountDownValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_JoinGameMenu_C::BndEvt__SearchButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.BndEvt__SearchButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_JoinGameMenu_C_BndEvt__SearchButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_JoinGameMenu_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_JoinGameMenu_C_BndEvt__BackButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.CancelJoin
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_JoinGameMenu_C::CancelJoin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.CancelJoin");

	UTBP_UI_JoinGameMenu_C_CancelJoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.JoinThroughUrl
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     InSessionURL                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_JoinGameMenu_C::JoinThroughUrl(const struct FString& InSessionURL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.JoinThroughUrl");

	UTBP_UI_JoinGameMenu_C_JoinThroughUrl_Params params;
	params.InSessionURL = InSessionURL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_JoinGameMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.Construct");

	UTBP_UI_JoinGameMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.ExecuteUbergraph_TBP_UI_JoinGameMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_JoinGameMenu_C::ExecuteUbergraph_TBP_UI_JoinGameMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_JoinGameMenu.TBP_UI_JoinGameMenu_C.ExecuteUbergraph_TBP_UI_JoinGameMenu");

	UTBP_UI_JoinGameMenu_C_ExecuteUbergraph_TBP_UI_JoinGameMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
