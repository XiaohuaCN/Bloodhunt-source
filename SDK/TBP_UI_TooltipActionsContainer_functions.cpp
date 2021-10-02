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
//		Name   -> Function TBP_UI_TooltipActionsContainer.TBP_UI_TooltipActionsContainer_C.SetActions
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FTigerTooltipAction>                 InActions                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void UTBP_UI_TooltipActionsContainer_C::SetActions(TArray<struct FTigerTooltipAction>* InActions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TooltipActionsContainer.TBP_UI_TooltipActionsContainer_C.SetActions");

	UTBP_UI_TooltipActionsContainer_C_SetActions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InActions != nullptr)
		*InActions = params.InActions;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
