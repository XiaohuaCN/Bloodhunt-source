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

// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateRarityMarker
struct UTBP_UI_InventoryMeleeSlot_C_UpdateRarityMarker_Params
{
};

// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.PingEmpty
struct UTBP_UI_InventoryMeleeSlot_C_PingEmpty_Params
{
};

// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.PingWeapon
struct UTBP_UI_InventoryMeleeSlot_C_PingWeapon_Params
{
};

// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.CreateTooltipActions
struct UTBP_UI_InventoryMeleeSlot_C_CreateTooltipActions_Params
{
};

// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.ConstructTooltipWidget
struct UTBP_UI_InventoryMeleeSlot_C_ConstructTooltipWidget_Params
{
	class UTigerTooltipWidget*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.EquipWeapon
struct UTBP_UI_InventoryMeleeSlot_C_EquipWeapon_Params
{
};

// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.DropWeapon
struct UTBP_UI_InventoryMeleeSlot_C_DropWeapon_Params
{
};

// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.GetSelectedSlotColor
struct UTBP_UI_InventoryMeleeSlot_C_GetSelectedSlotColor_Params
{
	Tiger_ETigerWeaponSlot                             SelectedSlot;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                                 Color;                                                     // 0x0008(0x0028)  (Parm, OutParm)
};

// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateNoWeapon
struct UTBP_UI_InventoryMeleeSlot_C_UpdateNoWeapon_Params
{
};

// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.UpdateVisibleWeapon
struct UTBP_UI_InventoryMeleeSlot_C_UpdateVisibleWeapon_Params
{
	class UTigerMeleeWeapon*                           MeleeWeapon;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerItemAsset*                             WeaponItem;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerDisciplineComponent*                   Discipline;                                                // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerWeaponSlot                             EquippedSlot;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.Construct
struct UTBP_UI_InventoryMeleeSlot_C_Construct_Params
{
};

// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.Tick
struct UTBP_UI_InventoryMeleeSlot_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventoryMeleeSlot.TBP_UI_InventoryMeleeSlot_C.ExecuteUbergraph_TBP_UI_InventoryMeleeSlot
struct UTBP_UI_InventoryMeleeSlot_C_ExecuteUbergraph_TBP_UI_InventoryMeleeSlot_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
