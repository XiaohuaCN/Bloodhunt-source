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

// BlueprintGeneratedClass TBP_Buff_HolyincenseShield.TBP_Buff_HolyincenseShield_C
// 0x0008 (FullSize[0x0278] - InheritedSize[0x0270])
class UTBP_Buff_HolyincenseShield_C : public UTigerBuffUnholyStimulant
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0270(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Buff_HolyincenseShield.TBP_Buff_HolyincenseShield_C");
		return ptr;
	}



	void OnActivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void OnDeactivated(class ATigerCharacter* InBuffOwner, class ATigerCharacter* InBuffCaster);
	void ExecuteUbergraph_TBP_Buff_HolyincenseShield(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
