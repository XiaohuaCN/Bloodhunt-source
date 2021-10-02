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
//		Name   -> Function TBP_UI_QuestObjectiveSummary.TBP_UI_QuestObjectiveSummary_C.DisplayAsAdditionalObjectives
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_QuestObjectiveSummary_C::DisplayAsAdditionalObjectives()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestObjectiveSummary.TBP_UI_QuestObjectiveSummary_C.DisplayAsAdditionalObjectives");

	UTBP_UI_QuestObjectiveSummary_C_DisplayAsAdditionalObjectives_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestObjectiveSummary.TBP_UI_QuestObjectiveSummary_C.DisplayAsObjectiveSummary
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_QuestObjectiveSummary_C::DisplayAsObjectiveSummary()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestObjectiveSummary.TBP_UI_QuestObjectiveSummary_C.DisplayAsObjectiveSummary");

	UTBP_UI_QuestObjectiveSummary_C_DisplayAsObjectiveSummary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestObjectiveSummary.TBP_UI_QuestObjectiveSummary_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_QuestObjectiveSummary_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestObjectiveSummary.TBP_UI_QuestObjectiveSummary_C.Construct");

	UTBP_UI_QuestObjectiveSummary_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_QuestObjectiveSummary.TBP_UI_QuestObjectiveSummary_C.ExecuteUbergraph_TBP_UI_QuestObjectiveSummary
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_QuestObjectiveSummary_C::ExecuteUbergraph_TBP_UI_QuestObjectiveSummary(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_QuestObjectiveSummary.TBP_UI_QuestObjectiveSummary_C.ExecuteUbergraph_TBP_UI_QuestObjectiveSummary");

	UTBP_UI_QuestObjectiveSummary_C_ExecuteUbergraph_TBP_UI_QuestObjectiveSummary_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
