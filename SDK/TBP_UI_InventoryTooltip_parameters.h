#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupConsumableInfo
struct UTBP_UI_InventoryTooltip_C_SetupConsumableInfo_Params
{
	class UTigerConsumableAsset*                       InConsumableAsset;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupMeleeWeaponInfo
struct UTBP_UI_InventoryTooltip_C_SetupMeleeWeaponInfo_Params
{
	class UClass*                                      InMeleeWeaponClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupModTransferWidgets
struct UTBP_UI_InventoryTooltip_C_SetupModTransferWidgets_Params
{
	TArray<struct FTigerModSlotInfo>                   InModsToTransfer;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupAmmoInfoForSlot
struct UTBP_UI_InventoryTooltip_C_SetupAmmoInfoForSlot_Params
{
	class UTigerAmmoAsset*                             InAmmoAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerWeaponSlot                             InWeaponSlot;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      InWeaponImageWidget;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsValidAmmoTypeForWeapon;                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupRangedAmmoInfo
struct UTBP_UI_InventoryTooltip_C_SetupRangedAmmoInfo_Params
{
	class UTigerAmmoAsset*                             InAmmoAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupRangedModInfo
struct UTBP_UI_InventoryTooltip_C_SetupRangedModInfo_Params
{
	class UTigerRangedModItemAsset*                    InModItemAsset;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.SetupRangedWeaponInfo
struct UTBP_UI_InventoryTooltip_C_SetupRangedWeaponInfo_Params
{
	class UClass*                                      InWeaponClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PopulateFromItemAsset
struct UTBP_UI_InventoryTooltip_C_PopulateFromItemAsset_Params
{
	class UTigerItemAsset*                             InItemAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTigerTooltipAction>                 InInputActions;                                            // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               bInShowAdditionalInfo;                                     // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.Tick
struct UTBP_UI_InventoryTooltip_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PreConstruct
struct UTBP_UI_InventoryTooltip_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.OnInitialized
struct UTBP_UI_InventoryTooltip_C_OnInitialized_Params
{
};

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.Construct
struct UTBP_UI_InventoryTooltip_C_Construct_Params
{
};

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PopulateFromCollectible
struct UTBP_UI_InventoryTooltip_C_PopulateFromCollectible_Params
{
};

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.PopulateFromQuestItem
struct UTBP_UI_InventoryTooltip_C_PopulateFromQuestItem_Params
{
};

// Function TBP_UI_InventoryTooltip.TBP_UI_InventoryTooltip_C.ExecuteUbergraph_TBP_UI_InventoryTooltip
struct UTBP_UI_InventoryTooltip_C_ExecuteUbergraph_TBP_UI_InventoryTooltip_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
