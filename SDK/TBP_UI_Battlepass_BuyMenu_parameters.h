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

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ClearTimeoutHandleAndHideThrobber
struct UTBP_UI_Battlepass_BuyMenu_C_ClearTimeoutHandleAndHideThrobber_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.GetRankSkipsCount
struct UTBP_UI_Battlepass_BuyMenu_C_GetRankSkipsCount_Params
{
	struct FTigerMetaStoreEntry                        InEntry;                                                   // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Count;                                                     // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bContainsNonRankSkipItem;                                  // 0x0054(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetBattlepassMenuData
struct UTBP_UI_Battlepass_BuyMenu_C_SetBattlepassMenuData_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.CreateRankSkipsBuyEntry
struct UTBP_UI_Battlepass_BuyMenu_C_CreateRankSkipsBuyEntry_Params
{
	bool                                               bFoundBuyEntries;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetRankSkipMenuData
struct UTBP_UI_Battlepass_BuyMenu_C_SetRankSkipMenuData_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ParseRankSkipEntries
struct UTBP_UI_Battlepass_BuyMenu_C_ParseRankSkipEntries_Params
{
	struct FTigerMetaStoreEntriesConfig                InConfig;                                                  // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ParseBattlepassEntries
struct UTBP_UI_Battlepass_BuyMenu_C_ParseBattlepassEntries_Params
{
	struct FTigerMetaStoreEntriesConfig                InConfig;                                                  // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetBattlepassParent
struct UTBP_UI_Battlepass_BuyMenu_C_SetBattlepassParent_Params
{
	class UTBP_UI_Battlepass_C*                        Battlepass;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Show
struct UTBP_UI_Battlepass_BuyMenu_C_Show_Params
{
	bool                                               IsBuyBattlepass;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Hide
struct UTBP_UI_Battlepass_BuyMenu_C_Hide_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetStoreEntry
struct UTBP_UI_Battlepass_BuyMenu_C_SetStoreEntry_Params
{
	struct FTigerMetaStoreEntry                        InStoreEntry;                                              // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bInIsBundle;                                               // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
struct UTBP_UI_Battlepass_BuyMenu_C_BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
struct UTBP_UI_Battlepass_BuyMenu_C_BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.On Get Battlepass Store Config
struct UTBP_UI_Battlepass_BuyMenu_C_On_Get_Battlepass_Store_Config_Params
{
	struct FTigerMetaStoreEntriesConfig                InConfig;                                                  // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	Tiger_ETigerMetaStoreEventType                     InEventType;                                               // 0x0028(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnBattlepassPurchased
struct UTBP_UI_Battlepass_BuyMenu_C_OnBattlepassPurchased_Params
{
	struct FTigerBuyStoreEntryResponsePayload          InBuyResponse;                                             // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.On Get Season Rank Skip Store Config
struct UTBP_UI_Battlepass_BuyMenu_C_On_Get_Season_Rank_Skip_Store_Config_Params
{
	struct FTigerMetaStoreEntriesConfig                InConfig;                                                  // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	Tiger_ETigerMetaStoreEventType                     InEventType;                                               // 0x0028(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
struct UTBP_UI_Battlepass_BuyMenu_C_BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
struct UTBP_UI_Battlepass_BuyMenu_C_BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnTierSkipsBought
struct UTBP_UI_Battlepass_BuyMenu_C_OnTierSkipsBought_Params
{
	struct FTigerBuyStoreEntryResponsePayload          InBuyResponse;                                             // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnBattlepassTypeChosen
struct UTBP_UI_Battlepass_BuyMenu_C_OnBattlepassTypeChosen_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyBattlepassButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
struct UTBP_UI_Battlepass_BuyMenu_C_BndEvt__BuyBattlepassButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BackSkipButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UTBP_UI_Battlepass_BuyMenu_C_BndEvt__BackSkipButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
struct UTBP_UI_Battlepass_BuyMenu_C_BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UTBP_UI_Battlepass_BuyMenu_C_BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.FetchStoreConfigs
struct UTBP_UI_Battlepass_BuyMenu_C_FetchStoreConfigs_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Buy Battlepass
struct UTBP_UI_Battlepass_BuyMenu_C_Buy_Battlepass_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_10_OnInputPressed__DelegateSignature
struct UTBP_UI_Battlepass_BuyMenu_C_BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_10_OnInputPressed__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.CreateTimeoutHandle
struct UTBP_UI_Battlepass_BuyMenu_C_CreateTimeoutHandle_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnTimedOut
struct UTBP_UI_Battlepass_BuyMenu_C_OnTimedOut_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassButton_Front_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UTBP_UI_Battlepass_BuyMenu_C_BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassButton_Front_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassBundleButton_Front_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
struct UTBP_UI_Battlepass_BuyMenu_C_BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassBundleButton_Front_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Construct
struct UTBP_UI_Battlepass_BuyMenu_C_Construct_Params
{
};

// Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ExecuteUbergraph_TBP_UI_Battlepass_BuyMenu
struct UTBP_UI_Battlepass_BuyMenu_C_ExecuteUbergraph_TBP_UI_Battlepass_BuyMenu_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
