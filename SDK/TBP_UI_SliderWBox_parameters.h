#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetMinValue
struct UTBP_UI_SliderWBox_C_SetMinValue_Params
{
	float                                              MinValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.GetValues
struct UTBP_UI_SliderWBox_C_GetValues_Params
{
	float                                              Box_Value;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Slider_Value;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.InitializeValues
struct UTBP_UI_SliderWBox_C_InitializeValues_Params
{
	float                                              SliderValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinValue;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MaxValue;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowDecimals;                                             // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetMaxValue
struct UTBP_UI_SliderWBox_C_SetMaxValue_Params
{
	float                                              InMaxValue;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.SetBoxValue
struct UTBP_UI_SliderWBox_C_SetBoxValue_Params
{
	float                                              InValue;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Box_K2Node_ComponentBoundEvent_97_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UTBP_UI_SliderWBox_C_BndEvt__Box_K2Node_ComponentBoundEvent_97_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature
struct UTBP_UI_SliderWBox_C_BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature_Params
{
};

// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
struct UTBP_UI_SliderWBox_C_BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params
{
};

// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.BndEvt__Slider_K2Node_ComponentBoundEvent_82_OnFloatValueChangedEvent__DelegateSignature
struct UTBP_UI_SliderWBox_C_BndEvt__Slider_K2Node_ComponentBoundEvent_82_OnFloatValueChangedEvent__DelegateSignature_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.ExecuteUbergraph_TBP_UI_SliderWBox
struct UTBP_UI_SliderWBox_C_ExecuteUbergraph_TBP_UI_SliderWBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SliderWBox.TBP_UI_SliderWBox_C.OnValueChanged__DelegateSignature
struct UTBP_UI_SliderWBox_C_OnValueChanged__DelegateSignature_Params
{
	float                                              BoxValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SliderValue;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
