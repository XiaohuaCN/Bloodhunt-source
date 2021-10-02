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

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.UpdateLayoutIfCardAsset
struct UTBP_UI_OutfitItem_Store_C_UpdateLayoutIfCardAsset_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SelectImageVisible
struct UTBP_UI_OutfitItem_Store_C_SelectImageVisible_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ScaleItemSetup
struct UTBP_UI_OutfitItem_Store_C_ScaleItemSetup_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Get Time Left Text
struct UTBP_UI_OutfitItem_Store_C_Get_Time_Left_Text_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (Parm, OutParm)
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.UpdateOwnedWidget
struct UTBP_UI_OutfitItem_Store_C_UpdateOwnedWidget_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SetItemAsOwned
struct UTBP_UI_OutfitItem_Store_C_SetItemAsOwned_Params
{
	bool                                               bIsOwned;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.DesaturateItem
struct UTBP_UI_OutfitItem_Store_C_DesaturateItem_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SetItemData
struct UTBP_UI_OutfitItem_Store_C_SetItemData_Params
{
	class UTigerInventoryItemBase*                     InBaseItem;                                                // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Cost;                                                      // 0x0030(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InventoryCount;                                            // 0x0034(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTigerItemId                                InSoftCurrencyId;                                          // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Is A Combined Item
struct UTBP_UI_OutfitItem_Store_C_Is_A_Combined_Item_Params
{
	class UTigerInventoryItemBase*                     Target;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSuccess;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChooseItem
struct UTBP_UI_OutfitItem_Store_C_ChooseItem_Params
{
	class UTigerInventoryItemBase*                     InItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerInventoryItemBase*                     OutItem;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChooseItemTintToShow
struct UTBP_UI_OutfitItem_Store_C_ChooseItemTintToShow_Params
{
	class UTigerInventoryItemBase*                     InItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                TintColor;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChooseItemIconToShow
struct UTBP_UI_OutfitItem_Store_C_ChooseItemIconToShow_Params
{
	class UTigerInventoryItemBase*                     InItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.IsItemEquipped
struct UTBP_UI_OutfitItem_Store_C_IsItemEquipped_Params
{
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.UpdateInventoryCount
struct UTBP_UI_OutfitItem_Store_C_UpdateInventoryCount_Params
{
	int                                                InInventoryCount;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInIsEquipped;                                             // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsOwnedByPlayer;                                          // 0x0005(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ChangeButtonTexture
struct UTBP_UI_OutfitItem_Store_C_ChangeButtonTexture_Params
{
	class UTexture2D*                                  InTexture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.SetItem
struct UTBP_UI_OutfitItem_Store_C_SetItem_Params
{
	class UTexture2D*                                  UITexture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       UiName;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Cost;                                                      // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InventoryCount;                                            // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInIsEquipped;                                             // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTigerItemId                                InSoftCurrencyId;                                          // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.OnLoaded_D094DB7F4D02E37D41DF4B991A731F54
struct UTBP_UI_OutfitItem_Store_C_OnLoaded_D094DB7F4D02E37D41DF4B991A731F54_Params
{
	class UObject*                                     Loaded;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_OutfitItem_Store_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Construct
struct UTBP_UI_OutfitItem_Store_C_Construct_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_OutfitItem_Store_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.LoadItemTexture
struct UTBP_UI_OutfitItem_Store_C_LoadItemTexture_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Update Item
struct UTBP_UI_OutfitItem_Store_C_Update_Item_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.PreviewItem
struct UTBP_UI_OutfitItem_Store_C_PreviewItem_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_OutfitItem_Store_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.UpdateRarityAndClanIcon
struct UTBP_UI_OutfitItem_Store_C_UpdateRarityAndClanIcon_Params
{
	class UTigerInventoryItemBase*                     InItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Tick Entry Duration
struct UTBP_UI_OutfitItem_Store_C_Tick_Entry_Duration_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.Update Item Visuals
struct UTBP_UI_OutfitItem_Store_C_Update_Item_Visuals_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.ExecuteUbergraph_TBP_UI_OutfitItem_Store
struct UTBP_UI_OutfitItem_Store_C_ExecuteUbergraph_TBP_UI_OutfitItem_Store_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.On Clicked__DelegateSignature
struct UTBP_UI_OutfitItem_Store_C_On_Clicked__DelegateSignature_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.On Unhover__DelegateSignature
struct UTBP_UI_OutfitItem_Store_C_On_Unhover__DelegateSignature_Params
{
};

// Function TBP_UI_OutfitItem_Store.TBP_UI_OutfitItem_Store_C.On Hover__DelegateSignature
struct UTBP_UI_OutfitItem_Store_C_On_Hover__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
