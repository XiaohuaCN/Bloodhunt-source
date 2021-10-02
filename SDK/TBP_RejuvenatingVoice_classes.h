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

// BlueprintGeneratedClass TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C
// 0x000C (FullSize[0x0144] - InheritedSize[0x0138])
class UTBP_RejuvenatingVoice_C : public UTigerDisciplineRejuvenatingVoice
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0138(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              HealRadius;                                                // 0x0140(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C");
		return ptr;
	}



	void OnPlayerEnter(class ATigerPlayer* InPlayer);
	void OnPlayerExit(class ATigerPlayer* InPlayer);
	void OnHealStart();
	void OnHealStop();
	void OnHealPulse(bool bInOnProjection);
	void ExecuteUbergraph_TBP_RejuvenatingVoice(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
