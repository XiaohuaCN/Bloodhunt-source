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

// Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.SetModBorderColor
struct UTBP_UI_InventoryRangedModSlots_C_SetModBorderColor_Params
{
	int                                                InSlotIndex;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                InColor;                                                   // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.PopulateMods
struct UTBP_UI_InventoryRangedModSlots_C_PopulateMods_Params
{
	Tiger_ETigerWeaponSlot                             InWeaponSlot;                                              // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTigerModSlotInfo>                   InModSlots;                                                // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.PreConstruct
struct UTBP_UI_InventoryRangedModSlots_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InventoryRangedModSlots.TBP_UI_InventoryRangedModSlots_C.ExecuteUbergraph_TBP_UI_InventoryRangedModSlots
struct UTBP_UI_InventoryRangedModSlots_C_ExecuteUbergraph_TBP_UI_InventoryRangedModSlots_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
