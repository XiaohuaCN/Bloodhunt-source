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
//		Name   -> Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Play Fade in Part 2
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_QuestObjective_C::Play_Fade_in_Part_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Play Fade in Part 2");

	UTBP_UI_QuestObjective_C_Play_Fade_in_Part_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Play Fade in Part 1
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_QuestObjective_C::Play_Fade_in_Part_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Play Fade in Part 1");

	UTBP_UI_QuestObjective_C_Play_Fade_in_Part_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.SetObjectiveText
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_QuestObjective_C::SetObjectiveText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.SetObjectiveText");

	UTBP_UI_QuestObjective_C_SetObjectiveText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Activate
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InObjectiveText                                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_QuestObjective_C::Activate(const struct FText& InObjectiveText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Activate");

	UTBP_UI_QuestObjective_C_Activate_Params params;
	params.InObjectiveText = InObjectiveText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_QuestObjective_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.Construct");

	UTBP_UI_QuestObjective_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.OnIconFadeInFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_QuestObjective_C::OnIconFadeInFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.OnIconFadeInFinished");

	UTBP_UI_QuestObjective_C_OnIconFadeInFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.ExecuteUbergraph_TBP_UI_QuestObjective
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_QuestObjective_C::ExecuteUbergraph_TBP_UI_QuestObjective(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestObjective.TBP_UI_QuestObjective_C.ExecuteUbergraph_TBP_UI_QuestObjective");

	UTBP_UI_QuestObjective_C_ExecuteUbergraph_TBP_UI_QuestObjective_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
