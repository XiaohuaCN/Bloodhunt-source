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
//		Name   -> Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.GetItem
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerInventoryItemBase*                     OutItem                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitVendorTooltip_C::GetItem(class UTigerInventoryItemBase* InItem, class UTigerInventoryItemBase** OutItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.GetItem");

	UTBP_UI_OutfitVendorTooltip_C_GetItem_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutItem != nullptr)
		*OutItem = params.OutItem;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.SetItem
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerVendorStoreCategoryItem               Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FText                                       ErrorMessage                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FKey                                        GamepadInputKey                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		struct FText                                       ActionText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_OutfitVendorTooltip_C::SetItem(const struct FTigerVendorStoreCategoryItem& Item, const struct FText& ErrorMessage, const struct FKey& GamepadInputKey, const struct FText& ActionText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.SetItem");

	UTBP_UI_OutfitVendorTooltip_C_SetItem_Params params;
	params.Item = Item;
	params.ErrorMessage = ErrorMessage;
	params.GamepadInputKey = GamepadInputKey;
	params.ActionText = ActionText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_OutfitVendorTooltip_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.OnInitialized");

	UTBP_UI_OutfitVendorTooltip_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.ExecuteUbergraph_TBP_UI_OutfitVendorTooltip
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_OutfitVendorTooltip_C::ExecuteUbergraph_TBP_UI_OutfitVendorTooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.ExecuteUbergraph_TBP_UI_OutfitVendorTooltip");

	UTBP_UI_OutfitVendorTooltip_C_ExecuteUbergraph_TBP_UI_OutfitVendorTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
