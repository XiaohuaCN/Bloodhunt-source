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

// BlueprintGeneratedClass TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C
// 0x0013 (FullSize[0x0214] - InheritedSize[0x0201])
class UTBP_RangedWeapon_Shotgun_Master_C : public UTBP_RangedWeapon_Master_C
{
public:
	unsigned char                                      UnknownData_5C0Z[0x3];                                     // 0x0201(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     SpreadOfCurrentShot_1;                                     // 0x0204(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ShotIndex;                                                 // 0x0210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C");
		return ptr;
	}



	void Demo(const struct FVector& AimDirection, struct FTigerRangedRandomState* RandomState, int BulletIndex, class UTigerRangedWeaponComponent* RangedWeaponComponent, float NoiseMagnitudeInDegrees, struct FVector* OutDirection);
	struct FVector CalculateBulletDirection(const struct FVector& InAimDirection, struct FTigerRangedRandomState* InOutRandomState, int InBulletIndex, class UTigerRangedWeaponComponent* InRangedWeaponComponent);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
