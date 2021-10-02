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

// BlueprintGeneratedClass TBP_AI_RunDefaultBehaviorTask.TBP_AI_RunDefaultBehaviorTask_C
// 0x0008 (FullSize[0x00B0] - InheritedSize[0x00A8])
class UTBP_AI_RunDefaultBehaviorTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_AI_RunDefaultBehaviorTask.TBP_AI_RunDefaultBehaviorTask_C");
		return ptr;
	}



	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_TBP_AI_RunDefaultBehaviorTask(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
