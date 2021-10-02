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
//		Name   -> Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.GetInterpolatedPremiumCurrencyBalance
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UTBP_UI_CurrentHardCurrencyText_C::GetInterpolatedPremiumCurrencyBalance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.GetInterpolatedPremiumCurrencyBalance");

	UTBP_UI_CurrentHardCurrencyText_C_GetInterpolatedPremiumCurrencyBalance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.SetCurrencyAmount
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                CurrencyAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CurrentHardCurrencyText_C::SetCurrencyAmount(int CurrencyAmount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.SetCurrencyAmount");

	UTBP_UI_CurrentHardCurrencyText_C_SetCurrencyAmount_Params params;
	params.CurrencyAmount = CurrencyAmount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.UpdateToCurrentPlayerAmount
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_CurrentHardCurrencyText_C::UpdateToCurrentPlayerAmount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.UpdateToCurrentPlayerAmount");

	UTBP_UI_CurrentHardCurrencyText_C_UpdateToCurrentPlayerAmount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.SetCurrencyAppearance
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_CurrentHardCurrencyText_C::SetCurrencyAppearance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.SetCurrencyAppearance");

	UTBP_UI_CurrentHardCurrencyText_C_SetCurrencyAppearance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_CurrentHardCurrencyText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.Construct");

	UTBP_UI_CurrentHardCurrencyText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.OnPlayerStateCreated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           TigerPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CurrentHardCurrencyText_C::OnPlayerStateCreated(class ATigerPlayerState* TigerPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.OnPlayerStateCreated");

	UTBP_UI_CurrentHardCurrencyText_C_OnPlayerStateCreated_Params params;
	params.TigerPlayerState = TigerPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.OnClientTransactionalPlayerDataChangedEvent
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerTransactionalData     TransactionalPlayerData                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_CurrentHardCurrencyText_C::OnClientTransactionalPlayerDataChangedEvent(const struct FTigerPersistentPlayerTransactionalData& TransactionalPlayerData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.OnClientTransactionalPlayerDataChangedEvent");

	UTBP_UI_CurrentHardCurrencyText_C_OnClientTransactionalPlayerDataChangedEvent_Params params;
	params.TransactionalPlayerData = TransactionalPlayerData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.ExecuteUbergraph_TBP_UI_CurrentHardCurrencyText
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CurrentHardCurrencyText_C::ExecuteUbergraph_TBP_UI_CurrentHardCurrencyText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CurrentHardCurrencyText.TBP_UI_CurrentHardCurrencyText_C.ExecuteUbergraph_TBP_UI_CurrentHardCurrencyText");

	UTBP_UI_CurrentHardCurrencyText_C_ExecuteUbergraph_TBP_UI_CurrentHardCurrencyText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
