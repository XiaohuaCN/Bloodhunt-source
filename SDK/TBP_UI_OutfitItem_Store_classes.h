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

// WidgetBlueprintGeneratedClass TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C
// 0x01E9 (FullSize[0x0469] - InheritedSize[0x0280])
class UTBP_UI_OutfitItem_Store_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            OnUnhover;                                                 // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            OnHover;                                                   // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BotGlow;                                                   // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     CardBorder;                                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CurrencyText_C*                      CostWidget;                                                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                     EquippedBorder;                                            // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     ImageButton;                                               // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ItemImage;                                                 // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   ItemImage_Scalebox;                                        // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                                   ItemImage_Scalebox_Store;                                  // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                                ItemImageRetainer;                                         // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      ItemImageStore;                                            // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ItemName_Store;                                            // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ItemType_Store;                                            // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Tag_C*                               NewTag;                                                    // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   NewTagText;                                                // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    OutfitItem_SizeBox;                                        // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Tag_C*                               OwnedTag;                                                  // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   OwnedTagText;                                              // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Rarity_left;                                               // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Rarity_right;                                              // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                StoreLayout;                                               // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Gradient_C*                          TBP_UI_Gradient;                                           // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Gradient_C*                          TBP_UI_Gradient_3;                                         // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InventoryClanBodyTypeIcons_C*        TBP_UI_InventoryClanBodyTypeIcons_Store;                   // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MaskedCardBorder_C*                  TBP_UI_MaskedCardBorder_C_1;                               // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TimeLeftText;                                              // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    TimeLeftWidget;                                            // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      TopGlow;                                                   // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTigerVendorStoreCategoryItem               Item;                                                      // 0x0370(0x0098) (Edit, BlueprintVisible, ExposeOnSpawn)
	unsigned char                                      ItemListener[0x10];                                        // 0x0408(0x0010) UNKNOWN PROPERTY: InterfaceProperty
	bool                                               bIsEquipped;                                               // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bShowDurationLeft;                                         // 0x0419(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Is_Owned;                                                  // 0x041A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_FPX5[0x5];                                     // 0x041B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Hair_Color;                                                // 0x0420(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScriptMulticastDelegate                    On_Hover;                                                  // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    On_Unhover;                                                // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    On_Clicked;                                                // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                               IsInWardrobe;                                              // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C");
		return ptr;
	}



	void UpdateLayoutIfCardAsset();
	void SelectImageVisible();
	void ScaleItemSetup();
	void Get_Time_Left_Text(struct FText* Text);
	void UpdateOwnedWidget();
	void SetItemAsOwned(bool bIsOwned);
	void DesaturateItem();
	void SetItemData(class UTigerInventoryItemBase* InBaseItem, int Cost, int InventoryCount, const struct FTigerItemId& InSoftCurrencyId);
	void Is_A_Combined_Item(class UTigerInventoryItemBase* Target, bool* bSuccess);
	void ChooseItem(class UTigerInventoryItemBase* InItem, class UTigerInventoryItemBase** OutItem);
	void ChooseItemTintToShow(class UTigerInventoryItemBase* InItem, struct FLinearColor* TintColor);
	void ChooseItemIconToShow(class UTigerInventoryItemBase* InItem);
	bool IsItemEquipped();
	void UpdateInventoryCount(int InInventoryCount, bool bInIsEquipped, bool* bIsOwnedByPlayer);
	void ChangeButtonTexture(class UTexture2D* InTexture);
	void SetItem(class UTexture2D* UITexture, const struct FText& UiName, int Cost, int InventoryCount, bool bInIsEquipped, const struct FTigerItemId& InSoftCurrencyId);
	void OnLoaded_D094DB7F4D02E37D41DF4B991A731F54(class UObject* Loaded);
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void LoadItemTexture();
	void Update_Item();
	void PreviewItem();
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature();
	void UpdateRarityAndClanIcon(class UTigerInventoryItemBase* InItem);
	void Tick_Entry_Duration();
	void Update_Item_Visuals();
	void ExecuteUbergraph_TBP_UI_OutfitItem_Store(int EntryPoint);
	void On_Clicked__DelegateSignature();
	void On_Unhover__DelegateSignature();
	void On_Hover__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
