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

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.GetTextureForStoreItem
struct UTBP_UI_BuyItemsOverlay_C_GetTextureForStoreItem_Params
{
	class UTexture2D*                                  OuTexture;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.Close
struct UTBP_UI_BuyItemsOverlay_C_Close_Params
{
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnItemBought
struct UTBP_UI_BuyItemsOverlay_C_OnItemBought_Params
{
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnErrorMessage
struct UTBP_UI_BuyItemsOverlay_C_OnErrorMessage_Params
{
	struct FText                                       ErrorMessage;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.RemovePopup
struct UTBP_UI_BuyItemsOverlay_C_RemovePopup_Params
{
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BuyAndEquip
struct UTBP_UI_BuyItemsOverlay_C_BuyAndEquip_Params
{
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.Construct
struct UTBP_UI_BuyItemsOverlay_C_Construct_Params
{
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__TBP_UI_MenuButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UTBP_UI_BuyItemsOverlay_C_BndEvt__TBP_UI_MenuButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UTBP_UI_BuyItemsOverlay_C_BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
struct UTBP_UI_BuyItemsOverlay_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature_Params
{
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__Button_Buy_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature
struct UTBP_UI_BuyItemsOverlay_C_BndEvt__Button_Buy_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature_Params
{
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnTimedOut
struct UTBP_UI_BuyItemsOverlay_C_OnTimedOut_Params
{
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.PreConstruct
struct UTBP_UI_BuyItemsOverlay_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.ExecuteUbergraph_TBP_UI_BuyItemsOverlay
struct UTBP_UI_BuyItemsOverlay_C_ExecuteUbergraph_TBP_UI_BuyItemsOverlay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnPopupRemoved__DelegateSignature
struct UTBP_UI_BuyItemsOverlay_C_OnPopupRemoved__DelegateSignature_Params
{
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnCancelBuy__DelegateSignature
struct UTBP_UI_BuyItemsOverlay_C_OnCancelBuy__DelegateSignature_Params
{
};

// Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnConfirmBuy__DelegateSignature
struct UTBP_UI_BuyItemsOverlay_C_OnConfirmBuy__DelegateSignature_Params
{
	struct FTigerMetaStoreEntry                        StoreEntryToBuy;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bEquipItem;                                                // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
