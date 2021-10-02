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
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.SetupVeins
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_TitleScreen_C::SetupVeins()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.SetupVeins");

	UTBP_UI_TitleScreen_C_SetupVeins_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.CloseErrorSubscreen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_TitleScreen_C::CloseErrorSubscreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.CloseErrorSubscreen");

	UTBP_UI_TitleScreen_C_CloseErrorSubscreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OpenErrorSubscreen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_TitleScreen_C::OpenErrorSubscreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OpenErrorSubscreen");

	UTBP_UI_TitleScreen_C_OpenErrorSubscreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.HandleInputReaction
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_TitleScreen_C::HandleInputReaction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.HandleInputReaction");

	UTBP_UI_TitleScreen_C_HandleInputReaction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTBP_UI_TitleScreen_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnMouseButtonDown");

	UTBP_UI_TitleScreen_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnKeyDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTBP_UI_TitleScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnKeyDown");

	UTBP_UI_TitleScreen_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_TitleScreen_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.PreConstruct");

	UTBP_UI_TitleScreen_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnVideoOpened
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_TitleScreen_C::OnVideoOpened(const struct FString& OpenedUrl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnVideoOpened");

	UTBP_UI_TitleScreen_C_OnVideoOpened_Params params;
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TitleScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Tick");

	UTBP_UI_TitleScreen_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UTBP_UI_TitleScreen_C::WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1");

	UTBP_UI_TitleScreen_C_WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_TitleScreen_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Destruct");

	UTBP_UI_TitleScreen_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Open
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_TitleScreen_C::Open()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Open");

	UTBP_UI_TitleScreen_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.BndEvt__ErrorSubscreen_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_TitleScreen_C::BndEvt__ErrorSubscreen_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.BndEvt__ErrorSubscreen_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature");

	UTBP_UI_TitleScreen_C_BndEvt__ErrorSubscreen_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageClosed_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_TitleScreen_C::OnLandingPageClosed_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageClosed_Event");

	UTBP_UI_TitleScreen_C_OnLandingPageClosed_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_3
//		Flags  -> (BlueprintEvent)
void UTBP_UI_TitleScreen_C::WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_3()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_3");

	UTBP_UI_TitleScreen_C_WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_3_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_4
//		Flags  -> (BlueprintEvent)
void UTBP_UI_TitleScreen_C::WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_4()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_4");

	UTBP_UI_TitleScreen_C_WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.ExecuteUbergraph_TBP_UI_TitleScreen
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TitleScreen_C::ExecuteUbergraph_TBP_UI_TitleScreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.ExecuteUbergraph_TBP_UI_TitleScreen");

	UTBP_UI_TitleScreen_C_ExecuteUbergraph_TBP_UI_TitleScreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageFadeOutStarted__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_TitleScreen_C::OnLandingPageFadeOutStarted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageFadeOutStarted__DelegateSignature");

	UTBP_UI_TitleScreen_C_OnLandingPageFadeOutStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageClosed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_TitleScreen_C::OnLandingPageClosed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageClosed__DelegateSignature");

	UTBP_UI_TitleScreen_C_OnLandingPageClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
