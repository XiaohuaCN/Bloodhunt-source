#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Update Icons
struct UTBP_UI_ElysiumHUD_Party_C_Update_Icons_Params
{
};

// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdatePlayerStates
struct UTBP_UI_ElysiumHUD_Party_C_UpdatePlayerStates_Params
{
};

// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdateWidget
struct UTBP_UI_ElysiumHUD_Party_C_UpdateWidget_Params
{
};

// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Construct
struct UTBP_UI_ElysiumHUD_Party_C_Construct_Params
{
};

// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.On PartyUpdated
struct UTBP_UI_ElysiumHUD_Party_C_On_PartyUpdated_Params
{
};

// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnPlayerJoiendParty
struct UTBP_UI_ElysiumHUD_Party_C_OnPlayerJoiendParty_Params
{
	struct FTigerPartyId                               InPartyId;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FString                                     InJoiningPlayerId;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnPlayerLeftPArty
struct UTBP_UI_ElysiumHUD_Party_C_OnPlayerLeftPArty_Params
{
	struct FTigerPartyId                               InPartyId;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FString                                     InDepartingPlayerId;                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.Update Cards
struct UTBP_UI_ElysiumHUD_Party_C_Update_Cards_Params
{
};

// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.UpdateIsReady
struct UTBP_UI_ElysiumHUD_Party_C_UpdateIsReady_Params
{
	bool                                               bInIsGroupReady;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.GroupChanged
struct UTBP_UI_ElysiumHUD_Party_C_GroupChanged_Params
{
};

// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.OnCardLoaded
struct UTBP_UI_ElysiumHUD_Party_C_OnCardLoaded_Params
{
};

// Function TBP_UI_ElysiumHUD_Party.TBP_UI_ElysiumHUD_Party_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Party
struct UTBP_UI_ElysiumHUD_Party_C_ExecuteUbergraph_TBP_UI_ElysiumHUD_Party_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
