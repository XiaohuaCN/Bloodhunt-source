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

// BlueprintGeneratedClass TBP_WallJumpEffect.TBP_WallJumpEffect_C
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTBP_WallJumpEffect_C : public UTigerCharacterEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_WallJumpEffect.TBP_WallJumpEffect_C");
		return ptr;
	}



	void HandleVFX(class UObject* WorldContextObject, class UParticleSystem* ParticleSystem, class UMaterialInterface* Decal, const struct FVector& VFXLocation, const struct FRotator& ParticleRotation, const struct FRotator& DecalRotation);
	void ApplyWithSocket(class ATigerCharacter* Character, const struct FName& SocketName);
	void ExecuteUbergraph_TBP_WallJumpEffect(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
