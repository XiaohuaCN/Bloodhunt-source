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
//		Name   -> Function TBP_ContextualHelp_MasqueradeBroken.TBP_ContextualHelp_MasqueradeBroken_C.OnPlayerSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InTigerPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_MasqueradeBroken_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_MasqueradeBroken.TBP_ContextualHelp_MasqueradeBroken_C.OnPlayerSpawned");

	UTBP_ContextualHelp_MasqueradeBroken_C_OnPlayerSpawned_Params params;
	params.InTigerPlayer = InTigerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_MasqueradeBroken.TBP_ContextualHelp_MasqueradeBroken_C.OnMasqueradeBroken
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsMasqueradeBreached                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		Tiger_ETigerAIPlayerAction                         InPlayerAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_MasqueradeBroken_C::OnMasqueradeBroken(bool InIsMasqueradeBreached, Tiger_ETigerAIPlayerAction InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_MasqueradeBroken.TBP_ContextualHelp_MasqueradeBroken_C.OnMasqueradeBroken");

	UTBP_ContextualHelp_MasqueradeBroken_C_OnMasqueradeBroken_Params params;
	params.InIsMasqueradeBreached = InIsMasqueradeBreached;
	params.InPlayerAction = InPlayerAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_MasqueradeBroken.TBP_ContextualHelp_MasqueradeBroken_C.ExecuteUbergraph_TBP_ContextualHelp_MasqueradeBroken
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_MasqueradeBroken_C::ExecuteUbergraph_TBP_ContextualHelp_MasqueradeBroken(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_MasqueradeBroken.TBP_ContextualHelp_MasqueradeBroken_C.ExecuteUbergraph_TBP_ContextualHelp_MasqueradeBroken");

	UTBP_ContextualHelp_MasqueradeBroken_C_ExecuteUbergraph_TBP_ContextualHelp_MasqueradeBroken_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
