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
//		Name   -> Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.GetCurrentPageIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                CurrentIndex                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PageIndicator_C::GetCurrentPageIndex(int* CurrentIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.GetCurrentPageIndex");

	UTBP_UI_PageIndicator_C_GetCurrentPageIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentIndex != nullptr)
		*CurrentIndex = params.CurrentIndex;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.SetNumPages
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NumPages                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PageIndicator_C::SetNumPages(int NumPages)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.SetNumPages");

	UTBP_UI_PageIndicator_C_SetNumPages_Params params;
	params.NumPages = NumPages;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_PageIndicator_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.PreConstruct");

	UTBP_UI_PageIndicator_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.SelectPage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewPageIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PageIndicator_C::SelectPage(int NewPageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.SelectPage");

	UTBP_UI_PageIndicator_C_SelectPage_Params params;
	params.NewPageIndex = NewPageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_PageIndicator_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.Construct");

	UTBP_UI_PageIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.PageSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PageIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PageIndicator_C::PageSelected(int PageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.PageSelected");

	UTBP_UI_PageIndicator_C_PageSelected_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.ExecuteUbergraph_TBP_UI_PageIndicator
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PageIndicator_C::ExecuteUbergraph_TBP_UI_PageIndicator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.ExecuteUbergraph_TBP_UI_PageIndicator");

	UTBP_UI_PageIndicator_C_ExecuteUbergraph_TBP_UI_PageIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.OnPageSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PageIndex                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PageIndicator_C::OnPageSelected__DelegateSignature(int PageIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PageIndicator.TBP_UI_PageIndicator_C.OnPageSelected__DelegateSignature");

	UTBP_UI_PageIndicator_C_OnPageSelected__DelegateSignature_Params params;
	params.PageIndex = PageIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
