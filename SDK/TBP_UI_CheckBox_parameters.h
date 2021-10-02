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

// Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.SetIsChecked
struct UTBP_UI_CheckBox_C_SetIsChecked_Params
{
	bool                                               bInIsChecked;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.GetCurrentStateTintColor
struct UTBP_UI_CheckBox_C_GetCurrentStateTintColor_Params
{
	struct FSlateColor                                 TintColor;                                                 // 0x0000(0x0028)  (Parm, OutParm)
};

// Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
struct UTBP_UI_CheckBox_C_BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.PreConstruct
struct UTBP_UI_CheckBox_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.Tick
struct UTBP_UI_CheckBox_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.ExecuteUbergraph_TBP_UI_CheckBox
struct UTBP_UI_CheckBox_C_ExecuteUbergraph_TBP_UI_CheckBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.OnCheckStateChanged__DelegateSignature
struct UTBP_UI_CheckBox_C_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
