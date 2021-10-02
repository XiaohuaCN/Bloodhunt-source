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
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Get_ResetInputPrompt_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UTBP_UI_SystemMenu_C::Get_ResetInputPrompt_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Get_ResetInputPrompt_Visibility_1");

	UTBP_UI_SystemMenu_C_Get_ResetInputPrompt_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Get_ApplyInputPrompt_Visibility_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		UMG_ESlateVisibility                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
UMG_ESlateVisibility UTBP_UI_SystemMenu_C::Get_ApplyInputPrompt_Visibility_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Get_ApplyInputPrompt_Visibility_1");

	UTBP_UI_SystemMenu_C_Get_ApplyInputPrompt_Visibility_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuAndButtonByIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_SystemMenu_C::SelectMenuAndButtonByIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuAndButtonByIndex");

	UTBP_UI_SystemMenu_C_SelectMenuAndButtonByIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SetActiveMenuButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_IngameMenuButton_C*                  NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenu_C::SetActiveMenuButton(class UTBP_UI_IngameMenuButton_C* NewParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SetActiveMenuButton");

	UTBP_UI_SystemMenu_C_SetActiveMenuButton_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_SystemMenu_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Destruct");

	UTBP_UI_SystemMenu_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_SystemMenu_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnClose");

	UTBP_UI_SystemMenu_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_SystemMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Construct");

	UTBP_UI_SystemMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Gameplay_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UTigerIngameSubmenuWidget*                   SubmenuWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenu_C::BndEvt__Gameplay_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Gameplay_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature");

	UTBP_UI_SystemMenu_C_BndEvt__Gameplay_Button_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params params;
	params.SubmenuWidget = SubmenuWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Graphics_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UTigerIngameSubmenuWidget*                   SubmenuWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenu_C::BndEvt__Graphics_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Graphics_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UTBP_UI_SystemMenu_C_BndEvt__Graphics_Button_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;
	params.SubmenuWidget = SubmenuWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Audio_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UTigerIngameSubmenuWidget*                   SubmenuWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenu_C::BndEvt__Audio_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Audio_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UTBP_UI_SystemMenu_C_BndEvt__Audio_Button_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;
	params.SubmenuWidget = SubmenuWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__KeyBindings_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UTigerIngameSubmenuWidget*                   SubmenuWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenu_C::BndEvt__KeyBindings_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature(class UTigerIngameSubmenuWidget* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__KeyBindings_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature");

	UTBP_UI_SystemMenu_C_BndEvt__KeyBindings_Button_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params params;
	params.SubmenuWidget = SubmenuWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Button_94_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SystemMenu_C::BndEvt__Button_94_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__Button_94_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_SystemMenu_C_BndEvt__Button_94_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SystemMenu_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_SystemMenu_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SystemMenu_C::BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_SystemMenu_C_BndEvt__QuitButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Close menu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenu_C::Close_menu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.Close menu");

	UTBP_UI_SystemMenu_C_Close_menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnOpenMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenu_C::OnOpenMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnOpenMenu");

	UTBP_UI_SystemMenu_C_OnOpenMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.EscapePressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenu_C::EscapePressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.EscapePressed");

	UTBP_UI_SystemMenu_C_EscapePressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__PopupQuitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SystemMenu_C::BndEvt__PopupQuitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__PopupQuitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");

	UTBP_UI_SystemMenu_C_BndEvt__PopupQuitButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__PopupReturnButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SystemMenu_C::BndEvt__PopupReturnButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__PopupReturnButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UTBP_UI_SystemMenu_C_BndEvt__PopupReturnButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuToTheRight
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenu_C::SelectMenuToTheRight()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuToTheRight");

	UTBP_UI_SystemMenu_C_SelectMenuToTheRight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuToTheLeft
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenu_C::SelectMenuToTheLeft()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.SelectMenuToTheLeft");

	UTBP_UI_SystemMenu_C_SelectMenuToTheLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.CustomEvent_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenu_C::CustomEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.CustomEvent_1");

	UTBP_UI_SystemMenu_C_CustomEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.CustomEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenu_C::CustomEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.CustomEvent");

	UTBP_UI_SystemMenu_C_CustomEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_SystemMenu_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnOpen");

	UTBP_UI_SystemMenu_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UTBP_UI_SystemMenu_C_BndEvt__TBP_UI_InputPromptCombined_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ApplyInputPrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_ApplyInputPrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ApplyInputPrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");

	UTBP_UI_SystemMenu_C_BndEvt__TBP_UI_SystemMenu_ApplyInputPrompt_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnApplySettings
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenu_C::OnApplySettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnApplySettings");

	UTBP_UI_SystemMenu_C_OnApplySettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ResetInputPrompt_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_ResetInputPrompt_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ResetInputPrompt_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UTBP_UI_SystemMenu_C_BndEvt__TBP_UI_SystemMenu_ResetInputPrompt_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ResetPrompt_K2Node_ComponentBoundEvent_12_Confirm__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SystemMenu_C::BndEvt__TBP_UI_SystemMenu_ResetPrompt_K2Node_ComponentBoundEvent_12_Confirm__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.BndEvt__TBP_UI_SystemMenu_ResetPrompt_K2Node_ComponentBoundEvent_12_Confirm__DelegateSignature");

	UTBP_UI_SystemMenu_C_BndEvt__TBP_UI_SystemMenu_ResetPrompt_K2Node_ComponentBoundEvent_12_Confirm__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnResetSettings
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_SystemMenu_C::OnResetSettings()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.OnResetSettings");

	UTBP_UI_SystemMenu_C_OnResetSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.ExecuteUbergraph_TBP_UI_SystemMenu
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenu_C::ExecuteUbergraph_TBP_UI_SystemMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenu.TBP_UI_SystemMenu_C.ExecuteUbergraph_TBP_UI_SystemMenu");

	UTBP_UI_SystemMenu_C_ExecuteUbergraph_TBP_UI_SystemMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
