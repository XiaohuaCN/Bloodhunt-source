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

// BlueprintGeneratedClass TBP_XP_KilledPlayerBloodHunted.TBP_XP_KilledPlayerBloodHunted_C
// 0x000C (FullSize[0x005C] - InheritedSize[0x0050])
class UTBP_XP_KilledPlayerBloodHunted_C : public UTigerExperienceEvent
{
public:
	float                                              XpPerLevelOfDiablorizer;                                   // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ExperienceTakenFromVictimMultipiyer;                       // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FlatExperienceeBonus;                                      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_XP_KilledPlayerBloodHunted.TBP_XP_KilledPlayerBloodHunted_C");
		return ptr;
	}



	void GetExperienceAmount(class ATigerPlayer* Player, class ATigerCharacter* EventTiedCharacter, Tiger_EMatchBalanceMode BalanceMode, int* OutOwnPlayerExperienceGain, int* OutExperienceToAddToEveryGroupMemberIncludingSelf);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
