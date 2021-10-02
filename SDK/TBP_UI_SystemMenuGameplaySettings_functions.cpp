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
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.Get Grimoire
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Grimoire_C*                          AsTBP_UI_Grimoire                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::Get_Grimoire(class UTBP_UI_Grimoire_C** AsTBP_UI_Grimoire)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.Get Grimoire");

	UTBP_UI_SystemMenuGameplaySettings_C_Get_Grimoire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsTBP_UI_Grimoire != nullptr)
		*AsTBP_UI_Grimoire = params.AsTBP_UI_Grimoire;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BindButtons
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_SystemMenuGameplaySettings_C::BindButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BindButtons");

	UTBP_UI_SystemMenuGameplaySettings_C_BindButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateDropdownLists
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_SystemMenuGameplaySettings_C::UpdateDropdownLists()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateDropdownLists");

	UTBP_UI_SystemMenuGameplaySettings_C_UpdateDropdownLists_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateLanguageSelections
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_SystemMenuGameplaySettings_C::UpdateLanguageSelections()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateLanguageSelections");

	UTBP_UI_SystemMenuGameplaySettings_C_UpdateLanguageSelections_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SetComboBoxSelection
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_StyledComboBox_C*                    InComboBox                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::SetComboBoxSelection(class UTBP_UI_StyledComboBox_C* InComboBox)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SetComboBoxSelection");

	UTBP_UI_SystemMenuGameplaySettings_C_SetComboBoxSelection_Params params;
	params.InComboBox = InComboBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SetSubmenuButtonNames
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenuGameplaySettings_C::SetSubmenuButtonNames()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SetSubmenuButtonNames");

	UTBP_UI_SystemMenuGameplaySettings_C_SetSubmenuButtonNames_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateWeaponCycleStyleDropdownList
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_StyledComboBox_C*                    InDropdownBox                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInIsGamepad                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuGameplaySettings_C::UpdateWeaponCycleStyleDropdownList(class UTBP_UI_StyledComboBox_C* InDropdownBox, bool bInIsGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateWeaponCycleStyleDropdownList");

	UTBP_UI_SystemMenuGameplaySettings_C_UpdateWeaponCycleStyleDropdownList_Params params;
	params.InDropdownBox = InDropdownBox;
	params.bInIsGamepad = bInIsGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateLanguageSelectionDropdownList
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_StyledComboBox_C*                    InDropdownBox                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FString>                             InSelectableCultures                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TArray<struct FString>                             InAvailableLanguagesArray                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FString                                     InCurrentLanguage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::UpdateLanguageSelectionDropdownList(class UTBP_UI_StyledComboBox_C* InDropdownBox, TArray<struct FString>* InSelectableCultures, TArray<struct FString>* InAvailableLanguagesArray, const struct FString& InCurrentLanguage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateLanguageSelectionDropdownList");

	UTBP_UI_SystemMenuGameplaySettings_C_UpdateLanguageSelectionDropdownList_Params params;
	params.InDropdownBox = InDropdownBox;
	params.InCurrentLanguage = InCurrentLanguage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InSelectableCultures != nullptr)
		*InSelectableCultures = params.InSelectableCultures;
	if (InAvailableLanguagesArray != nullptr)
		*InAvailableLanguagesArray = params.InAvailableLanguagesArray;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.PresetChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenuGameplaySettings_C::PresetChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.PresetChanged");

	UTBP_UI_SystemMenuGameplaySettings_C_PresetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SwitchToCustomPreset
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_SystemMenuGameplaySettings_C::SwitchToCustomPreset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.SwitchToCustomPreset");

	UTBP_UI_SystemMenuGameplaySettings_C_SwitchToCustomPreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateInputPresetsDropdownList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_SystemMenuGameplaySettings_C::UpdateInputPresetsDropdownList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateInputPresetsDropdownList");

	UTBP_UI_SystemMenuGameplaySettings_C_UpdateInputPresetsDropdownList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateSettings
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_SystemMenuGameplaySettings_C::UpdateSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.UpdateSettings");

	UTBP_UI_SystemMenuGameplaySettings_C_UpdateSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_SystemMenuGameplaySettings_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.Construct");

	UTBP_UI_SystemMenuGameplaySettings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              BoxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature");

	UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params params;
	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_SystemMenuGameplaySettings_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnOpen");

	UTBP_UI_SystemMenuGameplaySettings_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              BoxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params params;
	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              BoxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");

	UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params params;
	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature");

	UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__HoldForHeightenedSensesToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__HoldForHeightenedSensesToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__HoldForHeightenedSensesToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature");

	UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__HoldForHeightenedSensesToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_SystemMenuGameplaySettings_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnClose");

	UTBP_UI_SystemMenuGameplaySettings_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__HoldForInventoryToggle_K2Node_ComponentBoundEvent_13_OnCheckStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__HoldForInventoryToggle_K2Node_ComponentBoundEvent_13_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__HoldForInventoryToggle_K2Node_ComponentBoundEvent_13_OnCheckStateChanged__DelegateSignature");

	UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__HoldForInventoryToggle_K2Node_ComponentBoundEvent_13_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuGameplaySettings_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.PreConstruct");

	UTBP_UI_SystemMenuGameplaySettings_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGamepadWeaponStyleChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::OnGamepadWeaponStyleChanged(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGamepadWeaponStyleChanged");

	UTBP_UI_SystemMenuGameplaySettings_C_OnGamepadWeaponStyleChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGameplayPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenuGameplaySettings_C::OnGameplayPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGameplayPressed");

	UTBP_UI_SystemMenuGameplaySettings_C_OnGameplayPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnLanguagePressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenuGameplaySettings_C::OnLanguagePressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnLanguagePressed");

	UTBP_UI_SystemMenuGameplaySettings_C_OnLanguagePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.InputPresetsChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::InputPresetsChanged(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.InputPresetsChanged");

	UTBP_UI_SystemMenuGameplaySettings_C_InputPresetsChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.TextLanguageSelectChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::TextLanguageSelectChanged(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.TextLanguageSelectChanged");

	UTBP_UI_SystemMenuGameplaySettings_C_TextLanguageSelectChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.AudioLanguageSelectChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::AudioLanguageSelectChanged(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.AudioLanguageSelectChanged");

	UTBP_UI_SystemMenuGameplaySettings_C_AudioLanguageSelectChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnKeyboardMousePressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenuGameplaySettings_C::OnKeyboardMousePressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnKeyboardMousePressed");

	UTBP_UI_SystemMenuGameplaySettings_C_OnKeyboardMousePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGamepadPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenuGameplaySettings_C::OnGamepadPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnGamepadPressed");

	UTBP_UI_SystemMenuGameplaySettings_C_OnGamepadPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              BoxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature");

	UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature_Params params;
	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              BoxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature");

	UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature_Params params;
	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              BoxValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SliderValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature");

	UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature_Params params;
	params.BoxValue = BoxValue;
	params.SliderValue = SliderValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature");

	UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnMouseWeaponStyleChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                SelectedIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::OnMouseWeaponStyleChanged(const struct FText& SelectedItem, int SelectedIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.OnMouseWeaponStyleChanged");

	UTBP_UI_SystemMenuGameplaySettings_C_OnMouseWeaponStyleChanged_Params params;
	params.SelectedItem = SelectedItem;
	params.SelectedIndex = SelectedIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__AutoSwapDefaultPistol_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__AutoSwapDefaultPistol_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__AutoSwapDefaultPistol_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature");

	UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__AutoSwapDefaultPistol_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MuteGeneralChatToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuGameplaySettings_C::BndEvt__MuteGeneralChatToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.BndEvt__MuteGeneralChatToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature");

	UTBP_UI_SystemMenuGameplaySettings_C_BndEvt__MuteGeneralChatToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.ExecuteUbergraph_TBP_UI_SystemMenuGameplaySettings
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuGameplaySettings_C::ExecuteUbergraph_TBP_UI_SystemMenuGameplaySettings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C.ExecuteUbergraph_TBP_UI_SystemMenuGameplaySettings");

	UTBP_UI_SystemMenuGameplaySettings_C_ExecuteUbergraph_TBP_UI_SystemMenuGameplaySettings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
