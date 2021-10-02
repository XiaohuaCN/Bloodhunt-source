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

// BlueprintGeneratedClass TBP_ContextualHelpBase.TBP_ContextualHelpBase_C
// 0x0014 (FullSize[0x00C4] - InheritedSize[0x00B0])
class UTBP_ContextualHelpBase_C : public UTigerContextualHelp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	int                                                ShowCountRemaining;                                        // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       Additional_Input;                                          // 0x00BC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ContextualHelpBase.TBP_ContextualHelpBase_C");
		return ptr;
	}



	void SetWantsToShowOff();
	void SetWantsToShow();
	void HasReachedMaxLimitInMatch(bool* bLimitReached);
	void OnHide(class ATigerPlayerController* InTigerPlayerController);
	void ExecuteUbergraph_TBP_ContextualHelpBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
