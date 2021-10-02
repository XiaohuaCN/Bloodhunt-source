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
//		Name   -> Function TBP_PrimogenBrujah.TBP_PrimogenBrujah_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_PrimogenBrujah_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PrimogenBrujah.TBP_PrimogenBrujah_C.ReceiveBeginPlay");

	UTBP_PrimogenBrujah_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PrimogenBrujah.TBP_PrimogenBrujah_C.ExecuteUbergraph_TBP_PrimogenBrujah
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_PrimogenBrujah_C::ExecuteUbergraph_TBP_PrimogenBrujah(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PrimogenBrujah.TBP_PrimogenBrujah_C.ExecuteUbergraph_TBP_PrimogenBrujah");

	UTBP_PrimogenBrujah_C_ExecuteUbergraph_TBP_PrimogenBrujah_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
