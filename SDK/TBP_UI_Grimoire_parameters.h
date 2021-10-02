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

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2
struct UTBP_UI_Grimoire_C_SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_2_Params
{
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         InteractedFooter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1
struct UTBP_UI_Grimoire_C_SequenceEvent__ENTRYPOINTTBP_UI_Grimoire_1_Params
{
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         InteractedFooter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.NormaliseMouseAxis
struct UTBP_UI_Grimoire_C_NormaliseMouseAxis_Params
{
	float                                              InAxis;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutAxis;                                                   // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.NormaliseMouseDelta
struct UTBP_UI_Grimoire_C_NormaliseMouseDelta_Params
{
	struct FVector2D                                   InDelta;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   OutDelta;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RefreshScrollPrompt
struct UTBP_UI_Grimoire_C_RefreshScrollPrompt_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ApplyMeshScaling
struct UTBP_UI_Grimoire_C_ApplyMeshScaling_Params
{
	bool                                               IsFocused;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ResetGrimoireDisplayItems
struct UTBP_UI_Grimoire_C_ResetGrimoireDisplayItems_Params
{
	float                                              InDeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ForwardInputToCategoryMenu
struct UTBP_UI_Grimoire_C_ForwardInputToCategoryMenu_Params
{
	int                                                InDirection;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.GrimoirePropJumpToEntry
struct UTBP_UI_Grimoire_C_GrimoirePropJumpToEntry_Params
{
	struct FString                                     InEntryId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.HideGrimoireDisplayItems
struct UTBP_UI_Grimoire_C_HideGrimoireDisplayItems_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RotateGrimoireDisplayItem
struct UTBP_UI_Grimoire_C_RotateGrimoireDisplayItem_Params
{
	float                                              InDeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SetInteractionButtonVisiblity
struct UTBP_UI_Grimoire_C_SetInteractionButtonVisiblity_Params
{
	bool                                               bVisible;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ClearContent
struct UTBP_UI_Grimoire_C_ClearContent_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.InteractedFooterAnimationEnd
struct UTBP_UI_Grimoire_C_InteractedFooterAnimationEnd_Params
{
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         InteractedFooter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.InteractedFooterAnimationStart
struct UTBP_UI_Grimoire_C_InteractedFooterAnimationStart_Params
{
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         InteractedFooter;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnOpen
struct UTBP_UI_Grimoire_C_OnOpen_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClick
struct UTBP_UI_Grimoire_C_SelectMenuOnClick_Params
{
	class UTigerGrimoireCategory*                      SelectedCategory;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClickCategoryButton
struct UTBP_UI_Grimoire_C_SelectMenuOnClickCategoryButton_Params
{
	class UTBP_UI_Grimoire_CategoryButton_C*           CategoryButton;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.SelectMenuOnClickEntryButton
struct UTBP_UI_Grimoire_C_SelectMenuOnClickEntryButton_Params
{
	class UTBP_UI_Grimoire_CategoryButton_C*           EntryButton;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuAnimHide
struct UTBP_UI_Grimoire_C_MenuAnimHide_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuAnimShow
struct UTBP_UI_Grimoire_C_MenuAnimShow_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ToggleMenusHidden
struct UTBP_UI_Grimoire_C_ToggleMenusHidden_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnClose
struct UTBP_UI_Grimoire_C_OnClose_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnInitialized
struct UTBP_UI_Grimoire_C_OnInitialized_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToCategory
struct UTBP_UI_Grimoire_C_JumpToCategory_Params
{
	class UTigerGrimoireCategory*                      InCategory;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToSubCategory
struct UTBP_UI_Grimoire_C_JumpToSubCategory_Params
{
	class UTigerGrimoireCategory*                      InSubCategory;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.JumpToEntry
struct UTBP_UI_Grimoire_C_JumpToEntry_Params
{
	struct FString                                     InEntryId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature
struct UTBP_UI_Grimoire_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature
struct UTBP_UI_Grimoire_C_BndEvt__Interact_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature
struct UTBP_UI_Grimoire_C_BndEvt__ShowMenuButton_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.Tick
struct UTBP_UI_Grimoire_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnBackgroundSceneShown
struct UTBP_UI_Grimoire_C_OnBackgroundSceneShown_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuUpPressed
struct UTBP_UI_Grimoire_C_MenuUpPressed_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.MenuDownPressed
struct UTBP_UI_Grimoire_C_MenuDownPressed_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnRotateButtonPressed
struct UTBP_UI_Grimoire_C_OnRotateButtonPressed_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.OnRotateButtonUp
struct UTBP_UI_Grimoire_C_OnRotateButtonUp_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.On Language Settings Changed
struct UTBP_UI_Grimoire_C_On_Language_Settings_Changed_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.RegisterSharedInputs
struct UTBP_UI_Grimoire_C_RegisterSharedInputs_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.UnregisterSharedInputs
struct UTBP_UI_Grimoire_C_UnregisterSharedInputs_Params
{
};

// Function TBP_UI_Grimoire.TBP_UI_Grimoire_C.ExecuteUbergraph_TBP_UI_Grimoire
struct UTBP_UI_Grimoire_C_ExecuteUbergraph_TBP_UI_Grimoire_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
