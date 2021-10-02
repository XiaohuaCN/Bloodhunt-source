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
// Parameters
//---------------------------------------------------------------------------

// Function TBFL_UI_Text.TBFL_UI_Text_C.SetTextCapitalized
struct UTBFL_UI_Text_C_SetTextCapitalized_Params
{
	class URichTextBlock*                              InTextBlock;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InText;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Timespan As UI Text For Store Entries
struct UTBFL_UI_Text_C_Get_Timespan_As_UI_Text_For_Store_Entries_Params
{
	struct FTimespan                                   InTimeStamp;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.GetMidasResponseText
struct UTBFL_UI_Text_C_GetMidasResponseText_Params
{
	TEnumAsByte<Shark_EShMidasResultCode>              InMidasResult;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.GetBuyResponseText
struct UTBFL_UI_Text_C_GetBuyResponseText_Params
{
	Tiger_ETigerBuyStoreEntryResponseCode              InResponse;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.GetSeasonExperienceSourceUIText
struct UTBFL_UI_Text_C_GetSeasonExperienceSourceUIText_Params
{
	Tiger_ETigerSeasonExperienceSource                 InExperieceSource;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InMatchPlacement;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       OutText;                                                   // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.Int To Digital Time Text
struct UTBFL_UI_Text_C_Int_To_Digital_Time_Text_Params
{
	int                                                InValue;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       AsDigitalTime;                                             // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Timespan As UI Text
struct UTBFL_UI_Text_C_Get_Timespan_As_UI_Text_Params
{
	struct FTimespan                                   InTimespan;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Formatted_Timespan;                                        // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Discipline Slot From Challenge Requirement
struct UTBFL_UI_Text_C_Get_Discipline_Slot_From_Challenge_Requirement_Params
{
	struct FTigerChallengeRequirementDisciplineSlot    InChallengeRequirement;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Highlighted_Text;                                          // 0x0018(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Balance Mode From Challenge Requirement
struct UTBFL_UI_Text_C_Get_Balance_Mode_From_Challenge_Requirement_Params
{
	struct FTigerChallengeRequirementGameMode          Mode_Requirement;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Game_Mode;                                                 // 0x0018(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Clan Name from Challenge Requirement
struct UTBFL_UI_Text_C_Get_Clan_Name_from_Challenge_Requirement_Params
{
	struct FTigerChallengeRequirementClan              Clan_Requirement;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0018(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Weapon Name From Challenge Requirement
struct UTBFL_UI_Text_C_Get_Weapon_Name_From_Challenge_Requirement_Params
{
	struct FTigerChallengeRequirementWeaponType        ChallengeRequirement;                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                            // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Weapon_Name;                                               // 0x0020(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.GetBalanceModeAsUIText
struct UTBFL_UI_Text_C_GetBalanceModeAsUIText_Params
{
	Tiger_EMatchBalanceMode                            InBalanceMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.GetGroupModeAsUIText
struct UTBFL_UI_Text_C_GetGroupModeAsUIText_Params
{
	Tiger_ETigerGroupingMode                           GameGroupMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       GroupModeAsText;                                           // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.GetClanNameAsUIText
struct UTBFL_UI_Text_C_GetClanNameAsUIText_Params
{
	Tiger_ETigerClan                                   InClanEnum;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ClanName;                                                  // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.Get Challenge Target Value
struct UTBFL_UI_Text_C_Get_Challenge_Target_Value_Params
{
	class UTigerChallenge*                             TigerChallenge;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       FormattedText;                                             // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.GetBloodPotencyInUIText
struct UTBFL_UI_Text_C_GetBloodPotencyInUIText_Params
{
	Tiger_ETigerBloodPotency                           BloodPotency;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       BloodPotencyAsText;                                        // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.GetNpcTypeInUIText
struct UTBFL_UI_Text_C_GetNpcTypeInUIText_Params
{
	Tiger_ETigerNPCType                                NPCType;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       NPCTypeAsText;                                             // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_UI_Text.TBFL_UI_Text_C.Wrap Text in Markup
struct UTBFL_UI_Text_C_Wrap_Text_in_Markup_Params
{
	struct FName                                       StyleName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       TextToFormat;                                              // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                                     __WorldContext;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       FormattedText;                                             // 0x0028(0x0018)  (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
