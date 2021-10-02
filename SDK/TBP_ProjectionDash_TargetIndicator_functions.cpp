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
//		Name   -> Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_ProjectionDash_TargetIndicator_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ReceiveBeginPlay");

	ATBP_ProjectionDash_TargetIndicator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ReceiveDestroyed
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_ProjectionDash_TargetIndicator_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ReceiveDestroyed");

	ATBP_ProjectionDash_TargetIndicator_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ExecuteUbergraph_TBP_ProjectionDash_TargetIndicator
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ProjectionDash_TargetIndicator_C::ExecuteUbergraph_TBP_ProjectionDash_TargetIndicator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ProjectionDash_TargetIndicator.TBP_ProjectionDash_TargetIndicator_C.ExecuteUbergraph_TBP_ProjectionDash_TargetIndicator");

	ATBP_ProjectionDash_TargetIndicator_C_ExecuteUbergraph_TBP_ProjectionDash_TargetIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
