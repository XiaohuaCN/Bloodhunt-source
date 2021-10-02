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

// BlueprintGeneratedClass TBP_XP_FeedingEntity.TBP_XP_FeedingEntity_C
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UTBP_XP_FeedingEntity_C : public UTigerExperienceEvent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_XP_FeedingEntity.TBP_XP_FeedingEntity_C");
		return ptr;
	}



	void GetExperienceAmount(class ATigerPlayer* Player, class ATigerCharacter* EventTiedCharacter, Tiger_EMatchBalanceMode BalanceMode, int* OutOwnPlayerExperienceGain, int* OutExperienceToAddToEveryGroupMemberIncludingSelf);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
