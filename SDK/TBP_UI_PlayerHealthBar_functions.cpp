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
//		Name   -> Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OnReadyStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InReady                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_PlayerHealthBar_C::OnReadyStateChanged(bool InReady)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OnReadyStateChanged");

	UTBP_UI_PlayerHealthBar_C_OnReadyStateChanged_Params params;
	params.InReady = InReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.DisableHover
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_PlayerHealthBar_C::DisableHover()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.DisableHover");

	UTBP_UI_PlayerHealthBar_C_DisableHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.EnableHover
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_PlayerHealthBar_C::EnableHover()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.EnableHover");

	UTBP_UI_PlayerHealthBar_C_EnableHover_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.SetPlayerState
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerHealthBar_C::SetPlayerState(class ATigerPlayerState* PlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.SetPlayerState");

	UTBP_UI_PlayerHealthBar_C_SetPlayerState_Params params;
	params.PlayerState = PlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OverridePlayerState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           OverridePlayerState                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerHealthBar_C::OverridePlayerState(class ATigerPlayerState* OverridePlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OverridePlayerState");

	UTBP_UI_PlayerHealthBar_C_OverridePlayerState_Params params;
	params.OverridePlayerState = OverridePlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerHealthBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.Tick");

	UTBP_UI_PlayerHealthBar_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OnPlayerStateReceived
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerHealthBar_C::OnPlayerStateReceived(class ATigerPlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.OnPlayerStateReceived");

	UTBP_UI_PlayerHealthBar_C_OnPlayerStateReceived_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.ExecuteUbergraph_TBP_UI_PlayerHealthBar
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PlayerHealthBar_C::ExecuteUbergraph_TBP_UI_PlayerHealthBar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PlayerHealthBar.TBP_UI_PlayerHealthBar_C.ExecuteUbergraph_TBP_UI_PlayerHealthBar");

	UTBP_UI_PlayerHealthBar_C_ExecuteUbergraph_TBP_UI_PlayerHealthBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
