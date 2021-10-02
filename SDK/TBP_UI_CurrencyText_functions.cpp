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
//		Name   -> Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.SetCurrencyAmount
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrencyAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CurrencyText_C::SetCurrencyAmount(int CurrencyAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.SetCurrencyAmount");

	UTBP_UI_CurrencyText_C_SetCurrencyAmount_Params params;
	params.CurrencyAmount = CurrencyAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.UpdateToCurrentPlayerAmount
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_CurrencyText_C::UpdateToCurrentPlayerAmount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.UpdateToCurrentPlayerAmount");

	UTBP_UI_CurrencyText_C_UpdateToCurrentPlayerAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnLoaded_1FBBDA1045CBB28C294A3DB584E90C6E
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CurrencyText_C::OnLoaded_1FBBDA1045CBB28C294A3DB584E90C6E(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnLoaded_1FBBDA1045CBB28C294A3DB584E90C6E");

	UTBP_UI_CurrencyText_C_OnLoaded_1FBBDA1045CBB28C294A3DB584E90C6E_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_CurrencyText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.Construct");

	UTBP_UI_CurrencyText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.SetCurrencyPath
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_CurrencyText_C::SetCurrencyPath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.SetCurrencyPath");

	UTBP_UI_CurrencyText_C_SetCurrencyPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnPlayerStateCreated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           TigerPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CurrencyText_C::OnPlayerStateCreated(class ATigerPlayerState* TigerPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnPlayerStateCreated");

	UTBP_UI_CurrencyText_C_OnPlayerStateCreated_Params params;
	params.TigerPlayerState = TigerPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnPremiumCurrencyBalanceChanged
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerTransactionalData     TransactionalPlayerData                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_CurrencyText_C::OnPremiumCurrencyBalanceChanged(const struct FTigerPersistentPlayerTransactionalData& TransactionalPlayerData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.OnPremiumCurrencyBalanceChanged");

	UTBP_UI_CurrencyText_C_OnPremiumCurrencyBalanceChanged_Params params;
	params.TransactionalPlayerData = TransactionalPlayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.ExecuteUbergraph_TBP_UI_CurrencyText
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CurrencyText_C::ExecuteUbergraph_TBP_UI_CurrencyText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrencyText.TBP_UI_CurrencyText_C.ExecuteUbergraph_TBP_UI_CurrencyText");

	UTBP_UI_CurrencyText_C_ExecuteUbergraph_TBP_UI_CurrencyText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
