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

// Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.SetOwnerIndicators
struct UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C_SetOwnerIndicators_Params
{
	class UTigerInventoryItemBase*                     InItem;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.SetClanOrArchetypeIcon
struct UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C_SetClanOrArchetypeIcon_Params
{
	TArray<Tiger_ETigerClan>                           InClans;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<Tiger_ETigerPowerKitType>                   InArchetypes;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.CheckIfShouldDisplayDisallowedClan
struct UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C_CheckIfShouldDisplayDisallowedClan_Params
{
	TArray<Tiger_ETigerClan>                           InClans;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<Tiger_ETigerPowerKitType>                   InArchetypes;                                              // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bSuccessful;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.Construct
struct UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C_Construct_Params
{
};

// Function TBP_UI_InventoryClanBodyTypeIcons_ItemPreview.TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C.ExecuteUbergraph_TBP_UI_InventoryClanBodyTypeIcons_ItemPreview
struct UTBP_UI_InventoryClanBodyTypeIcons_ItemPreview_C_ExecuteUbergraph_TBP_UI_InventoryClanBodyTypeIcons_ItemPreview_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
