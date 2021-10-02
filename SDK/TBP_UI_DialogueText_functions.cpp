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
//		Name   -> Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetQuestObjective
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_DialogueText_C::SetQuestObjective(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetQuestObjective");

	UTBP_UI_DialogueText_C_SetQuestObjective_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetDialogueText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_DialogueText_C::SetDialogueText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetDialogueText");

	UTBP_UI_DialogueText_C_SetDialogueText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetNameAndTitle
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       InTitle                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UTexture2D*                                  InIcon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_DialogueText_C::SetNameAndTitle(const struct FText& InName, const struct FText& InTitle, class UTexture2D* InIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_DialogueText.TBP_UI_DialogueText_C.SetNameAndTitle");

	UTBP_UI_DialogueText_C_SetNameAndTitle_Params params;
	params.InName = InName;
	params.InTitle = InTitle;
	params.InIcon = InIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
