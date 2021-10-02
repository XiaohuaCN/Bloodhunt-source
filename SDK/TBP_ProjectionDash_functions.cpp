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
//		Name   -> Function TBP_ProjectionDash.TBP_ProjectionDash_C.OnDashStart
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_ProjectionDash_C::OnDashStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ProjectionDash.TBP_ProjectionDash_C.OnDashStart");

	UTBP_ProjectionDash_C_OnDashStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ProjectionDash.TBP_ProjectionDash_C.OnDashEnd
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_ProjectionDash_C::OnDashEnd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ProjectionDash.TBP_ProjectionDash_C.OnDashEnd");

	UTBP_ProjectionDash_C_OnDashEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ProjectionDash.TBP_ProjectionDash_C.UpdateFocusPoint
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ProjectionDash_C::UpdateFocusPoint()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ProjectionDash.TBP_ProjectionDash_C.UpdateFocusPoint");

	UTBP_ProjectionDash_C_UpdateFocusPoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ProjectionDash.TBP_ProjectionDash_C.ExecuteUbergraph_TBP_ProjectionDash
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ProjectionDash_C::ExecuteUbergraph_TBP_ProjectionDash(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ProjectionDash.TBP_ProjectionDash_C.ExecuteUbergraph_TBP_ProjectionDash");

	UTBP_ProjectionDash_C_ExecuteUbergraph_TBP_ProjectionDash_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
