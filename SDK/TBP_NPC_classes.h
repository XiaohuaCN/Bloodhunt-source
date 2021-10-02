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

// BlueprintGeneratedClass TBP_NPC.TBP_NPC_C
// 0x0104 (FullSize[0x0C0C] - InheritedSize[0x0B08])
class ATBP_NPC_C : public ATigerNPC
{
public:
	unsigned char                                      UnknownData_M4LO[0x8];                                     // 0x0B08(0x0008) Fix Super Size
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0B10(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        OutlineBillboard;                                          // 0x0B18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        DirectionIndicator;                                        // 0x0B20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UTBP_FeedingComponent_C*                     TBP_FeedingComponent;                                      // 0x0B28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWidgetComponent*                            HealthBarWidget;                                           // 0x0B30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPatrolComponent*                            Patrol;                                                    // 0x0B38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              TimelineHeightenedSenses_Opacity_1EFAF17B4589A86FDB5A4DBF424780C0; // 0x0B40(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              TimelineHeightenedSenses_Emissive_1EFAF17B4589A86FDB5A4DBF424780C0; // 0x0B44(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             TimelineHeightenedSenses__Direction_1EFAF17B4589A86FDB5A4DBF424780C0; // 0x0B48(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CCPD[0x7];                                     // 0x0B49(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          TimelineHeightenedSenses;                                  // 0x0B50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_1_BloodyBite_352DA62F4D7A8869132FD4B12C3940BD;    // 0x0B58(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_1_Veins_352DA62F4D7A8869132FD4B12C3940BD;         // 0x0B5C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_1_Desaturation_352DA62F4D7A8869132FD4B12C3940BD;  // 0x0B60(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_1__Direction_352DA62F4D7A8869132FD4B12C3940BD;    // 0x0B64(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FD92[0x3];                                     // 0x0B65(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_2;                                                // 0x0B68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_0_BloodyBite_73AE1FB04C8F7578E285F3A21FC09467;    // 0x0B70(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_0_Veins_73AE1FB04C8F7578E285F3A21FC09467;         // 0x0B74(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_0_Desaturation_73AE1FB04C8F7578E285F3A21FC09467;  // 0x0B78(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_73AE1FB04C8F7578E285F3A21FC09467;    // 0x0B7C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6AUT[0x3];                                     // 0x0B7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0B80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               Jump_Button_Down;                                          // 0x0B88(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Crouch_Button_Down;                                        // 0x0B89(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HMNC[0x6];                                     // 0x0B8A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                HSensesDelayHandle;                                        // 0x0B90(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTigerNearbySoundCueComponent*               HightPotenceBloodSoundComponent;                           // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*                    FaceMaterial;                                              // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                           PotencyParticle;                                           // 0x0BA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                              CashedPotencyParticle2;                                    // 0x0BB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                             NiagaraPotencyPath;                                        // 0x0BB8(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                             NiagaraPotencyPath2;                                       // 0x0BD0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UNiagaraSystem*                              CashedPotencyParticle;                                     // 0x0BE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SmoothTime;                                                // 0x0BF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_CMQY[0x4];                                     // 0x0BF4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          EntityVisorLODMaterial;                                    // 0x0BF8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                HeartBeatAkEventID;                                        // 0x0C00(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       MasqueradeBreakVO;                                         // 0x0C04(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_NPC.TBP_NPC_C");
		return ptr;
	}



	void RemoveAwarenessParticle();
	void GetStencilIndex(int* OutIndex);
	void ResetEntityVisor();
	void MakeEntityVisorVisibleInHS();
	void SetPotencyParticleActive(bool InIsActive);
	void DisableScreenCullSize();
	void InitHealthBar();
	void UpdateOutlineParameters();
	void RemoveHighPotenceBloodSoundComp();
	void CreateHighPotenceBloodSoundComp();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void TimelineHeightenedSenses__FinishedFunc();
	void TimelineHeightenedSenses__UpdateFunc();
	void SpawnBloodDecal();
	void OnLeaveHeightenedSenseArea();
	void OnEnterHeightenedSenseArea();
	void OnEnterHeightenedSenseAreaInitial();
	void OnPlayMeleeHitEffects(class UTigerMeleeWeapon* WeaponHitBy, const struct FVector& ImpactLocation, const struct FVector& HitDirection);
	void OnBloodPotencyChanged(Tiger_ETigerBloodPotency InBloodPotency);
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void PickHeartMeshes();
	void OnShowDamageAmount(const struct FVector& InHitLocation, const struct FLinearColor& InDamageColor, int InTotalDamageAmount, int InHealthDamageAmount, bool bInHasExtraHealth, bool bInHasShield, float InRangedDamageFalloffPercent);
	void ReceiveBeginPlay();
	void OnDeath();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnGainedSightOfLocalPlayer(class ATigerPlayer* InPlayer);
	void OnLostSightOfLocalPlayer(class ATigerPlayer* InPlayer);
	void BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_0_OnOutlineModeRefreshed__DelegateSignature(Tiger_ETigerOutlineMode HighestPrioOutline);
	void OnBecameClosestNpcWithPotencyInHeightenedSenses();
	void OnStoppedBeingClosestNpcWithPotencyInHeightenedSenses();
	void OnLocalPlayerUsedHS(bool bIsNowActive);
	void ToggleUIVisibility();
	void OnFeedingStart(int FeedingTicksLeft, int MaxFeedingTicks);
	void OnFeedingEnd();
	void OnSawLocalPlayerBreachMasquerade();
	void ExecuteUbergraph_TBP_NPC(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
