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
//		Name   -> Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.OnHide
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayerController*                      InTigerPlayerController                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_HSense_C::OnHide(class ATigerPlayerController* InTigerPlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.OnHide");

	UTBP_ContextualHelp_HSense_C_OnHide_Params params;
	params.InTigerPlayerController = InTigerPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.OnPlayerSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InTigerPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_HSense_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.OnPlayerSpawned");

	UTBP_ContextualHelp_HSense_C_OnPlayerSpawned_Params params;
	params.InTigerPlayer = InTigerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.OnHeightenedSensesUsed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsNowActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_ContextualHelp_HSense_C::OnHeightenedSensesUsed(bool bIsNowActive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.OnHeightenedSensesUsed");

	UTBP_ContextualHelp_HSense_C_OnHeightenedSensesUsed_Params params;
	params.bIsNowActive = bIsNowActive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.ResetWantsToShow
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ContextualHelp_HSense_C::ResetWantsToShow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.ResetWantsToShow");

	UTBP_ContextualHelp_HSense_C_ResetWantsToShow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.ResetWantsToShowDelayed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ContextualHelp_HSense_C::ResetWantsToShowDelayed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.ResetWantsToShowDelayed");

	UTBP_ContextualHelp_HSense_C_ResetWantsToShowDelayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.ExecuteUbergraph_TBP_ContextualHelp_HSense
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_HSense_C::ExecuteUbergraph_TBP_ContextualHelp_HSense(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_HSense.TBP_ContextualHelp_HSense_C.ExecuteUbergraph_TBP_ContextualHelp_HSense");

	UTBP_ContextualHelp_HSense_C_ExecuteUbergraph_TBP_ContextualHelp_HSense_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
