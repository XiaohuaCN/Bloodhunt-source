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
//		Name   -> Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.SetParameters
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NormalizedDuration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BuffPostProcess_Master_C::SetParameters(float NormalizedDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.SetParameters");

	ATBP_BuffPostProcess_Master_C_SetParameters_Params params;
	params.NormalizedDuration = NormalizedDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Refresh
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NewDuration                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BuffPostProcess_Master_C::Refresh(float NewDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Refresh");

	ATBP_BuffPostProcess_Master_C_Refresh_Params params;
	params.NewDuration = NewDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Remove
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_BuffPostProcess_Master_C::Remove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Remove");

	ATBP_BuffPostProcess_Master_C_Remove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                BuffID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              TotalDuration                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BuffPostProcess_Master_C::Initialize(int BuffID, float TotalDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Initialize");

	ATBP_BuffPostProcess_Master_C_Initialize_Params params;
	params.BuffID = BuffID;
	params.TotalDuration = TotalDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BuffPostProcess_Master_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.ReceiveTick");

	ATBP_BuffPostProcess_Master_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.UpdateDuration
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_BuffPostProcess_Master_C::UpdateDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.UpdateDuration");

	ATBP_BuffPostProcess_Master_C_UpdateDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.ExecuteUbergraph_TBP_BuffPostProcess_Master
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BuffPostProcess_Master_C::ExecuteUbergraph_TBP_BuffPostProcess_Master(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.ExecuteUbergraph_TBP_BuffPostProcess_Master");

	ATBP_BuffPostProcess_Master_C_ExecuteUbergraph_TBP_BuffPostProcess_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
