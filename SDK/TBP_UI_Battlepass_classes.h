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

// WidgetBlueprintGeneratedClass TBP_UI_Battlepass.TBP_UI_Battlepass_C
// 0x02A8 (FullSize[0x0688] - InheritedSize[0x03E0])
class UTBP_UI_Battlepass_C : public UTigerBattlepassUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            FadeinPreviewImage;                                        // 0x03E8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeoutPreviewImage;                                       // 0x03F0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeIn;                                                    // 0x03F8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   BattlepassStatus;                                          // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             BattlepassWidgetSwitcher;                                  // 0x0408(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      BlackBackground;                                           // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_TransitionMenuButton_C*              Button_Back;                                               // 0x0418(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Button_CTA_C*                        ButtonBattlepassComplete;                                  // 0x0420(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Battlepass_Button_Banner_C*          BuyBattlepassBanner;                                       // 0x0428(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Clan_Icon;                                                 // 0x0430(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        CloseConfirmPurchaseButton;                                // 0x0438(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Popup_Base_C*                        ConfirmPurchasePopup;                                      // 0x0440(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   CurrentBattlepassTier;                                     // 0x0448(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   CurrentXP;                                                 // 0x0450(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              ErrorText;                                                 // 0x0458(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ExpirationText;                                            // 0x0460(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    Freetag;                                                   // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   FreeText;                                                  // 0x0470(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              HorizontalRewardsContainer;                                // 0x0478(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_291;                                                 // 0x0480(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_302;                                                 // 0x0488(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      InputBlocker;                                              // 0x0490(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ItemName;                                                  // 0x0498(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ItemType;                                                  // 0x04A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     JumpLeftButton;                                            // 0x04A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                     JumpRightButton;                                           // 0x04B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    MaxLevelOverlay;                                           // 0x04B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   PopupHeader;                                               // 0x04C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         Preview_Footer;                                            // 0x04C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PreviewImage;                                              // 0x04D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      RarityGlow;                                                // 0x04D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_RewardItemPreview_C*                 RewardItemPreview;                                         // 0x04E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                                  RewardsScrollbox;                                          // 0x04E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   SeasonPlacementBonus;                                      // 0x04F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Battlepass_BuyMenu_C*                TBP_UI_Battlepass_BuyBattlepassMenu;                       // 0x04F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Button_CTA_C*                        TBP_UI_Button_CTA;                                         // 0x0500(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Button_CTA_C*                        TBP_UI_Button_CTA_SkipRanks;                               // 0x0508(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_HorizontalFadeSlot_C*                TBP_UI_HorizontalFadeSlot;                                 // 0x0510(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   TBP_UI_InputMenuPrompt;                                    // 0x0518(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_InputMenuPrompt_C*                   TBP_UI_InputMenuPrompt_2;                                  // 0x0520(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_ItemPreview_C*                       TBP_UI_ItemPreview;                                        // 0x0528(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Loading_Throbber_C*                  TBP_UI_Loading_Throbber;                                   // 0x0530(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Menu_Button_Prompt_Footer_C*         TBP_UI_Menu_Button_Prompt_Footer;                          // 0x0538(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Tag_C*                               TBP_UI_Tag;                                                // 0x0540(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                                    ThrobberSizeBox;                                           // 0x0548(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   UnlockedLevelText;                                         // 0x0550(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      UsedForSize;                                               // 0x0558(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                CONFIG_CamarillaPointsPerRank;                             // 0x0560(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_TIR8[0x4];                                     // 0x0564(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTigerItemId                                PreviousPreviewItemID;                                     // 0x0568(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ErrorStrings[0x28];                                        // 0x0570(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FText                                       Free_Battlepass;                                           // 0x0598(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       BattlepassActivated;                                       // 0x05B0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Current_Rank;                                              // 0x05C8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Battlepass_XP_Name;                                        // 0x05E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FText                                       Rewarded_At_Text;                                          // 0x05F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                CurrentSelectedRank;                                       // 0x0610(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_VPHN[0x4];                                     // 0x0614(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       Purchase_to_Recieve_Text;                                  // 0x0618(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               Item_Hovered_is_Free;                                      // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_VMBX[0x7];                                     // 0x0631(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTBP_UI_BattlepassReward_C*                  CurrentFocusedReward;                                      // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldBlockTickUpdate;                                    // 0x0640(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               ItemHas3DPreview;                                          // 0x0641(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               Is_Head_Item;                                              // 0x0642(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HMYP[0x5];                                     // 0x0643(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTigerItemId                                RankSkipItemId;                                            // 0x0648(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                               bHasCurrentSeasonBattlepass;                               // 0x0650(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_W2ZL[0x3];                                     // 0x0651(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CurrentBattlepassLevel;                                    // 0x0654(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                                   LastScrollTimestamp;                                       // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  PreviewImageTexture;                                       // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OldTemporalAASampleCount;                                  // 0x0668(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_C3S0[0x4];                                     // 0x066C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       BattlePass_Complete_Text;                                  // 0x0670(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Battlepass.TBP_UI_Battlepass_C");
		return ptr;
	}



	void UpdatedPreviewImage(class UTexture2D* Texture);
	struct FText GetItemType(class UTigerInventoryItemBase* PreviewItem, class UTigerInventoryItemBase* CombinedItem_Parent);
	void Set_Item_Description(class UTigerInventoryItemBase* CombinedItemParent, class UTigerInventoryItemBase* PreviewItem, class URichTextBlock* In_Rich_Text_Block);
	void GetItemRarity(class UTigerInventoryItemBase* PreviewItem, class UTigerInventoryItemBase* CombinedItem_Parent, Tiger_ETigerItemRarity* Rarity);
	void Set_ItemType(class UTigerInventoryItemBase* CombinedItemParent, class UTigerInventoryItemBase* PreviewItem);
	void Set_Item_Name(class UTigerInventoryItemBase* CombinedItemParent, class UTigerInventoryItemBase* PreviewItem, class URichTextBlock* InRichTextBlock);
	void SetRewardHoverBlockTimeStamp();
	void GetPurchaseBattlepassRewardsCount(int TargetLevel, bool bIncludeFreeRewards, int* RewardsCount);
	int GetRankSkipCount();
	void UpdateRankSkipInfo();
	void SetSeasonPlacementBonusText(const struct FTigerPersistentPlayerTransactionalData& TransactionalData);
	void Update_Clan_Icon(class UTigerInventoryItemBase* InputPin);
	void Update_Previewed_Item_Texts(class UTigerInventoryItemBase* Preview_Item, class UTigerInventoryItemBase* CombinedItemParent);
	void FocusJumpBackward();
	void FocusJumpForward();
	void GetTierContainerAtRank(int InRank, class UTBP_UI_BattlepassTierContainer_C** OutTierContainer);
	void FocusPreviousReward();
	void FocusNextReward();
	void UnfocusCurrentReward();
	void SetFocusedReward(class UTBP_UI_BattlepassReward_C* InReward);
	void FocusLatestUnlockedRank(int PlayerRank);
	void SetUpMenuInput();
	void OnBoughtBattlepass();
	void OnOpen();
	void OnClose();
	void OnBackgroundSceneShown();
	void OnPreviewItemUpdated(class UTigerInventoryItemBase* InPreviewItem, class ATigerBattlepassRewardPreview* InPreviewActor, class UTigerInventoryItemBase* InCombinedItemParent);
	void Update_After_Purchase();
	void OnPersistentPlayerStateInitialized(class UTigerPersistentPlayerState* InPersistentPlayerState);
	void BndEvt__Button_Back_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
	void DisplayPopupErrorMessage(const struct FText& ErrorString);
	void PreConstruct(bool IsDesignTime);
	void PlayerTransactionDataUpdated(const struct FTigerPersistentPlayerTransactionalData& TransactionalData);
	void ItemClicked(const struct FTigerItemId& InItemId, int Item_Rank);
	void Focus_Item_on_Hover(const struct FTigerItemId& ItemId, int Item_Rank, bool Item_Is_Free);
	void IncrementFocusedRewardIndex();
	void DecrementFocusedRewardIndex();
	void OnFocusJumpForward();
	void OnFocusJumpBackward();
	void DisplayPopupExitText(const struct FText& Text);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void Back_or_Close();
	void On_Left_Trigger_Pressed();
	void On_Right_Trigger_Pressed();
	void BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature();
	void BndEvt__RewardsScrollbox_K2Node_ComponentBoundEvent_7_OnUserScrolledEvent__DelegateSignature(float CurrentOffset);
	void BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature();
	void BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void ChangePreviewImage();
	void BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature();
	void BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_Battlepass(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
