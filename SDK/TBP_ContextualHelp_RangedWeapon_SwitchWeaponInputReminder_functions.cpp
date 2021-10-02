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
//		Name   -> Function TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder.TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C.OnPlayerSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InTigerPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder.TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C.OnPlayerSpawned");

	UTBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C_OnPlayerSpawned_Params params;
	params.InTigerPlayer = InTigerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder.TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C.RangedWeaponPickedUp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C::RangedWeaponPickedUp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder.TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C.RangedWeaponPickedUp");

	UTBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C_RangedWeaponPickedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder.TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C.ItemPickedUp
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerItemAsset*                             Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C::ItemPickedUp(class UTigerItemAsset* Item, int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder.TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C.ItemPickedUp");

	UTBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C_ItemPickedUp_Params params;
	params.Item = Item;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder.TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C.ExecuteUbergraph_TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C::ExecuteUbergraph_TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder.TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C.ExecuteUbergraph_TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder");

	UTBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C_ExecuteUbergraph_TBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
