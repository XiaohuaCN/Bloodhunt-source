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

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StrongBarrierTrait
struct ATBP_ShockwaveWall_C_StrongBarrierTrait_Params
{
	bool                                               isStrong;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.DetermineDamageOnEnemy
struct ATBP_ShockwaveWall_C_DetermineDamageOnEnemy_Params
{
	class ATigerCharacter*                             InEnemyCharacter;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.SlowBarrierTrait
struct ATBP_ShockwaveWall_C_SlowBarrierTrait_Params
{
	class ATigerCharacter*                             Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.PlayBarrierImpactPlayerAudio
struct ATBP_ShockwaveWall_C_PlayBarrierImpactPlayerAudio_Params
{
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.PlayBarrierAudio
struct ATBP_ShockwaveWall_C_PlayBarrierAudio_Params
{
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StopBarrierAudio
struct ATBP_ShockwaveWall_C_StopBarrierAudio_Params
{
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.StopBarrierAudioPlayImpactAudio
struct ATBP_ShockwaveWall_C_StopBarrierAudioPlayImpactAudio_Params
{
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.CalculateKnockbackVector
struct ATBP_ShockwaveWall_C_CalculateKnockbackVector_Params
{
	class ATigerCharacter*                             InHitEnemyCharacter;                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveBeginPlay
struct ATBP_ShockwaveWall_C_ReceiveBeginPlay_Params
{
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnEffectBoxOverlap
struct ATBP_ShockwaveWall_C_OnEffectBoxOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveEndPlay
struct ATBP_ShockwaveWall_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveTick
struct ATBP_ShockwaveWall_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ReceiveDestroyed
struct ATBP_ShockwaveWall_C_ReceiveDestroyed_Params
{
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnShockwaveWallDestroyed
struct ATBP_ShockwaveWall_C_OnShockwaveWallDestroyed_Params
{
	Tiger_EShockwaveWallDestroyReason                  InDestroyReason;                                           // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.OnCharacterHit
struct ATBP_ShockwaveWall_C_OnCharacterHit_Params
{
	class ATigerCharacter*                             InCharacterHit;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ShockwaveWall.TBP_ShockwaveWall_C.ExecuteUbergraph_TBP_ShockwaveWall
struct ATBP_ShockwaveWall_C_ExecuteUbergraph_TBP_ShockwaveWall_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
