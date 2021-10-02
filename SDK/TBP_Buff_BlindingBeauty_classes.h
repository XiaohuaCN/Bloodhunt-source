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

// BlueprintGeneratedClass TBP_Buff_BlindingBeauty.TBP_Buff_BlindingBeauty_C
// 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
class UTBP_Buff_BlindingBeauty_C : public UTigerBuffBlindingBeauty
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Buff_BlindingBeauty.TBP_Buff_BlindingBeauty_C");
		return ptr;
	}



	void OnActivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void ExecuteUbergraph_TBP_Buff_BlindingBeauty(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
