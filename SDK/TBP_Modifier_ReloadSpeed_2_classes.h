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

// BlueprintGeneratedClass TBP_Modifier_ReloadSpeed_2.TBP_Modifier_ReloadSpeed_1_C
// 0x000C (FullSize[0x0034] - InheritedSize[0x0028])
class UTBP_Modifier_ReloadSpeed_1_C : public UTigerRangedWeaponModModifier
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              ReloadSpeedMultiplier;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Modifier_ReloadSpeed_2.TBP_Modifier_ReloadSpeed_1_C");
		return ptr;
	}



	void OnModEquipped(class UTigerEquippedModModifierValues* Modifiers);
	void OnModUnequipped(class UTigerEquippedModModifierValues* Modifiers);
	void ExecuteUbergraph_TBP_Modifier_ReloadSpeed_2(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
