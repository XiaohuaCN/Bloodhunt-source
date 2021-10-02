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
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.SetFullscreenIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Expanded                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_VideoPlayer_C::SetFullscreenIcon(bool Expanded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.SetFullscreenIcon");

	UTBP_UI_VideoPlayer_C_SetFullscreenIcon_Params params;
	params.Expanded = Expanded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Hide
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_VideoPlayer_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Hide");

	UTBP_UI_VideoPlayer_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Show
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UMediaSource*                                InMediaSource                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_VideoPlayer_C::Show(class UMediaSource* InMediaSource)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Show");

	UTBP_UI_VideoPlayer_C_Show_Params params;
	params.InMediaSource = InMediaSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_VideoPlayer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Construct");

	UTBP_UI_VideoPlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMediaOpened
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_VideoPlayer_C::OnMediaOpened(const struct FString& OpenedUrl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMediaOpened");

	UTBP_UI_VideoPlayer_C_OnMediaOpened_Params params;
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.BndEvt__PauseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_VideoPlayer_C::BndEvt__PauseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.BndEvt__PauseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_VideoPlayer_C_BndEvt__PauseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_VideoPlayer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Tick");

	UTBP_UI_VideoPlayer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubMouseCaptureBegin
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_VideoPlayer_C::OnScrubMouseCaptureBegin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubMouseCaptureBegin");

	UTBP_UI_VideoPlayer_C_OnScrubMouseCaptureBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubMouseCaptureEnd
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_VideoPlayer_C::OnScrubMouseCaptureEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubMouseCaptureEnd");

	UTBP_UI_VideoPlayer_C_OnScrubMouseCaptureEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubValueChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_VideoPlayer_C::OnScrubValueChanged(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubValueChanged");

	UTBP_UI_VideoPlayer_C_OnScrubValueChanged_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMouseEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_VideoPlayer_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMouseEnter");

	UTBP_UI_VideoPlayer_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMouseLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_VideoPlayer_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMouseLeave");

	UTBP_UI_VideoPlayer_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.BndEvt__FullscreenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_VideoPlayer_C::BndEvt__FullscreenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.BndEvt__FullscreenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_VideoPlayer_C_BndEvt__FullscreenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.ExecuteUbergraph_TBP_UI_VideoPlayer
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_VideoPlayer_C::ExecuteUbergraph_TBP_UI_VideoPlayer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.ExecuteUbergraph_TBP_UI_VideoPlayer");

	UTBP_UI_VideoPlayer_C_ExecuteUbergraph_TBP_UI_VideoPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.FullscreenButtonPressed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_VideoPlayer_C::FullscreenButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.FullscreenButtonPressed__DelegateSignature");

	UTBP_UI_VideoPlayer_C_FullscreenButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
