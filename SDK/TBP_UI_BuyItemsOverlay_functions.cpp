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
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.GetTextureForStoreItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTexture2D*                                  OuTexture                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BuyItemsOverlay_C::GetTextureForStoreItem(class UTexture2D** OuTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.GetTextureForStoreItem");

	UTBP_UI_BuyItemsOverlay_C_GetTextureForStoreItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OuTexture != nullptr)
		*OuTexture = params.OuTexture;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.Close
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_BuyItemsOverlay_C::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.Close");

	UTBP_UI_BuyItemsOverlay_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnItemBought
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_BuyItemsOverlay_C::OnItemBought()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnItemBought");

	UTBP_UI_BuyItemsOverlay_C_OnItemBought_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnErrorMessage
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       ErrorMessage                                               (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_BuyItemsOverlay_C::OnErrorMessage(const struct FText& ErrorMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnErrorMessage");

	UTBP_UI_BuyItemsOverlay_C_OnErrorMessage_Params params;
	params.ErrorMessage = ErrorMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.RemovePopup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_BuyItemsOverlay_C::RemovePopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.RemovePopup");

	UTBP_UI_BuyItemsOverlay_C_RemovePopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BuyAndEquip
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_BuyItemsOverlay_C::BuyAndEquip()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BuyAndEquip");

	UTBP_UI_BuyItemsOverlay_C_BuyAndEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_BuyItemsOverlay_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.Construct");

	UTBP_UI_BuyItemsOverlay_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__TBP_UI_MenuButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_BuyItemsOverlay_C::BndEvt__TBP_UI_MenuButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__TBP_UI_MenuButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UTBP_UI_BuyItemsOverlay_C_BndEvt__TBP_UI_MenuButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_BuyItemsOverlay_C::BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UTBP_UI_BuyItemsOverlay_C_BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_BuyItemsOverlay_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature");

	UTBP_UI_BuyItemsOverlay_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__Button_Buy_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_BuyItemsOverlay_C::BndEvt__Button_Buy_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.BndEvt__Button_Buy_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature");

	UTBP_UI_BuyItemsOverlay_C_BndEvt__Button_Buy_K2Node_ComponentBoundEvent_9_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnTimedOut
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_BuyItemsOverlay_C::OnTimedOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnTimedOut");

	UTBP_UI_BuyItemsOverlay_C_OnTimedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BuyItemsOverlay_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.PreConstruct");

	UTBP_UI_BuyItemsOverlay_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.ExecuteUbergraph_TBP_UI_BuyItemsOverlay
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BuyItemsOverlay_C::ExecuteUbergraph_TBP_UI_BuyItemsOverlay(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.ExecuteUbergraph_TBP_UI_BuyItemsOverlay");

	UTBP_UI_BuyItemsOverlay_C_ExecuteUbergraph_TBP_UI_BuyItemsOverlay_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnPopupRemoved__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_BuyItemsOverlay_C::OnPopupRemoved__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnPopupRemoved__DelegateSignature");

	UTBP_UI_BuyItemsOverlay_C_OnPopupRemoved__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnCancelBuy__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_BuyItemsOverlay_C::OnCancelBuy__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnCancelBuy__DelegateSignature");

	UTBP_UI_BuyItemsOverlay_C_OnCancelBuy__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnConfirmBuy__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMetaStoreEntry                        StoreEntryToBuy                                            (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               bEquipItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BuyItemsOverlay_C::OnConfirmBuy__DelegateSignature(const struct FTigerMetaStoreEntry& StoreEntryToBuy, bool bEquipItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BuyItemsOverlay.TBP_UI_BuyItemsOverlay_C.OnConfirmBuy__DelegateSignature");

	UTBP_UI_BuyItemsOverlay_C_OnConfirmBuy__DelegateSignature_Params params;
	params.StoreEntryToBuy = StoreEntryToBuy;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
