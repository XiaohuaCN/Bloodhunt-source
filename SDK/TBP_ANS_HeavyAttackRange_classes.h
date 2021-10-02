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

// BlueprintGeneratedClass TBP_ANS_HeavyAttackRange.TBP_ANS_HeavyAttackRange_C
// 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
class UTBP_ANS_HeavyAttackRange_C : public UTigerAnimNotifyState_HeavyAttackRange
{
public:
	TArray<class UParticleSystemComponent*>            ChargingParticles;                                         // 0x0030(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ANS_HeavyAttackRange.TBP_ANS_HeavyAttackRange_C");
		return ptr;
	}



	void OnChargeUpEnded(class ATigerPlayer* Player, class UTigerMeleeWeapon* EquippedWeapon, float ChargeUpRatio);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
