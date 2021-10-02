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
//		Name   -> Function TBP_ContextualHelp_MasqueradeWeaponFired.TBP_ContextualHelp_MasqueradeWeaponFired_C.OnPlayerSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InTigerPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_MasqueradeWeaponFired_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_MasqueradeWeaponFired.TBP_ContextualHelp_MasqueradeWeaponFired_C.OnPlayerSpawned");

	UTBP_ContextualHelp_MasqueradeWeaponFired_C_OnPlayerSpawned_Params params;
	params.InTigerPlayer = InTigerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_MasqueradeWeaponFired.TBP_ContextualHelp_MasqueradeWeaponFired_C.CustomEvent_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      InMasqueradeConsequence                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UTBP_ContextualHelp_MasqueradeWeaponFired_C::CustomEvent_1(class UClass* InMasqueradeConsequence)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_MasqueradeWeaponFired.TBP_ContextualHelp_MasqueradeWeaponFired_C.CustomEvent_1");

	UTBP_ContextualHelp_MasqueradeWeaponFired_C_CustomEvent_1_Params params;
	params.InMasqueradeConsequence = InMasqueradeConsequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_MasqueradeWeaponFired.TBP_ContextualHelp_MasqueradeWeaponFired_C.ExecuteUbergraph_TBP_ContextualHelp_MasqueradeWeaponFired
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_MasqueradeWeaponFired_C::ExecuteUbergraph_TBP_ContextualHelp_MasqueradeWeaponFired(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_MasqueradeWeaponFired.TBP_ContextualHelp_MasqueradeWeaponFired_C.ExecuteUbergraph_TBP_ContextualHelp_MasqueradeWeaponFired");

	UTBP_ContextualHelp_MasqueradeWeaponFired_C_ExecuteUbergraph_TBP_ContextualHelp_MasqueradeWeaponFired_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
