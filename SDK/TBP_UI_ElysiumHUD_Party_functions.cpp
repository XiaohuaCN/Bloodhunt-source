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
//		Name   -> Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Update Icons
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ElysiumHUD_Party_C::Update_Icons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Update Icons");

	UTBP_UI_ElysiumHUD_Party_C_Update_Icons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdatePlayerStates
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ElysiumHUD_Party_C::UpdatePlayerStates()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdatePlayerStates");

	UTBP_UI_ElysiumHUD_Party_C_UpdatePlayerStates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdateWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ElysiumHUD_Party_C::UpdateWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdateWidget");

	UTBP_UI_ElysiumHUD_Party_C_UpdateWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Party_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Construct");

	UTBP_UI_ElysiumHUD_Party_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.On PartyUpdated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Party_C::On_PartyUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.On PartyUpdated");

	UTBP_UI_ElysiumHUD_Party_C_On_PartyUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnPlayerJoiendParty
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPartyId                               InPartyId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FString                                     InJoiningPlayerId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumHUD_Party_C::OnPlayerJoiendParty(const struct FTigerPartyId& InPartyId, const struct FString& InJoiningPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnPlayerJoiendParty");

	UTBP_UI_ElysiumHUD_Party_C_OnPlayerJoiendParty_Params params;
	params.InPartyId = InPartyId;
	params.InJoiningPlayerId = InJoiningPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnPlayerLeftPArty
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPartyId                               InPartyId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FString                                     InDepartingPlayerId                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumHUD_Party_C::OnPlayerLeftPArty(const struct FTigerPartyId& InPartyId, const struct FString& InDepartingPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnPlayerLeftPArty");

	UTBP_UI_ElysiumHUD_Party_C_OnPlayerLeftPArty_Params params;
	params.InPartyId = InPartyId;
	params.InDepartingPlayerId = InDepartingPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Update Cards
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Party_C::Update_Cards()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Update Cards");

	UTBP_UI_ElysiumHUD_Party_C_Update_Cards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdateIsReady
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bInIsGroupReady                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ElysiumHUD_Party_C::UpdateIsReady(bool bInIsGroupReady)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdateIsReady");

	UTBP_UI_ElysiumHUD_Party_C_UpdateIsReady_Params params;
	params.bInIsGroupReady = bInIsGroupReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.GroupChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Party_C::GroupChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.GroupChanged");

	UTBP_UI_ElysiumHUD_Party_C_GroupChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnCardLoaded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Party_C::OnCardLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnCardLoaded");

	UTBP_UI_ElysiumHUD_Party_C_OnCardLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Party
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumHUD_Party_C::ExecuteUbergraph_TBP_UI_ElysiumHUD_Party(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Party");

	UTBP_UI_ElysiumHUD_Party_C_ExecuteUbergraph_TBP_UI_ElysiumHUD_Party_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
