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

// Function TBP_UI_Store.TBP_UI_Store_C.TickStoreEntries
struct UTBP_UI_Store_C_TickStoreEntries_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.SetStoreAsUnavailable
struct UTBP_UI_Store_C_SetStoreAsUnavailable_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.ContainsRankSkipsOnlyAtMaxLevel
struct UTBP_UI_Store_C_ContainsRankSkipsOnlyAtMaxLevel_Params
{
	struct FTigerMetaStoreEntry                        StoreEntry;                                                // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               Result;                                                    // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Store.TBP_UI_Store_C.FillFlashStore
struct UTBP_UI_Store_C_FillFlashStore_Params
{
	struct FTigerMetaStoreEntriesConfig                InStoreConfig;                                             // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Store.TBP_UI_Store_C.On Switch Active Page
struct UTBP_UI_Store_C_On_Switch_Active_Page_Params
{
	TEnumAsByte<EStorePage_EStorePage>                 New_Page;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Store.TBP_UI_Store_C.OnItemHovered
struct UTBP_UI_Store_C_OnItemHovered_Params
{
	struct FTigerVendorStoreCategoryItem               Item;                                                      // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Store.TBP_UI_Store_C.OnItemUnhovered
struct UTBP_UI_Store_C_OnItemUnhovered_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.OnItemPreview
struct UTBP_UI_Store_C_OnItemPreview_Params
{
	struct FTigerVendorStoreCategoryItem               InItem;                                                    // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Store.TBP_UI_Store_C.OnOpen
struct UTBP_UI_Store_C_OnOpen_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.Construct
struct UTBP_UI_Store_C_Construct_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.On Active Page Changed
struct UTBP_UI_Store_C_On_Active_Page_Changed_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.OnConfirmBuyItem
struct UTBP_UI_Store_C_OnConfirmBuyItem_Params
{
	struct FTigerMetaStoreEntry                        StoreEntry;                                                // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bEquipItem;                                                // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Store.TBP_UI_Store_C.OnCancelBuyPopup
struct UTBP_UI_Store_C_OnCancelBuyPopup_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.OnBackgroundSceneShown
struct UTBP_UI_Store_C_OnBackgroundSceneShown_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.OnBuySuccessful
struct UTBP_UI_Store_C_OnBuySuccessful_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UTBP_UI_Store_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_MatchMaker_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature
struct UTBP_UI_Store_C_BndEvt__TBP_UI_MatchMaker_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_MatchMaker_TabButton_85_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature
struct UTBP_UI_Store_C_BndEvt__TBP_UI_MatchMaker_TabButton_85_K2Node_ComponentBoundEvent_5_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.OnClose
struct UTBP_UI_Store_C_OnClose_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.OnMenuBackPressed
struct UTBP_UI_Store_C_OnMenuBackPressed_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.On Flash Store Items Received
struct UTBP_UI_Store_C_On_Flash_Store_Items_Received_Params
{
	struct FTigerMetaStoreEntriesConfig                InConfig;                                                  // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	Tiger_ETigerMetaStoreEventType                     InEventType;                                               // 0x0028(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Store.TBP_UI_Store_C.Buy Item Response
struct UTBP_UI_Store_C_Buy_Item_Response_Params
{
	struct FTigerBuyStoreEntryResponsePayload          InBuyResponse;                                             // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Store.TBP_UI_Store_C.PreConstruct
struct UTBP_UI_Store_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Store.TBP_UI_Store_C.Enable Tick Remaining Store Durations
struct UTBP_UI_Store_C_Enable_Tick_Remaining_Store_Durations_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.Disable Tick Remaining Store Durations
struct UTBP_UI_Store_C_Disable_Tick_Remaining_Store_Durations_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.Tick Timers
struct UTBP_UI_Store_C_Tick_Timers_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.OnItemSelected
struct UTBP_UI_Store_C_OnItemSelected_Params
{
	struct FTigerVendorStoreCategoryItem               Item;                                                      // 0x0000(0x0098)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	class UTBP_UI_OutfitItem_Store_C*                  OutfitItem_Store;                                          // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature
struct UTBP_UI_Store_C_BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_0_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature
struct UTBP_UI_Store_C_BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_1_K2Node_ComponentBoundEvent_1_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature
struct UTBP_UI_Store_C_BndEvt__TBP_UI_Store_TBP_UI_InputMenuPrompt_2_K2Node_ComponentBoundEvent_6_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Store.TBP_UI_Store_C.ExecuteUbergraph_TBP_UI_Store
struct UTBP_UI_Store_C_ExecuteUbergraph_TBP_UI_Store_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
