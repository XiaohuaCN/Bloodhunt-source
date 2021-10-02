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

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnPartyUpdate
struct UTBP_UI_MenuContainer_C_OnPartyUpdate_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnCurrencyButtonReleased
struct UTBP_UI_MenuContainer_C_OnCurrencyButtonReleased_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ClosePremiumCurrencyPopUpMenu
struct UTBP_UI_MenuContainer_C_ClosePremiumCurrencyPopUpMenu_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenPremiumCurrencyPopUpMenu
struct UTBP_UI_MenuContainer_C_OpenPremiumCurrencyPopUpMenu_Params
{
	struct FText                                       InItemName;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                InItemCost;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_PremiumCurrencyPopUp_C*              OpenedPopUpMenu;                                           // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.HasValidString
struct UTBP_UI_MenuContainer_C_HasValidString_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               HasValidString;                                            // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenSubMenuForActiveIndex
struct UTBP_UI_MenuContainer_C_OpenSubMenuForActiveIndex_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SetupButtons
struct UTBP_UI_MenuContainer_C_SetupButtons_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.IncrementActiveMenuIndex
struct UTBP_UI_MenuContainer_C_IncrementActiveMenuIndex_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.DecrementActiveMenuIndex
struct UTBP_UI_MenuContainer_C_DecrementActiveMenuIndex_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenSystem
struct UTBP_UI_MenuContainer_C_OpenSystem_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.CreateMenu
struct UTBP_UI_MenuContainer_C_CreateMenu_Params
{
	class UClass*                                      SubMenuClass;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMouseButtonDoubleClick
struct UTBP_UI_MenuContainer_C_OnMouseButtonDoubleClick_Params
{
	struct FGeometry                                   InMyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               InMouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMouseButtonDown
struct UTBP_UI_MenuContainer_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.InitializeMenus
struct UTBP_UI_MenuContainer_C_InitializeMenus_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuToTheRight
struct UTBP_UI_MenuContainer_C_SelectMenuToTheRight_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuToTheLeft
struct UTBP_UI_MenuContainer_C_SelectMenuToTheLeft_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnOpen
struct UTBP_UI_MenuContainer_C_OnOpen_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnClose
struct UTBP_UI_MenuContainer_C_OnClose_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.LocalPlayerSpawned
struct UTBP_UI_MenuContainer_C_LocalPlayerSpawned_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PreConstruct
struct UTBP_UI_MenuContainer_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ConstructSubMenusIfNotConstructed
struct UTBP_UI_MenuContainer_C_ConstructSubMenusIfNotConstructed_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnInitialized
struct UTBP_UI_MenuContainer_C_OnInitialized_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuOnClick
struct UTBP_UI_MenuContainer_C_SelectMenuOnClick_Params
{
	class UTigerIngameSubmenuWidget*                   SubmenuWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.Construct
struct UTBP_UI_MenuContainer_C_Construct_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ToggleUIVisibility
struct UTBP_UI_MenuContainer_C_ToggleUIVisibility_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_MenuContainer_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMenuSelected
struct UTBP_UI_MenuContainer_C_OnMenuSelected_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__SystemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_MenuContainer_C_BndEvt__SystemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
struct UTBP_UI_MenuContainer_C_BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PartyUpdate
struct UTBP_UI_MenuContainer_C_PartyUpdate_Params
{
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PartyUpdate2
struct UTBP_UI_MenuContainer_C_PartyUpdate2_Params
{
	struct FTigerPartyId                               InPartyId;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FString                                     InJoiningPlayerId;                                         // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ExecuteUbergraph_TBP_UI_MenuContainer
struct UTBP_UI_MenuContainer_C_ExecuteUbergraph_TBP_UI_MenuContainer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
