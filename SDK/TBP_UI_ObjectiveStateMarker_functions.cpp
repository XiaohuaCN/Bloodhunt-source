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
//		Name   -> Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.SetComplete
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InComplete                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ObjectiveStateMarker_C::SetComplete(bool InComplete)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.SetComplete");

	UTBP_UI_ObjectiveStateMarker_C_SetComplete_Params params;
	params.InComplete = InComplete;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.SetMultiple
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InMultiple                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ObjectiveStateMarker_C::SetMultiple(bool InMultiple)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.SetMultiple");

	UTBP_UI_ObjectiveStateMarker_C_SetMultiple_Params params;
	params.InMultiple = InMultiple;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.Play Fade In
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ObjectiveStateMarker_C::Play_Fade_In()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.Play Fade In");

	UTBP_UI_ObjectiveStateMarker_C_Play_Fade_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ObjectiveStateMarker_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.PreConstruct");

	UTBP_UI_ObjectiveStateMarker_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.ExecuteUbergraph_TBP_UI_ObjectiveStateMarker
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ObjectiveStateMarker_C::ExecuteUbergraph_TBP_UI_ObjectiveStateMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ObjectiveStateMarker.TBP_UI_ObjectiveStateMarker_C.ExecuteUbergraph_TBP_UI_ObjectiveStateMarker");

	UTBP_UI_ObjectiveStateMarker_C_ExecuteUbergraph_TBP_UI_ObjectiveStateMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
