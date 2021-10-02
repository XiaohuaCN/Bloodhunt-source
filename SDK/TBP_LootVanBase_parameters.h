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

// Function TBP_LootVanBase.TBP_LootVanBase_C.GetPingInfo
struct ATBP_LootVanBase_C_GetPingInfo_Params
{
	struct FTS_PingableActorInfo                       OutInfo;                                                   // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_LootVanBase.TBP_LootVanBase_C.GetPingCategory
struct ATBP_LootVanBase_C_GetPingCategory_Params
{
	struct FName                                       OutCategory;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_LootVanBase.TBP_LootVanBase_C.OnAnimateOpen
struct ATBP_LootVanBase_C_OnAnimateOpen_Params
{
};

// Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__FinishedFunc
struct ATBP_LootVanBase_C_Timeline_0__FinishedFunc_Params
{
};

// Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__UpdateFunc
struct ATBP_LootVanBase_C_Timeline_0__UpdateFunc_Params
{
};

// Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__PushPlayers__EventFunc
struct ATBP_LootVanBase_C_Timeline_0__PushPlayers__EventFunc_Params
{
};

// Function TBP_LootVanBase.TBP_LootVanBase_C.StaticMeshComponentHit
struct ATBP_LootVanBase_C_StaticMeshComponentHit_Params
{
	struct FHitResult                                  HitResult;                                                 // 0x0000(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                     ImpactVelocity;                                            // 0x008C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_LootVanBase.TBP_LootVanBase_C.OnOpenTrunk
struct ATBP_LootVanBase_C_OnOpenTrunk_Params
{
};

// Function TBP_LootVanBase.TBP_LootVanBase_C.ReceiveTick
struct ATBP_LootVanBase_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_LootVanBase.TBP_LootVanBase_C.BndEvt__PushBoxLeft_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
struct ATBP_LootVanBase_C_BndEvt__PushBoxLeft_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_LootVanBase.TBP_LootVanBase_C.BndEvt__PushBoxRight_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ATBP_LootVanBase_C_BndEvt__PushBoxRight_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_LootVanBase.TBP_LootVanBase_C.CheckDoorOverlaps
struct ATBP_LootVanBase_C_CheckDoorOverlaps_Params
{
};

// Function TBP_LootVanBase.TBP_LootVanBase_C.EnableDoorBlock
struct ATBP_LootVanBase_C_EnableDoorBlock_Params
{
	class UStaticMeshComponent*                        DoorComponent;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_LootVanBase.TBP_LootVanBase_C.TriggerAlarm
struct ATBP_LootVanBase_C_TriggerAlarm_Params
{
};

// Function TBP_LootVanBase.TBP_LootVanBase_C.ExecuteUbergraph_TBP_LootVanBase
struct ATBP_LootVanBase_C_ExecuteUbergraph_TBP_LootVanBase_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
