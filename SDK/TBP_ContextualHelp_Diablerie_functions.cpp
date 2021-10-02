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
//		Name   -> Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.SetupTriggerConditions
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTigerContextualHelpContext                 InContext                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UTBP_ContextualHelp_Diablerie_C::SetupTriggerConditions(const struct FTigerContextualHelpContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.SetupTriggerConditions");

	UTBP_ContextualHelp_Diablerie_C_SetupTriggerConditions_Params params;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.OnClientDownedEnemyPlayer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Diablerie_C::OnClientDownedEnemyPlayer(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.OnClientDownedEnemyPlayer");

	UTBP_ContextualHelp_Diablerie_C_OnClientDownedEnemyPlayer_Params params;
	params.InPlayer = InPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.OnEnemyLifeStatusChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPlayerLifeStatus                       NewLifeStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Diablerie_C::OnEnemyLifeStatusChanged(Tiger_ETigerPlayerLifeStatus NewLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.OnEnemyLifeStatusChanged");

	UTBP_ContextualHelp_Diablerie_C_OnEnemyLifeStatusChanged_Params params;
	params.NewLifeStatus = NewLifeStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.ExecuteUbergraph_TBP_ContextualHelp_Diablerie
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Diablerie_C::ExecuteUbergraph_TBP_ContextualHelp_Diablerie(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Diablerie.TBP_ContextualHelp_Diablerie_C.ExecuteUbergraph_TBP_ContextualHelp_Diablerie");

	UTBP_ContextualHelp_Diablerie_C_ExecuteUbergraph_TBP_ContextualHelp_Diablerie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
