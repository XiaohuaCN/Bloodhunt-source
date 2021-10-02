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

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.ResetImageColourForArtifacts
struct UTBP_UI_InventorySlot_C_ResetImageColourForArtifacts_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UpdateArtifact
struct UTBP_UI_InventorySlot_C_UpdateArtifact_Params
{
	int                                                InStackCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UpdateCollectible
struct UTBP_UI_InventorySlot_C_UpdateCollectible_Params
{
	int                                                InStackCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UpdateMod
struct UTBP_UI_InventorySlot_C_UpdateMod_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UpdateConsumable
struct UTBP_UI_InventorySlot_C_UpdateConsumable_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UpdateAmmo
struct UTBP_UI_InventorySlot_C_UpdateAmmo_Params
{
	class UTigerAmmoAsset*                             InAmmoAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.AddDynamicPingTooltipAction
struct UTBP_UI_InventorySlot_C_AddDynamicPingTooltipAction_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.SwapWeaponEquippedOn
struct UTBP_UI_InventorySlot_C_SwapWeaponEquippedOn_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.SendHasItemPing
struct UTBP_UI_InventorySlot_C_SendHasItemPing_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.SendWantItemPing
struct UTBP_UI_InventorySlot_C_SendWantItemPing_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.IsValidAmmoItemForWeaponSlot
struct UTBP_UI_InventorySlot_C_IsValidAmmoItemForWeaponSlot_Params
{
	class UTigerInventoryComponent*                    InInventoryComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerWeaponSlot                             InWeaponSlot;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerAmmoAsset*                             InAmmoAsset;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bCanUseAmmo;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.SetModUnavailableState
struct UTBP_UI_InventorySlot_C_SetModUnavailableState_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.SetAmmoUnavailableState
struct UTBP_UI_InventorySlot_C_SetAmmoUnavailableState_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.CreateTooltipActions
struct UTBP_UI_InventorySlot_C_CreateTooltipActions_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.GetRangedModInfo
struct UTBP_UI_InventorySlot_C_GetRangedModInfo_Params
{
	class UTigerRangedModItemAsset*                    ModItemAsset;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIgnoreEquippedMod;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bIsModSlotEmpty;                                           // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bSupportsSwap;                                             // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bHasHigherPriority;                                        // 0x000B(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.ConstructTooltipWidget
struct UTBP_UI_InventorySlot_C_ConstructTooltipWidget_Params
{
	class UTigerTooltipWidget*                         ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UnequipMod
struct UTBP_UI_InventorySlot_C_UnequipMod_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.EquipMod
struct UTBP_UI_InventorySlot_C_EquipMod_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.SetModInWeapon
struct UTBP_UI_InventorySlot_C_SetModInWeapon_Params
{
	Tiger_ETigerWeaponSlot                             InWeaponSlot;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerRangedModItemAsset*                    InModItemAsset;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInIsUnlocked;                                             // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bInIsOnHud;                                                // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UseConsumable
struct UTBP_UI_InventorySlot_C_UseConsumable_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.DropPack
struct UTBP_UI_InventorySlot_C_DropPack_Params
{
	bool                                               bWholeStack;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.UpdateInventorySlot
struct UTBP_UI_InventorySlot_C_UpdateInventorySlot_Params
{
	class UTigerItemAsset*                             NewItemAsset;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ItemStackSize;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.SetStackCount
struct UTBP_UI_InventorySlot_C_SetStackCount_Params
{
	int                                                InStackCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.OnDropSinglePack
struct UTBP_UI_InventorySlot_C_OnDropSinglePack_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.OnDropStack
struct UTBP_UI_InventorySlot_C_OnDropStack_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.Construct
struct UTBP_UI_InventorySlot_C_Construct_Params
{
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.PreConstruct
struct UTBP_UI_InventorySlot_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InventorySlot.TBP_UI_InventorySlot_C.ExecuteUbergraph_TBP_UI_InventorySlot
struct UTBP_UI_InventorySlot_C_ExecuteUbergraph_TBP_UI_InventorySlot_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
