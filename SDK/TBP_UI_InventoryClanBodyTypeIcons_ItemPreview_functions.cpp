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
//		Name   -> Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.SetOwnerIndicators
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C::SetOwnerIndicators(class UTigerInventoryItemBase* InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.SetOwnerIndicators");

	UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C_SetOwnerIndicators_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.SetClanOrArchetypeIcon
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<Tiger_ETigerClan>                           InClans                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TArray<Tiger_ETigerPowerKitType>                   InArchetypes                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C::SetClanOrArchetypeIcon(TArray<Tiger_ETigerClan>* InClans, TArray<Tiger_ETigerPowerKitType>* InArchetypes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.SetClanOrArchetypeIcon");

	UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C_SetClanOrArchetypeIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InClans != nullptr)
		*InClans = params.InClans;
	if (InArchetypes != nullptr)
		*InArchetypes = params.InArchetypes;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.CheckIfShouldDisplayDisallowedClan
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<Tiger_ETigerClan>                           InClans                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TArray<Tiger_ETigerPowerKitType>                   InArchetypes                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C::CheckIfShouldDisplayDisallowedClan(TArray<Tiger_ETigerClan>* InClans, TArray<Tiger_ETigerPowerKitType>* InArchetypes, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.CheckIfShouldDisplayDisallowedClan");

	UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C_CheckIfShouldDisplayDisallowedClan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InClans != nullptr)
		*InClans = params.InClans;
	if (InArchetypes != nullptr)
		*InArchetypes = params.InArchetypes;
	if (bSuccessful != nullptr)
		*bSuccessful = params.bSuccessful;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.Construct");

	UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.ExecuteUbergraph_TBP_UI_InventoryClanBodyTypeIcons_ItemPreview
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C::ExecuteUbergraph_TBP_UI_InventoryClanBodyTypeIcons_ItemPreview(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.ExecuteUbergraph_TBP_UI_InventoryClanBodyTypeIcons_ItemPreview");

	UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C_ExecuteUbergraph_TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
