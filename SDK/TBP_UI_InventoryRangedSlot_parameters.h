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

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.UpdateRarityBorder
struct UTBP_UI_InventoryRangedSlot_C_UpdateRarityBorder_Params
{
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.UpdateFireMode
struct UTBP_UI_InventoryRangedSlot_C_UpdateFireMode_Params
{
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.PingEmpty
struct UTBP_UI_InventoryRangedSlot_C_PingEmpty_Params
{
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.PingAmmo
struct UTBP_UI_InventoryRangedSlot_C_PingAmmo_Params
{
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.PingWeapon
struct UTBP_UI_InventoryRangedSlot_C_PingWeapon_Params
{
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.CreateTooltipActions
struct UTBP_UI_InventoryRangedSlot_C_CreateTooltipActions_Params
{
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.ConstructTooltipWidget
struct UTBP_UI_InventoryRangedSlot_C_ConstructTooltipWidget_Params
{
	class UTigerTooltipWidget*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.SwitchSlot
struct UTBP_UI_InventoryRangedSlot_C_SwitchSlot_Params
{
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.EquipWeapon
struct UTBP_UI_InventoryRangedSlot_C_EquipWeapon_Params
{
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.DropWeapon
struct UTBP_UI_InventoryRangedSlot_C_DropWeapon_Params
{
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.GetSelectedSlotColor
struct UTBP_UI_InventoryRangedSlot_C_GetSelectedSlotColor_Params
{
	Tiger_ETigerWeaponSlot                             SelectedSlot;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Color;                                                     // 0x0008(0x0028)  (Parm, OutParm)
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.UpdateNoWeapon
struct UTBP_UI_InventoryRangedSlot_C_UpdateNoWeapon_Params
{
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.UpdateVisibleWeapon
struct UTBP_UI_InventoryRangedSlot_C_UpdateVisibleWeapon_Params
{
	class UTigerItemAsset*                             ItemAsset;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerAmmoAsset*                             AmmoAsset;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AmmoInWeapon;                                              // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AmmoInInventory;                                           // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTigerModSlotInfo>                   ModSlotInfo;                                               // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	Tiger_ETigerWeaponSlot                             SelectedWeaponSlot;                                        // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.Tick
struct UTBP_UI_InventoryRangedSlot_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.OnInventoryUpdated
struct UTBP_UI_InventoryRangedSlot_C_OnInventoryUpdated_Params
{
};

// Function TBP_UI_InventoryRangedSlot.TBP_UI_InventoryRangedSlot_C.ExecuteUbergraph_TBP_UI_InventoryRangedSlot
struct UTBP_UI_InventoryRangedSlot_C_ExecuteUbergraph_TBP_UI_InventoryRangedSlot_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
