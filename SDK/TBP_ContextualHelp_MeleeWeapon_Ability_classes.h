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

// BlueprintGeneratedClass TBP_ContextualHelp_MeleeWeapon_Ability.TBP_ContextualHelp_MeleeWeapon_Ability_C
// 0x000C (FullSize[0x00D0] - InheritedSize[0x00C4])
class UTBP_ContextualHelp_MeleeWeapon_Ability_C : public UTBP_ContextualHelpBase_C
{
public:
	unsigned char                                      UnknownData_MG5G[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ContextualHelp_MeleeWeapon_Ability.TBP_ContextualHelp_MeleeWeapon_Ability_C");
		return ptr;
	}



	void OnPlayerSpawned(class ATigerPlayer* InTigerPlayer);
	void MeleeWeaponEquipped();
	void NonMeleeWeaponEquipped();
	void ExecuteUbergraph_TBP_ContextualHelp_MeleeWeapon_Ability(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
