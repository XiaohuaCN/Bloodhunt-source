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

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdatedPreviewImage
struct UTBP_UI_Battlepass_C_UpdatedPreviewImage_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetItemType
struct UTBP_UI_Battlepass_C_GetItemType_Params
{
	class UTigerInventoryItemBase*                     PreviewItem;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerInventoryItemBase*                     CombinedItem_Parent;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ReturnValue;                                               // 0x0010(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set Item Description
struct UTBP_UI_Battlepass_C_Set_Item_Description_Params
{
	class UTigerInventoryItemBase*                     CombinedItemParent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerInventoryItemBase*                     PreviewItem;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URichTextBlock*                              In_Rich_Text_Block;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetItemRarity
struct UTBP_UI_Battlepass_C_GetItemRarity_Params
{
	class UTigerInventoryItemBase*                     PreviewItem;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerInventoryItemBase*                     CombinedItem_Parent;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerItemRarity                             Rarity;                                                    // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set ItemType
struct UTBP_UI_Battlepass_C_Set_ItemType_Params
{
	class UTigerInventoryItemBase*                     CombinedItemParent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerInventoryItemBase*                     PreviewItem;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set Item Name
struct UTBP_UI_Battlepass_C_Set_Item_Name_Params
{
	class UTigerInventoryItemBase*                     CombinedItemParent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerInventoryItemBase*                     PreviewItem;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class URichTextBlock*                              InRichTextBlock;                                           // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetRewardHoverBlockTimeStamp
struct UTBP_UI_Battlepass_C_SetRewardHoverBlockTimeStamp_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetPurchaseBattlepassRewardsCount
struct UTBP_UI_Battlepass_C_GetPurchaseBattlepassRewardsCount_Params
{
	int                                                TargetLevel;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIncludeFreeRewards;                                       // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	int                                                RewardsCount;                                              // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetRankSkipCount
struct UTBP_UI_Battlepass_C_GetRankSkipCount_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdateRankSkipInfo
struct UTBP_UI_Battlepass_C_UpdateRankSkipInfo_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetSeasonPlacementBonusText
struct UTBP_UI_Battlepass_C_SetSeasonPlacementBonusText_Params
{
	struct FTigerPersistentPlayerTransactionalData     TransactionalData;                                         // 0x0000(0x0068)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update Clan Icon
struct UTBP_UI_Battlepass_C_Update_Clan_Icon_Params
{
	class UTigerInventoryItemBase*                     InputPin;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update Previewed Item Texts
struct UTBP_UI_Battlepass_C_Update_Previewed_Item_Texts_Params
{
	class UTigerInventoryItemBase*                     Preview_Item;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerInventoryItemBase*                     CombinedItemParent;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusJumpBackward
struct UTBP_UI_Battlepass_C_FocusJumpBackward_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusJumpForward
struct UTBP_UI_Battlepass_C_FocusJumpForward_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetTierContainerAtRank
struct UTBP_UI_Battlepass_C_GetTierContainerAtRank_Params
{
	int                                                InRank;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_BattlepassTierContainer_C*           OutTierContainer;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusPreviousReward
struct UTBP_UI_Battlepass_C_FocusPreviousReward_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusNextReward
struct UTBP_UI_Battlepass_C_FocusNextReward_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UnfocusCurrentReward
struct UTBP_UI_Battlepass_C_UnfocusCurrentReward_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetFocusedReward
struct UTBP_UI_Battlepass_C_SetFocusedReward_Params
{
	class UTBP_UI_BattlepassReward_C*                  InReward;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusLatestUnlockedRank
struct UTBP_UI_Battlepass_C_FocusLatestUnlockedRank_Params
{
	int                                                PlayerRank;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetUpMenuInput
struct UTBP_UI_Battlepass_C_SetUpMenuInput_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBoughtBattlepass
struct UTBP_UI_Battlepass_C_OnBoughtBattlepass_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnOpen
struct UTBP_UI_Battlepass_C_OnOpen_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnClose
struct UTBP_UI_Battlepass_C_OnClose_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBackgroundSceneShown
struct UTBP_UI_Battlepass_C_OnBackgroundSceneShown_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnPreviewItemUpdated
struct UTBP_UI_Battlepass_C_OnPreviewItemUpdated_Params
{
	class UTigerInventoryItemBase*                     InPreviewItem;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerBattlepassRewardPreview*               InPreviewActor;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerInventoryItemBase*                     InCombinedItemParent;                                      // 0x0010(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update After Purchase
struct UTBP_UI_Battlepass_C_Update_After_Purchase_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnPersistentPlayerStateInitialized
struct UTBP_UI_Battlepass_C_OnPersistentPlayerStateInitialized_Params
{
	class UTigerPersistentPlayerState*                 InPersistentPlayerState;                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UTBP_UI_Battlepass_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DisplayPopupErrorMessage
struct UTBP_UI_Battlepass_C_DisplayPopupErrorMessage_Params
{
	struct FText                                       ErrorString;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.PreConstruct
struct UTBP_UI_Battlepass_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.PlayerTransactionDataUpdated
struct UTBP_UI_Battlepass_C_PlayerTransactionDataUpdated_Params
{
	struct FTigerPersistentPlayerTransactionalData     TransactionalData;                                         // 0x0000(0x0068)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ItemClicked
struct UTBP_UI_Battlepass_C_ItemClicked_Params
{
	struct FTigerItemId                                InItemId;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int                                                Item_Rank;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Focus Item on Hover
struct UTBP_UI_Battlepass_C_Focus_Item_on_Hover_Params
{
	struct FTigerItemId                                ItemId;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	int                                                Item_Rank;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Item_Is_Free;                                              // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.IncrementFocusedRewardIndex
struct UTBP_UI_Battlepass_C_IncrementFocusedRewardIndex_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DecrementFocusedRewardIndex
struct UTBP_UI_Battlepass_C_DecrementFocusedRewardIndex_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnFocusJumpForward
struct UTBP_UI_Battlepass_C_OnFocusJumpForward_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnFocusJumpBackward
struct UTBP_UI_Battlepass_C_OnFocusJumpBackward_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DisplayPopupExitText
struct UTBP_UI_Battlepass_C_DisplayPopupExitText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Tick
struct UTBP_UI_Battlepass_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_Battlepass_C_BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_Battlepass_C_BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Battlepass_C_BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Battlepass_C_BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Back or Close
struct UTBP_UI_Battlepass_C_Back_or_Close_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On Left Trigger Pressed
struct UTBP_UI_Battlepass_C_On_Left_Trigger_Pressed_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On Right Trigger Pressed
struct UTBP_UI_Battlepass_C_On_Right_Trigger_Pressed_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UTBP_UI_Battlepass_C_BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
struct UTBP_UI_Battlepass_C_BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__RewardsScrollbox_K2Node_ComponentBoundEvent_7_OnUserScrolledEvent__DelegateSignature
struct UTBP_UI_Battlepass_C_BndEvt__RewardsScrollbox_K2Node_ComponentBoundEvent_7_OnUserScrolledEvent__DelegateSignature_Params
{
	float                                              CurrentOffset;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UTBP_UI_Battlepass_C_BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature
struct UTBP_UI_Battlepass_C_BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
struct UTBP_UI_Battlepass_C_BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ChangePreviewImage
struct UTBP_UI_Battlepass_C_ChangePreviewImage_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature
struct UTBP_UI_Battlepass_C_BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature
struct UTBP_UI_Battlepass_C_BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ExecuteUbergraph_TBP_UI_Battlepass
struct UTBP_UI_Battlepass_C_ExecuteUbergraph_TBP_UI_Battlepass_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
