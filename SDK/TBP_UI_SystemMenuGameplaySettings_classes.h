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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C
// 0x0188 (FullSize[0x0418] - InheritedSize[0x0290])
class UTBP_UI_SystemMenuGameplaySettings_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_StyledComboBox_C*                    AudioLanguageSelect;                                       // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          AutoSprintToggle;                                          // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          AutoSwapDefaultPistol;                                     // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              Gamepad_Submenu_Button;                                    // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        GamepadAimingSensitivitySlider;                            // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          GamepadInvertYToggle;                                      // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        GamepadScopedSensitivitySlider;                            // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        GamepadSensitivitySlider;                                  // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    GamepadWeaponCycleStylePreset;                             // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              Gameplay_Submenu_Button;                                   // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             GameplaySettingsSwitcher;                                  // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuSettingsListItem_C*        HoldForHeightenedSensesItem;                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          HoldForHeightenedSensesToggle;                             // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          HoldForInventoryToggle;                                    // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    InputPresets;                                              // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              KeyboardMouse_Submenu_Button;                              // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              Language_Submenu_Button;                                   // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        MouseAimingSensitivitySlider;                              // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          MouseInvertYToggle;                                        // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        MouseScopedSensitivitySlider;                              // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SliderWBox_C*                        MouseSensitivitySlider;                                    // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    MouseWeaponCycleStylePreset;                               // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CheckBox_C*                          MuteGeneralChatToggle;                                     // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Submenu_Header_C*                    TBP_UI_Submenu_Header;                                     // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_StyledComboBox_C*                    TextLanguageSelect;                                        // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuItem_C*                    CurrentlySelectedSystemMenuItem;                           // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIntPoint>                           AvailableResolutions;                                      // 0x0368(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FIntPoint                                   CurrentlySelectedResolution;                               // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Submenu_Gameplay;                                          // 0x0380(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Submenu_KeyboardMouse;                                     // 0x0398(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Submenu_Gamepad;                                           // 0x03B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Submenu_Language;                                          // 0x03C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FText>                               InputTexts;                                                // 0x03E0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             AvailableAudioLanguages;                                   // 0x03F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FString>                             AvailableTextLanguages;                                    // 0x0400(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UTBP_UI_Grimoire_C*                          GrimoireUI;                                                // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_SystemMenuGameplaySettings.TBP_UI_SystemMenuGameplaySettings_C");
		return ptr;
	}



	void Get_Grimoire(class UTBP_UI_Grimoire_C** AsTBP_UI_Grimoire);
	void BindButtons();
	void UpdateDropdownLists();
	void UpdateLanguageSelections();
	void SetComboBoxSelection(class UTBP_UI_StyledComboBox_C* InComboBox);
	void SetSubmenuButtonNames();
	void UpdateWeaponCycleStyleDropdownList(class UTBP_UI_StyledComboBox_C* InDropdownBox, bool bInIsGamepad);
	void UpdateLanguageSelectionDropdownList(class UTBP_UI_StyledComboBox_C* InDropdownBox, TArray<struct FString>* InSelectableCultures, TArray<struct FString>* InAvailableLanguagesArray, const struct FString& InCurrentLanguage);
	void PresetChanged();
	void SwitchToCustomPreset();
	void UpdateInputPresetsDropdownList();
	void UpdateSettings();
	void Construct();
	void BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void OnOpen();
	void BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__AutoSprintToggle_K2Node_ComponentBoundEvent_4_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__HoldForHeightenedSensesToggle_K2Node_ComponentBoundEvent_5_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void OnClose();
	void BndEvt__HoldForInventoryToggle_K2Node_ComponentBoundEvent_13_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void PreConstruct(bool IsDesignTime);
	void OnGamepadWeaponStyleChanged(const struct FText& SelectedItem, int SelectedIndex);
	void OnGameplayPressed();
	void OnLanguagePressed();
	void InputPresetsChanged(const struct FText& SelectedItem, int SelectedIndex);
	void TextLanguageSelectChanged(const struct FText& SelectedItem, int SelectedIndex);
	void AudioLanguageSelectChanged(const struct FText& SelectedItem, int SelectedIndex);
	void OnKeyboardMousePressed();
	void OnGamepadPressed();
	void BndEvt__MouseSensitivitySlider_K2Node_ComponentBoundEvent_16_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__MouseAimingSensitivitySlider_K2Node_ComponentBoundEvent_17_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__MouseScopedSensitivitySlider_K2Node_ComponentBoundEvent_18_OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
	void BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_19_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void OnMouseWeaponStyleChanged(const struct FText& SelectedItem, int SelectedIndex);
	void BndEvt__MouseInvertYToggle_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__AutoSwapDefaultPistol_K2Node_ComponentBoundEvent_0_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__MuteGeneralChatToggle_K2Node_ComponentBoundEvent_1_OnCheckStateChanged__DelegateSignature(bool bIsChecked);
	void ExecuteUbergraph_TBP_UI_SystemMenuGameplaySettings(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
