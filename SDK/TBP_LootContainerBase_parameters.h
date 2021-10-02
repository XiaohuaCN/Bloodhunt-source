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

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.GetPingInfo
struct ATBP_LootContainerBase_C_GetPingInfo_Params
{
	struct FTS_PingableActorInfo                       OutInfo;                                                   // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.GetPingCategory
struct ATBP_LootContainerBase_C_GetPingCategory_Params
{
	struct FName                                       OutCategory;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnAnimateOpen
struct ATBP_LootContainerBase_C_OnAnimateOpen_Params
{
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnSpawnLoot
struct ATBP_LootContainerBase_C_OnSpawnLoot_Params
{
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnInteractFinished
struct ATBP_LootContainerBase_C_OnInteractFinished_Params
{
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.UserConstructionScript
struct ATBP_LootContainerBase_C_UserConstructionScript_Params
{
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.HeightenedSensesTimeline__FinishedFunc
struct ATBP_LootContainerBase_C_HeightenedSensesTimeline__FinishedFunc_Params
{
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.HeightenedSensesTimeline__UpdateFunc
struct ATBP_LootContainerBase_C_HeightenedSensesTimeline__UpdateFunc_Params
{
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.ReceiveTick
struct ATBP_LootContainerBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnLeaveHeightenedSenseArea
struct ATBP_LootContainerBase_C_OnLeaveHeightenedSenseArea_Params
{
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnEnterHeightenedSenseAreaInitial
struct ATBP_LootContainerBase_C_OnEnterHeightenedSenseAreaInitial_Params
{
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnEnterHeightenedSenseArea
struct ATBP_LootContainerBase_C_OnEnterHeightenedSenseArea_Params
{
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnInteract
struct ATBP_LootContainerBase_C_OnInteract_Params
{
	Tiger_EInteractiveObjectState                      ActivatedTrigger;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnBecameClosestLootContainerInHeightenedSenses
struct ATBP_LootContainerBase_C_OnBecameClosestLootContainerInHeightenedSenses_Params
{
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnStoppedBeingClosestLootContainerInHeightenedSenses
struct ATBP_LootContainerBase_C_OnStoppedBeingClosestLootContainerInHeightenedSenses_Params
{
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.OnJumpToFinalState
struct ATBP_LootContainerBase_C_OnJumpToFinalState_Params
{
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.ReceiveBeginPlay
struct ATBP_LootContainerBase_C_ReceiveBeginPlay_Params
{
};

// Function TBP_LootContainerBase.TBP_LootContainerBase_C.ExecuteUbergraph_TBP_LootContainerBase
struct ATBP_LootContainerBase_C_ExecuteUbergraph_TBP_LootContainerBase_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
