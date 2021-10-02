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

// WidgetBlueprintGeneratedClass TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C
// 0x0061 (FullSize[0x02E1] - InheritedSize[0x0280])
class UTBP_UI_IngameMenuButton_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Highlight;                                                 // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Deselected;                                                // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Selected;                                                  // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      CamarillaSymbol;                                           // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_50;                                            // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     MenuItemButton;                                            // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   MenuItemText;                                              // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_NewNotification_C*                   NewNotification;                                           // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerIngameSubmenuWidget*                   MenuWidget;                                                // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnClicked;                                                 // 0x02D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsSelected;                                                // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C");
		return ptr;
	}



	void SetDisplayedText(const struct FText& Text);
	void OnNewMenuSelected(class UTigerIngameSubmenuWidget* NewMenu, bool ShouldUseButtonAsset, class UTBP_UI_IngameMenuButton_C* NewMenuButton, class UTBP_UI_IngameMenuButton_C* CurrenyMenyButton);
	void OnDeselected();
	void OnSelected();
	struct FSlateColor GetMenuItemTextColor();
	void OpenOptions();
	void OpenMap();
	void OpenInventory();
	void Construct();
	void OnClickedItemButton();
	void BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_IngameMenuButton(int EntryPoint);
	void OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
