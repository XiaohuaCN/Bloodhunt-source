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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C
// 0x0000 (FullSize[0x0078] - InheritedSize[0x0078])
class UTBP_MeleeCombatLogic_RootMotion_C : public UTigerMeleeAimAssistBehavior
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_MeleeCombatLogic_RootMotion.TBP_MeleeCombatLogic_RootMotion_C");
		return ptr;
	}



	void DecideConeOrigin(bool ShouldUseCameraAsOrigin, const struct FVector& InCameraForward, struct FVector* OutConeOrigin);
	void AimAssistAngleToTargetNormalized(struct FTigerMeleeAimAssistCandidate* InCandidate, struct FTigerMeleeAimAssistData* InAimAssistData, float* OutNormalizedAngle);
	void AimAssistDistanceToTargetNormalized(struct FTigerMeleeAimAssistCandidate* InCandidate, struct FTigerMeleeAimAssistData* InAimAssistData, float* OutNormalizedDistance);
	void CandidateScoreMask_Cone(struct FTigerMeleeAimAssistData* InAimAssistData, struct FTigerMeleeAimAssistCandidate* InCandidate, struct FVector* InConeOrigin, struct FVector* InConeDirection, float* OutScoreMask, float* TargetAngleFromCone);
	bool ShouldRotatePlayer();
	void Debug_Draw_Arc(const struct FVector& StartPos, const struct FVector& Direction, float Angle, float Length, const struct FLinearColor& Color);
	void UpdateAimTarget(TArray<struct FTigerMeleeAimAssistCandidate>* InCandidates, const struct FVector& InCameraForward, bool bInIsInAir, bool bInIsQuickAttack, const struct FTigerMeleeWeaponAttackIdentifier& InPreviousAttackIdentifier, float InSecondsSincePreviousAttack, class ATigerCharacter** OutFinalTarget, struct FTigerMeleeWeaponAttackIdentifier* OutAttackIdentifier);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
