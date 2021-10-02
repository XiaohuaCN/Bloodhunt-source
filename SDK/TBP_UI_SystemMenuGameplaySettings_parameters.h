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

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.Get Grimoire
struct UTBP_UI_SystemMenuGameplaySettings_C_Get_Grimoire_Params
{
	class UTBP_UI_Grimoire_C*                          AsTBP_UI_Grimoire;                                         // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BindButtons
struct UTBP_UI_SystemMenuGameplaySettings_C_BindButtons_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateDropdownLists
struct UTBP_UI_SystemMenuGameplaySettings_C_UpdateDropdownLists_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateLanguageSelections
struct UTBP_UI_SystemMenuGameplaySettings_C_UpdateLanguageSelections_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SetComboBoxSelection
struct UTBP_UI_SystemMenuGameplaySettings_C_SetComboBoxSelection_Params
{
	class UTBP_UI_StyledComboBox_C*                    InComboBox;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SetSubmenuButtonNames
struct UTBP_UI_SystemMenuGameplaySettings_C_SetSubmenuButtonNames_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateWeaponCycleStyleDropdownList
struct UTBP_UI_SystemMenuGameplaySettings_C_UpdateWeaponCycleStyleDropdownList_Params
{
	class UTBP_UI_StyledComboBox_C*                    InDropdownBox;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInIsGamepad;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateLanguageSelectionDropdownList
struct UTBP_UI_SystemMenuGameplaySettings_C_UpdateLanguageSelectionDropdownList_Params
{
	class UTBP_UI_StyledComboBox_C*                    InDropdownBox;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FString>                             InSelectableCultures;                                      // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FString>                             InAvailableLanguagesArray;                                 // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FString                                     InCurrentLanguage;                                         // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.PresetChanged
struct UTBP_UI_SystemMenuGameplaySettings_C_PresetChanged_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SwitchToCustomPreset
struct UTBP_UI_SystemMenuGameplaySettings_C_SwitchToCustomPreset_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateInputPresetsDropdownList
struct UTBP_UI_SystemMenuGameplaySettings_C_UpdateInputPresetsDropdownList_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateSettings
struct UTBP_UI_SystemMenuGameplaySettings_C_UpdateSettings_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.Construct
struct UTBP_UI_SystemMenuGameplaySettings_C_Construct_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
struct UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params
{
	float                                              BoxValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SliderValue;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnOpen
struct UTBP_UI_SystemMenuGameplaySettings_C_OnOpen_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
struct UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params
{
	float                                              BoxValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SliderValue;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
struct UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params
{
	float                                              BoxValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SliderValue;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature
struct UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__HoldForHeightenedSensesToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature
struct UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__HoldForHeightenedSensesToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnClose
struct UTBP_UI_SystemMenuGameplaySettings_C_OnClose_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__HoldForInventoryToggle_K2Node_ComponentBoundEvent_13_OnCheckStateChanged__DelegateSignature
struct UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__HoldForInventoryToggle_K2Node_ComponentBoundEvent_13_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.PreConstruct
struct UTBP_UI_SystemMenuGameplaySettings_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGamepadWeaponStyleChanged
struct UTBP_UI_SystemMenuGameplaySettings_C_OnGamepadWeaponStyleChanged_Params
{
	struct FText                                       SelectedItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SelectedIndex;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGameplayPressed
struct UTBP_UI_SystemMenuGameplaySettings_C_OnGameplayPressed_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnLanguagePressed
struct UTBP_UI_SystemMenuGameplaySettings_C_OnLanguagePressed_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.InputPresetsChanged
struct UTBP_UI_SystemMenuGameplaySettings_C_InputPresetsChanged_Params
{
	struct FText                                       SelectedItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SelectedIndex;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.TextLanguageSelectChanged
struct UTBP_UI_SystemMenuGameplaySettings_C_TextLanguageSelectChanged_Params
{
	struct FText                                       SelectedItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SelectedIndex;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.AudioLanguageSelectChanged
struct UTBP_UI_SystemMenuGameplaySettings_C_AudioLanguageSelectChanged_Params
{
	struct FText                                       SelectedItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SelectedIndex;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnKeyboardMousePressed
struct UTBP_UI_SystemMenuGameplaySettings_C_OnKeyboardMousePressed_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGamepadPressed
struct UTBP_UI_SystemMenuGameplaySettings_C_OnGamepadPressed_Params
{
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature
struct UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature_Params
{
	float                                              BoxValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SliderValue;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature
struct UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature_Params
{
	float                                              BoxValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SliderValue;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature
struct UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature_Params
{
	float                                              BoxValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SliderValue;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature
struct UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnMouseWeaponStyleChanged
struct UTBP_UI_SystemMenuGameplaySettings_C_OnMouseWeaponStyleChanged_Params
{
	struct FText                                       SelectedItem;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                SelectedIndex;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
struct UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__AutoSwapDefaultPistol_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
struct UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__AutoSwapDefaultPistol_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MuteGeneralChatToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
struct UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MuteGeneralChatToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.ExecuteUbergraph_TBP_UI_SystemMenuGameplaySettings
struct UTBP_UI_SystemMenuGameplaySettings_C_ExecuteUbergraph_TBP_UI_SystemMenuGameplaySettings_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
