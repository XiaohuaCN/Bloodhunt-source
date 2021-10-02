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
//		Name   -> Function TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.Timeline_0__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_VFX_BloodPuddle_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.Timeline_0__FinishedFunc");

	ATBP_VFX_BloodPuddle_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.Timeline_0__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_VFX_BloodPuddle_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.Timeline_0__UpdateFunc");

	ATBP_VFX_BloodPuddle_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_VFX_BloodPuddle_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.ReceiveBeginPlay");

	ATBP_VFX_BloodPuddle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.ExecuteUbergraph_TBP_VFX_BloodPuddle
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_VFX_BloodPuddle_C::ExecuteUbergraph_TBP_VFX_BloodPuddle(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C.ExecuteUbergraph_TBP_VFX_BloodPuddle");

	ATBP_VFX_BloodPuddle_C_ExecuteUbergraph_TBP_VFX_BloodPuddle_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
