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

// BlueprintGeneratedClass TBP_ElysiumGameMode.TBP_ElysiumGameMode_C
// 0x0010 (FullSize[0x04E8] - InheritedSize[0x04D8])
class ATBP_ElysiumGameMode_C : public ATigerElysiumGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ElysiumGameMode.TBP_ElysiumGameMode_C");
		return ptr;
	}



	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_TBP_ElysiumGameMode(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
