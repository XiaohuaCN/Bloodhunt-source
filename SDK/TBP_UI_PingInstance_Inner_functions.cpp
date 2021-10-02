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
//		Name   -> Function TBP_UI_PingInstance_Inner.TBP_UI_PingInstance_Inner_C.GetHorizontalIconOffset
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              OutIconOffset                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PingInstance_Inner_C::GetHorizontalIconOffset(float* OutIconOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PingInstance_Inner.TBP_UI_PingInstance_Inner_C.GetHorizontalIconOffset");

	UTBP_UI_PingInstance_Inner_C_GetHorizontalIconOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutIconOffset != nullptr)
		*OutIconOffset = params.OutIconOffset;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PingInstance_Inner.TBP_UI_PingInstance_Inner_C.GetVerticalIconOffset
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              OutIconOffset                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PingInstance_Inner_C::GetVerticalIconOffset(float* OutIconOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PingInstance_Inner.TBP_UI_PingInstance_Inner_C.GetVerticalIconOffset");

	UTBP_UI_PingInstance_Inner_C_GetVerticalIconOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutIconOffset != nullptr)
		*OutIconOffset = params.OutIconOffset;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
