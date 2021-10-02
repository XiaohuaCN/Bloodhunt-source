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
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateFeedingPromtWithBloodPotency
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Crosshair_C::UpdateFeedingPromtWithBloodPotency()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateFeedingPromtWithBloodPotency");

	UTBP_UI_Crosshair_C_UpdateFeedingPromtWithBloodPotency_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ShowAmmoStateWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Crosshair_C::ShowAmmoStateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ShowAmmoStateWidget");

	UTBP_UI_Crosshair_C_ShowAmmoStateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.GetInteractionText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UTBP_UI_Crosshair_C::GetInteractionText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.GetInteractionText");

	UTBP_UI_Crosshair_C_GetInteractionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInputPrompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETargetInteraction                           InInteraction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsActionEnabled                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bHasKeyPrompt                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Crosshair_C::UpdateInputPrompt(Tiger_ETargetInteraction InInteraction, bool bIsActionEnabled, bool bHasKeyPrompt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInputPrompt");

	UTBP_UI_Crosshair_C_UpdateInputPrompt_Params params;
	params.InInteraction = InInteraction;
	params.bIsActionEnabled = bIsActionEnabled;
	params.bHasKeyPrompt = bHasKeyPrompt;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.GetActionFromItemAsset
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTigerItemAsset*                             InItemAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Item_Count                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ActionText                                                 (Parm, OutParm)
//		struct FLinearColor                                TextColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bCanPickUp                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bIsSwap                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Crosshair_C::GetActionFromItemAsset(class UTigerItemAsset* InItemAsset, int Item_Count, struct FText* ActionText, struct FLinearColor* TextColor, bool* bCanPickUp, bool* bIsSwap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.GetActionFromItemAsset");

	UTBP_UI_Crosshair_C_GetActionFromItemAsset_Params params;
	params.InItemAsset = InItemAsset;
	params.Item_Count = Item_Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ActionText != nullptr)
		*ActionText = params.ActionText;
	if (TextColor != nullptr)
		*TextColor = params.TextColor;
	if (bCanPickUp != nullptr)
		*bCanPickUp = params.bCanPickUp;
	if (bIsSwap != nullptr)
		*bIsSwap = params.bIsSwap;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnChangeInteraction
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Crosshair_C::OnChangeInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnChangeInteraction");

	UTBP_UI_Crosshair_C_OnChangeInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInteractionPrompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETargetInteraction                           InInteraction                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     InInteractionObject                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Crosshair_C::UpdateInteractionPrompt(Tiger_ETargetInteraction InInteraction, class UObject* InInteractionObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInteractionPrompt");

	UTBP_UI_Crosshair_C_UpdateInteractionPrompt_Params params;
	params.InInteraction = InInteraction;
	params.InInteractionObject = InInteractionObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInteraction
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Tiger_ETargetInteraction                           Interaction                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     InteractionObject                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Crosshair_C::UpdateInteraction(Tiger_ETargetInteraction Interaction, class UObject* InteractionObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInteraction");

	UTBP_UI_Crosshair_C_UpdateInteraction_Params params;
	params.Interaction = Interaction;
	params.InteractionObject = InteractionObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnShowHitMarker
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                HitmarkerColor                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bWasDownedOrKilled                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Crosshair_C::OnShowHitMarker(const struct FLinearColor& HitmarkerColor, bool bWasDownedOrKilled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnShowHitMarker");

	UTBP_UI_Crosshair_C_OnShowHitMarker_Params params;
	params.HitmarkerColor = HitmarkerColor;
	params.bWasDownedOrKilled = bWasDownedOrKilled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ChangeInteraction
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Crosshair_C::ChangeInteraction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ChangeInteraction");

	UTBP_UI_Crosshair_C_ChangeInteraction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnSwitchInteractionFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Crosshair_C::OnSwitchInteractionFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnSwitchInteractionFinished");

	UTBP_UI_Crosshair_C_OnSwitchInteractionFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Crosshair_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.Construct");

	UTBP_UI_Crosshair_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.SetProgressBarColor
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		Tiger_ETigerUIColor                                UIColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Crosshair_C::SetProgressBarColor(Tiger_ETigerUIColor UIColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.SetProgressBarColor");

	UTBP_UI_Crosshair_C_SetProgressBarColor_Params params;
	params.UIColor = UIColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnShowCrosshairAmmoState_Event_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Crosshair_C::OnShowCrosshairAmmoState_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnShowCrosshairAmmoState_Event_1");

	UTBP_UI_Crosshair_C_OnShowCrosshairAmmoState_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnInventoryUpdated
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_Crosshair_C::OnInventoryUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnInventoryUpdated");

	UTBP_UI_Crosshair_C_OnInventoryUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Crosshair_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.Tick");

	UTBP_UI_Crosshair_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ExecuteUbergraph_TBP_UI_Crosshair
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Crosshair_C::ExecuteUbergraph_TBP_UI_Crosshair(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ExecuteUbergraph_TBP_UI_Crosshair");

	UTBP_UI_Crosshair_C_ExecuteUbergraph_TBP_UI_Crosshair_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
