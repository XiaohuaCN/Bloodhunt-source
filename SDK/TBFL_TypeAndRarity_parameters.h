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

// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromLootCategory
struct UTBFL_TypeAndRarity_C_GetTextFromLootCategory_Params
{
	Tiger_ETigerLootCategory                           LootCategory;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetShortTextFromWeaponType
struct UTBFL_TypeAndRarity_C_GetShortTextFromWeaponType_Params
{
	Tiger_ETigerWeaponType                             WeaponType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ShortType;                                                 // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromAmmoType
struct UTBFL_TypeAndRarity_C_GetTextFromAmmoType_Params
{
	Tiger_ETigerWeaponAmmoType                         In_Ammo_Type;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorTextFromItemType
struct UTBFL_TypeAndRarity_C_GetColorTextFromItemType_Params
{
	class UTigerItemAsset*                             InItemAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ColorText;                                                 // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorTextFromItemRarity
struct UTBFL_TypeAndRarity_C_GetColorTextFromItemRarity_Params
{
	Tiger_ETigerItemRarity                             In_Rarity;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       ColorText;                                                 // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.SetRarityMaterialFromWeaponClass
struct UTBFL_TypeAndRarity_C_SetRarityMaterialFromWeaponClass_Params
{
	class UMeshComponent*                              InMeshComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerWeapon*                                InWeaponClass;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromItemType
struct UTBFL_TypeAndRarity_C_GetTextFromItemType_Params
{
	Tiger_ETigerInventoryItemType                      In_Item_Type;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InGetShortVersion;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetTextFromItemRarity
struct UTBFL_TypeAndRarity_C_GetTextFromItemRarity_Params
{
	Tiger_ETigerItemRarity                             In_Rarity;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0010(0x0018)  (Parm, OutParm)
};

// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetData
struct UTBFL_TypeAndRarity_C_GetData_Params
{
	class UObject*                                     __WorldContext;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerTypeAndRarityData*                     Data;                                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBFL_TypeAndRarity.TBFL_TypeAndRarity_C.GetColorFromItemRarity
struct UTBFL_TypeAndRarity_C_GetColorFromItemRarity_Params
{
	Tiger_ETigerItemRarity                             In_Rarity;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     __WorldContext;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
