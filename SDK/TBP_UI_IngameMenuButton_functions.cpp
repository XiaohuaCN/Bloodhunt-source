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
//		Name   -> Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.SetDisplayedText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_IngameMenuButton_C::SetDisplayedText(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.SetDisplayedText");

	UTBP_UI_IngameMenuButton_C_SetDisplayedText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnNewMenuSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerIngameSubmenuWidget*                   NewMenu                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ShouldUseButtonAsset                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTBP_UI_IngameMenuButton_C*                  NewMenuButton                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTBP_UI_IngameMenuButton_C*                  CurrenyMenyButton                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_IngameMenuButton_C::OnNewMenuSelected(class UTigerIngameSubmenuWidget* NewMenu, bool ShouldUseButtonAsset, class UTBP_UI_IngameMenuButton_C* NewMenuButton, class UTBP_UI_IngameMenuButton_C* CurrenyMenyButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnNewMenuSelected");

	UTBP_UI_IngameMenuButton_C_OnNewMenuSelected_Params params;
	params.NewMenu = NewMenu;
	params.ShouldUseButtonAsset = ShouldUseButtonAsset;
	params.NewMenuButton = NewMenuButton;
	params.CurrenyMenyButton = CurrenyMenyButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnDeselected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_IngameMenuButton_C::OnDeselected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnDeselected");

	UTBP_UI_IngameMenuButton_C_OnDeselected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_IngameMenuButton_C::OnSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnSelected");

	UTBP_UI_IngameMenuButton_C_OnSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.GetMenuItemTextColor
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FSlateColor UTBP_UI_IngameMenuButton_C::GetMenuItemTextColor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.GetMenuItemTextColor");

	UTBP_UI_IngameMenuButton_C_GetMenuItemTextColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenOptions
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_IngameMenuButton_C::OpenOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenOptions");

	UTBP_UI_IngameMenuButton_C_OpenOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenMap
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_IngameMenuButton_C::OpenMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenMap");

	UTBP_UI_IngameMenuButton_C_OpenMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenInventory
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_IngameMenuButton_C::OpenInventory()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OpenInventory");

	UTBP_UI_IngameMenuButton_C_OpenInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_IngameMenuButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.Construct");

	UTBP_UI_IngameMenuButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnClickedItemButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_IngameMenuButton_C::OnClickedItemButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnClickedItemButton");

	UTBP_UI_IngameMenuButton_C_OnClickedItemButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_IngameMenuButton_C::BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_IngameMenuButton_C_BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_IngameMenuButton_C::BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_IngameMenuButton_C_BndEvt__MenuItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.ExecuteUbergraph_TBP_UI_IngameMenuButton
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_IngameMenuButton_C::ExecuteUbergraph_TBP_UI_IngameMenuButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.ExecuteUbergraph_TBP_UI_IngameMenuButton");

	UTBP_UI_IngameMenuButton_C_ExecuteUbergraph_TBP_UI_IngameMenuButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerIngameSubmenuWidget*                   SubmenuWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_IngameMenuButton_C::OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_IngameMenuButton.TBP_UI_IngameMenuButton_C.OnClicked__DelegateSignature");

	UTBP_UI_IngameMenuButton_C_OnClicked__DelegateSignature_Params params;
	params.SubmenuWidget = SubmenuWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
