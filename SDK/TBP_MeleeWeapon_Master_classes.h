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

// BlueprintGeneratedClass TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C
// 0x0059 (FullSize[0x01F1] - InheritedSize[0x0198])
class UTBP_MeleeWeapon_Master_C : public UTigerMeleeWeapon
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0198(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TMap<TEnumAsByte<ENUM_MeleeWeaponCategories_ENUM_MeleeWeaponCategories>, struct FName> WeaponToAudioName;                                         // 0x01A0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<ENUM_MeleeWeaponCategories_ENUM_MeleeWeaponCategories> AnimMeleeWeaponCategory;                                   // 0x01F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C");
		return ptr;
	}



	void GetMeleeWeaponCategory(TEnumAsByte<ENUM_MeleeWeaponCategories_ENUM_MeleeWeaponCategories>* MeleeWeaponCategory);
	void OnWorldObjectHit(class ATigerCharacter* InInstigator, const struct FHitResult& InWorldObjectHitResult, const struct FVector& InSwingDirection);
	void OnHit(class ATigerCharacter* Instigator, class ATigerCharacter* Target, Tiger_ETigerWeaponMeleeAttackType AttackType, float Damage);
	void ExecuteUbergraph_TBP_MeleeWeapon_Master(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
