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

// Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.DecideConeOrigin
struct UTBP_MeleeCombatLogic_RootMotion_C_DecideConeOrigin_Params
{
	bool                                               ShouldUseCameraAsOrigin;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     InCameraForward;                                           // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OutConeOrigin;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.AimAssistAngleToTargetNormalized
struct UTBP_MeleeCombatLogic_RootMotion_C_AimAssistAngleToTargetNormalized_Params
{
	struct FTigerMeleeAimAssistCandidate               InCandidate;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FTigerMeleeAimAssistData                    InAimAssistData;                                           // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	float                                              OutNormalizedAngle;                                        // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.AimAssistDistanceToTargetNormalized
struct UTBP_MeleeCombatLogic_RootMotion_C_AimAssistDistanceToTargetNormalized_Params
{
	struct FTigerMeleeAimAssistCandidate               InCandidate;                                               // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FTigerMeleeAimAssistData                    InAimAssistData;                                           // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	float                                              OutNormalizedDistance;                                     // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.CandidateScoreMask_Cone
struct UTBP_MeleeCombatLogic_RootMotion_C_CandidateScoreMask_Cone_Params
{
	struct FTigerMeleeAimAssistData                    InAimAssistData;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FTigerMeleeAimAssistCandidate               InCandidate;                                               // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FVector                                     InConeOrigin;                                              // 0x0030(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InConeDirection;                                           // 0x003C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutScoreMask;                                              // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TargetAngleFromCone;                                       // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.ShouldRotatePlayer
struct UTBP_MeleeCombatLogic_RootMotion_C_ShouldRotatePlayer_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.Debug Draw Arc
struct UTBP_MeleeCombatLogic_RootMotion_C_Debug_Draw_Arc_Params
{
	struct FVector                                     StartPos;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Direction;                                                 // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Angle;                                                     // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Length;                                                    // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.UpdateAimTarget
struct UTBP_MeleeCombatLogic_RootMotion_C_UpdateAimTarget_Params
{
	TArray<struct FTigerMeleeAimAssistCandidate>       InCandidates;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     InCameraForward;                                           // 0x0010(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInIsInAir;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bInIsQuickAttack;                                          // 0x001D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTigerMeleeWeaponAttackIdentifier           InPreviousAttackIdentifier;                                // 0x001E(0x0002)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	float                                              InSecondsSincePreviousAttack;                              // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerCharacter*                             OutFinalTarget;                                            // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTigerMeleeWeaponAttackIdentifier           OutAttackIdentifier;                                       // 0x0030(0x0002)  (Parm, OutParm, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
