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
//		Offset -> 0x00DCC160
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMagicLeapSharedWorldGameMode::SendSharedWorldDataToClients()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients");

	AMagicLeapSharedWorldGameMode_SendSharedWorldDataToClients_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DCC140
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
//		Flags  -> (BlueprintAuthorityOnly, Native, Event, Public, BlueprintCallable, BlueprintEvent)
void AMagicLeapSharedWorldGameMode::SelectChosenOne()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne");

	AMagicLeapSharedWorldGameMode_SelectChosenOne_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void AMagicLeapSharedWorldGameMode::MagicLeapOnNewLocalDataFromClients__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature");

	AMagicLeapSharedWorldGameMode_MagicLeapOnNewLocalDataFromClients__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DCC020
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
//		Flags  -> (BlueprintAuthorityOnly, Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FMagicLeapSharedWorldSharedData             NewSharedWorldData                                         (Parm, OutParm, NativeAccessSpecifierPublic)
void AMagicLeapSharedWorldGameMode::DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData");

	AMagicLeapSharedWorldGameMode_DetermineSharedWorldData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewSharedWorldData != nullptr)
		*NewSharedWorldData = params.NewSharedWorldData;

}


// Function:
//		Offset -> 0x00DCC120
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
//		Flags  -> (Final, Native, Private)
void AMagicLeapSharedWorldGameState::OnReplicate_SharedWorldData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData");

	AMagicLeapSharedWorldGameState_OnReplicate_SharedWorldData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DCC100
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
//		Flags  -> (Final, Native, Private)
void AMagicLeapSharedWorldGameState::OnReplicate_AlignmentTransforms()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms");

	AMagicLeapSharedWorldGameState_OnReplicate_AlignmentTransforms_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void AMagicLeapSharedWorldGameState::MagicLeapSharedWorldEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature");

	AMagicLeapSharedWorldGameState_MagicLeapSharedWorldEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DCBED0
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform AMagicLeapSharedWorldGameState::CalculateXRCameraRootTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform");

	AMagicLeapSharedWorldGameState_CalculateXRCameraRootTransform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DCC230
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
//		struct FMagicLeapSharedWorldLocalData              LocalWorldReplicationData                                  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void AMagicLeapSharedWorldPlayerController::ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData");

	AMagicLeapSharedWorldPlayerController_ServerSetLocalWorldData_Params params;
	params.LocalWorldReplicationData = LocalWorldReplicationData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DCC190
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, BlueprintCallable)
// Parameters:
//		struct FMagicLeapSharedWorldAlignmentTransforms    InAlignmentTransforms                                      (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void AMagicLeapSharedWorldPlayerController::ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms");

	AMagicLeapSharedWorldPlayerController_ServerSetAlignmentTransforms_Params params;
	params.InAlignmentTransforms = InAlignmentTransforms;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DCC0D0
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMagicLeapSharedWorldPlayerController::IsChosenOne()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne");

	AMagicLeapSharedWorldPlayerController_IsChosenOne_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DCBF90
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient, BlueprintCallable)
// Parameters:
//		bool                                               bChosenOne                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMagicLeapSharedWorldPlayerController::ClientSetChosenOne(bool bChosenOne)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne");

	AMagicLeapSharedWorldPlayerController_ClientSetChosenOne_Params params;
	params.bChosenOne = bChosenOne;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DCBF70
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
void AMagicLeapSharedWorldPlayerController::ClientMarkReadyForSendingLocalData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData");

	AMagicLeapSharedWorldPlayerController_ClientMarkReadyForSendingLocalData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DCBF40
//		Name   -> Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool AMagicLeapSharedWorldPlayerController::CanSendLocalDataToServer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer");

	AMagicLeapSharedWorldPlayerController_CanSendLocalDataToServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
