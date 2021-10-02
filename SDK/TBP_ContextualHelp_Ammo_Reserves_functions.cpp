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
//		Name   -> Function TBP_ContextualHelp_Ammo_Reserves.TBP_ContextualHelp_Ammo_Reserves_C.OnPlayerSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InTigerPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Ammo_Reserves_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Ammo_Reserves.TBP_ContextualHelp_Ammo_Reserves_C.OnPlayerSpawned");

	UTBP_ContextualHelp_Ammo_Reserves_C_OnPlayerSpawned_Params params;
	params.InTigerPlayer = InTigerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Ammo_Reserves.TBP_ContextualHelp_Ammo_Reserves_C.CheckLowAmmoReserves
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ContextualHelp_Ammo_Reserves_C::CheckLowAmmoReserves()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Ammo_Reserves.TBP_ContextualHelp_Ammo_Reserves_C.CheckLowAmmoReserves");

	UTBP_ContextualHelp_Ammo_Reserves_C_CheckLowAmmoReserves_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Ammo_Reserves.TBP_ContextualHelp_Ammo_Reserves_C.ExecuteUbergraph_TBP_ContextualHelp_Ammo_Reserves
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Ammo_Reserves_C::ExecuteUbergraph_TBP_ContextualHelp_Ammo_Reserves(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Ammo_Reserves.TBP_ContextualHelp_Ammo_Reserves_C.ExecuteUbergraph_TBP_ContextualHelp_Ammo_Reserves");

	UTBP_ContextualHelp_Ammo_Reserves_C_ExecuteUbergraph_TBP_ContextualHelp_Ammo_Reserves_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
