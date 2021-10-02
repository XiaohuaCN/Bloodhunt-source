// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.SetTextCapitalized
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class URichTextBlock*                              InTextBlock                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_UI_Text_C::STATIC_SetTextCapitalized(class URichTextBlock* InTextBlock, const struct FText& InText, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.SetTextCapitalized");

	UTBFL_UI_Text_C_SetTextCapitalized_Params params;
	params.InTextBlock = InTextBlock;
	params.InText = InText;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.Get Timespan As UI Text For Store Entries
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTimespan                                   InTimeStamp                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_Get_Timespan_As_UI_Text_For_Store_Entries(const struct FTimespan& InTimeStamp, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Timespan As UI Text For Store Entries");

	UTBFL_UI_Text_C_Get_Timespan_As_UI_Text_For_Store_Entries_Params params;
	params.InTimeStamp = InTimeStamp;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.GetMidasResponseText
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<Shark_EShMidasResultCode>              InMidasResult                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_GetMidasResponseText(TEnumAsByte<Shark_EShMidasResultCode> InMidasResult, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.GetMidasResponseText");

	UTBFL_UI_Text_C_GetMidasResponseText_Params params;
	params.InMidasResult = InMidasResult;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.GetBuyResponseText
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerBuyStoreEntryResponseCode              InResponse                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_GetBuyResponseText(Tiger_ETigerBuyStoreEntryResponseCode InResponse, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.GetBuyResponseText");

	UTBFL_UI_Text_C_GetBuyResponseText_Params params;
	params.InResponse = InResponse;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.GetSeasonExperienceSourceUIText
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerSeasonExperienceSource                 InExperieceSource                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InMatchPlacement                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       OutText                                                    (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_GetSeasonExperienceSourceUIText(Tiger_ETigerSeasonExperienceSource InExperieceSource, int InMatchPlacement, class UObject* __WorldContext, struct FText* OutText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.GetSeasonExperienceSourceUIText");

	UTBFL_UI_Text_C_GetSeasonExperienceSourceUIText_Params params;
	params.InExperieceSource = InExperieceSource;
	params.InMatchPlacement = InMatchPlacement;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.Int To Digital Time Text
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       AsDigitalTime                                              (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_Int_To_Digital_Time_Text(int InValue, class UObject* __WorldContext, struct FText* AsDigitalTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.Int To Digital Time Text");

	UTBFL_UI_Text_C_Int_To_Digital_Time_Text_Params params;
	params.InValue = InValue;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsDigitalTime != nullptr)
		*AsDigitalTime = params.AsDigitalTime;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.Get Timespan As UI Text
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTimespan                                   InTimespan                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Formatted_Timespan                                         (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_Get_Timespan_As_UI_Text(const struct FTimespan& InTimespan, class UObject* __WorldContext, struct FText* Formatted_Timespan)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Timespan As UI Text");

	UTBFL_UI_Text_C_Get_Timespan_As_UI_Text_Params params;
	params.InTimespan = InTimespan;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Formatted_Timespan != nullptr)
		*Formatted_Timespan = params.Formatted_Timespan;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.Get Discipline Slot From Challenge Requirement
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTigerChallengeRequirementDisciplineSlot    InChallengeRequirement                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Highlighted_Text                                           (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_Get_Discipline_Slot_From_Challenge_Requirement(const struct FTigerChallengeRequirementDisciplineSlot& InChallengeRequirement, class UObject* __WorldContext, struct FText* Highlighted_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Discipline Slot From Challenge Requirement");

	UTBFL_UI_Text_C_Get_Discipline_Slot_From_Challenge_Requirement_Params params;
	params.InChallengeRequirement = InChallengeRequirement;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Highlighted_Text != nullptr)
		*Highlighted_Text = params.Highlighted_Text;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.Get Balance Mode From Challenge Requirement
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTigerChallengeRequirementGameMode          Mode_Requirement                                           (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Game_Mode                                                  (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_Get_Balance_Mode_From_Challenge_Requirement(const struct FTigerChallengeRequirementGameMode& Mode_Requirement, class UObject* __WorldContext, struct FText* Game_Mode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Balance Mode From Challenge Requirement");

	UTBFL_UI_Text_C_Get_Balance_Mode_From_Challenge_Requirement_Params params;
	params.Mode_Requirement = Mode_Requirement;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Game_Mode != nullptr)
		*Game_Mode = params.Game_Mode;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.Get Clan Name from Challenge Requirement
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTigerChallengeRequirementClan              Clan_Requirement                                           (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_Get_Clan_Name_from_Challenge_Requirement(const struct FTigerChallengeRequirementClan& Clan_Requirement, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Clan Name from Challenge Requirement");

	UTBFL_UI_Text_C_Get_Clan_Name_from_Challenge_Requirement_Params params;
	params.Clan_Requirement = Clan_Requirement;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.Get Weapon Name From Challenge Requirement
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTigerChallengeRequirementWeaponType        ChallengeRequirement                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Weapon_Name                                                (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_Get_Weapon_Name_From_Challenge_Requirement(const struct FTigerChallengeRequirementWeaponType& ChallengeRequirement, class UObject* __WorldContext, struct FText* Weapon_Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Weapon Name From Challenge Requirement");

	UTBFL_UI_Text_C_Get_Weapon_Name_From_Challenge_Requirement_Params params;
	params.ChallengeRequirement = ChallengeRequirement;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Weapon_Name != nullptr)
		*Weapon_Name = params.Weapon_Name;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.GetBalanceModeAsUIText
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_EMatchBalanceMode                            InBalanceMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_GetBalanceModeAsUIText(Tiger_EMatchBalanceMode InBalanceMode, class UObject* __WorldContext, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.GetBalanceModeAsUIText");

	UTBFL_UI_Text_C_GetBalanceModeAsUIText_Params params;
	params.InBalanceMode = InBalanceMode;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.GetGroupModeAsUIText
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerGroupingMode                           GameGroupMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       GroupModeAsText                                            (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_GetGroupModeAsUIText(Tiger_ETigerGroupingMode GameGroupMode, class UObject* __WorldContext, struct FText* GroupModeAsText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.GetGroupModeAsUIText");

	UTBFL_UI_Text_C_GetGroupModeAsUIText_Params params;
	params.GameGroupMode = GameGroupMode;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (GroupModeAsText != nullptr)
		*GroupModeAsText = params.GroupModeAsText;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.GetClanNameAsUIText
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerClan                                   InClanEnum                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ClanName                                                   (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_GetClanNameAsUIText(Tiger_ETigerClan InClanEnum, class UObject* __WorldContext, struct FText* ClanName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.GetClanNameAsUIText");

	UTBFL_UI_Text_C_GetClanNameAsUIText_Params params;
	params.InClanEnum = InClanEnum;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ClanName != nullptr)
		*ClanName = params.ClanName;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.Get Challenge Target Value
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTigerChallenge*                             TigerChallenge                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       FormattedText                                              (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_Get_Challenge_Target_Value(class UTigerChallenge* TigerChallenge, class UObject* __WorldContext, struct FText* FormattedText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.Get Challenge Target Value");

	UTBFL_UI_Text_C_Get_Challenge_Target_Value_Params params;
	params.TigerChallenge = TigerChallenge;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FormattedText != nullptr)
		*FormattedText = params.FormattedText;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.GetBloodPotencyInUIText
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerBloodPotency                           BloodPotency                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       BloodPotencyAsText                                         (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_GetBloodPotencyInUIText(Tiger_ETigerBloodPotency BloodPotency, class UObject* __WorldContext, struct FText* BloodPotencyAsText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.GetBloodPotencyInUIText");

	UTBFL_UI_Text_C_GetBloodPotencyInUIText_Params params;
	params.BloodPotency = BloodPotency;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BloodPotencyAsText != nullptr)
		*BloodPotencyAsText = params.BloodPotencyAsText;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.GetNpcTypeInUIText
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		Tiger_ETigerNPCType                                NPCType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       NPCTypeAsText                                              (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_GetNpcTypeInUIText(Tiger_ETigerNPCType NPCType, class UObject* __WorldContext, struct FText* NPCTypeAsText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.GetNpcTypeInUIText");

	UTBFL_UI_Text_C_GetNpcTypeInUIText_Params params;
	params.NPCType = NPCType;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NPCTypeAsText != nullptr)
		*NPCTypeAsText = params.NPCTypeAsText;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_UI_Text.TBFL_UI_Text_C.Wrap Text in Markup
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FName                                       StyleName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       TextToFormat                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       FormattedText                                              (Parm, OutParm)
void UTBFL_UI_Text_C::STATIC_Wrap_Text_in_Markup(const struct FName& StyleName, const struct FText& TextToFormat, class UObject* __WorldContext, struct FText* FormattedText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_UI_Text.TBFL_UI_Text_C.Wrap Text in Markup");

	UTBFL_UI_Text_C_Wrap_Text_in_Markup_Params params;
	params.StyleName = StyleName;
	params.TextToFormat = TextToFormat;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FormattedText != nullptr)
		*FormattedText = params.FormattedText;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
