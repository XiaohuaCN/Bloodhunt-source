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

// BlueprintGeneratedClass DirectionalStyle.DirectionalStyle_C
// 0x0001 (FullSize[0x0049] - InheritedSize[0x0048])
class UDirectionalStyle_C : public UTigerWeaponCycleStyle
{
public:
	Tiger_ETigerWeaponSlot                             OutWeaponSlot;                                             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DirectionalStyle.DirectionalStyle_C");
		return ptr;
	}



	Tiger_ETigerWeaponSlot DetermineNextWeaponSlot(class ATigerPlayerController* InPlayerController, Tiger_ETigerWeaponCycleDirection InDirection);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
