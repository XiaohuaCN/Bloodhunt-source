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
//		Name   -> Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetMinValue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              MinValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SliderWBox_C::SetMinValue(float MinValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetMinValue");

	UTBP_UI_SliderWBox_C_SetMinValue_Params params;
	params.MinValue = MinValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.GetValues
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              Box_Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Slider_Value                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SliderWBox_C::GetValues(float* Box_Value, float* Slider_Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.GetValues");

	UTBP_UI_SliderWBox_C_GetValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Box_Value != nullptr)
		*Box_Value = params.Box_Value;
	if (Slider_Value != nullptr)
		*Slider_Value = params.Slider_Value;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.InitializeValues
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MinValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MaxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               AllowDecimals                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SliderWBox_C::InitializeValues(float SliderValue, float MinValue, float MaxValue, bool AllowDecimals)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.InitializeValues");

	UTBP_UI_SliderWBox_C_InitializeValues_Params params;
	params.SliderValue = SliderValue;
	params.MinValue = MinValue;
	params.MaxValue = MaxValue;
	params.AllowDecimals = AllowDecimals;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetMaxValue
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InMaxValue                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SliderWBox_C::SetMaxValue(float InMaxValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetMaxValue");

	UTBP_UI_SliderWBox_C_SetMaxValue_Params params;
	params.InMaxValue = InMaxValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetBoxValue
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SliderWBox_C::SetBoxValue(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetBoxValue");

	UTBP_UI_SliderWBox_C_SetBoxValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Box_K2Node_ComponentBoundEvent_97_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SliderWBox_C::BndEvt__Box_K2Node_ComponentBoundEvent_97_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Box_K2Node_ComponentBoundEvent_97_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UTBP_UI_SliderWBox_C_BndEvt__Box_K2Node_ComponentBoundEvent_97_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SliderWBox_C::BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature");

	UTBP_UI_SliderWBox_C_BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SliderWBox_C::BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature");

	UTBP_UI_SliderWBox_C_BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_82_OnFloatValueChangedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SliderWBox_C::BndEvt__Slider_K2Node_ComponentBoundEvent_82_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_82_OnFloatValueChangedEvent__DelegateSignature");

	UTBP_UI_SliderWBox_C_BndEvt__Slider_K2Node_ComponentBoundEvent_82_OnFloatValueChangedEvent__DelegateSignature_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.ExecuteUbergraph_TBP_UI_SliderWBox
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SliderWBox_C::ExecuteUbergraph_TBP_UI_SliderWBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.ExecuteUbergraph_TBP_UI_SliderWBox");

	UTBP_UI_SliderWBox_C_ExecuteUbergraph_TBP_UI_SliderWBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.OnValueChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              BoxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SliderWBox_C::OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.OnValueChanged__DelegateSignature");

	UTBP_UI_SliderWBox_C_OnValueChanged__DelegateSignature_Params params;
	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
