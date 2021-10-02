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
//		Name   -> Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.CreateStoreItems
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FTigerVendorStoreCategoryItem>       Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_OutfitItemContainer_C::CreateStoreItems(TArray<struct FTigerVendorStoreCategoryItem>* Items)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.CreateStoreItems");

	UTBP_UI_OutfitItemContainer_C_CreateStoreItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Items != nullptr)
		*Items = params.Items;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.UpdateOwnerStatus
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NewInventoryCount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsEquipped                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_OutfitItemContainer_C::UpdateOwnerStatus(int NewInventoryCount, bool bIsEquipped)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.UpdateOwnerStatus");

	UTBP_UI_OutfitItemContainer_C_UpdateOwnerStatus_Params params;
	params.NewInventoryCount = NewInventoryCount;
	params.bIsEquipped = bIsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.DoesPlayerOwnItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_UI_OutfitItemContainer_C::DoesPlayerOwnItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.DoesPlayerOwnItem");

	UTBP_UI_OutfitItemContainer_C_DoesPlayerOwnItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.SetItemListener
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_OutfitItemContainer_C::SetItemListener()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.SetItemListener");

	UTBP_UI_OutfitItemContainer_C_SetItemListener_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.CreateStoreItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		struct FTigerVendorStoreCategoryItem               StoreItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		class UTBP_UI_OutfitItem_C*                        ItemWidget                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitItemContainer_C::CreateStoreItem(struct FTigerVendorStoreCategoryItem* StoreItem, class UTBP_UI_OutfitItem_C** ItemWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.CreateStoreItem");

	UTBP_UI_OutfitItemContainer_C_CreateStoreItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (StoreItem != nullptr)
		*StoreItem = params.StoreItem;
	if (ItemWidget != nullptr)
		*ItemWidget = params.ItemWidget;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitItemContainer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Tick");

	UTBP_UI_OutfitItemContainer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Reset
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_OutfitItemContainer_C::Reset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Reset");

	UTBP_UI_OutfitItemContainer_C_Reset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_OutfitItemContainer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.PreConstruct");

	UTBP_UI_OutfitItemContainer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.ExecuteUbergraph_TBP_UI_OutfitItemContainer
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitItemContainer_C::ExecuteUbergraph_TBP_UI_OutfitItemContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.ExecuteUbergraph_TBP_UI_OutfitItemContainer");

	UTBP_UI_OutfitItemContainer_C_ExecuteUbergraph_TBP_UI_OutfitItemContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
