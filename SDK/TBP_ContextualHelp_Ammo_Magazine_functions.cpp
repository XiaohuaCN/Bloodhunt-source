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
//		Name   -> Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.OnPlayerSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InTigerPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Ammo_Magazine_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.OnPlayerSpawned");

	UTBP_ContextualHelp_Ammo_Magazine_C_OnPlayerSpawned_Params params;
	params.InTigerPlayer = InTigerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.CheckLowAmmo
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ContextualHelp_Ammo_Magazine_C::CheckLowAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.CheckLowAmmo");

	UTBP_ContextualHelp_Ammo_Magazine_C_CheckLowAmmo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.ReloadStarted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ContextualHelp_Ammo_Magazine_C::ReloadStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.ReloadStarted");

	UTBP_ContextualHelp_Ammo_Magazine_C_ReloadStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.RangedWeaponEquipped
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ContextualHelp_Ammo_Magazine_C::RangedWeaponEquipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.RangedWeaponEquipped");

	UTBP_ContextualHelp_Ammo_Magazine_C_RangedWeaponEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.MeleeWeaponEquipped
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ContextualHelp_Ammo_Magazine_C::MeleeWeaponEquipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.MeleeWeaponEquipped");

	UTBP_ContextualHelp_Ammo_Magazine_C_MeleeWeaponEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.ExecuteUbergraph_TBP_ContextualHelp_Ammo_Magazine
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Ammo_Magazine_C::ExecuteUbergraph_TBP_ContextualHelp_Ammo_Magazine(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Ammo_Magazine.TBP_ContextualHelp_Ammo_Magazine_C.ExecuteUbergraph_TBP_ContextualHelp_Ammo_Magazine");

	UTBP_ContextualHelp_Ammo_Magazine_C_ExecuteUbergraph_TBP_ContextualHelp_Ammo_Magazine_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
