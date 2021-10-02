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

// BlueprintGeneratedClass TBP_Modifier_EnableFireModeSwitch.TBP_Modifier_EnableFireModeSwitch_C
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UTBP_Modifier_EnableFireModeSwitch_C : public UTigerRangedWeaponModModifier
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0028(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Modifier_EnableFireModeSwitch.TBP_Modifier_EnableFireModeSwitch_C");
		return ptr;
	}



	void OnModEquipped(class UTigerEquippedModModifierValues* Modifiers);
	void OnModUnequipped(class UTigerEquippedModModifierValues* Modifiers);
	void ExecuteUbergraph_TBP_Modifier_EnableFireModeSwitch(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
