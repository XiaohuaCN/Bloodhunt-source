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
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Get UI Background ITexture
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_BattlepassReward_C::Get_UI_Background_ITexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Get UI Background ITexture");

	UTBP_UI_BattlepassReward_C_Get_UI_Background_ITexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.GetUITexture
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_BattlepassReward_C::GetUITexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.GetUITexture");

	UTBP_UI_BattlepassReward_C_GetUITexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.GetInventoryItemFromPossiblecombineditemContainer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     PotentialCombinedItem                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassReward_C::GetInventoryItemFromPossiblecombineditemContainer(class UTigerInventoryItemBase** PotentialCombinedItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.GetInventoryItemFromPossiblecombineditemContainer");

	UTBP_UI_BattlepassReward_C_GetInventoryItemFromPossiblecombineditemContainer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PotentialCombinedItem != nullptr)
		*PotentialCombinedItem = params.PotentialCombinedItem;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.UpdateAlignmentsIfPlayerCard
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_BattlepassReward_C::UpdateAlignmentsIfPlayerCard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.UpdateAlignmentsIfPlayerCard");

	UTBP_UI_BattlepassReward_C_UpdateAlignmentsIfPlayerCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Init
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InRank                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InIsFree                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTBP_UI_Battlepass_C*                        InBattlepassRef                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassReward_C::Init(int InRank, int InIndex, bool InIsFree, class UTBP_UI_Battlepass_C* InBattlepassRef)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Init");

	UTBP_UI_BattlepassReward_C_Init_Params params;
	params.InRank = InRank;
	params.InIndex = InIndex;
	params.InIsFree = InIsFree;
	params.InBattlepassRef = InBattlepassRef;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ConstructTooltipWidget
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerTooltipWidget*                         ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTigerTooltipWidget* UTBP_UI_BattlepassReward_C::ConstructTooltipWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ConstructTooltipWidget");

	UTBP_UI_BattlepassReward_C_ConstructTooltipWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnLoaded_8BD3514D458743CC989B509F5DF0A4B2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassReward_C::OnLoaded_8BD3514D458743CC989B509F5DF0A4B2(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnLoaded_8BD3514D458743CC989B509F5DF0A4B2");

	UTBP_UI_BattlepassReward_C_OnLoaded_8BD3514D458743CC989B509F5DF0A4B2_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnLoaded_0E0168EB4C4BB527325A47BED659224C
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassReward_C::OnLoaded_0E0168EB4C4BB527325A47BED659224C(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnLoaded_0E0168EB4C4BB527325A47BED659224C");

	UTBP_UI_BattlepassReward_C_OnLoaded_0E0168EB4C4BB527325A47BED659224C_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_BattlepassReward_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.Construct");

	UTBP_UI_BattlepassReward_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_BattlepassReward_C::BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_BattlepassReward_C_BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnTextureLoaded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  ImageTexture                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassReward_C::OnTextureLoaded(class UTexture2D* ImageTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnTextureLoaded");

	UTBP_UI_BattlepassReward_C_OnTextureLoaded_Params params;
	params.ImageTexture = ImageTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BattlepassReward_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.PreConstruct");

	UTBP_UI_BattlepassReward_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ItemSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_BattlepassReward_C::ItemSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ItemSelected");

	UTBP_UI_BattlepassReward_C_ItemSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_BattlepassReward_C::BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_BattlepassReward_C_BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.UpdateRarityAndClanIcon
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassReward_C::UpdateRarityAndClanIcon(class UTigerInventoryItemBase* InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.UpdateRarityAndClanIcon");

	UTBP_UI_BattlepassReward_C_UpdateRarityAndClanIcon_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_BattlepassReward_C::BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_BattlepassReward_C_BndEvt__ButtonBorder_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemFocused
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_BattlepassReward_C::OnItemFocused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemFocused");

	UTBP_UI_BattlepassReward_C_OnItemFocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemUnfocused
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_BattlepassReward_C::OnItemUnfocused()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemUnfocused");

	UTBP_UI_BattlepassReward_C_OnItemUnfocused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnBackgroundTextureLoaded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  BackgroundTexture                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassReward_C::OnBackgroundTextureLoaded(class UTexture2D* BackgroundTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnBackgroundTextureLoaded");

	UTBP_UI_BattlepassReward_C_OnBackgroundTextureLoaded_Params params;
	params.BackgroundTexture = BackgroundTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnLoadedItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemId                                ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
//		class UTigerInventoryItemBase*                     InventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassReward_C::OnLoadedItem(const struct FTigerItemId& ItemId, class UTigerInventoryItemBase* InventoryItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnLoadedItem");

	UTBP_UI_BattlepassReward_C_OnLoadedItem_Params params;
	params.ItemId = ItemId;
	params.InventoryItem = InventoryItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ExecuteUbergraph_TBP_UI_BattlepassReward
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassReward_C::ExecuteUbergraph_TBP_UI_BattlepassReward(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.ExecuteUbergraph_TBP_UI_BattlepassReward");

	UTBP_UI_BattlepassReward_C_ExecuteUbergraph_TBP_UI_BattlepassReward_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemSelected__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemId                                InItemId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassReward_C::OnItemSelected__DelegateSignature(const struct FTigerItemId& InItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemSelected__DelegateSignature");

	UTBP_UI_BattlepassReward_C_OnItemSelected__DelegateSignature_Params params;
	params.InItemId = InItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemId                                ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BattlepassReward_C::OnItemHovered__DelegateSignature(const struct FTigerItemId& ItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BattlepassReward.TBP_UI_BattlepassReward_C.OnItemHovered__DelegateSignature");

	UTBP_UI_BattlepassReward_C_OnItemHovered__DelegateSignature_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
