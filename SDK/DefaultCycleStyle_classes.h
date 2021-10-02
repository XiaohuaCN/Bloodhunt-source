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

// BlueprintGeneratedClass DefaultCycleStyle.DefaultCycleStyle_C
// 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
class UDefaultCycleStyle_C : public UTigerWeaponCycleStyle
{
public:
	int                                                DirectionInt;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OutSlot;                                                   // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayerController*                      PlayerController;                                          // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass DefaultCycleStyle.DefaultCycleStyle_C");
		return ptr;
	}



	Tiger_ETigerWeaponSlot DetermineNextWeaponSlot(class ATigerPlayerController* InPlayerController, Tiger_ETigerWeaponCycleDirection InDirection);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
