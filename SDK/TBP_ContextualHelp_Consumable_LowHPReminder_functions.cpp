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
//		Name   -> Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.OnPlayerSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InTigerPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Consumable_LowHPReminder_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.OnPlayerSpawned");

	UTBP_ContextualHelp_Consumable_LowHPReminder_C_OnPlayerSpawned_Params params;
	params.InTigerPlayer = InTigerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.OnHealthChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InOldHealth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InNewHealth                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Consumable_LowHPReminder_C::OnHealthChanged(class ATigerPlayer* InPlayer, float InOldHealth, float InNewHealth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.OnHealthChanged");

	UTBP_ContextualHelp_Consumable_LowHPReminder_C_OnHealthChanged_Params params;
	params.InPlayer = InPlayer;
	params.InOldHealth = InOldHealth;
	params.InNewHealth = InNewHealth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.ExecuteUbergraph_TBP_ContextualHelp_Consumable_LowHPReminder
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Consumable_LowHPReminder_C::ExecuteUbergraph_TBP_ContextualHelp_Consumable_LowHPReminder(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Consumable_LowHPReminder.TBP_ContextualHelp_Consumable_LowHPReminder_C.ExecuteUbergraph_TBP_ContextualHelp_Consumable_LowHPReminder");

	UTBP_ContextualHelp_Consumable_LowHPReminder_C_ExecuteUbergraph_TBP_ContextualHelp_Consumable_LowHPReminder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
