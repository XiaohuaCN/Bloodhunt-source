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
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.TintImageMaterial
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitItem_C::TintImageMaterial(class UTigerInventoryItemBase* InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.TintImageMaterial");

	UTBP_UI_OutfitItem_C_TintImageMaterial_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Wardrobe or Store Setup
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_OutfitItem_C::Wardrobe_or_Store_Setup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Wardrobe or Store Setup");

	UTBP_UI_OutfitItem_C_Wardrobe_or_Store_Setup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Get Time Left Text
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       Text                                                       (Parm, OutParm)
void UTBP_UI_OutfitItem_C::Get_Time_Left_Text(struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Get Time Left Text");

	UTBP_UI_OutfitItem_C_Get_Time_Left_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.UpdateOwnedWidget
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_OutfitItem_C::UpdateOwnedWidget()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.UpdateOwnedWidget");

	UTBP_UI_OutfitItem_C_UpdateOwnedWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.SetItemAsOwned
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsOwned                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_OutfitItem_C::SetItemAsOwned(bool bIsOwned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.SetItemAsOwned");

	UTBP_UI_OutfitItem_C_SetItemAsOwned_Params params;
	params.bIsOwned = bIsOwned;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.DesaturateUnequippableItems
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_OutfitItem_C::DesaturateUnequippableItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.DesaturateUnequippableItems");

	UTBP_UI_OutfitItem_C_DesaturateUnequippableItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.SetItemData
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     InBaseItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InventoryCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerItemId                                InSoftCurrencyId                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitItem_C::SetItemData(class UTigerInventoryItemBase* InBaseItem, int Cost, int InventoryCount, const struct FTigerItemId& InSoftCurrencyId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.SetItemData");

	UTBP_UI_OutfitItem_C_SetItemData_Params params;
	params.InBaseItem = InBaseItem;
	params.Cost = Cost;
	params.InventoryCount = InventoryCount;
	params.InSoftCurrencyId = InSoftCurrencyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Is A Combined Item
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTigerInventoryItemBase*                     Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_OutfitItem_C::Is_A_Combined_Item(class UTigerInventoryItemBase* Target, bool* bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Is A Combined Item");

	UTBP_UI_OutfitItem_C_Is_A_Combined_Item_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ChooseItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerInventoryItemBase*                     OutItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitItem_C::ChooseItem(class UTigerInventoryItemBase* InItem, class UTigerInventoryItemBase** OutItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ChooseItem");

	UTBP_UI_OutfitItem_C_ChooseItem_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutItem != nullptr)
		*OutItem = params.OutItem;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ChooseItemTintToShow
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTigerInventoryItemBase*                     InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                TintColor                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitItem_C::ChooseItemTintToShow(class UTigerInventoryItemBase* InItem, struct FLinearColor* TintColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ChooseItemTintToShow");

	UTBP_UI_OutfitItem_C_ChooseItemTintToShow_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TintColor != nullptr)
		*TintColor = params.TintColor;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ChooseItemIconToShow
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitItem_C::ChooseItemIconToShow(class UTigerInventoryItemBase* InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ChooseItemIconToShow");

	UTBP_UI_OutfitItem_C_ChooseItemIconToShow_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.IsItemEquipped
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_UI_OutfitItem_C::IsItemEquipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.IsItemEquipped");

	UTBP_UI_OutfitItem_C_IsItemEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.UpdateInventoryCount
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InInventoryCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInIsEquipped                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bIsOwnedByPlayer                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_OutfitItem_C::UpdateInventoryCount(int InInventoryCount, bool bInIsEquipped, bool* bIsOwnedByPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.UpdateInventoryCount");

	UTBP_UI_OutfitItem_C_UpdateInventoryCount_Params params;
	params.InInventoryCount = InInventoryCount;
	params.bInIsEquipped = bInIsEquipped;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsOwnedByPlayer != nullptr)
		*bIsOwnedByPlayer = params.bIsOwnedByPlayer;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ChangeButtonTexture
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitItem_C::ChangeButtonTexture(class UTexture2D* InTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ChangeButtonTexture");

	UTBP_UI_OutfitItem_C_ChangeButtonTexture_Params params;
	params.InTexture = InTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.SetItem
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  UITexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       UiName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                Cost                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InventoryCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInIsEquipped                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTigerItemId                                InSoftCurrencyId                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitItem_C::SetItem(class UTexture2D* UITexture, const struct FText& UiName, int Cost, int InventoryCount, bool bInIsEquipped, const struct FTigerItemId& InSoftCurrencyId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.SetItem");

	UTBP_UI_OutfitItem_C_SetItem_Params params;
	params.UITexture = UITexture;
	params.UiName = UiName;
	params.Cost = Cost;
	params.InventoryCount = InventoryCount;
	params.bInIsEquipped = bInIsEquipped;
	params.InSoftCurrencyId = InSoftCurrencyId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.OnLoaded_1F65942246C0D84B6A9FFD96930A3E30
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitItem_C::OnLoaded_1F65942246C0D84B6A9FFD96930A3E30(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.OnLoaded_1F65942246C0D84B6A9FFD96930A3E30");

	UTBP_UI_OutfitItem_C_OnLoaded_1F65942246C0D84B6A9FFD96930A3E30_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_OutfitItem_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_OutfitItem_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_84_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_OutfitItem_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_OutfitItem_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_63_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_OutfitItem_C::BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_OutfitItem_C_BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.LoadItemTexture
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_OutfitItem_C::LoadItemTexture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.LoadItemTexture");

	UTBP_UI_OutfitItem_C_LoadItemTexture_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_OutfitItem_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Construct");

	UTBP_UI_OutfitItem_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Update Item
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_OutfitItem_C::Update_Item()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Update Item");

	UTBP_UI_OutfitItem_C_Update_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.PreviewItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_OutfitItem_C::PreviewItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.PreviewItem");

	UTBP_UI_OutfitItem_C_PreviewItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.UpdateRarityAndClanIcon
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitItem_C::UpdateRarityAndClanIcon(class UTigerInventoryItemBase* InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.UpdateRarityAndClanIcon");

	UTBP_UI_OutfitItem_C_UpdateRarityAndClanIcon_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Tick Entry Duration
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_OutfitItem_C::Tick_Entry_Duration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Tick Entry Duration");

	UTBP_UI_OutfitItem_C_Tick_Entry_Duration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_OutfitItem_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.Destruct");

	UTBP_UI_OutfitItem_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ExecuteUbergraph_TBP_UI_OutfitItem
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitItem_C::ExecuteUbergraph_TBP_UI_OutfitItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.ExecuteUbergraph_TBP_UI_OutfitItem");

	UTBP_UI_OutfitItem_C_ExecuteUbergraph_TBP_UI_OutfitItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.On Clicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_OutfitItem_C::On_Clicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.On Clicked__DelegateSignature");

	UTBP_UI_OutfitItem_C_On_Clicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.On Unhover__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_OutfitItem_C::On_Unhover__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.On Unhover__DelegateSignature");

	UTBP_UI_OutfitItem_C_On_Unhover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.On Hover__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_OutfitItem_C::On_Hover__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitItem.TBP_UI_OutfitItem_C.On Hover__DelegateSignature");

	UTBP_UI_OutfitItem_C_On_Hover__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
