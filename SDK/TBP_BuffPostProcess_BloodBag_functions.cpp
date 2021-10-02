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
//		Name   -> Function TBP_BuffPostProcess_BloodBag.TBP_BuffPostProcess_BloodBag_C.SetParameters
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              NormalizedDuration                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BuffPostProcess_BloodBag_C::SetParameters(float NormalizedDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BuffPostProcess_BloodBag.TBP_BuffPostProcess_BloodBag_C.SetParameters");

	ATBP_BuffPostProcess_BloodBag_C_SetParameters_Params params;
	params.NormalizedDuration = NormalizedDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
