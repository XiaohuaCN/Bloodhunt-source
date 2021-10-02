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
//		Name   -> Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetSwappableRange
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InMinIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InMaxIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Carousel_C::SetSwappableRange(int InMinIndex, int InMaxIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetSwappableRange");

	UTBP_UI_Carousel_C_SetSwappableRange_Params params;
	params.InMinIndex = InMinIndex;
	params.InMaxIndex = InMaxIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetSelectedItemIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Carousel_C::SetSelectedItemIndex(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetSelectedItemIndex");

	UTBP_UI_Carousel_C_SetSelectedItemIndex_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Carousel.TBP_UI_Carousel_C.UpdateSelectedItemLabel
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Carousel_C::UpdateSelectedItemLabel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Carousel.TBP_UI_Carousel_C.UpdateSelectedItemLabel");

	UTBP_UI_Carousel_C_UpdateSelectedItemLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetItemLabels
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FText>                               NewItemLabels                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		int                                                NewSelectedItemIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Carousel_C::SetItemLabels(TArray<struct FText>* NewItemLabels, int NewSelectedItemIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Carousel.TBP_UI_Carousel_C.SetItemLabels");

	UTBP_UI_Carousel_C_SetItemLabels_Params params;
	params.NewSelectedItemIndex = NewSelectedItemIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewItemLabels != nullptr)
		*NewItemLabels = params.NewItemLabels;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Carousel.TBP_UI_Carousel_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Carousel_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Carousel.TBP_UI_Carousel_C.PreConstruct");

	UTBP_UI_Carousel_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Carousel.TBP_UI_Carousel_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Carousel_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Carousel.TBP_UI_Carousel_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_Carousel_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Carousel.TBP_UI_Carousel_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Carousel_C::BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Carousel.TBP_UI_Carousel_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_Carousel_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Carousel.TBP_UI_Carousel_C.ExecuteUbergraph_TBP_UI_Carousel
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Carousel_C::ExecuteUbergraph_TBP_UI_Carousel(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Carousel.TBP_UI_Carousel_C.ExecuteUbergraph_TBP_UI_Carousel");

	UTBP_UI_Carousel_C_ExecuteUbergraph_TBP_UI_Carousel_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Carousel.TBP_UI_Carousel_C.SelectedItemIndexChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Carousel_C::SelectedItemIndexChanged__DelegateSignature(int NewIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Carousel.TBP_UI_Carousel_C.SelectedItemIndexChanged__DelegateSignature");

	UTBP_UI_Carousel_C_SelectedItemIndexChanged__DelegateSignature_Params params;
	params.NewIndex = NewIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
