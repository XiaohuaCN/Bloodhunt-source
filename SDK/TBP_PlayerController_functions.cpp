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
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.StopGasSounds
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_PlayerController_C::StopGasSounds()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.StopGasSounds");

	ATBP_PlayerController_C_StopGasSounds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.DebugCrosshairLineHitTest
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Start                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     End                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_PlayerController_C::DebugCrosshairLineHitTest(const struct FVector& Start, const struct FVector& End)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.DebugCrosshairLineHitTest");

	ATBP_PlayerController_C_DebugCrosshairLineHitTest_Params params;
	params.Start = Start;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.OnFailed_9B8C084C4CD6A1EBC4F972B66834EC9C
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_PlayerController_C::OnFailed_9B8C084C4CD6A1EBC4F972B66834EC9C()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.OnFailed_9B8C084C4CD6A1EBC4F972B66834EC9C");

	ATBP_PlayerController_C_OnFailed_9B8C084C4CD6A1EBC4F972B66834EC9C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.OnSuccess_9B8C084C4CD6A1EBC4F972B66834EC9C
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_PlayerController_C::OnSuccess_9B8C084C4CD6A1EBC4F972B66834EC9C()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.OnSuccess_9B8C084C4CD6A1EBC4F972B66834EC9C");

	ATBP_PlayerController_C_OnSuccess_9B8C084C4CD6A1EBC4F972B66834EC9C_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.InpActEvt_WriteAndSendChatMessage_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ATBP_PlayerController_C::InpActEvt_WriteAndSendChatMessage_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.InpActEvt_WriteAndSendChatMessage_K2Node_InputActionEvent_1");

	ATBP_PlayerController_C_InpActEvt_WriteAndSendChatMessage_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_PlayerController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.ReceiveBeginPlay");

	ATBP_PlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_PlayerController_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.ReceiveEndPlay");

	ATBP_PlayerController_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.ReturnToElysium
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ATBP_PlayerController_C::ReturnToElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.ReturnToElysium");

	ATBP_PlayerController_C_ReturnToElysium_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.ShowPostMatchScreen
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void ATBP_PlayerController_C::ShowPostMatchScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.ShowPostMatchScreen");

	ATBP_PlayerController_C_ShowPostMatchScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.OnGhostModeSet_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsGhostModeEnabled                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_PlayerController_C::OnGhostModeSet_Event(bool bIsGhostModeEnabled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.OnGhostModeSet_Event");

	ATBP_PlayerController_C_OnGhostModeSet_Event_Params params;
	params.bIsGhostModeEnabled = bIsGhostModeEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.BindOnGhostModeSet
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_PlayerController_C::BindOnGhostModeSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.BindOnGhostModeSet");

	ATBP_PlayerController_C_BindOnGhostModeSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.ExitMatch
//		Flags  -> (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
void ATBP_PlayerController_C::ExitMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.ExitMatch");

	ATBP_PlayerController_C_ExitMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.OnToggleMainMenu
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_PlayerController_C::OnToggleMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.OnToggleMainMenu");

	ATBP_PlayerController_C_OnToggleMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.Debug_ShowCharacterCard
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_PlayerController_C::Debug_ShowCharacterCard()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.Debug_ShowCharacterCard");

	ATBP_PlayerController_C_Debug_ShowCharacterCard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PlayerController.TBP_PlayerController_C.ExecuteUbergraph_TBP_PlayerController
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_PlayerController_C::ExecuteUbergraph_TBP_PlayerController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PlayerController.TBP_PlayerController_C.ExecuteUbergraph_TBP_PlayerController");

	ATBP_PlayerController_C_ExecuteUbergraph_TBP_PlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
