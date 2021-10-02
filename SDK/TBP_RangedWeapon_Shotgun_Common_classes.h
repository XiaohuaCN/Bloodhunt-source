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

// BlueprintGeneratedClass TBP_RangedWeapon_Shotgun_Common.TBP_RangedWeapon_Shotgun_Common_C
// 0x0000 (FullSize[0x0214] - InheritedSize[0x0214])
class UTBP_RangedWeapon_Shotgun_Common_C : public UTBP_RangedWeapon_Shotgun_Master_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_RangedWeapon_Shotgun_Common.TBP_RangedWeapon_Shotgun_Common_C");
		return ptr;
	}



	void OnHitAuthority(class ATigerCharacter* Instigator, class ATigerCharacter* Target);
	struct FVector CalculateBulletDirection(const struct FVector& InAimDirection, struct FTigerRangedRandomState* InOutRandomState, int InBulletIndex, class UTigerRangedWeaponComponent* InRangedWeaponComponent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
