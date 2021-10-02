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

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Set Store Timer if Available
struct UTBP_UI_ItemPreview_C_Set_Store_Timer_if_Available_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetStoreTimeLeft
struct UTBP_UI_ItemPreview_C_SetStoreTimeLeft_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Update BuyButton Visibility
struct UTBP_UI_ItemPreview_C_Update_BuyButton_Visibility_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OpenCurrencyPopUpMenu
struct UTBP_UI_ItemPreview_C_OpenCurrencyPopUpMenu_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetUp Buy Button
struct UTBP_UI_ItemPreview_C_SetUp_Buy_Button_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.CanAffordItem
struct UTBP_UI_ItemPreview_C_CanAffordItem_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Reset Camera Offsets
struct UTBP_UI_ItemPreview_C_Reset_Camera_Offsets_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseButtonUp
struct UTBP_UI_ItemPreview_C_OnMouseButtonUp_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseMove
struct UTBP_UI_ItemPreview_C_OnMouseMove_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseButtonDown
struct UTBP_UI_ItemPreview_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseWheel
struct UTBP_UI_ItemPreview_C_OnMouseWheel_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetItemDescription
struct UTBP_UI_ItemPreview_C_SetItemDescription_Params
{
	class UTigerInventoryItemBase*                     In_Item;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.ProcessBuyItemResponse
struct UTBP_UI_ItemPreview_C_ProcessBuyItemResponse_Params
{
	struct FText                                       InErrorMessage;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bSuccessfulBuy;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               WasPurchaseSuccessful;                                     // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Setup Item Preview Page
struct UTBP_UI_ItemPreview_C_Setup_Item_Preview_Page_Params
{
	struct FTigerVendorStoreCategoryItem               Selected_Item;                                             // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsOwned;                                                  // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UTBP_UI_ItemPreview_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnBuyConfirm
struct UTBP_UI_ItemPreview_C_OnBuyConfirm_Params
{
	struct FTigerMetaStoreEntry                        StoreEntryToBuy;                                           // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bEquipItem;                                                // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnBuyCancel
struct UTBP_UI_ItemPreview_C_OnBuyCancel_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Tick
struct UTBP_UI_ItemPreview_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On ItemPreview Opened
struct UTBP_UI_ItemPreview_C_On_ItemPreview_Opened_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Toggle Zoom Override
struct UTBP_UI_ItemPreview_C_Toggle_Zoom_Override_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Right Mouse Down Override
struct UTBP_UI_ItemPreview_C_Right_Mouse_Down_Override_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On Close Preview
struct UTBP_UI_ItemPreview_C_On_Close_Preview_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnPopupClosed
struct UTBP_UI_ItemPreview_C_OnPopupClosed_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.TickStoreEntry
struct UTBP_UI_ItemPreview_C_TickStoreEntry_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On Mouse BUtton Up
struct UTBP_UI_ItemPreview_C_On_Mouse_BUtton_Up_Params
{
	struct FPointerEvent                               Mouse_Data;                                                // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Track Pan Start Position
struct UTBP_UI_ItemPreview_C_Track_Pan_Start_Position_Params
{
	struct FPointerEvent                               Mouse_Data;                                                // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.ExecuteUbergraph_TBP_UI_ItemPreview
struct UTBP_UI_ItemPreview_C_ExecuteUbergraph_TBP_UI_ItemPreview_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnCancelBuy__DelegateSignature
struct UTBP_UI_ItemPreview_C_OnCancelBuy__DelegateSignature_Params
{
};

// Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnConfirmBuy__DelegateSignature
struct UTBP_UI_ItemPreview_C_OnConfirmBuy__DelegateSignature_Params
{
	struct FTigerMetaStoreEntry                        StoreEntry;                                                // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bEquipItem;                                                // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
