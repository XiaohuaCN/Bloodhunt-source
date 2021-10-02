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
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ShowTrainingVideo
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireEntry*                         InGrimoireEntry                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Elysium_InGameQueueIndicator_C::ShowTrainingVideo(class UTigerGrimoireEntry* InGrimoireEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ShowTrainingVideo");

	UTBP_UI_Elysium_InGameQueueIndicator_C_ShowTrainingVideo_Params params;
	params.InGrimoireEntry = InGrimoireEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.InitializeIsGroupMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Elysium_InGameQueueIndicator_C::InitializeIsGroupMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.InitializeIsGroupMode");

	UTBP_UI_Elysium_InGameQueueIndicator_C_InitializeIsGroupMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.SetLastSelectedGroupingMode
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsGroup                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Elysium_InGameQueueIndicator_C::SetLastSelectedGroupingMode(bool IsGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.SetLastSelectedGroupingMode");

	UTBP_UI_Elysium_InGameQueueIndicator_C_SetLastSelectedGroupingMode_Params params;
	params.IsGroup = IsGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Is Sole Member Of Group and Not in Party
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               bOnlyGroupMemberAndNotInParty                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Elysium_InGameQueueIndicator_C::Is_Sole_Member_Of_Group_and_Not_in_Party(bool* bOnlyGroupMemberAndNotInParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Is Sole Member Of Group and Not in Party");

	UTBP_UI_Elysium_InGameQueueIndicator_C_Is_Sole_Member_Of_Group_and_Not_in_Party_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bOnlyGroupMemberAndNotInParty != nullptr)
		*bOnlyGroupMemberAndNotInParty = params.bOnlyGroupMemberAndNotInParty;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.UpdateGroupLayout
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Elysium_InGameQueueIndicator_C::UpdateGroupLayout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.UpdateGroupLayout");

	UTBP_UI_Elysium_InGameQueueIndicator_C_UpdateGroupLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.IsInGroup
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               bIsInGroup                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Elysium_InGameQueueIndicator_C::IsInGroup(bool* bIsInGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.IsInGroup");

	UTBP_UI_Elysium_InGameQueueIndicator_C_IsInGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsInGroup != nullptr)
		*bIsInGroup = params.bIsInGroup;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.IsFindingGameServer
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_UI_Elysium_InGameQueueIndicator_C::IsFindingGameServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.IsFindingGameServer");

	UTBP_UI_Elysium_InGameQueueIndicator_C_IsFindingGameServer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.SetReadyButtonState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bInIsReady                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bIsQuickAnimation                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Elysium_InGameQueueIndicator_C::SetReadyButtonState(bool bInIsReady, bool bIsQuickAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.SetReadyButtonState");

	UTBP_UI_Elysium_InGameQueueIndicator_C_SetReadyButtonState_Params params;
	params.bInIsReady = bInIsReady;
	params.bIsQuickAnimation = bIsQuickAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnSwitchGameMode
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Elysium_InGameQueueIndicator_C::OnSwitchGameMode()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnSwitchGameMode");

	UTBP_UI_Elysium_InGameQueueIndicator_C_OnSwitchGameMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnShowPlayerList
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Elysium_InGameQueueIndicator_C::OnShowPlayerList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnShowPlayerList");

	UTBP_UI_Elysium_InGameQueueIndicator_C_OnShowPlayerList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnReadyInput
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Elysium_InGameQueueIndicator_C::OnReadyInput()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnReadyInput");

	UTBP_UI_Elysium_InGameQueueIndicator_C_OnReadyInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGroupChangedDelegate
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Elysium_InGameQueueIndicator_C::OnGroupChangedDelegate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGroupChangedDelegate");

	UTBP_UI_Elysium_InGameQueueIndicator_C_OnGroupChangedDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Elysium_InGameQueueIndicator_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Construct");

	UTBP_UI_Elysium_InGameQueueIndicator_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Elysium_InGameQueueIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.Tick");

	UTBP_UI_Elysium_InGameQueueIndicator_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnFindMatchFailed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Elysium_InGameQueueIndicator_C::OnFindMatchFailed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnFindMatchFailed");

	UTBP_UI_Elysium_InGameQueueIndicator_C_OnFindMatchFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnValidTigerPlayerState
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           TigerPlayerState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Elysium_InGameQueueIndicator_C::OnValidTigerPlayerState(class ATigerPlayerState* TigerPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnValidTigerPlayerState");

	UTBP_UI_Elysium_InGameQueueIndicator_C_OnValidTigerPlayerState_Params params;
	params.TigerPlayerState = TigerPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGroupReadyStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bInIsGroupReady                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Elysium_InGameQueueIndicator_C::OnGroupReadyStateChanged(bool bInIsGroupReady)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnGroupReadyStateChanged");

	UTBP_UI_Elysium_InGameQueueIndicator_C_OnGroupReadyStateChanged_Params params;
	params.bInIsGroupReady = bInIsGroupReady;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.CancelMatchmaking
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Elysium_InGameQueueIndicator_C::CancelMatchmaking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.CancelMatchmaking");

	UTBP_UI_Elysium_InGameQueueIndicator_C_CancelMatchmaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Elysium_InGameQueueIndicator_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnInitialized");

	UTBP_UI_Elysium_InGameQueueIndicator_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.DisableStartGameButton
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Elysium_InGameQueueIndicator_C::DisableStartGameButton()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.DisableStartGameButton");

	UTBP_UI_Elysium_InGameQueueIndicator_C_DisableStartGameButton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnTrainingVideoCompleted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Elysium_InGameQueueIndicator_C::OnTrainingVideoCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.OnTrainingVideoCompleted");

	UTBP_UI_Elysium_InGameQueueIndicator_C_OnTrainingVideoCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ExecuteUbergraph_TBP_UI_Elysium_InGameQueueIndicator
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Elysium_InGameQueueIndicator_C::ExecuteUbergraph_TBP_UI_Elysium_InGameQueueIndicator(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Elysium_InGameQueueIndicator.TBP_UI_Elysium_InGameQueueIndicator_C.ExecuteUbergraph_TBP_UI_Elysium_InGameQueueIndicator");

	UTBP_UI_Elysium_InGameQueueIndicator_C_ExecuteUbergraph_TBP_UI_Elysium_InGameQueueIndicator_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
