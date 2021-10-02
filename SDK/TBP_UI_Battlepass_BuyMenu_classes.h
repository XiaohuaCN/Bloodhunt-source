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

// WidgetBlueprintGeneratedClass TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C
// 0x01F8 (FullSize[0x0478] - InheritedSize[0x0280])
class UTBP_UI_Battlepass_BuyMenu_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            RankSkipError;                                             // 0x0288(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            BattlepassError;                                           // 0x0290(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeIn;                                                    // 0x0298(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Button_CTA_C*                        BackSkipButton;                                            // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   BattlepassDestricptionText;                                // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                BattlepassHorizontalBox;                                   // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                BundleVerticalBox;                                         // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Button_CTA_C*                        BuyBattlepassBundleButton_Front;                           // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Button_CTA_C*                        BuyBattlepassButton;                                       // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Button_CTA_C*                        BuyBattlepassButton_Front;                                 // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             BuyButtonSwitcher;                                         // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Button_CTA_C*                        BuyTierSkipButton;                                         // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CurrencyText_C*                      Cost_Battlepass;                                           // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CurrencyText_C*                      Cost_Bundle;                                               // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_CurrencyText_C*                      CurrencyCost;                                              // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    DividerOverlay;                                            // 0x0300(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    GetBattlepassConfigFailedOverlay;                          // 0x0308(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    GetRankSkipConfigFailedOverlay;                            // 0x0310(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   InstantRewardDescritionText;                               // 0x0318(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             MenuWidgetSwitcher;                                        // 0x0320(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Loading_Throbber_C*                  PurchaseTrobber;                                           // 0x0328(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                RankSkipVerticalBox;                                       // 0x0330(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Divider_Vertical_C*                  TBP_UI_Divider_Vertical;                                   // 0x0338(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   TBP_UI_InputMenuPrompt;                                    // 0x0340(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         TBP_UI_Menu_Button_Prompt_Footer;                          // 0x0348(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Popup_Base_C*                        TBP_UI_Popup_Base;                                         // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_StoreEntry_C*                        TBP_UI_StoreEntry_Battlepass;                              // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_StoreEntry_C*                        TBP_UI_StoreEntry_BattlepassBundle;                        // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TierSkipBetweenRanksText;                                  // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TierSkipPurchaseSummaryText;                               // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Battlepass_C*                        Battlepass;                                                // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int, struct FTigerMetaStoreEntry>             RankSkips;                                                 // 0x0380(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTigerMetaStoreBuyPayloadElement>    RankSkipStoreEntry;                                        // 0x03D0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                SelectedBattlepassCost;                                    // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KIMD[0x4];                                     // 0x03E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTBP_UI_StoreEntry_C*                        SelectedStoreEntry;                                        // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                TimeoutHandle;                                             // 0x03F0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InstantRewardDescrition_Text;                              // 0x03F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BattlepassDestricption_Text;                               // 0x0410(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FString                                     Subheader_TextFormatting;                                  // 0x0428(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Subtitle_TextFormatting;                                   // 0x0438(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     UL_TextFormatting;                                         // 0x0448(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     Bold_TextFormating;                                        // 0x0458(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FString                                     EF_TextFormatting;                                         // 0x0468(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C");
		return ptr;
	}



	void ClearTimeoutHandleAndHideThrobber();
	void GetRankSkipsCount(struct FTigerMetaStoreEntry* InEntry, int* Count, bool* bContainsNonRankSkipItem);
	void SetBattlepassMenuData();
	void CreateRankSkipsBuyEntry(bool* bFoundBuyEntries);
	void SetRankSkipMenuData();
	void ParseRankSkipEntries(struct FTigerMetaStoreEntriesConfig* InConfig);
	void ParseBattlepassEntries(struct FTigerMetaStoreEntriesConfig* InConfig);
	void SetBattlepassParent(class UTBP_UI_Battlepass_C* Battlepass);
	void Show(bool IsBuyBattlepass);
	void Hide();
	void SetStoreEntry(const struct FTigerMetaStoreEntry& InStoreEntry, bool bInIsBundle);
	void BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
	void BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature();
	void On_Get_Battlepass_Store_Config(const struct FTigerMetaStoreEntriesConfig& InConfig, Tiger_ETigerMetaStoreEventType InEventType);
	void OnBattlepassPurchased(const struct FTigerBuyStoreEntryResponsePayload& InBuyResponse);
	void On_Get_Season_Rank_Skip_Store_Config(const struct FTigerMetaStoreEntriesConfig& InConfig, Tiger_ETigerMetaStoreEventType InEventType);
	void BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void OnTierSkipsBought(const struct FTigerBuyStoreEntryResponsePayload& InBuyResponse);
	void OnBattlepassTypeChosen();
	void BndEvt__BuyBattlepassButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__BackSkipButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void FetchStoreConfigs();
	void Buy_Battlepass();
	void BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_10_OnInputPressed__DelegateSignature();
	void CreateTimeoutHandle();
	void OnTimedOut();
	void BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassButton_Front_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassBundleButton_Front_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_TBP_UI_Battlepass_BuyMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
