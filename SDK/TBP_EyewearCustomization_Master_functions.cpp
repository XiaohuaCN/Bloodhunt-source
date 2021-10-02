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
//		Name   -> Function TBP_EyewearCustomization_Master.TBP_EyewearCustomization_Master_C.GatherPiercingFilter
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
void UTBP_EyewearCustomization_Master_C::GatherPiercingFilter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_EyewearCustomization_Master.TBP_EyewearCustomization_Master_C.GatherPiercingFilter");

	UTBP_EyewearCustomization_Master_C_GatherPiercingFilter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
