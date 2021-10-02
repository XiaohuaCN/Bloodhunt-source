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

// BlueprintGeneratedClass TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C
// 0x00B0 (FullSize[0x0350] - InheritedSize[0x02A0])
class ATBP_ScoutingFamiliar_C : public ATigerFamiliarScout
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    BatProjectileUpgrade;                                      // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            ScanSphere;                                                // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             Scene;                                                     // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    BatProjectile;                                             // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ATigerCharacter*>                     RevealedCharacters;                                        // 0x02C8(0x0010) (Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class UAkAudioEvent*                               AKEvent_StartScanning;                                     // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ScoutEchoLocationSphereEffect;                             // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ForwardVector;                                             // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_L6XR[0x4];                                     // 0x02F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkAudioEvent*                               AKEvent_StopScanning;                                      // 0x02F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    ScoutBatEffect;                                            // 0x0300(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Projectile_Smoke_Trail;                                    // 0x0308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ScanEffectAkEventID;                                       // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VU65[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             NiagaraParticlePath;                                       // 0x0318(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UNiagaraSystem*                              CachedEffect;                                              // 0x0330(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                           NiagaraBats;                                               // 0x0338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Discipline_Scout_WorldMarker_C*      WorldMarkerWidget;                                         // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayer*                                CachedPlayer;                                              // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C");
		return ptr;
	}



	void CreateInWorldWidget(class APawn* OwningPawn);
	void Ravaging_Bats_Trait(class AActor* DamagedActor, class AActor* DamageCauser, class ATigerPlayer* Player);
	void StartScanAudio();
	void ColorCodeEffect(class UParticleSystemComponent* ParticleComponentToColor, bool bShouldOverrideDefaultColor, const struct FLinearColor& StandardColorOverride, const struct FLinearColor& EnemyColorOverride, bool bShouldOverrideEnemyCoor);
	void SpawnEmitterColorCoded(class UParticleSystem* InParticleAssetToSpawn, const struct FTransform& InRelativeTransform, const struct FName& InAttachPointName, class USceneComponent* InComponentAttachedTo, bool bInShouldSpawnForEnemy, bool bInShouldSpawnForAlly, class UParticleSystemComponent** SpawnedParticle);
	void Deactivate_Projectile_Effects();
	void Activate_Projectile_Effects();
	void Spawn_Projectile_Trail();
	void Despawn_Projectile_Trail();
	void Try_Hide_World_Marker_Detection();
	void Try_Show_World_Marker_Detection();
	void GetWorldMarkerWidget(bool* bIsWorldMarkerClass, class UTBP_UI_Discipline_Scout_WorldMarker_C** WorldMarker);
	void Toggle_WorldMarker_Detection_State();
	void IsCharacterFriendlyWithDisciplineCaster(class ATigerCharacter* Potentially_Friendly_Character, bool* Is_Friendly);
	void IsLocallyControlled(bool* Is_Locally_Controlled);
	void GetScoutingDistanceToOwnerLimit(float* MaxScoutingDistance);
	void AddRevealedChar(class ATigerCharacter* Character, float Time);
	void PlaySound(class UAkAudioEvent* Audio);
	void IsServerOrOwner(bool* Is_Owner_Or_Server);
	void BndEvt__ScanSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__ScanSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void ActivateScouting();
	void ActivateFeedback();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void TickRevealedCharacters();
	void OnTargetLocationChanged();
	void OnScoutStartedReturnToOwner();
	void OnArrivedAtOwner();
	void BatDestroy();
	void ExecuteUbergraph_TBP_ScoutingFamiliar(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
