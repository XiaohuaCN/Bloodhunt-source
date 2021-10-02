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

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.CollapseRewardIfEmtpy
struct UTBP_UI_BattlepassTierContainer_C_CollapseRewardIfEmtpy_Params
{
	class UTBP_UI_BattlepassRewardsContainer_C*        InReward;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetRewardAtIndex
struct UTBP_UI_BattlepassTierContainer_C_GetRewardAtIndex_Params
{
	int                                                InRewardIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsFree;                                                   // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTBP_UI_BattlepassReward_C*                  OutReward;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstPremiumReward
struct UTBP_UI_BattlepassTierContainer_C_GetFirstPremiumReward_Params
{
	class UTBP_UI_BattlepassReward_C*                  OutFirstFreeReward;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstFreeReward
struct UTBP_UI_BattlepassTierContainer_C_GetFirstFreeReward_Params
{
	class UTBP_UI_BattlepassReward_C*                  OutFirstFreeReward;                                        // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetLastReward
struct UTBP_UI_BattlepassTierContainer_C_GetLastReward_Params
{
	class UTBP_UI_BattlepassReward_C*                  OutLastChild;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstReward
struct UTBP_UI_BattlepassTierContainer_C_GetFirstReward_Params
{
	class UTBP_UI_BattlepassReward_C*                  OutFirstChild;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.UpdateHeader
struct UTBP_UI_BattlepassTierContainer_C_UpdateHeader_Params
{
	bool                                               bIsUnlocked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.PopulateRewards
struct UTBP_UI_BattlepassTierContainer_C_PopulateRewards_Params
{
	class UTBP_UI_BattlepassRewardsContainer_C*        InRewardsContainer;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTigerItemId>                        ItemIds;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bIsUnlocked;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsFree;                                                    // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.UpdateTierCollections
struct UTBP_UI_BattlepassTierContainer_C_UpdateTierCollections_Params
{
	bool                                               bIsUnlocked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TArray<class UTigerClientSeasonalRewardTier*>      InTiers;                                                   // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bWantsDoubleSize;                                          // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.PreConstruct
struct UTBP_UI_BattlepassTierContainer_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.ItemSelected
struct UTBP_UI_BattlepassTierContainer_C_ItemSelected_Params
{
	struct FTigerItemId                                InItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.CustomEvent_1
struct UTBP_UI_BattlepassTierContainer_C_CustomEvent_1_Params
{
	struct FTigerItemId                                ItemId;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                               Item_Is_Free;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.Update XP Bar
struct UTBP_UI_BattlepassTierContainer_C_Update_XP_Bar_Params
{
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.ExecuteUbergraph_TBP_UI_BattlepassTierContainer
struct UTBP_UI_BattlepassTierContainer_C_ExecuteUbergraph_TBP_UI_BattlepassTierContainer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.OnItemSelected__DelegateSignature
struct UTBP_UI_BattlepassTierContainer_C_OnItemSelected__DelegateSignature_Params
{
	struct FTigerItemId                                InItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int                                                Item_Rank;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.OnItemHovered__DelegateSignature
struct UTBP_UI_BattlepassTierContainer_C_OnItemHovered__DelegateSignature_Params
{
	struct FTigerItemId                                ItemId;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int                                                Item_Rank;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Item_Is_Free;                                              // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
