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

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.SetBackgroundColor
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_SetBackgroundColor_Params
{
	struct FLinearColor                                InBackgroundColor;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.IsSelected
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_IsSelected_Params
{
	bool                                               IsSelected;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.SetIsDeselected
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_SetIsDeselected_Params
{
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.SetIsSelected
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_SetIsSelected_Params
{
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.CreateCloudBackground
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_CreateCloudBackground_Params
{
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.PlayPressedOverlayAnimation
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_PlayPressedOverlayAnimation_Params
{
	TEnumAsByte<UMG_EUMGSequencePlayMode>              PlayMode;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.PlayAnimationFromCurrentPosition
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_PlayAnimationFromCurrentPosition_Params
{
	class UWidgetAnimation*                            InAnimation;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<UMG_EUMGSequencePlayMode>              InPlayMode;                                                // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.CreateBorderMaterial
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_CreateBorderMaterial_Params
{
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.UpdateBorderOpacity
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_UpdateBorderOpacity_Params
{
	float                                              InDeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.OnRemovedFromFocusPath
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.OnInitialized
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_OnInitialized_Params
{
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.Construct
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_Construct_Params
{
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.Tick
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.OnTransitionStarted
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_OnTransitionStarted_Params
{
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.RestartAnimation
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_RestartAnimation_Params
{
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.PreConstruct
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.ExecuteUbergraph_TBP_UI_SystemMenuSettingsListItemBorder
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_ExecuteUbergraph_TBP_UI_SystemMenuSettingsListItemBorder_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.OnUnhovered__DelegateSignature
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_OnUnhovered__DelegateSignature_Params
{
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.OnHovered__DelegateSignature
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_OnHovered__DelegateSignature_Params
{
};

// Function TBP_UI_SystemMenuSettingsListItemBorder.TBP_UI_SystemMenuSettingsListItemBorder_C.OnClicked__DelegateSignature
struct UTBP_UI_SystemMenuSettingsListItemBorder_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
