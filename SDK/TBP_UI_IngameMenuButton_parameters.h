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

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.SetDisplayedText
struct UTBP_UI_IngameMenuButton_C_SetDisplayedText_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnNewMenuSelected
struct UTBP_UI_IngameMenuButton_C_OnNewMenuSelected_Params
{
	class UTigerIngameSubmenuWidget*                   NewMenu;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldUseButtonAsset;                                      // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTBP_UI_IngameMenuButton_C*                  NewMenuButton;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_IngameMenuButton_C*                  CurrenyMenyButton;                                         // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnDeselected
struct UTBP_UI_IngameMenuButton_C_OnDeselected_Params
{
};

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnSelected
struct UTBP_UI_IngameMenuButton_C_OnSelected_Params
{
};

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.GetMenuItemTextColor
struct UTBP_UI_IngameMenuButton_C_GetMenuItemTextColor_Params
{
	struct FSlateColor                                 ReturnValue;                                               // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenOptions
struct UTBP_UI_IngameMenuButton_C_OpenOptions_Params
{
};

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenMap
struct UTBP_UI_IngameMenuButton_C_OpenMap_Params
{
};

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenInventory
struct UTBP_UI_IngameMenuButton_C_OpenInventory_Params
{
};

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.Construct
struct UTBP_UI_IngameMenuButton_C_Construct_Params
{
};

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnClickedItemButton
struct UTBP_UI_IngameMenuButton_C_OnClickedItemButton_Params
{
};

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_IngameMenuButton_C_BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_IngameMenuButton_C_BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.ExecuteUbergraph_TBP_UI_IngameMenuButton
struct UTBP_UI_IngameMenuButton_C_ExecuteUbergraph_TBP_UI_IngameMenuButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnClicked__DelegateSignature
struct UTBP_UI_IngameMenuButton_C_OnClicked__DelegateSignature_Params
{
	class UTigerIngameSubmenuWidget*                   SubmenuWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
