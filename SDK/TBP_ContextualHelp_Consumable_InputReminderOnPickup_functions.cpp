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
//		Name   -> Function TBP_ContextualHelp_Consumable_InputReminderOnPickup.TBP_ContextualHelp_Consumable_InputReminderOnPickup_C.OnPlayerSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InTigerPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Consumable_InputReminderOnPickup_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Consumable_InputReminderOnPickup.TBP_ContextualHelp_Consumable_InputReminderOnPickup_C.OnPlayerSpawned");

	UTBP_ContextualHelp_Consumable_InputReminderOnPickup_C_OnPlayerSpawned_Params params;
	params.InTigerPlayer = InTigerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Consumable_InputReminderOnPickup.TBP_ContextualHelp_Consumable_InputReminderOnPickup_C.Consumable
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerItemAsset*                             Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Consumable_InputReminderOnPickup_C::Consumable(class UTigerItemAsset* Item, int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Consumable_InputReminderOnPickup.TBP_ContextualHelp_Consumable_InputReminderOnPickup_C.Consumable");

	UTBP_ContextualHelp_Consumable_InputReminderOnPickup_C_Consumable_Params params;
	params.Item = Item;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Consumable_InputReminderOnPickup.TBP_ContextualHelp_Consumable_InputReminderOnPickup_C.ExecuteUbergraph_TBP_ContextualHelp_Consumable_InputReminderOnPickup
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Consumable_InputReminderOnPickup_C::ExecuteUbergraph_TBP_ContextualHelp_Consumable_InputReminderOnPickup(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Consumable_InputReminderOnPickup.TBP_ContextualHelp_Consumable_InputReminderOnPickup_C.ExecuteUbergraph_TBP_ContextualHelp_Consumable_InputReminderOnPickup");

	UTBP_ContextualHelp_Consumable_InputReminderOnPickup_C_ExecuteUbergraph_TBP_ContextualHelp_Consumable_InputReminderOnPickup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
