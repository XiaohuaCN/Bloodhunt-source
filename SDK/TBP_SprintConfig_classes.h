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

// BlueprintGeneratedClass TBP_SprintConfig.TBP_SprintConfig_C
// 0x0008 (FullSize[0x0120] - InheritedSize[0x0118])
class UTBP_SprintConfig_C : public UTigerSprintConfig
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0118(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_SprintConfig.TBP_SprintConfig_C");
		return ptr;
	}



	void OnSprintDelayCompleted(class ATigerPlayer* InPlayer);
	void ExecuteUbergraph_TBP_SprintConfig(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
