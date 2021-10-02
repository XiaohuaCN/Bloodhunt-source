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
//		Name   -> Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.TBP_UI_ElysiumMenu_PlayerInfo_AutoGenFunc
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bInIsGroupReady                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ElysiumMenu_PlayerInfo_C::TBP_UI_ElysiumMenu_PlayerInfo_AutoGenFunc(bool bInIsGroupReady)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.TBP_UI_ElysiumMenu_PlayerInfo_AutoGenFunc");

	UTBP_UI_ElysiumMenu_PlayerInfo_C_TBP_UI_ElysiumMenu_PlayerInfo_AutoGenFunc_Params params;
	params.bInIsGroupReady = bInIsGroupReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetPlayerName
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ElysiumMenu_PlayerInfo_C::SetPlayerName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetPlayerName");

	UTBP_UI_ElysiumMenu_PlayerInfo_C_SetPlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.UpdatePlayerName
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumMenu_PlayerInfo_C::UpdatePlayerName()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.UpdatePlayerName");

	UTBP_UI_ElysiumMenu_PlayerInfo_C_UpdatePlayerName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetArchetypeText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPowerKitType                           InArchetypeType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumMenu_PlayerInfo_C::SetArchetypeText(Tiger_ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetArchetypeText");

	UTBP_UI_ElysiumMenu_PlayerInfo_C_SetArchetypeText_Params params;
	params.InArchetypeType = InArchetypeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.UpdatePlayerArchetype
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerPlayerClanData*                        InClanData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerPowerKit*                              InArchetypeData                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumMenu_PlayerInfo_C::UpdatePlayerArchetype(class UTigerPlayerClanData* InClanData, class UTigerPowerKit* InArchetypeData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.UpdatePlayerArchetype");

	UTBP_UI_ElysiumMenu_PlayerInfo_C_UpdatePlayerArchetype_Params params;
	params.InClanData = InClanData;
	params.InArchetypeData = InArchetypeData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetupPlayerIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ElysiumMenu_PlayerInfo_C::SetupPlayerIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetupPlayerIcon");

	UTBP_UI_ElysiumMenu_PlayerInfo_C_SetupPlayerIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetCharacterIcon
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ElysiumMenu_PlayerInfo_C::SetCharacterIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.SetCharacterIcon");

	UTBP_UI_ElysiumMenu_PlayerInfo_C_SetCharacterIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.PopulatePlayerInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPowerKitType                           InArchetypeType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumMenu_PlayerInfo_C::PopulatePlayerInfo(Tiger_ETigerPowerKitType InArchetypeType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.PopulatePlayerInfo");

	UTBP_UI_ElysiumMenu_PlayerInfo_C_PopulatePlayerInfo_Params params;
	params.InArchetypeType = InArchetypeType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ElysiumMenu_PlayerInfo_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.Construct");

	UTBP_UI_ElysiumMenu_PlayerInfo_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ElysiumMenu_PlayerInfo_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.PreConstruct");

	UTBP_UI_ElysiumMenu_PlayerInfo_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerBeginPlay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumMenu_PlayerInfo_C::OnPlayerBeginPlay(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnPlayerBeginPlay");

	UTBP_UI_ElysiumMenu_PlayerInfo_C_OnPlayerBeginPlay_Params params;
	params.InPlayer = InPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnValidPawnFound
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumMenu_PlayerInfo_C::OnValidPawnFound(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.OnValidPawnFound");

	UTBP_UI_ElysiumMenu_PlayerInfo_C_OnValidPawnFound_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ElysiumMenu_PlayerInfo_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.Destruct");

	UTBP_UI_ElysiumMenu_PlayerInfo_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.ExecuteUbergraph_TBP_UI_ElysiumMenu_PlayerInfo
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumMenu_PlayerInfo_C::ExecuteUbergraph_TBP_UI_ElysiumMenu_PlayerInfo(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C.ExecuteUbergraph_TBP_UI_ElysiumMenu_PlayerInfo");

	UTBP_UI_ElysiumMenu_PlayerInfo_C_ExecuteUbergraph_TBP_UI_ElysiumMenu_PlayerInfo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
