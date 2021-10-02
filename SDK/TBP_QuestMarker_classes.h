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

// BlueprintGeneratedClass TBP_QuestMarker.TBP_QuestMarker_C
// 0x0008 (FullSize[0x0250] - InheritedSize[0x0248])
class ATBP_QuestMarker_C : public ATigerWorldMarker
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0248(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_QuestMarker.TBP_QuestMarker_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TBP_QuestMarker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
