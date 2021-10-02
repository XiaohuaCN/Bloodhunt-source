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
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.Open Menu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_MatchMenu_C::Open_Menu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.Open Menu");

	UTBP_UI_MatchMenu_C_Open_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.CloseMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_MatchMenu_C::CloseMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.CloseMenu");

	UTBP_UI_MatchMenu_C_CloseMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ResetButtonToDefaultState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_MenuButton_C*                        TargetButton                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MatchMenu_C::ResetButtonToDefaultState(class UTBP_UI_MenuButton_C* TargetButton)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ResetButtonToDefaultState");

	UTBP_UI_MatchMenu_C_ResetButtonToDefaultState_Params params;
	params.TargetButton = TargetButton;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.TryToJoinElysiumSession
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_MatchMenu_C::TryToJoinElysiumSession()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.TryToJoinElysiumSession");

	UTBP_UI_MatchMenu_C_TryToJoinElysiumSession_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_MatchMenu_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.Construct");

	UTBP_UI_MatchMenu_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ReturnToElysium
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_MatchMenu_C::ReturnToElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ReturnToElysium");

	UTBP_UI_MatchMenu_C_ReturnToElysium_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnStatsReadyOrTimeout
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bTimedOut                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_MatchMenu_C::OnStatsReadyOrTimeout(bool bTimedOut)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnStatsReadyOrTimeout");

	UTBP_UI_MatchMenu_C_OnStatsReadyOrTimeout_Params params;
	params.bTimedOut = bTimedOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_MatchMenu_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnOpen");

	UTBP_UI_MatchMenu_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnClose
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_MatchMenu_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.OnClose");

	UTBP_UI_MatchMenu_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__ReturnButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MatchMenu_C::BndEvt__ReturnButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__ReturnButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature");

	UTBP_UI_MatchMenu_C_BndEvt__ReturnButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MatchMenu_C::BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature");

	UTBP_UI_MatchMenu_C_BndEvt__QuitGameButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MatchMenu_C::BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature");

	UTBP_UI_MatchMenu_C_BndEvt__LeaveSessionButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MatchMenu_C::BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature");

	UTBP_UI_MatchMenu_C_BndEvt__SettingsButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveLeaveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MatchMenu_C::BndEvt__LeaveLeaveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveLeaveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature");

	UTBP_UI_MatchMenu_C_BndEvt__LeaveLeaveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitQuitButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MatchMenu_C::BndEvt__QuitQuitButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitQuitButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature");

	UTBP_UI_MatchMenu_C_BndEvt__QuitQuitButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ResumeGame
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_MatchMenu_C::ResumeGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ResumeGame");

	UTBP_UI_MatchMenu_C_ResumeGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitReturnButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MatchMenu_C::BndEvt__QuitReturnButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__QuitReturnButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature");

	UTBP_UI_MatchMenu_C_BndEvt__QuitReturnButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveReturnButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_MatchMenu_C::BndEvt__LeaveReturnButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.BndEvt__LeaveReturnButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");

	UTBP_UI_MatchMenu_C_BndEvt__LeaveReturnButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ToggleMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_MatchMenu_C::ToggleMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ToggleMenu");

	UTBP_UI_MatchMenu_C_ToggleMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ExecuteUbergraph_TBP_UI_MatchMenu
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MatchMenu_C::ExecuteUbergraph_TBP_UI_MatchMenu(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MatchMenu.TBP_UI_MatchMenu_C.ExecuteUbergraph_TBP_UI_MatchMenu");

	UTBP_UI_MatchMenu_C_ExecuteUbergraph_TBP_UI_MatchMenu_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
