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

// WidgetBlueprintGeneratedClass TBP_UI_SystemMenu.TBP_UI_SystemMenu_C
// 0x0144 (FullSize[0x03FC] - InheritedSize[0x02B8])
class UTBP_UI_SystemMenu_C : public UTigerInputMenuUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_InputPromptCombined_C*               ApplyInputPrompt;                                          // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_IngameMenuButton_C*                  Audio_Button;                                              // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_IngameMenuButton_C*                  Gameplay_Button;                                           // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_IngameMenuButton_C*                  Graphics_Button;                                           // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_IngameMenuButton_C*                  KeyBindings_Button;                                        // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              MenuItems;                                                 // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        PopupQuitButton;                                           // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        PopupReturnButton;                                         // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     QuitButton;                                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   QuitGameText;                                              // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPromptCombined_C*               ResetInputPrompt;                                          // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ConfirmMenu_C*                       ResetPrompt;                                               // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SystemButton;                                              // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider;                                            // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Divider_Vertical_C*                  TBP_UI_Divider_Vertical;                                   // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               TBP_UI_InputPrompt_Gamepad;                                // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               TBP_UI_InputPrompt_Gamepad_216;                            // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPromptCombined_C*               TBP_UI_InputPromptCombined_BackButton;                     // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         TBP_UI_Menu_Button_Prompt_Footer;                          // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Popup_Base_C*                        TBP_UI_Popup_Base;                                         // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuAudioSettings_C*           TBP_UI_SystemMenuAudioSettings;                            // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuGameplaySettings_C*        TBP_UI_SystemMenuGameplaySettings;                         // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuGraphicsSettings_C*        TBP_UI_SystemMenuGraphicsSettings;                         // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuKeybindings_C*             TBP_UI_SystemMenuKeybindings;                              // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                     // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TigerStyledRichTextBlock_174;                              // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher_222;                                        // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuItem_C*                    CurrentlySelectedSystemMenuItem;                           // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuGraphicsSettings_C*        GraphicsSettingsMenu;                                      // 0x03A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerMenuWidget*                            CurrentlyActiveSubMenu;                                    // 0x03A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuGameplaySettings_C*        GameplaySettingsMenu;                                      // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuKeybindings_C*             KeybindingsMenu;                                           // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_SystemMenuAudioSettings_C*           AudioSettingsMenu;                                         // 0x03C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTBP_UI_IngameMenuButton_C*>          MenuButtons;                                               // 0x03C8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UTBP_UI_IngameMenuButton_C*                  SelectedMenuButton;                                        // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_IngameMenuButton_C*                  SelectedMenuButton_FutureSelected;                         // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTigerMenuWidget*>                    MenuWidgets;                                               // 0x03E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int                                                ActiveMenuIndex;                                           // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_SystemMenu.TBP_UI_SystemMenu_C");
		return ptr;
	}



	UMG_ESlateVisibility Get_ResetInputPrompt_Visibility_1();
	UMG_ESlateVisibility Get_ApplyInputPrompt_Visibility_1();
	void SelectMenuAndButtonByIndex();
	void SetActiveMenuButton(class UTBP_UI_IngameMenuButton_C* NewParam);
	void Destruct();
	void OnClose();
	void Construct();
	void BndEvt__Gameplay_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget);
	void BndEvt__Graphics_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget);
	void BndEvt__Audio_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget);
	void BndEvt__KeyBindings_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget);
	void BndEvt__Button_94_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__QuitButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void Close_menu();
	void OnOpenMenu();
	void EscapePressed();
	void BndEvt__PopupQuitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__PopupReturnButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void SelectMenuToTheRight();
	void SelectMenuToTheLeft();
	void CustomEvent_1();
	void CustomEvent();
	void OnOpen();
	void BndEvt__TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_SystemMenu_ApplyInputPrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void OnApplySettings();
	void BndEvt__TBP_UI_SystemMenu_ResetInputPrompt_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_SystemMenu_ResetPrompt_K2Node_ComponentBoundEvent_12_Confirm__DelegateSignature();
	void OnResetSettings();
	void ExecuteUbergraph_TBP_UI_SystemMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
