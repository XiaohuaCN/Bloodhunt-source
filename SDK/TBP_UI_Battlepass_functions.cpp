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
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdatedPreviewImage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::UpdatedPreviewImage(class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdatedPreviewImage");

	UTBP_UI_Battlepass_C_UpdatedPreviewImage_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetItemType
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     PreviewItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerInventoryItemBase*                     CombinedItem_Parent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UTBP_UI_Battlepass_C::GetItemType(class UTigerInventoryItemBase* PreviewItem, class UTigerInventoryItemBase* CombinedItem_Parent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetItemType");

	UTBP_UI_Battlepass_C_GetItemType_Params params;
	params.PreviewItem = PreviewItem;
	params.CombinedItem_Parent = CombinedItem_Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set Item Description
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     CombinedItemParent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerInventoryItemBase*                     PreviewItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class URichTextBlock*                              In_Rich_Text_Block                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::Set_Item_Description(class UTigerInventoryItemBase* CombinedItemParent, class UTigerInventoryItemBase* PreviewItem, class URichTextBlock* In_Rich_Text_Block)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set Item Description");

	UTBP_UI_Battlepass_C_Set_Item_Description_Params params;
	params.CombinedItemParent = CombinedItemParent;
	params.PreviewItem = PreviewItem;
	params.In_Rich_Text_Block = In_Rich_Text_Block;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetItemRarity
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     PreviewItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerInventoryItemBase*                     CombinedItem_Parent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerItemRarity                             Rarity                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::GetItemRarity(class UTigerInventoryItemBase* PreviewItem, class UTigerInventoryItemBase* CombinedItem_Parent, Tiger_ETigerItemRarity* Rarity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetItemRarity");

	UTBP_UI_Battlepass_C_GetItemRarity_Params params;
	params.PreviewItem = PreviewItem;
	params.CombinedItem_Parent = CombinedItem_Parent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Rarity != nullptr)
		*Rarity = params.Rarity;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set ItemType
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     CombinedItemParent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerInventoryItemBase*                     PreviewItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::Set_ItemType(class UTigerInventoryItemBase* CombinedItemParent, class UTigerInventoryItemBase* PreviewItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set ItemType");

	UTBP_UI_Battlepass_C_Set_ItemType_Params params;
	params.CombinedItemParent = CombinedItemParent;
	params.PreviewItem = PreviewItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set Item Name
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     CombinedItemParent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerInventoryItemBase*                     PreviewItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class URichTextBlock*                              InRichTextBlock                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::Set_Item_Name(class UTigerInventoryItemBase* CombinedItemParent, class UTigerInventoryItemBase* PreviewItem, class URichTextBlock* InRichTextBlock)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Set Item Name");

	UTBP_UI_Battlepass_C_Set_Item_Name_Params params;
	params.CombinedItemParent = CombinedItemParent;
	params.PreviewItem = PreviewItem;
	params.InRichTextBlock = InRichTextBlock;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetRewardHoverBlockTimeStamp
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Battlepass_C::SetRewardHoverBlockTimeStamp()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetRewardHoverBlockTimeStamp");

	UTBP_UI_Battlepass_C_SetRewardHoverBlockTimeStamp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetPurchaseBattlepassRewardsCount
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                TargetLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIncludeFreeRewards                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                RewardsCount                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::GetPurchaseBattlepassRewardsCount(int TargetLevel, bool bIncludeFreeRewards, int* RewardsCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetPurchaseBattlepassRewardsCount");

	UTBP_UI_Battlepass_C_GetPurchaseBattlepassRewardsCount_Params params;
	params.TargetLevel = TargetLevel;
	params.bIncludeFreeRewards = bIncludeFreeRewards;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RewardsCount != nullptr)
		*RewardsCount = params.RewardsCount;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetRankSkipCount
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
int UTBP_UI_Battlepass_C::GetRankSkipCount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetRankSkipCount");

	UTBP_UI_Battlepass_C_GetRankSkipCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdateRankSkipInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Battlepass_C::UpdateRankSkipInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UpdateRankSkipInfo");

	UTBP_UI_Battlepass_C_UpdateRankSkipInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetSeasonPlacementBonusText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerTransactionalData     TransactionalData                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Battlepass_C::SetSeasonPlacementBonusText(const struct FTigerPersistentPlayerTransactionalData& TransactionalData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetSeasonPlacementBonusText");

	UTBP_UI_Battlepass_C_SetSeasonPlacementBonusText_Params params;
	params.TransactionalData = TransactionalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update Clan Icon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     InputPin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::Update_Clan_Icon(class UTigerInventoryItemBase* InputPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update Clan Icon");

	UTBP_UI_Battlepass_C_Update_Clan_Icon_Params params;
	params.InputPin = InputPin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update Previewed Item Texts
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     Preview_Item                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerInventoryItemBase*                     CombinedItemParent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::Update_Previewed_Item_Texts(class UTigerInventoryItemBase* Preview_Item, class UTigerInventoryItemBase* CombinedItemParent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update Previewed Item Texts");

	UTBP_UI_Battlepass_C_Update_Previewed_Item_Texts_Params params;
	params.Preview_Item = Preview_Item;
	params.CombinedItemParent = CombinedItemParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusJumpBackward
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Battlepass_C::FocusJumpBackward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusJumpBackward");

	UTBP_UI_Battlepass_C_FocusJumpBackward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusJumpForward
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Battlepass_C::FocusJumpForward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusJumpForward");

	UTBP_UI_Battlepass_C_FocusJumpForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetTierContainerAtRank
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InRank                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTBP_UI_BattlepassTierContainer_C*           OutTierContainer                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::GetTierContainerAtRank(int InRank, class UTBP_UI_BattlepassTierContainer_C** OutTierContainer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.GetTierContainerAtRank");

	UTBP_UI_Battlepass_C_GetTierContainerAtRank_Params params;
	params.InRank = InRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTierContainer != nullptr)
		*OutTierContainer = params.OutTierContainer;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusPreviousReward
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Battlepass_C::FocusPreviousReward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusPreviousReward");

	UTBP_UI_Battlepass_C_FocusPreviousReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusNextReward
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Battlepass_C::FocusNextReward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusNextReward");

	UTBP_UI_Battlepass_C_FocusNextReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UnfocusCurrentReward
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_C::UnfocusCurrentReward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.UnfocusCurrentReward");

	UTBP_UI_Battlepass_C_UnfocusCurrentReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetFocusedReward
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_BattlepassReward_C*                  InReward                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::SetFocusedReward(class UTBP_UI_BattlepassReward_C* InReward)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetFocusedReward");

	UTBP_UI_Battlepass_C_SetFocusedReward_Params params;
	params.InReward = InReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusLatestUnlockedRank
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                PlayerRank                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::FocusLatestUnlockedRank(int PlayerRank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.FocusLatestUnlockedRank");

	UTBP_UI_Battlepass_C_FocusLatestUnlockedRank_Params params;
	params.PlayerRank = PlayerRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetUpMenuInput
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Battlepass_C::SetUpMenuInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.SetUpMenuInput");

	UTBP_UI_Battlepass_C_SetUpMenuInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBoughtBattlepass
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Battlepass_C::OnBoughtBattlepass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBoughtBattlepass");

	UTBP_UI_Battlepass_C_OnBoughtBattlepass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Battlepass_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnOpen");

	UTBP_UI_Battlepass_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Battlepass_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnClose");

	UTBP_UI_Battlepass_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBackgroundSceneShown
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Battlepass_C::OnBackgroundSceneShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnBackgroundSceneShown");

	UTBP_UI_Battlepass_C_OnBackgroundSceneShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnPreviewItemUpdated
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     InPreviewItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerBattlepassRewardPreview*               InPreviewActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerInventoryItemBase*                     InCombinedItemParent                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::OnPreviewItemUpdated(class UTigerInventoryItemBase* InPreviewItem, class ATigerBattlepassRewardPreview* InPreviewActor, class UTigerInventoryItemBase* InCombinedItemParent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnPreviewItemUpdated");

	UTBP_UI_Battlepass_C_OnPreviewItemUpdated_Params params;
	params.InPreviewItem = InPreviewItem;
	params.InPreviewActor = InPreviewActor;
	params.InCombinedItemParent = InCombinedItemParent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update After Purchase
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_C::Update_After_Purchase()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Update After Purchase");

	UTBP_UI_Battlepass_C_Update_After_Purchase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnPersistentPlayerStateInitialized
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UTigerPersistentPlayerState*                 InPersistentPlayerState                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::OnPersistentPlayerStateInitialized(class UTigerPersistentPlayerState* InPersistentPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnPersistentPlayerStateInitialized");

	UTBP_UI_Battlepass_C_OnPersistentPlayerStateInitialized_Params params;
	params.InPersistentPlayerState = InPersistentPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UTBP_UI_Battlepass_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DisplayPopupErrorMessage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ErrorString                                                (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Battlepass_C::DisplayPopupErrorMessage(const struct FText& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DisplayPopupErrorMessage");

	UTBP_UI_Battlepass_C_DisplayPopupErrorMessage_Params params;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Battlepass_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.PreConstruct");

	UTBP_UI_Battlepass_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.PlayerTransactionDataUpdated
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerTransactionalData     TransactionalData                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Battlepass_C::PlayerTransactionDataUpdated(const struct FTigerPersistentPlayerTransactionalData& TransactionalData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.PlayerTransactionDataUpdated");

	UTBP_UI_Battlepass_C_PlayerTransactionDataUpdated_Params params;
	params.TransactionalData = TransactionalData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ItemClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemId                                InItemId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		int                                                Item_Rank                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::ItemClicked(const struct FTigerItemId& InItemId, int Item_Rank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ItemClicked");

	UTBP_UI_Battlepass_C_ItemClicked_Params params;
	params.InItemId = InItemId;
	params.Item_Rank = Item_Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Focus Item on Hover
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemId                                ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		int                                                Item_Rank                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Item_Is_Free                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Battlepass_C::Focus_Item_on_Hover(const struct FTigerItemId& ItemId, int Item_Rank, bool Item_Is_Free)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Focus Item on Hover");

	UTBP_UI_Battlepass_C_Focus_Item_on_Hover_Params params;
	params.ItemId = ItemId;
	params.Item_Rank = Item_Rank;
	params.Item_Is_Free = Item_Is_Free;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.IncrementFocusedRewardIndex
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_C::IncrementFocusedRewardIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.IncrementFocusedRewardIndex");

	UTBP_UI_Battlepass_C_IncrementFocusedRewardIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DecrementFocusedRewardIndex
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_C::DecrementFocusedRewardIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DecrementFocusedRewardIndex");

	UTBP_UI_Battlepass_C_DecrementFocusedRewardIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnFocusJumpForward
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_C::OnFocusJumpForward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnFocusJumpForward");

	UTBP_UI_Battlepass_C_OnFocusJumpForward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnFocusJumpBackward
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_C::OnFocusJumpBackward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.OnFocusJumpBackward");

	UTBP_UI_Battlepass_C_OnFocusJumpBackward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DisplayPopupExitText
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Battlepass_C::DisplayPopupExitText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.DisplayPopupExitText");

	UTBP_UI_Battlepass_C_DisplayPopupExitText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Tick");

	UTBP_UI_Battlepass_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_C::BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_Battlepass_C_BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_C::BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_Battlepass_C_BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_C::BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Battlepass_C_BndEvt__JumpLeftButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_C::BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Battlepass_C_BndEvt__JumpRightButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Back or Close
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_C::Back_or_Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.Back or Close");

	UTBP_UI_Battlepass_C_Back_or_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On Left Trigger Pressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_C::On_Left_Trigger_Pressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On Left Trigger Pressed");

	UTBP_UI_Battlepass_C_On_Left_Trigger_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On Right Trigger Pressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_C::On_Right_Trigger_Pressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.On Right Trigger Pressed");

	UTBP_UI_Battlepass_C_On_Right_Trigger_Pressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UTBP_UI_Battlepass_C_BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature");

	UTBP_UI_Battlepass_C_BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__RewardsScrollbox_K2Node_ComponentBoundEvent_7_OnUserScrolledEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		float                                              CurrentOffset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::BndEvt__RewardsScrollbox_K2Node_ComponentBoundEvent_7_OnUserScrolledEvent__DelegateSignature(float CurrentOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__RewardsScrollbox_K2Node_ComponentBoundEvent_7_OnUserScrolledEvent__DelegateSignature");

	UTBP_UI_Battlepass_C_BndEvt__RewardsScrollbox_K2Node_ComponentBoundEvent_7_OnUserScrolledEvent__DelegateSignature_Params params;
	params.CurrentOffset = CurrentOffset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UTBP_UI_Battlepass_C_BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature");

	UTBP_UI_Battlepass_C_BndEvt__TBP_UI_Button_CTA_SkipRanks_K2Node_ComponentBoundEvent_11_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UTBP_UI_Battlepass_C_BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ChangePreviewImage
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_C::ChangePreviewImage()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ChangePreviewImage");

	UTBP_UI_Battlepass_C_ChangePreviewImage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature");

	UTBP_UI_Battlepass_C_BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_3_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_C::BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature");

	UTBP_UI_Battlepass_C_BndEvt__TBP_UI_Battlepass_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_12_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ExecuteUbergraph_TBP_UI_Battlepass
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_C::ExecuteUbergraph_TBP_UI_Battlepass(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass.TBP_UI_Battlepass_C.ExecuteUbergraph_TBP_UI_Battlepass");

	UTBP_UI_Battlepass_C_ExecuteUbergraph_TBP_UI_Battlepass_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
