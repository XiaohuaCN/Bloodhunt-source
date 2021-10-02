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

// WidgetBlueprintGeneratedClass TBP_UI_Store.TBP_UI_Store_C
// 0x0174 (FullSize[0x053C] - InheritedSize[0x03C8])
class UTBP_UI_Store_C : public UTigerOutfitVendorUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            FailedLoadStore;                                           // 0x03D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      Background;                                                // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_TransitionMenuButton_C*              Button_Back;                                               // 0x03E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              CurrencyButton;                                            // 0x03E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      FailedGetStoreConfigBackground;                            // 0x03F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    GetStoreConfigFailedOverlay;                               // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         Preview_Footer;                                            // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         Store_Footer;                                              // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MatchMaker_TabButton_C*              StoreButton;                                               // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   TBP_UI_InputMenuPrompt;                                    // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   TBP_UI_InputMenuPrompt_2;                                  // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   TBP_UI_InputMenuPrompt_3;                                  // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ItemPreview_C*                       TBP_UI_ItemPreview;                                        // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_OutfitItem_Store_C*                  TBP_UI_OutfitItem_Store;                                   // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_OutfitItem_Store_C*                  TBP_UI_OutfitItem_Store_2;                                 // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_OutfitItem_Store_C*                  TBP_UI_OutfitItem_Store_3;                                 // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_OutfitItem_Store_C*                  TBP_UI_OutfitItem_Store_4;                                 // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_PremiumCurrency_C*                   TBP_UI_PremiumCurrency;                                    // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Submenu_Header_C*                    TBP_UI_Submenu_Header_41;                                  // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             WidgetSwitcher;                                            // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTigerVendorStoreCategoryItem               SelectedItem;                                              // 0x0470(0x0098) (Edit, BlueprintVisible, DisableEditOnInstance)
	TEnumAsByte<EStorePage_EStorePage>                 CurrentPage;                                               // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WI9N[0x7];                                     // 0x0509(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTBP_UI_OutfitItem_Store_C*>          StoreItemsWidgets;                                         // 0x0510(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UTBP_UI_OutfitItem_C*                        SelectedOutfitSlot;                                        // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                TickTimerHandle;                                           // 0x0528(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_OutfitItem_Store_C*                  Selected_Outfit_Store_Slot;                                // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OldTemporalAASampleCount;                                  // 0x0538(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Store.TBP_UI_Store_C");
		return ptr;
	}



	void TickStoreEntries();
	void SetStoreAsUnavailable();
	void ContainsRankSkipsOnlyAtMaxLevel(struct FTigerMetaStoreEntry* StoreEntry, bool* Result);
	void FillFlashStore(struct FTigerMetaStoreEntriesConfig* InStoreConfig);
	void On_Switch_Active_Page(TEnumAsByte<EStorePage_EStorePage> New_Page);
	void OnItemHovered(const struct FTigerVendorStoreCategoryItem& Item);
	void OnItemUnhovered();
	void OnItemPreview(const struct FTigerVendorStoreCategoryItem& InItem);
	void OnOpen();
	void Construct();
	void On_Active_Page_Changed();
	void OnConfirmBuyItem(const struct FTigerMetaStoreEntry& StoreEntry, bool bEquipItem);
	void OnCancelBuyPopup();
	void OnBackgroundSceneShown();
	void OnBuySuccessful();
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_MatchMaker_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature();
	void BndEvt__TBP_UI_MatchMaker_TabButton_85_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature();
	void OnClose();
	void OnMenuBackPressed();
	void On_Flash_Store_Items_Received(const struct FTigerMetaStoreEntriesConfig& InConfig, Tiger_ETigerMetaStoreEventType InEventType);
	void Buy_Item_Response(const struct FTigerBuyStoreEntryResponsePayload& InBuyResponse);
	void PreConstruct(bool IsDesignTime);
	void Enable_Tick_Remaining_Store_Durations();
	void Disable_Tick_Remaining_Store_Durations();
	void Tick_Timers();
	void OnItemSelected(const struct FTigerVendorStoreCategoryItem& Item, class UTBP_UI_OutfitItem_Store_C* OutfitItem_Store);
	void BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature();
	void BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature();
	void BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_Store(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
