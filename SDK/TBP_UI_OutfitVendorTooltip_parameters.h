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

// Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.GetItem
struct UTBP_UI_OutfitVendorTooltip_C_GetItem_Params
{
	class UTigerInventoryItemBase*                     InItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerInventoryItemBase*                     OutItem;                                                   // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.SetItem
struct UTBP_UI_OutfitVendorTooltip_C_SetItem_Params
{
	struct FTigerVendorStoreCategoryItem               Item;                                                      // 0x0000(0x0098)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       ErrorMessage;                                              // 0x0098(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FKey                                        GamepadInputKey;                                           // 0x00B0(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FText                                       ActionText;                                                // 0x00C8(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.OnInitialized
struct UTBP_UI_OutfitVendorTooltip_C_OnInitialized_Params
{
};

// Function TBP_UI_OutfitVendorTooltip.TBP_UI_OutfitVendorTooltip_C.ExecuteUbergraph_TBP_UI_OutfitVendorTooltip
struct UTBP_UI_OutfitVendorTooltip_C_ExecuteUbergraph_TBP_UI_OutfitVendorTooltip_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
