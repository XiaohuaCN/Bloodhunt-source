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
//		Name   -> Function TBP_ContextualHelp_Consumable_Prevented.TBP_ContextualHelp_Consumable_Prevented_C.OnPlayerSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InTigerPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Consumable_Prevented_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Consumable_Prevented.TBP_ContextualHelp_Consumable_Prevented_C.OnPlayerSpawned");

	UTBP_ContextualHelp_Consumable_Prevented_C_OnPlayerSpawned_Params params;
	params.InTigerPlayer = InTigerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Consumable_Prevented.TBP_ContextualHelp_Consumable_Prevented_C.OnConsumablePrevented
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerConsumableAsset*                       Consumable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Consumable_Prevented_C::OnConsumablePrevented(class UTigerConsumableAsset* Consumable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Consumable_Prevented.TBP_ContextualHelp_Consumable_Prevented_C.OnConsumablePrevented");

	UTBP_ContextualHelp_Consumable_Prevented_C_OnConsumablePrevented_Params params;
	params.Consumable = Consumable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Consumable_Prevented.TBP_ContextualHelp_Consumable_Prevented_C.ExecuteUbergraph_TBP_ContextualHelp_Consumable_Prevented
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Consumable_Prevented_C::ExecuteUbergraph_TBP_ContextualHelp_Consumable_Prevented(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Consumable_Prevented.TBP_ContextualHelp_Consumable_Prevented_C.ExecuteUbergraph_TBP_ContextualHelp_Consumable_Prevented");

	UTBP_ContextualHelp_Consumable_Prevented_C_ExecuteUbergraph_TBP_ContextualHelp_Consumable_Prevented_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
