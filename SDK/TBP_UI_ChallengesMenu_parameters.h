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

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.RefreshItemPreviewButton
struct UTBP_UI_ChallengesMenu_C_RefreshItemPreviewButton_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.HideItemPreview
struct UTBP_UI_ChallengesMenu_C_HideItemPreview_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ShowItemPreview
struct UTBP_UI_ChallengesMenu_C_ShowItemPreview_Params
{
	struct FTigerItemId                                InItemToShow;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.RefreshQuestWidgets
struct UTBP_UI_ChallengesMenu_C_RefreshQuestWidgets_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.SetWeeklyChallengeHeader
struct UTBP_UI_ChallengesMenu_C_SetWeeklyChallengeHeader_Params
{
	int                                                InWeek;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.RefreshAllWeeklyChallengeProgress
struct UTBP_UI_ChallengesMenu_C_RefreshAllWeeklyChallengeProgress_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.TryRebuildWeeklyChallenges
struct UTBP_UI_ChallengesMenu_C_TryRebuildWeeklyChallenges_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.GetDailyExpireText
struct UTBP_UI_ChallengesMenu_C_GetDailyExpireText_Params
{
	struct FText                                       OutExpireText;                                             // 0x0000(0x0018)  (Parm, OutParm)
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnOpen
struct UTBP_UI_ChallengesMenu_C_OnOpen_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__WeeklyTabWidget_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature
struct UTBP_UI_ChallengesMenu_C_BndEvt__WeeklyTabWidget_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnClose
struct UTBP_UI_ChallengesMenu_C_OnClose_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.OnBackgroundSceneShown
struct UTBP_UI_ChallengesMenu_C_OnBackgroundSceneShown_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__DailyTabWidget_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature
struct UTBP_UI_ChallengesMenu_C_BndEvt__DailyTabWidget_K2Node_ComponentBoundEvent_3_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ChallengeProgressUpdated
struct UTBP_UI_ChallengesMenu_C_ChallengeProgressUpdated_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.Tick
struct UTBP_UI_ChallengesMenu_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__BackInputPrompt_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature
struct UTBP_UI_ChallengesMenu_C_BndEvt__BackInputPrompt_K2Node_ComponentBoundEvent_2_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_ChallengesMenu_C_BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_ChallengesMenu_C_BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.FadeRightFinished
struct UTBP_UI_ChallengesMenu_C_FadeRightFinished_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.FadeLeftFinished
struct UTBP_UI_ChallengesMenu_C_FadeLeftFinished_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__QuestsTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature
struct UTBP_UI_ChallengesMenu_C_BndEvt__QuestsTabWidget_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__PreviewInputPrompt_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature
struct UTBP_UI_ChallengesMenu_C_BndEvt__PreviewInputPrompt_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__HidePreviewInputPrompt_1_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature
struct UTBP_UI_ChallengesMenu_C_BndEvt__HidePreviewInputPrompt_1_K2Node_ComponentBoundEvent_7_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.PreConstruct
struct UTBP_UI_ChallengesMenu_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_ChallengesMenu_C_BndEvt__SeasonWeekLeftButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_ChallengesMenu_C_BndEvt__SeasonWeekRightButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_ChallengesMenu.TBP_UI_ChallengesMenu_C.ExecuteUbergraph_TBP_UI_ChallengesMenu
struct UTBP_UI_ChallengesMenu_C_ExecuteUbergraph_TBP_UI_ChallengesMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
