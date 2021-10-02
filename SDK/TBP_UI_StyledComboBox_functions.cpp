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
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.ScrollToIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_StyledComboBox_C::ScrollToIndex(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.ScrollToIndex");

	UTBP_UI_StyledComboBox_C_ScrollToIndex_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.HasSelection
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               HasSelection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_StyledComboBox_C::HasSelection(bool* HasSelection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.HasSelection");

	UTBP_UI_StyledComboBox_C_HasSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasSelection != nullptr)
		*HasSelection = params.HasSelection;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetOptions
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FText>                               InNewOptions                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_StyledComboBox_C::SetOptions(TArray<struct FText>* InNewOptions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetOptions");

	UTBP_UI_StyledComboBox_C_SetOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InNewOptions != nullptr)
		*InNewOptions = params.InNewOptions;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.UpdateColors
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_StyledComboBox_C::UpdateColors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.UpdateColors");

	UTBP_UI_StyledComboBox_C_UpdateColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetError
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsError                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_StyledComboBox_C::SetError(bool InIsError)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetError");

	UTBP_UI_StyledComboBox_C_SetError_Params params;
	params.InIsError = InIsError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.GetCurrentlySelectedOption
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       OutSelectedOption                                          (Parm, OutParm)
void UTBP_UI_StyledComboBox_C::GetCurrentlySelectedOption(struct FText* OutSelectedOption)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.GetCurrentlySelectedOption");

	UTBP_UI_StyledComboBox_C_GetCurrentlySelectedOption_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutSelectedOption != nullptr)
		*OutSelectedOption = params.OutSelectedOption;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetDropDownExpanded
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InExpand                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_StyledComboBox_C::SetDropDownExpanded(bool InExpand)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetDropDownExpanded");

	UTBP_UI_StyledComboBox_C_SetDropDownExpanded_Params params;
	params.InExpand = InExpand;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OptionClicked
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_StyledComboBoxRow_C*                 InClickedOption                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_StyledComboBox_C::OptionClicked(class UTBP_UI_StyledComboBoxRow_C* InClickedOption)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OptionClicked");

	UTBP_UI_StyledComboBox_C_OptionClicked_Params params;
	params.InClickedOption = InClickedOption;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.BndEvt__Button_180_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_StyledComboBox_C::BndEvt__Button_180_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.BndEvt__Button_180_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_StyledComboBox_C_BndEvt__Button_180_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_StyledComboBox_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.PreConstruct");

	UTBP_UI_StyledComboBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnMouseEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_StyledComboBox_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnMouseEnter");

	UTBP_UI_StyledComboBox_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnMouseLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_StyledComboBox_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnMouseLeave");

	UTBP_UI_StyledComboBox_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_StyledComboBox_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.Destruct");

	UTBP_UI_StyledComboBox_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.ExecuteUbergraph_TBP_UI_StyledComboBox
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_StyledComboBox_C::ExecuteUbergraph_TBP_UI_StyledComboBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.ExecuteUbergraph_TBP_UI_StyledComboBox");

	UTBP_UI_StyledComboBox_C_ExecuteUbergraph_TBP_UI_StyledComboBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnSelectionChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_StyledComboBox_C::OnSelectionChanged__DelegateSignature(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnSelectionChanged__DelegateSignature");

	UTBP_UI_StyledComboBox_C_OnSelectionChanged__DelegateSignature_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
