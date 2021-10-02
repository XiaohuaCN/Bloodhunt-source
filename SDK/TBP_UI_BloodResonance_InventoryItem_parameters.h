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

// Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.UpdateStatusAndInfo
struct UTBP_UI_BloodResonance_InventoryItem_C_UpdateStatusAndInfo_Params
{
	struct FText                                       TextDesc;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.InitializeInventoryResonance
struct UTBP_UI_BloodResonance_InventoryItem_C_InitializeInventoryResonance_Params
{
	struct FText                                       InResonanceName;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FLinearColor                                InResonanceColor;                                          // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerBloodType                              InBloodType;                                               // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodResonance_InventoryItem.TBP_UI_BloodResonance_InventoryItem_C.ExecuteUbergraph_TBP_UI_BloodResonance_InventoryItem
struct UTBP_UI_BloodResonance_InventoryItem_C_ExecuteUbergraph_TBP_UI_BloodResonance_InventoryItem_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
