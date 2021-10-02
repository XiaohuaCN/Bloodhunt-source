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
//		Name   -> Function TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C.SetParameters
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NormalizedDuration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BuffPostProcess_BlindingBeauty_C::SetParameters(float NormalizedDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C.SetParameters");

	ATBP_BuffPostProcess_BlindingBeauty_C_SetParameters_Params params;
	params.NormalizedDuration = NormalizedDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C.ExecuteUbergraph_TBP_BuffPostProcess_BlindingBeauty
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BuffPostProcess_BlindingBeauty_C::ExecuteUbergraph_TBP_BuffPostProcess_BlindingBeauty(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C.ExecuteUbergraph_TBP_BuffPostProcess_BlindingBeauty");

	ATBP_BuffPostProcess_BlindingBeauty_C_ExecuteUbergraph_TBP_BuffPostProcess_BlindingBeauty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
