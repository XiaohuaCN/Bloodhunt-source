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

// BlueprintGeneratedClass TBP_BulletProjectile.TBP_BulletProjectile_C
// 0x0105 (FullSize[0x03D5] - InheritedSize[0x02D0])
class ATBP_BulletProjectile_C : public ATigerProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02D0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*                    Decal_Concrete;                                            // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StartPosition;                                             // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_P0PK[0x4];                                     // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FSoftObjectPath                             NiagaraTrailPath;                                          // 0x02F0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSoftObjectPath                             RemoteNiagaraTrailPath;                                    // 0x0308(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UNiagaraSystem*                              CachedTrailEffect;                                         // 0x0320(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     StartVelocity;                                             // 0x0328(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     LastTraceLocation;                                         // 0x0334(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalTraces;                                               // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     TraceEndLocation;                                          // 0x0344(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TraceColor;                                                // 0x0350(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SmokeWidth;                                                // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SmokeLifetime;                                             // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SmokeVisibility;                                           // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DotSize;                                                   // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SmokeCurlAmount;                                           // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_PM2L[0x4];                                     // 0x0374(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<TEnumAsByte<PhysicsCore_EPhysicalSurface>, struct FName> SurfaceToAudioName;                                        // 0x0378(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              TraceLifetime;                                             // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TraceWidth;                                                // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FlyByAkEventID;                                            // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasSmokeTrail;                                             // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_BulletProjectile.TBP_BulletProjectile_C");
		return ptr;
	}



	void TriggerEffects(class UPhysicalMaterial* PhysMaterial, const struct FVector& ImpactPoint, class UPrimitiveComponent* Hit_Component, const struct FVector& Normal, const struct FVector& ProjectileDirection);
	void HandleParticlesSpawning(const struct FVector& Impact_Point, const struct FRotator& Rotation, TEnumAsByte<PhysicsCore_EPhysicalSurface> Surface_Type, class UPrimitiveComponent* Potential_Scene_Component);
	void HandleDecalSpawning(const struct FVector& WorldLocation, const struct FRotator& WorldRotation, class UPrimitiveComponent* Potential_Scene_Component, TEnumAsByte<PhysicsCore_EPhysicalSurface> Surface_Type);
	void TryPlayHitWallSound(class UPrimitiveComponent* Hit_Component);
	void ReceiveBeginPlay();
	void TriggerHitEffects(const struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void OnReactivate();
	void ExecuteUbergraph_TBP_BulletProjectile(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
