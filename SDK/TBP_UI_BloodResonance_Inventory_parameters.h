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

// Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.UpdateInventoryResonance
struct UTBP_UI_BloodResonance_Inventory_C_UpdateInventoryResonance_Params
{
	class UTBP_UI_BloodResonance_InventoryItem_C*      InTarget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerBloodResonanceAsset*                   InDataAsset;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerBloodType                              InBloodType;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.InitializeInventoryResonance
struct UTBP_UI_BloodResonance_Inventory_C_InitializeInventoryResonance_Params
{
	class UTBP_UI_BloodResonance_InventoryItem_C*      InTarget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerBloodResonanceAsset*                   InDataAsset;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerBloodType                              InBloodType;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.UpdateInfo
struct UTBP_UI_BloodResonance_Inventory_C_UpdateInfo_Params
{
};

// Function TBP_UI_BloodResonance_Inventory.TBP_UI_BloodResonance_Inventory_C.ExecuteUbergraph_TBP_UI_BloodResonance_Inventory
struct UTBP_UI_BloodResonance_Inventory_C_ExecuteUbergraph_TBP_UI_BloodResonance_Inventory_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
