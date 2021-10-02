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
//		Name   -> Function TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder.TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder_C.OnPlayerSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InTigerPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Discipline_Clan_UnlockInputReminder_C::OnPlayerSpawned(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder.TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder_C.OnPlayerSpawned");

	UTBP_ContextualHelp_Discipline_Clan_UnlockInputReminder_C_OnPlayerSpawned_Params params;
	params.InTigerPlayer = InTigerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder.TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder_C.OnDisciplineUnlocked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerDisciplineSlot                         InDisciplineSlot                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Discipline_Clan_UnlockInputReminder_C::OnDisciplineUnlocked(Tiger_ETigerDisciplineSlot InDisciplineSlot)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder.TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder_C.OnDisciplineUnlocked");

	UTBP_ContextualHelp_Discipline_Clan_UnlockInputReminder_C_OnDisciplineUnlocked_Params params;
	params.InDisciplineSlot = InDisciplineSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder.TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder_C.ExecuteUbergraph_TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ContextualHelp_Discipline_Clan_UnlockInputReminder_C::ExecuteUbergraph_TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder.TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder_C.ExecuteUbergraph_TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder");

	UTBP_ContextualHelp_Discipline_Clan_UnlockInputReminder_C_ExecuteUbergraph_TBP_ContextualHelp_Discipline_Clan_UnlockInputReminder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
