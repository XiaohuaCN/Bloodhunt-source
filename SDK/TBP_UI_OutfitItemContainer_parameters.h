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

// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.CreateStoreItems
struct UTBP_UI_OutfitItemContainer_C_CreateStoreItems_Params
{
	TArray<struct FTigerVendorStoreCategoryItem>       Items;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.UpdateOwnerStatus
struct UTBP_UI_OutfitItemContainer_C_UpdateOwnerStatus_Params
{
	int                                                NewInventoryCount;                                         // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsEquipped;                                               // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.DoesPlayerOwnItem
struct UTBP_UI_OutfitItemContainer_C_DoesPlayerOwnItem_Params
{
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.SetItemListener
struct UTBP_UI_OutfitItemContainer_C_SetItemListener_Params
{
};

// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.CreateStoreItem
struct UTBP_UI_OutfitItemContainer_C_CreateStoreItem_Params
{
	struct FTigerVendorStoreCategoryItem               StoreItem;                                                 // 0x0000(0x0098)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTBP_UI_OutfitItem_C*                        ItemWidget;                                                // 0x0098(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Tick
struct UTBP_UI_OutfitItemContainer_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.Reset
struct UTBP_UI_OutfitItemContainer_C_Reset_Params
{
};

// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.PreConstruct
struct UTBP_UI_OutfitItemContainer_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_OutfitItemContainer.TBP_UI_OutfitItemContainer_C.ExecuteUbergraph_TBP_UI_OutfitItemContainer
struct UTBP_UI_OutfitItemContainer_C_ExecuteUbergraph_TBP_UI_OutfitItemContainer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
