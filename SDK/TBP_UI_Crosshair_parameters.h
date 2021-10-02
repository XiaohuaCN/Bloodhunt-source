#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateFeedingPromtWithBloodPotency
struct UTBP_UI_Crosshair_C_UpdateFeedingPromtWithBloodPotency_Params
{
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ShowAmmoStateWidget
struct UTBP_UI_Crosshair_C_ShowAmmoStateWidget_Params
{
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.GetInteractionText
struct UTBP_UI_Crosshair_C_GetInteractionText_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInputPrompt
struct UTBP_UI_Crosshair_C_UpdateInputPrompt_Params
{
	Tiger_ETargetInteraction                           InInteraction;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsActionEnabled;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bHasKeyPrompt;                                             // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.GetActionFromItemAsset
struct UTBP_UI_Crosshair_C_GetActionFromItemAsset_Params
{
	class UTigerItemAsset*                             InItemAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Item_Count;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ActionText;                                                // 0x0010(0x0018)  (Parm, OutParm)
	struct FLinearColor                                TextColor;                                                 // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCanPickUp;                                                // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsSwap;                                                   // 0x0039(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnChangeInteraction
struct UTBP_UI_Crosshair_C_OnChangeInteraction_Params
{
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInteractionPrompt
struct UTBP_UI_Crosshair_C_UpdateInteractionPrompt_Params
{
	Tiger_ETargetInteraction                           InInteraction;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     InInteractionObject;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.UpdateInteraction
struct UTBP_UI_Crosshair_C_UpdateInteraction_Params
{
	Tiger_ETargetInteraction                           Interaction;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     InteractionObject;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnShowHitMarker
struct UTBP_UI_Crosshair_C_OnShowHitMarker_Params
{
	struct FLinearColor                                HitmarkerColor;                                            // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bWasDownedOrKilled;                                        // 0x0010(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ChangeInteraction
struct UTBP_UI_Crosshair_C_ChangeInteraction_Params
{
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnSwitchInteractionFinished
struct UTBP_UI_Crosshair_C_OnSwitchInteractionFinished_Params
{
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.Construct
struct UTBP_UI_Crosshair_C_Construct_Params
{
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.SetProgressBarColor
struct UTBP_UI_Crosshair_C_SetProgressBarColor_Params
{
	Tiger_ETigerUIColor                                UIColor;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnShowCrosshairAmmoState_Event_1
struct UTBP_UI_Crosshair_C_OnShowCrosshairAmmoState_Event_1_Params
{
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.OnInventoryUpdated
struct UTBP_UI_Crosshair_C_OnInventoryUpdated_Params
{
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.Tick
struct UTBP_UI_Crosshair_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Crosshair.TBP_UI_Crosshair_C.ExecuteUbergraph_TBP_UI_Crosshair
struct UTBP_UI_Crosshair_C_ExecuteUbergraph_TBP_UI_Crosshair_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
