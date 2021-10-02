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

// BlueprintGeneratedClass TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C
// 0x001C (FullSize[0x00E0] - InheritedSize[0x00C4])
class UTBP_ContextualHelp_HSense_C : public UTBP_ContextualHelpBase_C
{
public:
	unsigned char                                      UnknownData_KR8C[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              RetriggerTime;                                             // 0x00D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_LWLN[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                DelayTimer;                                                // 0x00D8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C");
		return ptr;
	}



	void OnHide(class ATigerPlayerController* InTigerPlayerController);
	void OnPlayerSpawned(class ATigerPlayer* InTigerPlayer);
	void OnHeightenedSensesUsed(bool bIsNowActive);
	void ResetWantsToShow();
	void ResetWantsToShowDelayed();
	void ExecuteUbergraph_TBP_ContextualHelp_HSense(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
