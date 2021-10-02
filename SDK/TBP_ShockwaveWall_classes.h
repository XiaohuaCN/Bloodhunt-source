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

// BlueprintGeneratedClass TBP_ShockwaveWall.TBP_ShockwaveWall_C
// 0x004C (FullSize[0x030C] - InheritedSize[0x02C0])
class ATBP_ShockwaveWall_C : public ATigerShockwaveWall
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_Vfx_ShockwavePunch;                                     // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              KnockbackPitchOffsetInDegrees;                             // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              KnockbackForce;                                            // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldDrawHitboxes;                                       // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HMKF[0x3];                                     // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ShockwaveWallAkEventID;                                    // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATBP_ShockwaveWallTrail_C*                   TrailActor;                                                // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ShockTrailParticleRate;                                    // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PXH8[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 KnockbackCurve;                                            // 0x02F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ForceOnDynamicObjects;                                     // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DistancePercentTravelled;                                  // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 DamageCurve;                                               // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Shockwave_Damage;                                          // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ShockwaveWall.TBP_ShockwaveWall_C");
		return ptr;
	}



	void StrongBarrierTrait(bool* isStrong);
	float DetermineDamageOnEnemy(class ATigerCharacter* InEnemyCharacter);
	void SlowBarrierTrait(class ATigerCharacter* Actor);
	void PlayBarrierImpactPlayerAudio();
	void PlayBarrierAudio();
	void StopBarrierAudio();
	void StopBarrierAudioPlayImpactAudio();
	struct FVector CalculateKnockbackVector(class ATigerCharacter* InHitEnemyCharacter);
	void ReceiveBeginPlay();
	void OnEffectBoxOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDestroyed();
	void OnShockwaveWallDestroyed(Tiger_EShockwaveWallDestroyReason InDestroyReason);
	void OnCharacterHit(class ATigerCharacter* InCharacterHit);
	void ExecuteUbergraph_TBP_ShockwaveWall(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
