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
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetBackgroundColor
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                InBackgroundColor                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionMenuButton_C::SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetBackgroundColor");

	UTBP_UI_TransitionMenuButton_C_SetBackgroundColor_Params params;
	params.InBackgroundColor = InBackgroundColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.IsSelected
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               IsSelected                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_TransitionMenuButton_C::IsSelected(bool* IsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.IsSelected");

	UTBP_UI_TransitionMenuButton_C_IsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSelected != nullptr)
		*IsSelected = params.IsSelected;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetIsDeselected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_TransitionMenuButton_C::SetIsDeselected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetIsDeselected");

	UTBP_UI_TransitionMenuButton_C_SetIsDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetIsSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_TransitionMenuButton_C::SetIsSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.SetIsSelected");

	UTBP_UI_TransitionMenuButton_C_SetIsSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.CreateCloudBackground
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_TransitionMenuButton_C::CreateCloudBackground()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.CreateCloudBackground");

	UTBP_UI_TransitionMenuButton_C_CreateCloudBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PlayPressedOverlayAnimation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<UMG_EUMGSequencePlayMode>              PlayMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionMenuButton_C::PlayPressedOverlayAnimation(TEnumAsByte<UMG_EUMGSequencePlayMode> PlayMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PlayPressedOverlayAnimation");

	UTBP_UI_TransitionMenuButton_C_PlayPressedOverlayAnimation_Params params;
	params.PlayMode = PlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PlayAnimationFromCurrentPosition
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            InAnimation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<UMG_EUMGSequencePlayMode>              InPlayMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionMenuButton_C::PlayAnimationFromCurrentPosition(class UWidgetAnimation* InAnimation, TEnumAsByte<UMG_EUMGSequencePlayMode> InPlayMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PlayAnimationFromCurrentPosition");

	UTBP_UI_TransitionMenuButton_C_PlayAnimationFromCurrentPosition_Params params;
	params.InAnimation = InAnimation;
	params.InPlayMode = InPlayMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.CreateBorderMaterial
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_TransitionMenuButton_C::CreateBorderMaterial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.CreateBorderMaterial");

	UTBP_UI_TransitionMenuButton_C_CreateBorderMaterial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.UpdateBorderOpacity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionMenuButton_C::UpdateBorderOpacity(float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.UpdateBorderOpacity");

	UTBP_UI_TransitionMenuButton_C_UpdateBorderOpacity_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionMenuButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.Tick");

	UTBP_UI_TransitionMenuButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnRemovedFromFocusPath
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UTBP_UI_TransitionMenuButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnRemovedFromFocusPath");

	UTBP_UI_TransitionMenuButton_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_TransitionMenuButton_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnInitialized");

	UTBP_UI_TransitionMenuButton_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_TransitionMenuButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.Construct");

	UTBP_UI_TransitionMenuButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_TransitionMenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_TransitionMenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_TransitionMenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_TransitionMenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_TransitionMenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_TransitionMenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_TransitionMenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature");

	UTBP_UI_TransitionMenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_TransitionMenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature");

	UTBP_UI_TransitionMenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_6_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_TransitionMenuButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.PreConstruct");

	UTBP_UI_TransitionMenuButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnTransitionStarted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_TransitionMenuButton_C::OnTransitionStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnTransitionStarted");

	UTBP_UI_TransitionMenuButton_C_OnTransitionStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.RestartAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_TransitionMenuButton_C::RestartAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.RestartAnimation");

	UTBP_UI_TransitionMenuButton_C_RestartAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.WidgetAnimationEvt_Pressed_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UTBP_UI_TransitionMenuButton_C::WidgetAnimationEvt_Pressed_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.WidgetAnimationEvt_Pressed_K2Node_WidgetAnimationEvent_1");

	UTBP_UI_TransitionMenuButton_C_WidgetAnimationEvt_Pressed_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.DisableInput
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_TransitionMenuButton_C::DisableInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.DisableInput");

	UTBP_UI_TransitionMenuButton_C_DisableInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.ExecuteUbergraph_TBP_UI_TransitionMenuButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionMenuButton_C::ExecuteUbergraph_TBP_UI_TransitionMenuButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.ExecuteUbergraph_TBP_UI_TransitionMenuButton");

	UTBP_UI_TransitionMenuButton_C_ExecuteUbergraph_TBP_UI_TransitionMenuButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_TransitionMenuButton_C::OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnUnhovered__DelegateSignature");

	UTBP_UI_TransitionMenuButton_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_TransitionMenuButton_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnHovered__DelegateSignature");

	UTBP_UI_TransitionMenuButton_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_TransitionMenuButton_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionMenuButton.TBP_UI_TransitionMenuButton_C.OnClicked__DelegateSignature");

	UTBP_UI_TransitionMenuButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
