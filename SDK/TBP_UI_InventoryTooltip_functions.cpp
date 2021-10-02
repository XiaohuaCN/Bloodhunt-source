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
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupConsumableInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerConsumableAsset*                       InConsumableAsset                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryTooltip_C::SetupConsumableInfo(class UTigerConsumableAsset* InConsumableAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupConsumableInfo");

	UTBP_UI_InventoryTooltip_C_SetupConsumableInfo_Params params;
	params.InConsumableAsset = InConsumableAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupMeleeWeaponInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      InMeleeWeaponClass                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryTooltip_C::SetupMeleeWeaponInfo(class UClass* InMeleeWeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupMeleeWeaponInfo");

	UTBP_UI_InventoryTooltip_C_SetupMeleeWeaponInfo_Params params;
	params.InMeleeWeaponClass = InMeleeWeaponClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupModTransferWidgets
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FTigerModSlotInfo>                   InModsToTransfer                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_InventoryTooltip_C::SetupModTransferWidgets(TArray<struct FTigerModSlotInfo>* InModsToTransfer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupModTransferWidgets");

	UTBP_UI_InventoryTooltip_C_SetupModTransferWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InModsToTransfer != nullptr)
		*InModsToTransfer = params.InModsToTransfer;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupAmmoInfoForSlot
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerAmmoAsset*                             InAmmoAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerWeaponSlot                             InWeaponSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UImage*                                      InWeaponImageWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsValidAmmoTypeForWeapon                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InventoryTooltip_C::SetupAmmoInfoForSlot(class UTigerAmmoAsset* InAmmoAsset, Tiger_ETigerWeaponSlot InWeaponSlot, class UImage** InWeaponImageWidget, bool* bIsValidAmmoTypeForWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupAmmoInfoForSlot");

	UTBP_UI_InventoryTooltip_C_SetupAmmoInfoForSlot_Params params;
	params.InAmmoAsset = InAmmoAsset;
	params.InWeaponSlot = InWeaponSlot;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InWeaponImageWidget != nullptr)
		*InWeaponImageWidget = params.InWeaponImageWidget;
	if (bIsValidAmmoTypeForWeapon != nullptr)
		*bIsValidAmmoTypeForWeapon = params.bIsValidAmmoTypeForWeapon;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupRangedAmmoInfo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerAmmoAsset*                             InAmmoAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryTooltip_C::SetupRangedAmmoInfo(class UTigerAmmoAsset* InAmmoAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupRangedAmmoInfo");

	UTBP_UI_InventoryTooltip_C_SetupRangedAmmoInfo_Params params;
	params.InAmmoAsset = InAmmoAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupRangedModInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedModItemAsset*                    InModItemAsset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryTooltip_C::SetupRangedModInfo(class UTigerRangedModItemAsset* InModItemAsset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupRangedModInfo");

	UTBP_UI_InventoryTooltip_C_SetupRangedModInfo_Params params;
	params.InModItemAsset = InModItemAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupRangedWeaponInfo
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      InWeaponClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryTooltip_C::SetupRangedWeaponInfo(class UClass* InWeaponClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupRangedWeaponInfo");

	UTBP_UI_InventoryTooltip_C_SetupRangedWeaponInfo_Params params;
	params.InWeaponClass = InWeaponClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PopulateFromItemAsset
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerItemAsset*                             InItemAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FTigerTooltipAction>                 InInputActions                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		bool                                               bInShowAdditionalInfo                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InventoryTooltip_C::PopulateFromItemAsset(class UTigerItemAsset* InItemAsset, TArray<struct FTigerTooltipAction> InInputActions, bool bInShowAdditionalInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PopulateFromItemAsset");

	UTBP_UI_InventoryTooltip_C_PopulateFromItemAsset_Params params;
	params.InItemAsset = InItemAsset;
	params.InInputActions = InInputActions;
	params.bInShowAdditionalInfo = bInShowAdditionalInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryTooltip_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.Tick");

	UTBP_UI_InventoryTooltip_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InventoryTooltip_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PreConstruct");

	UTBP_UI_InventoryTooltip_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_InventoryTooltip_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.OnInitialized");

	UTBP_UI_InventoryTooltip_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_InventoryTooltip_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.Construct");

	UTBP_UI_InventoryTooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PopulateFromCollectible
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_InventoryTooltip_C::PopulateFromCollectible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PopulateFromCollectible");

	UTBP_UI_InventoryTooltip_C_PopulateFromCollectible_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PopulateFromQuestItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_InventoryTooltip_C::PopulateFromQuestItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PopulateFromQuestItem");

	UTBP_UI_InventoryTooltip_C_PopulateFromQuestItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.ExecuteUbergraph_TBP_UI_InventoryTooltip
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InventoryTooltip_C::ExecuteUbergraph_TBP_UI_InventoryTooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.ExecuteUbergraph_TBP_UI_InventoryTooltip");

	UTBP_UI_InventoryTooltip_C_ExecuteUbergraph_TBP_UI_InventoryTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
