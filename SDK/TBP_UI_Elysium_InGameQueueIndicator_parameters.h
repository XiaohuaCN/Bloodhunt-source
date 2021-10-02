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

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ShowTrainingVideo
struct UTBP_UI_Elysium_InGameQueueIndicator_C_ShowTrainingVideo_Params
{
	class UTigerGrimoireEntry*                         InGrimoireEntry;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.InitializeIsGroupMode
struct UTBP_UI_Elysium_InGameQueueIndicator_C_InitializeIsGroupMode_Params
{
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.SetLastSelectedGroupingMode
struct UTBP_UI_Elysium_InGameQueueIndicator_C_SetLastSelectedGroupingMode_Params
{
	bool                                               IsGroup;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Is Sole Member Of Group and Not in Party
struct UTBP_UI_Elysium_InGameQueueIndicator_C_Is_Sole_Member_Of_Group_and_Not_in_Party_Params
{
	bool                                               bOnlyGroupMemberAndNotInParty;                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.UpdateGroupLayout
struct UTBP_UI_Elysium_InGameQueueIndicator_C_UpdateGroupLayout_Params
{
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.IsInGroup
struct UTBP_UI_Elysium_InGameQueueIndicator_C_IsInGroup_Params
{
	bool                                               bIsInGroup;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.IsFindingGameServer
struct UTBP_UI_Elysium_InGameQueueIndicator_C_IsFindingGameServer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.SetReadyButtonState
struct UTBP_UI_Elysium_InGameQueueIndicator_C_SetReadyButtonState_Params
{
	bool                                               bInIsReady;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsQuickAnimation;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnSwitchGameMode
struct UTBP_UI_Elysium_InGameQueueIndicator_C_OnSwitchGameMode_Params
{
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnShowPlayerList
struct UTBP_UI_Elysium_InGameQueueIndicator_C_OnShowPlayerList_Params
{
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnReadyInput
struct UTBP_UI_Elysium_InGameQueueIndicator_C_OnReadyInput_Params
{
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGroupChangedDelegate
struct UTBP_UI_Elysium_InGameQueueIndicator_C_OnGroupChangedDelegate_Params
{
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Construct
struct UTBP_UI_Elysium_InGameQueueIndicator_C_Construct_Params
{
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Tick
struct UTBP_UI_Elysium_InGameQueueIndicator_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnFindMatchFailed
struct UTBP_UI_Elysium_InGameQueueIndicator_C_OnFindMatchFailed_Params
{
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnValidTigerPlayerState
struct UTBP_UI_Elysium_InGameQueueIndicator_C_OnValidTigerPlayerState_Params
{
	class ATigerPlayerState*                           TigerPlayerState;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGroupReadyStateChanged
struct UTBP_UI_Elysium_InGameQueueIndicator_C_OnGroupReadyStateChanged_Params
{
	bool                                               bInIsGroupReady;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.CancelMatchmaking
struct UTBP_UI_Elysium_InGameQueueIndicator_C_CancelMatchmaking_Params
{
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnInitialized
struct UTBP_UI_Elysium_InGameQueueIndicator_C_OnInitialized_Params
{
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.DisableStartGameButton
struct UTBP_UI_Elysium_InGameQueueIndicator_C_DisableStartGameButton_Params
{
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnTrainingVideoCompleted
struct UTBP_UI_Elysium_InGameQueueIndicator_C_OnTrainingVideoCompleted_Params
{
};

// Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ExecuteUbergraph_TBP_UI_Elysium_InGameQueueIndicator
struct UTBP_UI_Elysium_InGameQueueIndicator_C_ExecuteUbergraph_TBP_UI_Elysium_InGameQueueIndicator_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
