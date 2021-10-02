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
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Set Is Clickable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsClickable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_MenuButton_C::Set_Is_Clickable(bool bIsClickable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Set Is Clickable");

	UTBP_UI_MenuButton_C_Set_Is_Clickable_Params params;
	params.bIsClickable = bIsClickable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.SetButtonStyleTexture
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MenuButton_C::SetButtonStyleTexture(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.SetButtonStyleTexture");

	UTBP_UI_MenuButton_C_SetButtonStyleTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.UpdateBackgroundStyle
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_MenuButton_C::UpdateBackgroundStyle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.UpdateBackgroundStyle");

	UTBP_UI_MenuButton_C_UpdateBackgroundStyle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.UpdateBorderOpacity
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MenuButton_C::UpdateBorderOpacity(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.UpdateBorderOpacity");

	UTBP_UI_MenuButton_C_UpdateBorderOpacity_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.SetButtonText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_MenuButton_C::SetButtonText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.SetButtonText");

	UTBP_UI_MenuButton_C_SetButtonText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MenuButton_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Tick");

	UTBP_UI_MenuButton_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnRemovedFromFocusPath
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FFocusEvent                                 InFocusEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UTBP_UI_MenuButton_C::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnRemovedFromFocusPath");

	UTBP_UI_MenuButton_C_OnRemovedFromFocusPath_Params params;
	params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_MenuButton_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.PreConstruct");

	UTBP_UI_MenuButton_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_MenuButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Construct");

	UTBP_UI_MenuButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_300_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_300_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_300_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_MenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_300_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_MenuButton_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnInitialized");

	UTBP_UI_MenuButton_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UTBP_UI_MenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature");

	UTBP_UI_MenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_334_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_334_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_334_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_MenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_334_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_323_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MenuButton_C::BndEvt__Button_K2Node_ComponentBoundEvent_323_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_323_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_MenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_323_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.ExecuteUbergraph_TBP_UI_MenuButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MenuButton_C::ExecuteUbergraph_TBP_UI_MenuButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.ExecuteUbergraph_TBP_UI_MenuButton");

	UTBP_UI_MenuButton_C_ExecuteUbergraph_TBP_UI_MenuButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_MenuButton_C::OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnUnhovered__DelegateSignature");

	UTBP_UI_MenuButton_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_MenuButton_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnHovered__DelegateSignature");

	UTBP_UI_MenuButton_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_MenuButton_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnClicked__DelegateSignature");

	UTBP_UI_MenuButton_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
