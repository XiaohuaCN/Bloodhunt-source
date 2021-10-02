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

// BlueprintGeneratedClass S_GrimoireCardTransition.SequenceDirector_C
// 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
class USequenceDirector_C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0030(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass S_GrimoireCardTransition.SequenceDirector_C");
		return ptr;
	}



	void SequenceEvent__ENTRYPOINTSequenceDirector_3(class ATBP_Grimoire_Card_C* TBP_Grimoire_Card);
	void SequenceEvent__ENTRYPOINTSequenceDirector_2(class ATBP_Grimoire_Card_C* TBP_Grimoire_Card);
	void SequenceEvent__ENTRYPOINTSequenceDirector_1(class ATBP_Grimoire_Card_C* TBP_Grimoire_Card);
	void Enable_Floating(class ATBP_Grimoire_Card_C* TBP_Grimoire_Card);
	void Disable_Floating(class ATBP_Grimoire_Card_C* TBP_Grimoire_Card);
	void ExecuteUbergraph_SequenceDirector(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
