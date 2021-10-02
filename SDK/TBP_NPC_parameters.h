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

// Function TBP_NPC.TBP_NPC_C.RemoveAwarenessParticle
struct ATBP_NPC_C_RemoveAwarenessParticle_Params
{
};

// Function TBP_NPC.TBP_NPC_C.GetStencilIndex
struct ATBP_NPC_C_GetStencilIndex_Params
{
	int                                                OutIndex;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_NPC.TBP_NPC_C.ResetEntityVisor
struct ATBP_NPC_C_ResetEntityVisor_Params
{
};

// Function TBP_NPC.TBP_NPC_C.MakeEntityVisorVisibleInHS
struct ATBP_NPC_C_MakeEntityVisorVisibleInHS_Params
{
};

// Function TBP_NPC.TBP_NPC_C.SetPotencyParticleActive
struct ATBP_NPC_C_SetPotencyParticleActive_Params
{
	bool                                               InIsActive;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_NPC.TBP_NPC_C.DisableScreenCullSize
struct ATBP_NPC_C_DisableScreenCullSize_Params
{
};

// Function TBP_NPC.TBP_NPC_C.InitHealthBar
struct ATBP_NPC_C_InitHealthBar_Params
{
};

// Function TBP_NPC.TBP_NPC_C.UpdateOutlineParameters
struct ATBP_NPC_C_UpdateOutlineParameters_Params
{
};

// Function TBP_NPC.TBP_NPC_C.RemoveHighPotenceBloodSoundComp
struct ATBP_NPC_C_RemoveHighPotenceBloodSoundComp_Params
{
};

// Function TBP_NPC.TBP_NPC_C.CreateHighPotenceBloodSoundComp
struct ATBP_NPC_C_CreateHighPotenceBloodSoundComp_Params
{
};

// Function TBP_NPC.TBP_NPC_C.UserConstructionScript
struct ATBP_NPC_C_UserConstructionScript_Params
{
};

// Function TBP_NPC.TBP_NPC_C.Timeline_0__FinishedFunc
struct ATBP_NPC_C_Timeline_0__FinishedFunc_Params
{
};

// Function TBP_NPC.TBP_NPC_C.Timeline_0__UpdateFunc
struct ATBP_NPC_C_Timeline_0__UpdateFunc_Params
{
};

// Function TBP_NPC.TBP_NPC_C.Timeline_1__FinishedFunc
struct ATBP_NPC_C_Timeline_1__FinishedFunc_Params
{
};

// Function TBP_NPC.TBP_NPC_C.Timeline_1__UpdateFunc
struct ATBP_NPC_C_Timeline_1__UpdateFunc_Params
{
};

// Function TBP_NPC.TBP_NPC_C.TimelineHeightenedSenses__FinishedFunc
struct ATBP_NPC_C_TimelineHeightenedSenses__FinishedFunc_Params
{
};

// Function TBP_NPC.TBP_NPC_C.TimelineHeightenedSenses__UpdateFunc
struct ATBP_NPC_C_TimelineHeightenedSenses__UpdateFunc_Params
{
};

// Function TBP_NPC.TBP_NPC_C.SpawnBloodDecal
struct ATBP_NPC_C_SpawnBloodDecal_Params
{
};

// Function TBP_NPC.TBP_NPC_C.OnLeaveHeightenedSenseArea
struct ATBP_NPC_C_OnLeaveHeightenedSenseArea_Params
{
};

// Function TBP_NPC.TBP_NPC_C.OnEnterHeightenedSenseArea
struct ATBP_NPC_C_OnEnterHeightenedSenseArea_Params
{
};

// Function TBP_NPC.TBP_NPC_C.OnEnterHeightenedSenseAreaInitial
struct ATBP_NPC_C_OnEnterHeightenedSenseAreaInitial_Params
{
};

// Function TBP_NPC.TBP_NPC_C.OnPlayMeleeHitEffects
struct ATBP_NPC_C_OnPlayMeleeHitEffects_Params
{
	class UTigerMeleeWeapon*                           WeaponHitBy;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ImpactLocation;                                            // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitDirection;                                              // 0x0014(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_NPC.TBP_NPC_C.OnBloodPotencyChanged
struct ATBP_NPC_C_OnBloodPotencyChanged_Params
{
	Tiger_ETigerBloodPotency                           InBloodPotency;                                            // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_NPC.TBP_NPC_C.ReceiveEndPlay
struct ATBP_NPC_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_NPC.TBP_NPC_C.PickHeartMeshes
struct ATBP_NPC_C_PickHeartMeshes_Params
{
};

// Function TBP_NPC.TBP_NPC_C.OnShowDamageAmount
struct ATBP_NPC_C_OnShowDamageAmount_Params
{
	struct FVector                                     InHitLocation;                                             // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                InDamageColor;                                             // 0x000C(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InTotalDamageAmount;                                       // 0x001C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InHealthDamageAmount;                                      // 0x0020(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInHasExtraHealth;                                         // 0x0024(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bInHasShield;                                              // 0x0025(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InRangedDamageFalloffPercent;                              // 0x0028(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_NPC.TBP_NPC_C.ReceiveBeginPlay
struct ATBP_NPC_C_ReceiveBeginPlay_Params
{
};

// Function TBP_NPC.TBP_NPC_C.OnDeath
struct ATBP_NPC_C_OnDeath_Params
{
};

// Function TBP_NPC.TBP_NPC_C.ReceiveAnyDamage
struct ATBP_NPC_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_NPC.TBP_NPC_C.OnGainedSightOfLocalPlayer
struct ATBP_NPC_C_OnGainedSightOfLocalPlayer_Params
{
	class ATigerPlayer*                                InPlayer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_NPC.TBP_NPC_C.OnLostSightOfLocalPlayer
struct ATBP_NPC_C_OnLostSightOfLocalPlayer_Params
{
	class ATigerPlayer*                                InPlayer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_NPC.TBP_NPC_C.BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_0_OnOutlineModeRefreshed__DelegateSignature
struct ATBP_NPC_C_BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_0_OnOutlineModeRefreshed__DelegateSignature_Params
{
	Tiger_ETigerOutlineMode                            HighestPrioOutline;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_NPC.TBP_NPC_C.OnBecameClosestNpcWithPotencyInHeightenedSenses
struct ATBP_NPC_C_OnBecameClosestNpcWithPotencyInHeightenedSenses_Params
{
};

// Function TBP_NPC.TBP_NPC_C.OnStoppedBeingClosestNpcWithPotencyInHeightenedSenses
struct ATBP_NPC_C_OnStoppedBeingClosestNpcWithPotencyInHeightenedSenses_Params
{
};

// Function TBP_NPC.TBP_NPC_C.OnLocalPlayerUsedHS
struct ATBP_NPC_C_OnLocalPlayerUsedHS_Params
{
	bool                                               bIsNowActive;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_NPC.TBP_NPC_C.ToggleUIVisibility
struct ATBP_NPC_C_ToggleUIVisibility_Params
{
};

// Function TBP_NPC.TBP_NPC_C.OnFeedingStart
struct ATBP_NPC_C_OnFeedingStart_Params
{
	int                                                FeedingTicksLeft;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxFeedingTicks;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_NPC.TBP_NPC_C.OnFeedingEnd
struct ATBP_NPC_C_OnFeedingEnd_Params
{
};

// Function TBP_NPC.TBP_NPC_C.OnSawLocalPlayerBreachMasquerade
struct ATBP_NPC_C_OnSawLocalPlayerBreachMasquerade_Params
{
};

// Function TBP_NPC.TBP_NPC_C.ExecuteUbergraph_TBP_NPC
struct ATBP_NPC_C_ExecuteUbergraph_TBP_NPC_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
