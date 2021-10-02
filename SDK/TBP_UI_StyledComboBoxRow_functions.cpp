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
//		Name   -> Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.SetSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsSelected                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_StyledComboBoxRow_C::SetSelected(bool InIsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.SetSelected");

	UTBP_UI_StyledComboBoxRow_C_SetSelected_Params params;
	params.InIsSelected = InIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.Init
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FDataTableRowHandle                         InTextStyle                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		class UTBP_UI_StyledComboBox_C*                    InParentBox                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_StyledComboBoxRow_C::Init(const struct FText& InText, const struct FDataTableRowHandle& InTextStyle, class UTBP_UI_StyledComboBox_C* InParentBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.Init");

	UTBP_UI_StyledComboBoxRow_C_Init_Params params;
	params.InText = InText;
	params.InTextStyle = InTextStyle;
	params.InParentBox = InParentBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_StyledComboBoxRow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_StyledComboBoxRow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_StyledComboBoxRow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_StyledComboBoxRow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_StyledComboBoxRow_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_StyledComboBoxRow_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.ExecuteUbergraph_TBP_UI_StyledComboBoxRow
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_StyledComboBoxRow_C::ExecuteUbergraph_TBP_UI_StyledComboBoxRow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StyledComboBoxRow.TBP_UI_StyledComboBoxRow_C.ExecuteUbergraph_TBP_UI_StyledComboBoxRow");

	UTBP_UI_StyledComboBoxRow_C_ExecuteUbergraph_TBP_UI_StyledComboBoxRow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
