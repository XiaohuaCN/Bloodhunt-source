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
//		Name   -> Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.PurchaseHandled
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InSuccess                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       InMessage                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ConfirmPurchase_Premium_C::PurchaseHandled(bool InSuccess, const struct FText& InMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.PurchaseHandled");

	UTBP_UI_ConfirmPurchase_Premium_C_PurchaseHandled_Params params;
	params.InSuccess = InSuccess;
	params.InMessage = InMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.CloseWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ConfirmPurchase_Premium_C::CloseWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.CloseWidget");

	UTBP_UI_ConfirmPurchase_Premium_C_CloseWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.Show
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ConfirmPurchase_Premium_C::Show()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.Show");

	UTBP_UI_ConfirmPurchase_Premium_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ConfirmPurchase_Premium_C::BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UTBP_UI_ConfirmPurchase_Premium_C_BndEvt__ClosePrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ConfirmPurchase_Premium_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.PreConstruct");

	UTBP_UI_ConfirmPurchase_Premium_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.ExecuteUbergraph_TBP_UI_ConfirmPurchase_Premium
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ConfirmPurchase_Premium_C::ExecuteUbergraph_TBP_UI_ConfirmPurchase_Premium(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.ExecuteUbergraph_TBP_UI_ConfirmPurchase_Premium");

	UTBP_UI_ConfirmPurchase_Premium_C_ExecuteUbergraph_TBP_UI_ConfirmPurchase_Premium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.OnClosed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ConfirmedPurchase                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ConfirmPurchase_Premium_C::OnClosed__DelegateSignature(bool ConfirmedPurchase)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ConfirmPurchase_Premium.TBP_UI_ConfirmPurchase_Premium_C.OnClosed__DelegateSignature");

	UTBP_UI_ConfirmPurchase_Premium_C_OnClosed__DelegateSignature_Params params;
	params.ConfirmedPurchase = ConfirmedPurchase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
