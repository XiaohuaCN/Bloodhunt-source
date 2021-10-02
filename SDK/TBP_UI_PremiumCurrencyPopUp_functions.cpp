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
//		Name   -> Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.SetItemNameAndCost
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InItemName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                InItemCost                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PremiumCurrencyPopUp_C::SetItemNameAndCost(const struct FText& InItemName, int InItemCost)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.SetItemNameAndCost");

	UTBP_UI_PremiumCurrencyPopUp_C_SetItemNameAndCost_Params params;
	params.InItemName = InItemName;
	params.InItemCost = InItemCost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_PremiumCurrencyPopUp_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.PreConstruct");

	UTBP_UI_PremiumCurrencyPopUp_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnOpen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_PremiumCurrencyPopUp_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnOpen");

	UTBP_UI_PremiumCurrencyPopUp_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnClose
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_PremiumCurrencyPopUp_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnClose");

	UTBP_UI_PremiumCurrencyPopUp_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnExitKeyPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_PremiumCurrencyPopUp_C::OnExitKeyPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnExitKeyPressed");

	UTBP_UI_PremiumCurrencyPopUp_C_OnExitKeyPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.ExecuteUbergraph_TBP_UI_PremiumCurrencyPopUp
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PremiumCurrencyPopUp_C::ExecuteUbergraph_TBP_UI_PremiumCurrencyPopUp(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.ExecuteUbergraph_TBP_UI_PremiumCurrencyPopUp");

	UTBP_UI_PremiumCurrencyPopUp_C_ExecuteUbergraph_TBP_UI_PremiumCurrencyPopUp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnClosed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_PremiumCurrencyPopUp_C::OnClosed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PremiumCurrencyPopUp.TBP_UI_PremiumCurrencyPopUp_C.OnClosed__DelegateSignature");

	UTBP_UI_PremiumCurrencyPopUp_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
