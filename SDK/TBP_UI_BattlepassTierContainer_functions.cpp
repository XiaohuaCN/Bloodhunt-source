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
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.CollapseRewardIfEmtpy
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_BattlepassRewardsContainer_C*        InReward                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassTierContainer_C::CollapseRewardIfEmtpy(class UTBP_UI_BattlepassRewardsContainer_C* InReward)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.CollapseRewardIfEmtpy");

	UTBP_UI_BattlepassTierContainer_C_CollapseRewardIfEmtpy_Params params;
	params.InReward = InReward;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetRewardAtIndex
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InRewardIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsFree                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTBP_UI_BattlepassReward_C*                  OutReward                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassTierContainer_C::GetRewardAtIndex(int InRewardIndex, bool bIsFree, class UTBP_UI_BattlepassReward_C** OutReward)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetRewardAtIndex");

	UTBP_UI_BattlepassTierContainer_C_GetRewardAtIndex_Params params;
	params.InRewardIndex = InRewardIndex;
	params.bIsFree = bIsFree;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutReward != nullptr)
		*OutReward = params.OutReward;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstPremiumReward
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_BattlepassReward_C*                  OutFirstFreeReward                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassTierContainer_C::GetFirstPremiumReward(class UTBP_UI_BattlepassReward_C** OutFirstFreeReward)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstPremiumReward");

	UTBP_UI_BattlepassTierContainer_C_GetFirstPremiumReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFirstFreeReward != nullptr)
		*OutFirstFreeReward = params.OutFirstFreeReward;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstFreeReward
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_BattlepassReward_C*                  OutFirstFreeReward                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassTierContainer_C::GetFirstFreeReward(class UTBP_UI_BattlepassReward_C** OutFirstFreeReward)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstFreeReward");

	UTBP_UI_BattlepassTierContainer_C_GetFirstFreeReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFirstFreeReward != nullptr)
		*OutFirstFreeReward = params.OutFirstFreeReward;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetLastReward
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_BattlepassReward_C*                  OutLastChild                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassTierContainer_C::GetLastReward(class UTBP_UI_BattlepassReward_C** OutLastChild)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetLastReward");

	UTBP_UI_BattlepassTierContainer_C_GetLastReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutLastChild != nullptr)
		*OutLastChild = params.OutLastChild;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstReward
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_BattlepassReward_C*                  OutFirstChild                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassTierContainer_C::GetFirstReward(class UTBP_UI_BattlepassReward_C** OutFirstChild)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.GetFirstReward");

	UTBP_UI_BattlepassTierContainer_C_GetFirstReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutFirstChild != nullptr)
		*OutFirstChild = params.OutFirstChild;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.UpdateHeader
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsUnlocked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BattlepassTierContainer_C::UpdateHeader(bool bIsUnlocked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.UpdateHeader");

	UTBP_UI_BattlepassTierContainer_C_UpdateHeader_Params params;
	params.bIsUnlocked = bIsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.PopulateRewards
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_BattlepassRewardsContainer_C*        InRewardsContainer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FTigerItemId>                        ItemIds                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               bIsUnlocked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               IsFree                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BattlepassTierContainer_C::PopulateRewards(class UTBP_UI_BattlepassRewardsContainer_C* InRewardsContainer, TArray<struct FTigerItemId>* ItemIds, bool bIsUnlocked, bool IsFree)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.PopulateRewards");

	UTBP_UI_BattlepassTierContainer_C_PopulateRewards_Params params;
	params.InRewardsContainer = InRewardsContainer;
	params.bIsUnlocked = bIsUnlocked;
	params.IsFree = IsFree;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ItemIds != nullptr)
		*ItemIds = params.ItemIds;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.UpdateTierCollections
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsUnlocked                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TArray<class UTigerClientSeasonalRewardTier*>      InTiers                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               bWantsDoubleSize                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BattlepassTierContainer_C::UpdateTierCollections(bool bIsUnlocked, TArray<class UTigerClientSeasonalRewardTier*>* InTiers, bool* bWantsDoubleSize)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.UpdateTierCollections");

	UTBP_UI_BattlepassTierContainer_C_UpdateTierCollections_Params params;
	params.bIsUnlocked = bIsUnlocked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InTiers != nullptr)
		*InTiers = params.InTiers;
	if (bWantsDoubleSize != nullptr)
		*bWantsDoubleSize = params.bWantsDoubleSize;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BattlepassTierContainer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.PreConstruct");

	UTBP_UI_BattlepassTierContainer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.ItemSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemId                                InItemId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassTierContainer_C::ItemSelected(const struct FTigerItemId& InItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.ItemSelected");

	UTBP_UI_BattlepassTierContainer_C_ItemSelected_Params params;
	params.InItemId = InItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.CustomEvent_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemId                                ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		bool                                               Item_Is_Free                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BattlepassTierContainer_C::CustomEvent_1(const struct FTigerItemId& ItemId, bool Item_Is_Free)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.CustomEvent_1");

	UTBP_UI_BattlepassTierContainer_C_CustomEvent_1_Params params;
	params.ItemId = ItemId;
	params.Item_Is_Free = Item_Is_Free;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.Update XP Bar
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_BattlepassTierContainer_C::Update_XP_Bar()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.Update XP Bar");

	UTBP_UI_BattlepassTierContainer_C_Update_XP_Bar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.ExecuteUbergraph_TBP_UI_BattlepassTierContainer
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassTierContainer_C::ExecuteUbergraph_TBP_UI_BattlepassTierContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.ExecuteUbergraph_TBP_UI_BattlepassTierContainer");

	UTBP_UI_BattlepassTierContainer_C_ExecuteUbergraph_TBP_UI_BattlepassTierContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.OnItemSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemId                                InItemId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		int                                                Item_Rank                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassTierContainer_C::OnItemSelected__DelegateSignature(const struct FTigerItemId& InItemId, int Item_Rank)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.OnItemSelected__DelegateSignature");

	UTBP_UI_BattlepassTierContainer_C_OnItemSelected__DelegateSignature_Params params;
	params.InItemId = InItemId;
	params.Item_Rank = Item_Rank;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.OnItemHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemId                                ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		int                                                Item_Rank                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Item_Is_Free                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BattlepassTierContainer_C::OnItemHovered__DelegateSignature(const struct FTigerItemId& ItemId, int Item_Rank, bool Item_Is_Free)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassTierContainer.TBP_UI_BattlepassTierContainer_C.OnItemHovered__DelegateSignature");

	UTBP_UI_BattlepassTierContainer_C_OnItemHovered__DelegateSignature_Params params;
	params.ItemId = ItemId;
	params.Item_Rank = Item_Rank;
	params.Item_Is_Free = Item_Is_Free;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
