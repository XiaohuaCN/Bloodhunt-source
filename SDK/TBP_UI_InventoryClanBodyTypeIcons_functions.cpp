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
//		Name   -> Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.SetOwnerIndicators
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryClanBodyTypeIcons_C::SetOwnerIndicators(class UTigerInventoryItemBase* InItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.SetOwnerIndicators");

	UTBP_UI_InventoryClanBodyTypeIcons_C_SetOwnerIndicators_Params params;
	params.InItem = InItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.SetClanOrArchetypeIcon
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<Tiger_ETigerClan>                           InClans                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TArray<Tiger_ETigerPowerKitType>                   InArchetypes                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_InventoryClanBodyTypeIcons_C::SetClanOrArchetypeIcon(TArray<Tiger_ETigerClan>* InClans, TArray<Tiger_ETigerPowerKitType>* InArchetypes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.SetClanOrArchetypeIcon");

	UTBP_UI_InventoryClanBodyTypeIcons_C_SetClanOrArchetypeIcon_Params params;

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
//		Name   -> Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.CheckIfShouldDisplayDisallowedClan
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<Tiger_ETigerClan>                           InClans                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TArray<Tiger_ETigerPowerKitType>                   InArchetypes                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               bSuccessful                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InventoryClanBodyTypeIcons_C::CheckIfShouldDisplayDisallowedClan(TArray<Tiger_ETigerClan>* InClans, TArray<Tiger_ETigerPowerKitType>* InArchetypes, bool* bSuccessful)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryClanBodyTypeIcons.TBP_UI_InventoryClanBodyTypeIcons_C.CheckIfShouldDisplayDisallowedClan");

	UTBP_UI_InventoryClanBodyTypeIcons_C_CheckIfShouldDisplayDisallowedClan_Params params;

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


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
