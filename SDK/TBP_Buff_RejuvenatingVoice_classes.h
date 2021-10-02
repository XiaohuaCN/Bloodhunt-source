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

// BlueprintGeneratedClass TBP_Buff_RejuvenatingVoice.TBP_Buff_RejuvenatingVoice_C
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
class UTBP_Buff_RejuvenatingVoice_C : public UTigerBuffRejuvenatingVoice
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Buff_RejuvenatingVoice.TBP_Buff_RejuvenatingVoice_C");
		return ptr;
	}



	void OnHealStop(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void OnHealStart(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void OnDeactivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void ExecuteUbergraph_TBP_Buff_RejuvenatingVoice(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
