﻿// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

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
//		Name   -> Function TBP_AI_RunDefaultBehaviorTask.TBP_AI_RunDefaultBehaviorTask_C.ReceiveExecute
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_AI_RunDefaultBehaviorTask_C::ReceiveExecute(class AActor* OwnerActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AI_RunDefaultBehaviorTask.TBP_AI_RunDefaultBehaviorTask_C.ReceiveExecute");

	UTBP_AI_RunDefaultBehaviorTask_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_AI_RunDefaultBehaviorTask.TBP_AI_RunDefaultBehaviorTask_C.ExecuteUbergraph_TBP_AI_RunDefaultBehaviorTask
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_AI_RunDefaultBehaviorTask_C::ExecuteUbergraph_TBP_AI_RunDefaultBehaviorTask(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_AI_RunDefaultBehaviorTask.TBP_AI_RunDefaultBehaviorTask_C.ExecuteUbergraph_TBP_AI_RunDefaultBehaviorTask");

	UTBP_AI_RunDefaultBehaviorTask_C_ExecuteUbergraph_TBP_AI_RunDefaultBehaviorTask_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif