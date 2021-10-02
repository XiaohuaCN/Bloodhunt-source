// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.DecideConeOrigin
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ShouldUseCameraAsOrigin                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     InCameraForward                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     OutConeOrigin                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MeleeCombatLogic_RootMotion_C::DecideConeOrigin(bool ShouldUseCameraAsOrigin, const struct FVector& InCameraForward, struct FVector* OutConeOrigin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.DecideConeOrigin");

	UTBP_MeleeCombatLogic_RootMotion_C_DecideConeOrigin_Params params;
	params.ShouldUseCameraAsOrigin = ShouldUseCameraAsOrigin;
	params.InCameraForward = InCameraForward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutConeOrigin != nullptr)
		*OutConeOrigin = params.OutConeOrigin;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.AimAssistAngleToTargetNormalized
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMeleeAimAssistCandidate               InCandidate                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FTigerMeleeAimAssistData                    InAimAssistData                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		float                                              OutNormalizedAngle                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MeleeCombatLogic_RootMotion_C::AimAssistAngleToTargetNormalized(struct FTigerMeleeAimAssistCandidate* InCandidate, struct FTigerMeleeAimAssistData* InAimAssistData, float* OutNormalizedAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.AimAssistAngleToTargetNormalized");

	UTBP_MeleeCombatLogic_RootMotion_C_AimAssistAngleToTargetNormalized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InCandidate != nullptr)
		*InCandidate = params.InCandidate;
	if (InAimAssistData != nullptr)
		*InAimAssistData = params.InAimAssistData;
	if (OutNormalizedAngle != nullptr)
		*OutNormalizedAngle = params.OutNormalizedAngle;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.AimAssistDistanceToTargetNormalized
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMeleeAimAssistCandidate               InCandidate                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FTigerMeleeAimAssistData                    InAimAssistData                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		float                                              OutNormalizedDistance                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MeleeCombatLogic_RootMotion_C::AimAssistDistanceToTargetNormalized(struct FTigerMeleeAimAssistCandidate* InCandidate, struct FTigerMeleeAimAssistData* InAimAssistData, float* OutNormalizedDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.AimAssistDistanceToTargetNormalized");

	UTBP_MeleeCombatLogic_RootMotion_C_AimAssistDistanceToTargetNormalized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InCandidate != nullptr)
		*InCandidate = params.InCandidate;
	if (InAimAssistData != nullptr)
		*InAimAssistData = params.InAimAssistData;
	if (OutNormalizedDistance != nullptr)
		*OutNormalizedDistance = params.OutNormalizedDistance;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.CandidateScoreMask_Cone
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMeleeAimAssistData                    InAimAssistData                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FTigerMeleeAimAssistCandidate               InCandidate                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FVector                                     InConeOrigin                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     InConeDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              OutScoreMask                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TargetAngleFromCone                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MeleeCombatLogic_RootMotion_C::CandidateScoreMask_Cone(struct FTigerMeleeAimAssistData* InAimAssistData, struct FTigerMeleeAimAssistCandidate* InCandidate, struct FVector* InConeOrigin, struct FVector* InConeDirection, float* OutScoreMask, float* TargetAngleFromCone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.CandidateScoreMask_Cone");

	UTBP_MeleeCombatLogic_RootMotion_C_CandidateScoreMask_Cone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InAimAssistData != nullptr)
		*InAimAssistData = params.InAimAssistData;
	if (InCandidate != nullptr)
		*InCandidate = params.InCandidate;
	if (InConeOrigin != nullptr)
		*InConeOrigin = params.InConeOrigin;
	if (InConeDirection != nullptr)
		*InConeDirection = params.InConeDirection;
	if (OutScoreMask != nullptr)
		*OutScoreMask = params.OutScoreMask;
	if (TargetAngleFromCone != nullptr)
		*TargetAngleFromCone = params.TargetAngleFromCone;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.ShouldRotatePlayer
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_MeleeCombatLogic_RootMotion_C::ShouldRotatePlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.ShouldRotatePlayer");

	UTBP_MeleeCombatLogic_RootMotion_C_ShouldRotatePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.Debug Draw Arc
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     StartPos                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Length                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MeleeCombatLogic_RootMotion_C::Debug_Draw_Arc(const struct FVector& StartPos, const struct FVector& Direction, float Angle, float Length, const struct FLinearColor& Color)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.Debug Draw Arc");

	UTBP_MeleeCombatLogic_RootMotion_C_Debug_Draw_Arc_Params params;
	params.StartPos = StartPos;
	params.Direction = Direction;
	params.Angle = Angle;
	params.Length = Length;
	params.Color = Color;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.UpdateAimTarget
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FTigerMeleeAimAssistCandidate>       InCandidates                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FVector                                     InCameraForward                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInIsInAir                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bInIsQuickAttack                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTigerMeleeWeaponAttackIdentifier           InPreviousAttackIdentifier                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		float                                              InSecondsSincePreviousAttack                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerCharacter*                             OutFinalTarget                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerMeleeWeaponAttackIdentifier           OutAttackIdentifier                                        (Parm, OutParm, NoDestructor)
void UTBP_MeleeCombatLogic_RootMotion_C::UpdateAimTarget(TArray<struct FTigerMeleeAimAssistCandidate>* InCandidates, const struct FVector& InCameraForward, bool bInIsInAir, bool bInIsQuickAttack, const struct FTigerMeleeWeaponAttackIdentifier& InPreviousAttackIdentifier, float InSecondsSincePreviousAttack, class ATigerCharacter** OutFinalTarget, struct FTigerMeleeWeaponAttackIdentifier* OutAttackIdentifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C.UpdateAimTarget");

	UTBP_MeleeCombatLogic_RootMotion_C_UpdateAimTarget_Params params;
	params.InCameraForward = InCameraForward;
	params.bInIsInAir = bInIsInAir;
	params.bInIsQuickAttack = bInIsQuickAttack;
	params.InPreviousAttackIdentifier = InPreviousAttackIdentifier;
	params.InSecondsSincePreviousAttack = InSecondsSincePreviousAttack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InCandidates != nullptr)
		*InCandidates = params.InCandidates;
	if (OutFinalTarget != nullptr)
		*OutFinalTarget = params.OutFinalTarget;
	if (OutAttackIdentifier != nullptr)
		*OutAttackIdentifier = params.OutAttackIdentifier;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
