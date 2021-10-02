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

// BlueprintGeneratedClass BPI_MeleeWeapon.BPI_MeleeWeapon_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_MeleeWeapon_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MeleeWeapon.BPI_MeleeWeapon_C");
		return ptr;
	}



	void GetMeleeWeaponCategory(TEnumAsByte<ENUM_MeleeWeaponCategories_ENUM_MeleeWeaponCategories>* MeleeWeaponCategory);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
