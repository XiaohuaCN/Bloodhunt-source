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

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.ScrollToIndex
struct UTBP_UI_StyledComboBox_C_ScrollToIndex_Params
{
	int                                                InIndex;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.HasSelection
struct UTBP_UI_StyledComboBox_C_HasSelection_Params
{
	bool                                               HasSelection;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetOptions
struct UTBP_UI_StyledComboBox_C_SetOptions_Params
{
	TArray<struct FText>                               InNewOptions;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.UpdateColors
struct UTBP_UI_StyledComboBox_C_UpdateColors_Params
{
};

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetError
struct UTBP_UI_StyledComboBox_C_SetError_Params
{
	bool                                               InIsError;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.GetCurrentlySelectedOption
struct UTBP_UI_StyledComboBox_C_GetCurrentlySelectedOption_Params
{
	struct FText                                       OutSelectedOption;                                         // 0x0000(0x0018)  (Parm, OutParm)
};

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.SetDropDownExpanded
struct UTBP_UI_StyledComboBox_C_SetDropDownExpanded_Params
{
	bool                                               InExpand;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OptionClicked
struct UTBP_UI_StyledComboBox_C_OptionClicked_Params
{
	class UTBP_UI_StyledComboBoxRow_C*                 InClickedOption;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.BndEvt__Button_180_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_StyledComboBox_C_BndEvt__Button_180_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.PreConstruct
struct UTBP_UI_StyledComboBox_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnMouseEnter
struct UTBP_UI_StyledComboBox_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnMouseLeave
struct UTBP_UI_StyledComboBox_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.Destruct
struct UTBP_UI_StyledComboBox_C_Destruct_Params
{
};

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.ExecuteUbergraph_TBP_UI_StyledComboBox
struct UTBP_UI_StyledComboBox_C_ExecuteUbergraph_TBP_UI_StyledComboBox_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_StyledComboBox.TBP_UI_StyledComboBox_C.OnSelectionChanged__DelegateSignature
struct UTBP_UI_StyledComboBox_C_OnSelectionChanged__DelegateSignature_Params
{
	struct FText                                       SelectedItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SelectedIndex;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
