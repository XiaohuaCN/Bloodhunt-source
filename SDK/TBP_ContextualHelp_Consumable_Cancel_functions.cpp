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
//		Name   -> Function TBP_ContextualHelp_Consumable_Cancel.TBP_ContextualHelp_Consumable_Cancel_C.OnPlayerSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InTigerPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Consumable_Cancel_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Consumable_Cancel.TBP_ContextualHelp_Consumable_Cancel_C.OnPlayerSpawned");

	UTBP_ContextualHelp_Consumable_Cancel_C_OnPlayerSpawned_Params params;
	params.InTigerPlayer = InTigerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Consumable_Cancel.TBP_ContextualHelp_Consumable_Cancel_C.ConsumableStarted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerConsumableAsset*                       Consumable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Consumable_Cancel_C::ConsumableStarted(class UTigerConsumableAsset* Consumable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Consumable_Cancel.TBP_ContextualHelp_Consumable_Cancel_C.ConsumableStarted");

	UTBP_ContextualHelp_Consumable_Cancel_C_ConsumableStarted_Params params;
	params.Consumable = Consumable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Consumable_Cancel.TBP_ContextualHelp_Consumable_Cancel_C.ConsumableCancelled
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerConsumableAsset*                       Consumable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Consumable_Cancel_C::ConsumableCancelled(class UTigerConsumableAsset* Consumable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Consumable_Cancel.TBP_ContextualHelp_Consumable_Cancel_C.ConsumableCancelled");

	UTBP_ContextualHelp_Consumable_Cancel_C_ConsumableCancelled_Params params;
	params.Consumable = Consumable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Consumable_Cancel.TBP_ContextualHelp_Consumable_Cancel_C.ExecuteUbergraph_TBP_ContextualHelp_Consumable_Cancel
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Consumable_Cancel_C::ExecuteUbergraph_TBP_ContextualHelp_Consumable_Cancel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Consumable_Cancel.TBP_ContextualHelp_Consumable_Cancel_C.ExecuteUbergraph_TBP_ContextualHelp_Consumable_Cancel");

	UTBP_ContextualHelp_Consumable_Cancel_C_ExecuteUbergraph_TBP_ContextualHelp_Consumable_Cancel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
