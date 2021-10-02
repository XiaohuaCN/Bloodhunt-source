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
//		Name   -> Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.SetWantsToShowOff
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_ContextualHelpBase_C::SetWantsToShowOff()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.SetWantsToShowOff");

	UTBP_ContextualHelpBase_C_SetWantsToShowOff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.SetWantsToShow
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_ContextualHelpBase_C::SetWantsToShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.SetWantsToShow");

	UTBP_ContextualHelpBase_C_SetWantsToShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.HasReachedMaxLimitInMatch
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               bLimitReached                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_ContextualHelpBase_C::HasReachedMaxLimitInMatch(bool* bLimitReached)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.HasReachedMaxLimitInMatch");

	UTBP_ContextualHelpBase_C_HasReachedMaxLimitInMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bLimitReached != nullptr)
		*bLimitReached = params.bLimitReached;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayerController*                      InTigerPlayerController                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelpBase_C::OnHide(class ATigerPlayerController* InTigerPlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.OnHide");

	UTBP_ContextualHelpBase_C_OnHide_Params params;
	params.InTigerPlayerController = InTigerPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.ExecuteUbergraph_TBP_ContextualHelpBase
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelpBase_C::ExecuteUbergraph_TBP_ContextualHelpBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelpBase.TBP_ContextualHelpBase_C.ExecuteUbergraph_TBP_ContextualHelpBase");

	UTBP_ContextualHelpBase_C_ExecuteUbergraph_TBP_ContextualHelpBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
