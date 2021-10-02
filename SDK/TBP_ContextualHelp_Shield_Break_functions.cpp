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
//		Name   -> Function TBP_ContextualHelp_Shield_Break.TBP_ContextualHelp_Shield_Break_C.OnPlayerSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InTigerPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Shield_Break_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Shield_Break.TBP_ContextualHelp_Shield_Break_C.OnPlayerSpawned");

	UTBP_ContextualHelp_Shield_Break_C_OnPlayerSpawned_Params params;
	params.InTigerPlayer = InTigerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Shield_Break.TBP_ContextualHelp_Shield_Break_C.CheckShieldInInventory
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ContextualHelp_Shield_Break_C::CheckShieldInInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Shield_Break.TBP_ContextualHelp_Shield_Break_C.CheckShieldInInventory");

	UTBP_ContextualHelp_Shield_Break_C_CheckShieldInInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Shield_Break.TBP_ContextualHelp_Shield_Break_C.ExecuteUbergraph_TBP_ContextualHelp_Shield_Break
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Shield_Break_C::ExecuteUbergraph_TBP_ContextualHelp_Shield_Break(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Shield_Break.TBP_ContextualHelp_Shield_Break_C.ExecuteUbergraph_TBP_ContextualHelp_Shield_Break");

	UTBP_ContextualHelp_Shield_Break_C_ExecuteUbergraph_TBP_ContextualHelp_Shield_Break_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
