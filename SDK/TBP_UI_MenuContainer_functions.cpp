// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnPartyUpdate
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_MenuContainer_C::OnPartyUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnPartyUpdate");

	UTBP_UI_MenuContainer_C_OnPartyUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnCurrencyButtonReleased
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
void UTBP_UI_MenuContainer_C::OnCurrencyButtonReleased()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnCurrencyButtonReleased");

	UTBP_UI_MenuContainer_C_OnCurrencyButtonReleased_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ClosePremiumCurrencyPopUpMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_MenuContainer_C::ClosePremiumCurrencyPopUpMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ClosePremiumCurrencyPopUpMenu");

	UTBP_UI_MenuContainer_C_ClosePremiumCurrencyPopUpMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenPremiumCurrencyPopUpMenu
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InItemName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                InItemCost                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTBP_UI_PremiumCurrencyPopUp_C*              OpenedPopUpMenu                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MenuContainer_C::OpenPremiumCurrencyPopUpMenu(const struct FText& InItemName, int InItemCost, class UTBP_UI_PremiumCurrencyPopUp_C** OpenedPopUpMenu)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenPremiumCurrencyPopUpMenu");

	UTBP_UI_MenuContainer_C_OpenPremiumCurrencyPopUpMenu_Params params;
	params.InItemName = InItemName;
	params.InItemCost = InItemCost;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OpenedPopUpMenu != nullptr)
		*OpenedPopUpMenu = params.OpenedPopUpMenu;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.HasValidString
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               HasValidString                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_MenuContainer_C::HasValidString(const struct FText& InText, bool* HasValidString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.HasValidString");

	UTBP_UI_MenuContainer_C_HasValidString_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (HasValidString != nullptr)
		*HasValidString = params.HasValidString;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenSubMenuForActiveIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_MenuContainer_C::OpenSubMenuForActiveIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenSubMenuForActiveIndex");

	UTBP_UI_MenuContainer_C_OpenSubMenuForActiveIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SetupButtons
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_MenuContainer_C::SetupButtons()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SetupButtons");

	UTBP_UI_MenuContainer_C_SetupButtons_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.IncrementActiveMenuIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_MenuContainer_C::IncrementActiveMenuIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.IncrementActiveMenuIndex");

	UTBP_UI_MenuContainer_C_IncrementActiveMenuIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.DecrementActiveMenuIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_MenuContainer_C::DecrementActiveMenuIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.DecrementActiveMenuIndex");

	UTBP_UI_MenuContainer_C_DecrementActiveMenuIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenSystem
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_MenuContainer_C::OpenSystem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OpenSystem");

	UTBP_UI_MenuContainer_C_OpenSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.CreateMenu
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      SubMenuClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MenuContainer_C::CreateMenu(class UClass* SubMenuClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.CreateMenu");

	UTBP_UI_MenuContainer_C_CreateMenu_Params params;
	params.SubMenuClass = SubMenuClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMouseButtonDoubleClick
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   InMyGeometry                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               InMouseEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTBP_UI_MenuContainer_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMouseButtonDoubleClick");

	UTBP_UI_MenuContainer_C_OnMouseButtonDoubleClick_Params params;
	params.InMyGeometry = InMyGeometry;
	params.InMouseEvent = InMouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTBP_UI_MenuContainer_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMouseButtonDown");

	UTBP_UI_MenuContainer_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.InitializeMenus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_MenuContainer_C::InitializeMenus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.InitializeMenus");

	UTBP_UI_MenuContainer_C_InitializeMenus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuToTheRight
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_MenuContainer_C::SelectMenuToTheRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuToTheRight");

	UTBP_UI_MenuContainer_C_SelectMenuToTheRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuToTheLeft
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_MenuContainer_C::SelectMenuToTheLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuToTheLeft");

	UTBP_UI_MenuContainer_C_SelectMenuToTheLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_MenuContainer_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnOpen");

	UTBP_UI_MenuContainer_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_MenuContainer_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnClose");

	UTBP_UI_MenuContainer_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.LocalPlayerSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_MenuContainer_C::LocalPlayerSpawned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.LocalPlayerSpawned");

	UTBP_UI_MenuContainer_C_LocalPlayerSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_MenuContainer_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PreConstruct");

	UTBP_UI_MenuContainer_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ConstructSubMenusIfNotConstructed
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void UTBP_UI_MenuContainer_C::ConstructSubMenusIfNotConstructed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ConstructSubMenusIfNotConstructed");

	UTBP_UI_MenuContainer_C_ConstructSubMenusIfNotConstructed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_MenuContainer_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnInitialized");

	UTBP_UI_MenuContainer_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuOnClick
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerIngameSubmenuWidget*                   SubmenuWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MenuContainer_C::SelectMenuOnClick(class UTigerIngameSubmenuWidget* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.SelectMenuOnClick");

	UTBP_UI_MenuContainer_C_SelectMenuOnClick_Params params;
	params.SubmenuWidget = SubmenuWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_MenuContainer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.Construct");

	UTBP_UI_MenuContainer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ToggleUIVisibility
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_MenuContainer_C::ToggleUIVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ToggleUIVisibility");

	UTBP_UI_MenuContainer_C_ToggleUIVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MenuContainer_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_MenuContainer_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMenuSelected
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_MenuContainer_C::OnMenuSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.OnMenuSelected");

	UTBP_UI_MenuContainer_C_OnMenuSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__SystemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MenuContainer_C::BndEvt__SystemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__SystemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_MenuContainer_C_BndEvt__SystemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MenuContainer_C::BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature");

	UTBP_UI_MenuContainer_C_BndEvt__CurrencyButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PartyUpdate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_MenuContainer_C::PartyUpdate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PartyUpdate");

	UTBP_UI_MenuContainer_C_PartyUpdate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PartyUpdate2
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPartyId                               InPartyId                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FString                                     InJoiningPlayerId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_MenuContainer_C::PartyUpdate2(const struct FTigerPartyId& InPartyId, const struct FString& InJoiningPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.PartyUpdate2");

	UTBP_UI_MenuContainer_C_PartyUpdate2_Params params;
	params.InPartyId = InPartyId;
	params.InJoiningPlayerId = InJoiningPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ExecuteUbergraph_TBP_UI_MenuContainer
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MenuContainer_C::ExecuteUbergraph_TBP_UI_MenuContainer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MenuContainer.TBP_UI_MenuContainer_C.ExecuteUbergraph_TBP_UI_MenuContainer");

	UTBP_UI_MenuContainer_C_ExecuteUbergraph_TBP_UI_MenuContainer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
