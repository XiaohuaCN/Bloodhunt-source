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

// BlueprintGeneratedClass TBP_UnseenPresenceBuff.TBP_UnseenPresenceBuff_C
// 0x0008 (FullSize[0x0290] - InheritedSize[0x0288])
class UTBP_UnseenPresenceBuff_C : public UTigerBuffUnseenPresence
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_UnseenPresenceBuff.TBP_UnseenPresenceBuff_C");
		return ptr;
	}



	void OnDeactivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void ExecuteUbergraph_TBP_UnseenPresenceBuff(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
