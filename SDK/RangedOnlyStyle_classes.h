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

// BlueprintGeneratedClass RangedOnlyStyle.RangedOnlyStyle_C
// 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
class URangedOnlyStyle_C : public UTigerWeaponCycleStyle
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass RangedOnlyStyle.RangedOnlyStyle_C");
		return ptr;
	}



	Tiger_ETigerWeaponSlot DetermineNextWeaponSlot(class ATigerPlayerController* InPlayerController, Tiger_ETigerWeaponCycleDirection InDirection);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
