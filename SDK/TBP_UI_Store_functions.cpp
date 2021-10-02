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
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.TickStoreEntries
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Store_C::TickStoreEntries()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.TickStoreEntries");

	UTBP_UI_Store_C_TickStoreEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.SetStoreAsUnavailable
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Store_C::SetStoreAsUnavailable()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.SetStoreAsUnavailable");

	UTBP_UI_Store_C_SetStoreAsUnavailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.ContainsRankSkipsOnlyAtMaxLevel
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTigerMetaStoreEntry                        StoreEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Store_C::ContainsRankSkipsOnlyAtMaxLevel(struct FTigerMetaStoreEntry* StoreEntry, bool* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.ContainsRankSkipsOnlyAtMaxLevel");

	UTBP_UI_Store_C_ContainsRankSkipsOnlyAtMaxLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StoreEntry != nullptr)
		*StoreEntry = params.StoreEntry;
	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.FillFlashStore
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMetaStoreEntriesConfig                InStoreConfig                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Store_C::FillFlashStore(struct FTigerMetaStoreEntriesConfig* InStoreConfig)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.FillFlashStore");

	UTBP_UI_Store_C_FillFlashStore_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InStoreConfig != nullptr)
		*InStoreConfig = params.InStoreConfig;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.On Switch Active Page
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<EStorePage_EStorePage>                 New_Page                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Store_C::On_Switch_Active_Page(TEnumAsByte<EStorePage_EStorePage> New_Page)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.On Switch Active Page");

	UTBP_UI_Store_C_On_Switch_Active_Page_Params params;
	params.New_Page = New_Page;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.OnItemHovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerVendorStoreCategoryItem               Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Store_C::OnItemHovered(const struct FTigerVendorStoreCategoryItem& Item)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.OnItemHovered");

	UTBP_UI_Store_C_OnItemHovered_Params params;
	params.Item = Item;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.OnItemUnhovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Store_C::OnItemUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.OnItemUnhovered");

	UTBP_UI_Store_C_OnItemUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.OnItemPreview
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerVendorStoreCategoryItem               InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Store_C::OnItemPreview(const struct FTigerVendorStoreCategoryItem& InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.OnItemPreview");

	UTBP_UI_Store_C_OnItemPreview_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Store_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.OnOpen");

	UTBP_UI_Store_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Store_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.Construct");

	UTBP_UI_Store_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.On Active Page Changed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Store_C::On_Active_Page_Changed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.On Active Page Changed");

	UTBP_UI_Store_C_On_Active_Page_Changed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.OnConfirmBuyItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMetaStoreEntry                        StoreEntry                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               bEquipItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Store_C::OnConfirmBuyItem(const struct FTigerMetaStoreEntry& StoreEntry, bool bEquipItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.OnConfirmBuyItem");

	UTBP_UI_Store_C_OnConfirmBuyItem_Params params;
	params.StoreEntry = StoreEntry;
	params.bEquipItem = bEquipItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.OnCancelBuyPopup
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Store_C::OnCancelBuyPopup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.OnCancelBuyPopup");

	UTBP_UI_Store_C_OnCancelBuyPopup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.OnBackgroundSceneShown
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Store_C::OnBackgroundSceneShown()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.OnBackgroundSceneShown");

	UTBP_UI_Store_C_OnBackgroundSceneShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.OnBuySuccessful
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Store_C::OnBuySuccessful()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.OnBuySuccessful");

	UTBP_UI_Store_C_OnBuySuccessful_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Store_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UTBP_UI_Store_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_MatchMaker_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Store_C::BndEvt__TBP_UI_MatchMaker_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_MatchMaker_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature");

	UTBP_UI_Store_C_BndEvt__TBP_UI_MatchMaker_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_MatchMaker_TabButton_85_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Store_C::BndEvt__TBP_UI_MatchMaker_TabButton_85_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_MatchMaker_TabButton_85_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature");

	UTBP_UI_Store_C_BndEvt__TBP_UI_MatchMaker_TabButton_85_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Store_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.OnClose");

	UTBP_UI_Store_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.OnMenuBackPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Store_C::OnMenuBackPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.OnMenuBackPressed");

	UTBP_UI_Store_C_OnMenuBackPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.On Flash Store Items Received
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMetaStoreEntriesConfig                InConfig                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		Tiger_ETigerMetaStoreEventType                     InEventType                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Store_C::On_Flash_Store_Items_Received(const struct FTigerMetaStoreEntriesConfig& InConfig, Tiger_ETigerMetaStoreEventType InEventType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.On Flash Store Items Received");

	UTBP_UI_Store_C_On_Flash_Store_Items_Received_Params params;
	params.InConfig = InConfig;
	params.InEventType = InEventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.Buy Item Response
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerBuyStoreEntryResponsePayload          InBuyResponse                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Store_C::Buy_Item_Response(const struct FTigerBuyStoreEntryResponsePayload& InBuyResponse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.Buy Item Response");

	UTBP_UI_Store_C_Buy_Item_Response_Params params;
	params.InBuyResponse = InBuyResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Store_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.PreConstruct");

	UTBP_UI_Store_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.Enable Tick Remaining Store Durations
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Store_C::Enable_Tick_Remaining_Store_Durations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.Enable Tick Remaining Store Durations");

	UTBP_UI_Store_C_Enable_Tick_Remaining_Store_Durations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.Disable Tick Remaining Store Durations
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Store_C::Disable_Tick_Remaining_Store_Durations()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.Disable Tick Remaining Store Durations");

	UTBP_UI_Store_C_Disable_Tick_Remaining_Store_Durations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.Tick Timers
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Store_C::Tick_Timers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.Tick Timers");

	UTBP_UI_Store_C_Tick_Timers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.OnItemSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerVendorStoreCategoryItem               Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
//		class UTBP_UI_OutfitItem_Store_C*                  OutfitItem_Store                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Store_C::OnItemSelected(const struct FTigerVendorStoreCategoryItem& Item, class UTBP_UI_OutfitItem_Store_C* OutfitItem_Store)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.OnItemSelected");

	UTBP_UI_Store_C_OnItemSelected_Params params;
	params.Item = Item;
	params.OutfitItem_Store = OutfitItem_Store;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Store_C::BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature");

	UTBP_UI_Store_C_BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Store_C::BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature");

	UTBP_UI_Store_C_BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Store_C::BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature");

	UTBP_UI_Store_C_BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Store.TBP_UI_Store_C.ExecuteUbergraph_TBP_UI_Store
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Store_C::ExecuteUbergraph_TBP_UI_Store(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Store.TBP_UI_Store_C.ExecuteUbergraph_TBP_UI_Store");

	UTBP_UI_Store_C_ExecuteUbergraph_TBP_UI_Store_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
