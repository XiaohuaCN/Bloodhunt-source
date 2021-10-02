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

// BlueprintGeneratedClass TBFL_UI_Text.TBFL_UI_Text_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTBFL_UI_Text_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBFL_UI_Text.TBFL_UI_Text_C");
		return ptr;
	}



	void STATIC_SetTextCapitalized(class URichTextBlock* InTextBlock, const struct FText& InText, class UObject* __WorldContext);
	void STATIC_Get_Timespan_As_UI_Text_For_Store_Entries(const struct FTimespan& InTimeStamp, class UObject* __WorldContext, struct FText* Text);
	void STATIC_GetMidasResponseText(TEnumAsByte<Shark_EShMidasResultCode> InMidasResult, class UObject* __WorldContext, struct FText* Text);
	void STATIC_GetBuyResponseText(Tiger_ETigerBuyStoreEntryResponseCode InResponse, class UObject* __WorldContext, struct FText* Text);
	void STATIC_GetSeasonExperienceSourceUIText(Tiger_ETigerSeasonExperienceSource InExperieceSource, int InMatchPlacement, class UObject* __WorldContext, struct FText* OutText);
	void STATIC_Int_To_Digital_Time_Text(int InValue, class UObject* __WorldContext, struct FText* AsDigitalTime);
	void STATIC_Get_Timespan_As_UI_Text(const struct FTimespan& InTimespan, class UObject* __WorldContext, struct FText* Formatted_Timespan);
	void STATIC_Get_Discipline_Slot_From_Challenge_Requirement(const struct FTigerChallengeRequirementDisciplineSlot& InChallengeRequirement, class UObject* __WorldContext, struct FText* Highlighted_Text);
	void STATIC_Get_Balance_Mode_From_Challenge_Requirement(const struct FTigerChallengeRequirementGameMode& Mode_Requirement, class UObject* __WorldContext, struct FText* Game_Mode);
	void STATIC_Get_Clan_Name_from_Challenge_Requirement(const struct FTigerChallengeRequirementClan& Clan_Requirement, class UObject* __WorldContext, struct FText* Text);
	void STATIC_Get_Weapon_Name_From_Challenge_Requirement(const struct FTigerChallengeRequirementWeaponType& ChallengeRequirement, class UObject* __WorldContext, struct FText* Weapon_Name);
	void STATIC_GetBalanceModeAsUIText(Tiger_EMatchBalanceMode InBalanceMode, class UObject* __WorldContext, struct FText* Text);
	void STATIC_GetGroupModeAsUIText(Tiger_ETigerGroupingMode GameGroupMode, class UObject* __WorldContext, struct FText* GroupModeAsText);
	void STATIC_GetClanNameAsUIText(Tiger_ETigerClan InClanEnum, class UObject* __WorldContext, struct FText* ClanName);
	void STATIC_Get_Challenge_Target_Value(class UTigerChallenge* TigerChallenge, class UObject* __WorldContext, struct FText* FormattedText);
	void STATIC_GetBloodPotencyInUIText(Tiger_ETigerBloodPotency BloodPotency, class UObject* __WorldContext, struct FText* BloodPotencyAsText);
	void STATIC_GetNpcTypeInUIText(Tiger_ETigerNPCType NPCType, class UObject* __WorldContext, struct FText* NPCTypeAsText);
	void STATIC_Wrap_Text_in_Markup(const struct FName& StyleName, const struct FText& TextToFormat, class UObject* __WorldContext, struct FText* FormattedText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
