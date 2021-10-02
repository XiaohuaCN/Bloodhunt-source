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
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ClearTimeoutHandleAndHideThrobber
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::ClearTimeoutHandleAndHideThrobber()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ClearTimeoutHandleAndHideThrobber");

	UTBP_UI_Battlepass_BuyMenu_C_ClearTimeoutHandleAndHideThrobber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.GetRankSkipsCount
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FTigerMetaStoreEntry                        InEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		int                                                Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bContainsNonRankSkipItem                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Battlepass_BuyMenu_C::GetRankSkipsCount(struct FTigerMetaStoreEntry* InEntry, int* Count, bool* bContainsNonRankSkipItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.GetRankSkipsCount");

	UTBP_UI_Battlepass_BuyMenu_C_GetRankSkipsCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InEntry != nullptr)
		*InEntry = params.InEntry;
	if (Count != nullptr)
		*Count = params.Count;
	if (bContainsNonRankSkipItem != nullptr)
		*bContainsNonRankSkipItem = params.bContainsNonRankSkipItem;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetBattlepassMenuData
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Battlepass_BuyMenu_C::SetBattlepassMenuData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetBattlepassMenuData");

	UTBP_UI_Battlepass_BuyMenu_C_SetBattlepassMenuData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.CreateRankSkipsBuyEntry
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               bFoundBuyEntries                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Battlepass_BuyMenu_C::CreateRankSkipsBuyEntry(bool* bFoundBuyEntries)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.CreateRankSkipsBuyEntry");

	UTBP_UI_Battlepass_BuyMenu_C_CreateRankSkipsBuyEntry_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bFoundBuyEntries != nullptr)
		*bFoundBuyEntries = params.bFoundBuyEntries;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetRankSkipMenuData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Battlepass_BuyMenu_C::SetRankSkipMenuData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetRankSkipMenuData");

	UTBP_UI_Battlepass_BuyMenu_C_SetRankSkipMenuData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ParseRankSkipEntries
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMetaStoreEntriesConfig                InConfig                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Battlepass_BuyMenu_C::ParseRankSkipEntries(struct FTigerMetaStoreEntriesConfig* InConfig)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ParseRankSkipEntries");

	UTBP_UI_Battlepass_BuyMenu_C_ParseRankSkipEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InConfig != nullptr)
		*InConfig = params.InConfig;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ParseBattlepassEntries
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMetaStoreEntriesConfig                InConfig                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Battlepass_BuyMenu_C::ParseBattlepassEntries(struct FTigerMetaStoreEntriesConfig* InConfig)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ParseBattlepassEntries");

	UTBP_UI_Battlepass_BuyMenu_C_ParseBattlepassEntries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InConfig != nullptr)
		*InConfig = params.InConfig;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetBattlepassParent
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Battlepass_C*                        Battlepass                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_BuyMenu_C::SetBattlepassParent(class UTBP_UI_Battlepass_C* Battlepass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetBattlepassParent");

	UTBP_UI_Battlepass_BuyMenu_C_SetBattlepassParent_Params params;
	params.Battlepass = Battlepass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Show
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsBuyBattlepass                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Battlepass_BuyMenu_C::Show(bool IsBuyBattlepass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Show");

	UTBP_UI_Battlepass_BuyMenu_C_Show_Params params;
	params.IsBuyBattlepass = IsBuyBattlepass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Hide
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::Hide()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Hide");

	UTBP_UI_Battlepass_BuyMenu_C_Hide_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetStoreEntry
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMetaStoreEntry                        InStoreEntry                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               bInIsBundle                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Battlepass_BuyMenu_C::SetStoreEntry(const struct FTigerMetaStoreEntry& InStoreEntry, bool bInIsBundle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.SetStoreEntry");

	UTBP_UI_Battlepass_BuyMenu_C_SetStoreEntry_Params params;
	params.InStoreEntry = InStoreEntry;
	params.bInIsBundle = bInIsBundle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature");

	UTBP_UI_Battlepass_BuyMenu_C_BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_6_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature");

	UTBP_UI_Battlepass_BuyMenu_C_BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_8_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.On Get Battlepass Store Config
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMetaStoreEntriesConfig                InConfig                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		Tiger_ETigerMetaStoreEventType                     InEventType                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_BuyMenu_C::On_Get_Battlepass_Store_Config(const struct FTigerMetaStoreEntriesConfig& InConfig, Tiger_ETigerMetaStoreEventType InEventType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.On Get Battlepass Store Config");

	UTBP_UI_Battlepass_BuyMenu_C_On_Get_Battlepass_Store_Config_Params params;
	params.InConfig = InConfig;
	params.InEventType = InEventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnBattlepassPurchased
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerBuyStoreEntryResponsePayload          InBuyResponse                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Battlepass_BuyMenu_C::OnBattlepassPurchased(const struct FTigerBuyStoreEntryResponsePayload& InBuyResponse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnBattlepassPurchased");

	UTBP_UI_Battlepass_BuyMenu_C_OnBattlepassPurchased_Params params;
	params.InBuyResponse = InBuyResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.On Get Season Rank Skip Store Config
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMetaStoreEntriesConfig                InConfig                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		Tiger_ETigerMetaStoreEventType                     InEventType                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_BuyMenu_C::On_Get_Season_Rank_Skip_Store_Config(const struct FTigerMetaStoreEntriesConfig& InConfig, Tiger_ETigerMetaStoreEventType InEventType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.On Get Season Rank Skip Store Config");

	UTBP_UI_Battlepass_BuyMenu_C_On_Get_Season_Rank_Skip_Store_Config_Params params;
	params.InConfig = InConfig;
	params.InEventType = InEventType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UTBP_UI_Battlepass_BuyMenu_C_BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature");

	UTBP_UI_Battlepass_BuyMenu_C_BndEvt__BuyTierSkipButton_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnTierSkipsBought
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerBuyStoreEntryResponsePayload          InBuyResponse                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Battlepass_BuyMenu_C::OnTierSkipsBought(const struct FTigerBuyStoreEntryResponsePayload& InBuyResponse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnTierSkipsBought");

	UTBP_UI_Battlepass_BuyMenu_C_OnTierSkipsBought_Params params;
	params.InBuyResponse = InBuyResponse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnBattlepassTypeChosen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::OnBattlepassTypeChosen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnBattlepassTypeChosen");

	UTBP_UI_Battlepass_BuyMenu_C_OnBattlepassTypeChosen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyBattlepassButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__BuyBattlepassButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BuyBattlepassButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UTBP_UI_Battlepass_BuyMenu_C_BndEvt__BuyBattlepassButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BackSkipButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__BackSkipButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__BackSkipButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UTBP_UI_Battlepass_BuyMenu_C_BndEvt__BackSkipButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UTBP_UI_Battlepass_BuyMenu_C_BndEvt__TBP_UI_StoreEntry_BattlepassBundle_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UTBP_UI_Battlepass_BuyMenu_C_BndEvt__TBP_UI_StoreEntry_Battlepass_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.FetchStoreConfigs
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::FetchStoreConfigs()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.FetchStoreConfigs");

	UTBP_UI_Battlepass_BuyMenu_C_FetchStoreConfigs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Buy Battlepass
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::Buy_Battlepass()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Buy Battlepass");

	UTBP_UI_Battlepass_BuyMenu_C_Buy_Battlepass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_10_OnInputPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_10_OnInputPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_10_OnInputPressed__DelegateSignature");

	UTBP_UI_Battlepass_BuyMenu_C_BndEvt__TBP_UI_Battlepass_BuyMenu_TBP_UI_InputMenuPrompt_K2Node_ComponentBoundEvent_10_OnInputPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.CreateTimeoutHandle
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::CreateTimeoutHandle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.CreateTimeoutHandle");

	UTBP_UI_Battlepass_BuyMenu_C_CreateTimeoutHandle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnTimedOut
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::OnTimedOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.OnTimedOut");

	UTBP_UI_Battlepass_BuyMenu_C_OnTimedOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassButton_Front_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassButton_Front_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassButton_Front_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UTBP_UI_Battlepass_BuyMenu_C_BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassButton_Front_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassBundleButton_Front_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassBundleButton_Front_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassBundleButton_Front_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UTBP_UI_Battlepass_BuyMenu_C_BndEvt__TBP_UI_Battlepass_BuyMenu_BuyBattlepassBundleButton_Front_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Battlepass_BuyMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.Construct");

	UTBP_UI_Battlepass_BuyMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ExecuteUbergraph_TBP_UI_Battlepass_BuyMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Battlepass_BuyMenu_C::ExecuteUbergraph_TBP_UI_Battlepass_BuyMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Battlepass_BuyMenu.TBP_UI_Battlepass_BuyMenu_C.ExecuteUbergraph_TBP_UI_Battlepass_BuyMenu");

	UTBP_UI_Battlepass_BuyMenu_C_ExecuteUbergraph_TBP_UI_Battlepass_BuyMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
