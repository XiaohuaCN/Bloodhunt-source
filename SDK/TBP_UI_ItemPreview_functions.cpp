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
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Set Store Timer if Available
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ItemPreview_C::Set_Store_Timer_if_Available()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Set Store Timer if Available");

	UTBP_UI_ItemPreview_C_Set_Store_Timer_if_Available_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetStoreTimeLeft
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ItemPreview_C::SetStoreTimeLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetStoreTimeLeft");

	UTBP_UI_ItemPreview_C_SetStoreTimeLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Update BuyButton Visibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ItemPreview_C::Update_BuyButton_Visibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Update BuyButton Visibility");

	UTBP_UI_ItemPreview_C_Update_BuyButton_Visibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OpenCurrencyPopUpMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ItemPreview_C::OpenCurrencyPopUpMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OpenCurrencyPopUpMenu");

	UTBP_UI_ItemPreview_C_OpenCurrencyPopUpMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetUp Buy Button
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ItemPreview_C::SetUp_Buy_Button()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetUp Buy Button");

	UTBP_UI_ItemPreview_C_SetUp_Buy_Button_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.CanAffordItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_UI_ItemPreview_C::CanAffordItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.CanAffordItem");

	UTBP_UI_ItemPreview_C_CanAffordItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Reset Camera Offsets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ItemPreview_C::Reset_Camera_Offsets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Reset Camera Offsets");

	UTBP_UI_ItemPreview_C_Reset_Camera_Offsets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseButtonUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTBP_UI_ItemPreview_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseButtonUp");

	UTBP_UI_ItemPreview_C_OnMouseButtonUp_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseMove
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTBP_UI_ItemPreview_C::OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseMove");

	UTBP_UI_ItemPreview_C_OnMouseMove_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTBP_UI_ItemPreview_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseButtonDown");

	UTBP_UI_ItemPreview_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseWheel
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTBP_UI_ItemPreview_C::OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnMouseWheel");

	UTBP_UI_ItemPreview_C_OnMouseWheel_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetItemDescription
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     In_Item                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ItemPreview_C::SetItemDescription(class UTigerInventoryItemBase* In_Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.SetItemDescription");

	UTBP_UI_ItemPreview_C_SetItemDescription_Params params;
	params.In_Item = In_Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.ProcessBuyItemResponse
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InErrorMessage                                             (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               bSuccessfulBuy                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               WasPurchaseSuccessful                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ItemPreview_C::ProcessBuyItemResponse(const struct FText& InErrorMessage, bool bSuccessfulBuy, bool* WasPurchaseSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.ProcessBuyItemResponse");

	UTBP_UI_ItemPreview_C_ProcessBuyItemResponse_Params params;
	params.InErrorMessage = InErrorMessage;
	params.bSuccessfulBuy = bSuccessfulBuy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (WasPurchaseSuccessful != nullptr)
		*WasPurchaseSuccessful = params.WasPurchaseSuccessful;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Setup Item Preview Page
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerVendorStoreCategoryItem               Selected_Item                                              (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               bIsOwned                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ItemPreview_C::Setup_Item_Preview_Page(const struct FTigerVendorStoreCategoryItem& Selected_Item, bool bIsOwned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Setup Item Preview Page");

	UTBP_UI_ItemPreview_C_Setup_Item_Preview_Page_Params params;
	params.Selected_Item = Selected_Item;
	params.bIsOwned = bIsOwned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ItemPreview_C::BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UTBP_UI_ItemPreview_C_BndEvt__BuyButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnBuyConfirm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMetaStoreEntry                        StoreEntryToBuy                                            (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               bEquipItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ItemPreview_C::OnBuyConfirm(const struct FTigerMetaStoreEntry& StoreEntryToBuy, bool bEquipItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnBuyConfirm");

	UTBP_UI_ItemPreview_C_OnBuyConfirm_Params params;
	params.StoreEntryToBuy = StoreEntryToBuy;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnBuyCancel
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ItemPreview_C::OnBuyCancel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnBuyCancel");

	UTBP_UI_ItemPreview_C_OnBuyCancel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ItemPreview_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Tick");

	UTBP_UI_ItemPreview_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On ItemPreview Opened
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ItemPreview_C::On_ItemPreview_Opened()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On ItemPreview Opened");

	UTBP_UI_ItemPreview_C_On_ItemPreview_Opened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Toggle Zoom Override
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ItemPreview_C::Toggle_Zoom_Override()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Toggle Zoom Override");

	UTBP_UI_ItemPreview_C_Toggle_Zoom_Override_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Right Mouse Down Override
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ItemPreview_C::Right_Mouse_Down_Override()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Right Mouse Down Override");

	UTBP_UI_ItemPreview_C_Right_Mouse_Down_Override_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On Close Preview
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ItemPreview_C::On_Close_Preview()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On Close Preview");

	UTBP_UI_ItemPreview_C_On_Close_Preview_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnPopupClosed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ItemPreview_C::OnPopupClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnPopupClosed");

	UTBP_UI_ItemPreview_C_OnPopupClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.TickStoreEntry
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ItemPreview_C::TickStoreEntry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.TickStoreEntry");

	UTBP_UI_ItemPreview_C_TickStoreEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On Mouse BUtton Up
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               Mouse_Data                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ItemPreview_C::On_Mouse_BUtton_Up(const struct FPointerEvent& Mouse_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.On Mouse BUtton Up");

	UTBP_UI_ItemPreview_C_On_Mouse_BUtton_Up_Params params;
	params.Mouse_Data = Mouse_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Track Pan Start Position
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               Mouse_Data                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ItemPreview_C::Track_Pan_Start_Position(const struct FPointerEvent& Mouse_Data)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.Track Pan Start Position");

	UTBP_UI_ItemPreview_C_Track_Pan_Start_Position_Params params;
	params.Mouse_Data = Mouse_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.ExecuteUbergraph_TBP_UI_ItemPreview
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ItemPreview_C::ExecuteUbergraph_TBP_UI_ItemPreview(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.ExecuteUbergraph_TBP_UI_ItemPreview");

	UTBP_UI_ItemPreview_C_ExecuteUbergraph_TBP_UI_ItemPreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnCancelBuy__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ItemPreview_C::OnCancelBuy__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnCancelBuy__DelegateSignature");

	UTBP_UI_ItemPreview_C_OnCancelBuy__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnConfirmBuy__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMetaStoreEntry                        StoreEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               bEquipItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ItemPreview_C::OnConfirmBuy__DelegateSignature(const struct FTigerMetaStoreEntry& StoreEntry, bool bEquipItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ItemPreview.TBP_UI_ItemPreview_C.OnConfirmBuy__DelegateSignature");

	UTBP_UI_ItemPreview_C_OnConfirmBuy__DelegateSignature_Params params;
	params.StoreEntry = StoreEntry;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
