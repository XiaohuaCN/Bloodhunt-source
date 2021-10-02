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
//		Name   -> Function TBP_MasqueradeActionResponseNone.TBP_MasqueradeActionResponseNone_C.OnReactToMasqueradeBreakingAction
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_MasqueradeActionResponseNone_C::OnReactToMasqueradeBreakingAction()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MasqueradeActionResponseNone.TBP_MasqueradeActionResponseNone_C.OnReactToMasqueradeBreakingAction");

	UTBP_MasqueradeActionResponseNone_C_OnReactToMasqueradeBreakingAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
