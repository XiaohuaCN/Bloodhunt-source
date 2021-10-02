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
//		Name   -> Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.PopUpMenuSetup
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_PremiumCurrency_C::PopUpMenuSetup(bool Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.PopUpMenuSetup");

	UTBP_UI_PremiumCurrency_C_PopUpMenuSetup_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_PremiumCurrency_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.Construct");

	UTBP_UI_PremiumCurrency_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.On Currency Button Clicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPremiumCurrencyPackData               InPremiumPackData                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_PremiumCurrency_C::On_Currency_Button_Clicked(const struct FTigerPremiumCurrencyPackData& InPremiumPackData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.On Currency Button Clicked");

	UTBP_UI_PremiumCurrency_C_On_Currency_Button_Clicked_Params params;
	params.InPremiumPackData = InPremiumPackData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnConfirmPopupClosed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ConfirmedPurchase                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_PremiumCurrency_C::OnConfirmPopupClosed(bool ConfirmedPurchase)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnConfirmPopupClosed");

	UTBP_UI_PremiumCurrency_C_OnConfirmPopupClosed_Params params;
	params.ConfirmedPurchase = ConfirmedPurchase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnCurrencyPacksUpdated
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_PremiumCurrency_C::OnCurrencyPacksUpdated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnCurrencyPacksUpdated");

	UTBP_UI_PremiumCurrency_C_OnCurrencyPacksUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnPurchaseHandled
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bInWasSuccesful                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<Shark_EShMidasResultCode>              InPurchaseResult                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PremiumCurrency_C::OnPurchaseHandled(bool bInWasSuccesful, TEnumAsByte<Shark_EShMidasResultCode> InPurchaseResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.OnPurchaseHandled");

	UTBP_UI_PremiumCurrency_C_OnPurchaseHandled_Params params;
	params.bInWasSuccesful = bInWasSuccesful;
	params.InPurchaseResult = InPurchaseResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.BndEvt__ClosePopUpMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_PremiumCurrency_C::BndEvt__ClosePopUpMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.BndEvt__ClosePopUpMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_PremiumCurrency_C_BndEvt__ClosePopUpMenu_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_PremiumCurrency_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.PreConstruct");

	UTBP_UI_PremiumCurrency_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.ExecuteUbergraph_TBP_UI_PremiumCurrency
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PremiumCurrency_C::ExecuteUbergraph_TBP_UI_PremiumCurrency(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrency.TBP_UI_PremiumCurrency_C.ExecuteUbergraph_TBP_UI_PremiumCurrency");

	UTBP_UI_PremiumCurrency_C_ExecuteUbergraph_TBP_UI_PremiumCurrency_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
