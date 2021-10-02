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
//		Name   -> Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.UpdateSelectedState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsCurrentPage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_PageIndicatorDot_C::UpdateSelectedState(bool bIsCurrentPage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.UpdateSelectedState");

	UTBP_UI_PageIndicatorDot_C_UpdateSelectedState_Params params;
	params.bIsCurrentPage = bIsCurrentPage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_PageIndicatorDot_C::BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature");

	UTBP_UI_PageIndicatorDot_C_BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.ExecuteUbergraph_TBP_UI_PageIndicatorDot
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PageIndicatorDot_C::ExecuteUbergraph_TBP_UI_PageIndicatorDot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.ExecuteUbergraph_TBP_UI_PageIndicatorDot");

	UTBP_UI_PageIndicatorDot_C_ExecuteUbergraph_TBP_UI_PageIndicatorDot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.OnPressed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PageIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PageIndicatorDot_C::OnPressed__DelegateSignature(int PageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C.OnPressed__DelegateSignature");

	UTBP_UI_PageIndicatorDot_C_OnPressed__DelegateSignature_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
