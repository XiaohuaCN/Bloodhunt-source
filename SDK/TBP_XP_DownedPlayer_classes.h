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

// BlueprintGeneratedClass TBP_XP_DownedPlayer.TBP_XP_DownedPlayer_C
// 0x0008 (FullSize[0x0058] - InheritedSize[0x0050])
class UTBP_XP_DownedPlayer_C : public UTigerExperienceEvent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0050(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_XP_DownedPlayer.TBP_XP_DownedPlayer_C");
		return ptr;
	}



	void GetExperienceAmount(class ATigerPlayer* Player, class ATigerCharacter* EventTiedCharacter, Tiger_EMatchBalanceMode BalanceMode, int* OutOwnPlayerExperienceGain, int* OutExperienceToAddToEveryGroupMemberIncludingSelf);
	void ExecuteUbergraph_TBP_XP_DownedPlayer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
