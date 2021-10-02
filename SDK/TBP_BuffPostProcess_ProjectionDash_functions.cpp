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
//		Name   -> Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_BuffPostProcess_ProjectionDash_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.UserConstructionScript");

	ATBP_BuffPostProcess_ProjectionDash_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BuffPostProcess_ProjectionDash_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.ReceiveTick");

	ATBP_BuffPostProcess_ProjectionDash_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.ExecuteUbergraph_TBP_BuffPostProcess_ProjectionDash
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BuffPostProcess_ProjectionDash_C::ExecuteUbergraph_TBP_BuffPostProcess_ProjectionDash(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.ExecuteUbergraph_TBP_BuffPostProcess_ProjectionDash");

	ATBP_BuffPostProcess_ProjectionDash_C_ExecuteUbergraph_TBP_BuffPostProcess_ProjectionDash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.Tick__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ATBP_BuffPostProcess_ProjectionDash_C::Tick__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcess_ProjectionDash.TBP_BuffPostProcess_ProjectionDash_C.Tick__DelegateSignature");

	ATBP_BuffPostProcess_ProjectionDash_C_Tick__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
