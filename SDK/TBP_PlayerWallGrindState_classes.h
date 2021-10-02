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

// BlueprintGeneratedClass TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C
// 0x00A8 (FullSize[0x01E8] - InheritedSize[0x0140])
class UTBP_PlayerWallGrindState_C : public UTigerTraversalWallGrindState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0140(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TMap<struct FName, class UParticleSystemComponent*> ParticleSystems;                                           // 0x0148(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<struct FName, TEnumAsByte<PhysicsCore_EPhysicalSurface>> PhysicalMaterial;                                          // 0x0198(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C");
		return ptr;
	}



	void AssignPhysicalMaterial(const struct FHitResult& Hit, const struct FName& BoneName);
	void CheckForParticleSystemUpdate(const struct FName& BoneName, const struct FHitResult& HitResult, class ACharacter* Character);
	void DestroyParticleSystem(const struct FName& BoneName);
	void CreateParticleSystem(const struct FName& BoneName, const struct FHitResult& HitResult, class ACharacter* Character);
	void StartEffect(const struct FName& InAssociatedBoneName, const struct FHitResult& InHitResult, class ATigerCharacter* InTigerCharacter);
	void StopEffect(const struct FName& InAssociatedBoneName, class ATigerCharacter* InTigerCharacter);
	void UpdateEffect(const struct FName& InAssociatedBoneName, const struct FHitResult& InHitResult, class ATigerCharacter* InTigerCharacter);
	void ExecuteUbergraph_TBP_PlayerWallGrindState(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
