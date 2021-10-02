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

// BlueprintGeneratedClass TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C
// 0x0010 (FullSize[0x00D4] - InheritedSize[0x00C4])
class UTBP_ContextualHelp_Consumable_LowHPReminder_C : public UTBP_ContextualHelpBase_C
{
public:
	unsigned char                                      UnknownData_1EQ4[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              LowHealthTriggerLimit;                                     // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C");
		return ptr;
	}



	void OnPlayerSpawned(class ATigerPlayer* InTigerPlayer);
	void OnHealthChanged(class ATigerPlayer* InPlayer, float InOldHealth, float InNewHealth);
	void ExecuteUbergraph_TBP_ContextualHelp_Consumable_LowHPReminder(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
