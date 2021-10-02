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
//		Name   -> Function TBP_Challenge_SurviveTime.TBP_Challenge_SurviveTime_C.BuildDescriptionText
//		Flags  -> (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UTBP_Challenge_SurviveTime_C::BuildDescriptionText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Challenge_SurviveTime.TBP_Challenge_SurviveTime_C.BuildDescriptionText");

	UTBP_Challenge_SurviveTime_C_BuildDescriptionText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
