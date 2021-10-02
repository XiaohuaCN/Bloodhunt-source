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

// BlueprintGeneratedClass TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C
// 0x0019 (FullSize[0x0201] - InheritedSize[0x01E8])
class UTBP_RangedWeapon_Master_C : public UTigerRangedWeapon
{
public:
	class UClass*                                      CrouchingAimingCameraPreset;                               // 0x01E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SpreadOfCurrentShot;                                       // 0x01F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Slowed_Time;                                               // 0x01FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ENUM_RangedWeaponCategories_ENUM_RangedWeaponCategories> AnimRangedWeaponCategory;                                  // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C");
		return ptr;
	}



	void GetRangedWeaponCategory(TEnumAsByte<ENUM_RangedWeaponCategories_ENUM_RangedWeaponCategories>* RangedWeaponCategory);
	struct FVector StandardSpread_16(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector Horizontal_Line(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector Tri(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	void OnHitAuthority(class ATigerCharacter* Instigator, class ATigerCharacter* Target);
	struct FVector Vertical_Line(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector StandardSpread_8(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector StandardSpread_12(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector NeoArmstrongCycloneJetArmstrongCannon(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector ProjectileDirectionList(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector DefaultShotgunSpread(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector RowBasedGrid(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, bool ShouldBeInsideSpreadRadius, int Rows);
	struct FVector SmileyFace__D(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir);
	struct FVector CircularSpread(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir);
	struct FVector TrueShotgunSpread(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState);
	struct FVector Triangle(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
