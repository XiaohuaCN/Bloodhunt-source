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

// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.SetUnlockedState
struct UTBP_UI_BattlepassRewardsContainer_C_SetUnlockedState_Params
{
	bool                                               bIsUnlocked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.PopulateRewards
struct UTBP_UI_BattlepassRewardsContainer_C_PopulateRewards_Params
{
	TArray<struct FTigerItemId>                        ItemIds;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bIsUnlocked;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               IsFree;                                                    // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                InRank;                                                    // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ItemHovered
struct UTBP_UI_BattlepassRewardsContainer_C_ItemHovered_Params
{
	struct FTigerItemId                                ItemId;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.PreConstruct
struct UTBP_UI_BattlepassRewardsContainer_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ItemSelected
struct UTBP_UI_BattlepassRewardsContainer_C_ItemSelected_Params
{
	struct FTigerItemId                                InItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ExecuteUbergraph_TBP_UI_BattlepassRewardsContainer
struct UTBP_UI_BattlepassRewardsContainer_C_ExecuteUbergraph_TBP_UI_BattlepassRewardsContainer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.OnItemSelected__DelegateSignature
struct UTBP_UI_BattlepassRewardsContainer_C_OnItemSelected__DelegateSignature_Params
{
	struct FTigerItemId                                InItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.OnItemHovered__DelegateSignature
struct UTBP_UI_BattlepassRewardsContainer_C_OnItemHovered__DelegateSignature_Params
{
	struct FTigerItemId                                ItemId;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	bool                                               Item_Is_Free;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
