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
//		Name   -> Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.SetUnlockedState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsUnlocked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BattlepassRewardsContainer_C::SetUnlockedState(bool bIsUnlocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.SetUnlockedState");

	UTBP_UI_BattlepassRewardsContainer_C_SetUnlockedState_Params params;
	params.bIsUnlocked = bIsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.PopulateRewards
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FTigerItemId>                        ItemIds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               bIsUnlocked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsFree                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                InRank                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassRewardsContainer_C::PopulateRewards(TArray<struct FTigerItemId>* ItemIds, bool bIsUnlocked, bool IsFree, int InRank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.PopulateRewards");

	UTBP_UI_BattlepassRewardsContainer_C_PopulateRewards_Params params;
	params.bIsUnlocked = bIsUnlocked;
	params.IsFree = IsFree;
	params.InRank = InRank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemIds != nullptr)
		*ItemIds = params.ItemIds;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ItemHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemId                                ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassRewardsContainer_C::ItemHovered(const struct FTigerItemId& ItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ItemHovered");

	UTBP_UI_BattlepassRewardsContainer_C_ItemHovered_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BattlepassRewardsContainer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.PreConstruct");

	UTBP_UI_BattlepassRewardsContainer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ItemSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemId                                InItemId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassRewardsContainer_C::ItemSelected(const struct FTigerItemId& InItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ItemSelected");

	UTBP_UI_BattlepassRewardsContainer_C_ItemSelected_Params params;
	params.InItemId = InItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ExecuteUbergraph_TBP_UI_BattlepassRewardsContainer
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassRewardsContainer_C::ExecuteUbergraph_TBP_UI_BattlepassRewardsContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.ExecuteUbergraph_TBP_UI_BattlepassRewardsContainer");

	UTBP_UI_BattlepassRewardsContainer_C_ExecuteUbergraph_TBP_UI_BattlepassRewardsContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.OnItemSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemId                                InItemId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassRewardsContainer_C::OnItemSelected__DelegateSignature(const struct FTigerItemId& InItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.OnItemSelected__DelegateSignature");

	UTBP_UI_BattlepassRewardsContainer_C_OnItemSelected__DelegateSignature_Params params;
	params.InItemId = InItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.OnItemHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemId                                ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		bool                                               Item_Is_Free                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BattlepassRewardsContainer_C::OnItemHovered__DelegateSignature(const struct FTigerItemId& ItemId, bool Item_Is_Free)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassRewardsContainer.TBP_UI_BattlepassRewardsContainer_C.OnItemHovered__DelegateSignature");

	UTBP_UI_BattlepassRewardsContainer_C_OnItemHovered__DelegateSignature_Params params;
	params.ItemId = ItemId;
	params.Item_Is_Free = Item_Is_Free;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
