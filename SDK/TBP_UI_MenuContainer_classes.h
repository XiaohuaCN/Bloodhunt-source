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

// WidgetBlueprintGeneratedClass TBP_UI_MenuContainer.TBP_UI_MenuContainer_C
// 0x00B1 (FullSize[0x0379] - InheritedSize[0x02C8])
class UTBP_UI_MenuContainer_C : public UTigerIngameMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                ContentCanvas;                                             // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     CurrencyButton;                                            // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   GroupNumberText;                                           // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      IsReadyLines;                                              // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    IsReadyOverlay;                                            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                LeftDivider;                                               // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              MenuItems;                                                 // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CurrentHardCurrencyText_C*           PlayerCurrencyWidget;                                      // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                PopUpCanvas;                                               // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     SystemButton;                                              // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      SystemSelectedIcon;                                        // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             SystemSelectedSwitcher;                                    // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider;                                            // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               TBP_UI_InputPrompt_Gamepad;                                // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputPrompt_Gamepad_C*               TBP_UI_InputPrompt_Gamepad_216;                            // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MaskedCardBorder_C*                  TBP_UI_MaskedCardBorder_C_1;                               // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_PremiumCurrencyPopUp_C*              TBP_UI_PremiumCurrencyPopUp;                               // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                     // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               bHasLocalPlayerSpawned;                                    // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_H4JG[0x7];                                     // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTBP_UI_IngameMenuButton_C*>          MenuButtons;                                               // 0x0368(0x0010) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               bOverrideAllowMouseButtons;                                // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_MenuContainer.TBP_UI_MenuContainer_C");
		return ptr;
	}



	void OnPartyUpdate();
	void OnCurrencyButtonReleased();
	void ClosePremiumCurrencyPopUpMenu();
	void OpenPremiumCurrencyPopUpMenu(const struct FText& InItemName, int InItemCost, class UTBP_UI_PremiumCurrencyPopUp_C** OpenedPopUpMenu);
	void HasValidString(const struct FText& InText, bool* HasValidString);
	void OpenSubMenuForActiveIndex();
	void SetupButtons();
	void IncrementActiveMenuIndex();
	void DecrementActiveMenuIndex();
	void OpenSystem();
	void CreateMenu(class UClass* SubMenuClass);
	struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void InitializeMenus();
	void SelectMenuToTheRight();
	void SelectMenuToTheLeft();
	void OnOpen();
	void OnClose();
	void LocalPlayerSpawned();
	void PreConstruct(bool IsDesignTime);
	void ConstructSubMenusIfNotConstructed();
	void OnInitialized();
	void SelectMenuOnClick(class UTigerIngameSubmenuWidget* SubmenuWidget);
	void Construct();
	void ToggleUIVisibility();
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnMenuSelected();
	void BndEvt__SystemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature();
	void PartyUpdate();
	void PartyUpdate2(const struct FTigerPartyId& InPartyId, const struct FString& InJoiningPlayerId);
	void ExecuteUbergraph_TBP_UI_MenuContainer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
