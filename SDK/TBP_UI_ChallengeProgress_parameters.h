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

// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.SequenceEvent__ENTRYPOINTTBP_UI_ChallengeProgress_1
struct UTBP_UI_ChallengeProgress_C_SequenceEvent__ENTRYPOINTTBP_UI_ChallengeProgress_1_Params
{
	class UHorizontalBox*                              ChallengeProgressHB;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.OverrideMinSize
struct UTBP_UI_ChallengeProgress_C_OverrideMinSize_Params
{
	float                                              MinWidth;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinHeight;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.HideExpRewardText
struct UTBP_UI_ChallengeProgress_C_HideExpRewardText_Params
{
};

// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Reward Display From Item
struct UTBP_UI_ChallengeProgress_C_Set_Reward_Display_From_Item_Params
{
};

// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.HasFinishedProgressBarAnimation
struct UTBP_UI_ChallengeProgress_C_HasFinishedProgressBarAnimation_Params
{
	bool                                               HasUpdatedProgressBar;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Progress
struct UTBP_UI_ChallengeProgress_C_Set_Progress_Params
{
	float                                              InProgressBarPercentage;                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InProgressText;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.MoveProgressBar
struct UTBP_UI_ChallengeProgress_C_MoveProgressBar_Params
{
	float                                              LerpValue;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Set Challenge Data
struct UTBP_UI_ChallengeProgress_C_Set_Challenge_Data_Params
{
	struct FTigerProgressedChallengeWrapper            Challenge_Progress_Wrapper;                                // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.ShowComplete
struct UTBP_UI_ChallengeProgress_C_ShowComplete_Params
{
	class UHorizontalBox*                              ChallengeProgressHB;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.Construct
struct UTBP_UI_ChallengeProgress_C_Construct_Params
{
};

// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.OnChallengeCompleted
struct UTBP_UI_ChallengeProgress_C_OnChallengeCompleted_Params
{
};

// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.UpdateProgress
struct UTBP_UI_ChallengeProgress_C_UpdateProgress_Params
{
};

// Function TBP_UI_ChallengeProgress.TBP_UI_ChallengeProgress_C.ExecuteUbergraph_TBP_UI_ChallengeProgress
struct UTBP_UI_ChallengeProgress_C_ExecuteUbergraph_TBP_UI_ChallengeProgress_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
