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
//		Offset -> 0x00DC78A0
//		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.UnPin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMagicLeapARPinComponent::UnPin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.UnPin");

	UMagicLeapARPinComponent_UnPin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DC7680
//		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UClass*                                      InPinDataClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               OutPinDataValid                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMagicLeapARPinSaveGame*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::TryGetPinData(class UClass* InPinDataClass, bool* OutPinDataValid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData");

	UMagicLeapARPinComponent_TryGetPinData_Params params;
	params.InPinDataClass = InPinDataClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPinDataValid != nullptr)
		*OutPinDataValid = params.OutPinDataValid;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC7320
//		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::PinToRestoredOrSyncedID()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID");

	UMagicLeapARPinComponent_PinToRestoredOrSyncedID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC7270
//		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinToID
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FGuid                                       PinId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::PinToID(const struct FGuid& PinId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinToID");

	UMagicLeapARPinComponent_PinToID_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC7250
//		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMagicLeapARPinComponent::PinToBestFit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit");

	UMagicLeapARPinComponent_PinToBestFit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DC71B0
//		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             ComponentToPin                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::PinSceneComponent(class USceneComponent* ComponentToPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent");

	UMagicLeapARPinComponent_PinSceneComponent_Params params;
	params.ComponentToPin = ComponentToPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC7180
//		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::PinRestoredOrSynced()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced");

	UMagicLeapARPinComponent_PinRestoredOrSynced_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC70E0
//		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.PinActor
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      ActorToPin                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::PinActor(class AActor* ActorToPin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.PinActor");

	UMagicLeapARPinComponent_PinActor_Params params;
	params.ActorToPin = ActorToPin;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		bool                                               bRestoredOrSynced                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapARPinComponent::PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature");

	UMagicLeapARPinComponent_PersistentEntityPinned__DelegateSignature_Params params;
	params.bRestoredOrSynced = bRestoredOrSynced;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
void UMagicLeapARPinComponent::PersistentEntityPinLost__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature");

	UMagicLeapARPinComponent_PersistentEntityPinLost__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate)
// Parameters:
//		bool                                               bDataRestored                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapARPinComponent::MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature");

	UMagicLeapARPinComponent_MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature_Params params;
	params.bDataRestored = bDataRestored;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DC6F90
//		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::IsPinned()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned");

	UMagicLeapARPinComponent_IsPinned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6E30
//		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FMagicLeapARPinState                        State                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::GetPinState(struct FMagicLeapARPinState* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState");

	UMagicLeapARPinComponent_GetPinState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6EE0
//		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGuid                                       PinId                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::GetPinnedPinID(struct FGuid* PinId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID");

	UMagicLeapARPinComponent_GetPinnedPinID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PinId != nullptr)
		*PinId = params.PinId;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6D90
//		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UClass*                                      PinDataClass                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UMagicLeapARPinSaveGame*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UMagicLeapARPinSaveGame* UMagicLeapARPinComponent::GetPinData(class UClass* PinDataClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData");

	UMagicLeapARPinComponent_GetPinData_Params params;
	params.PinDataClass = PinDataClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6350
//		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UMagicLeapARPinComponent::AttemptPinDataRestorationAsync()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync");

	UMagicLeapARPinComponent_AttemptPinDataRestorationAsync_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DC6320
//		Name   -> Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinComponent::AttemptPinDataRestoration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration");

	UMagicLeapARPinComponent_AttemptPinDataRestoration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC7800
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapARPinFunctionLibrary::STATIC_UnBindToOnMagicLeapContentBindingFoundDelegate(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate");

	UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapContentBindingFoundDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DC7760
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapARPinFunctionLibrary::STATIC_UnBindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate");

	UMagicLeapARPinFunctionLibrary_UnBindToOnMagicLeapARPinUpdatedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DC7510
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMagicLeapARPinQuery                        InGlobalFilter                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_SetGlobalQueryFilter(const struct FMagicLeapARPinQuery& InGlobalFilter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter");

	UMagicLeapARPinFunctionLibrary_SetGlobalQueryFilter_Params params;
	params.InGlobalFilter = InGlobalFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC7490
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                UserIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UMagicLeapARPinFunctionLibrary::STATIC_SetContentBindingSaveGameUserIndex(int UserIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex");

	UMagicLeapARPinFunctionLibrary_SetContentBindingSaveGameUserIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DC7350
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FMagicLeapARPinQuery                        Query                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FGuid>                               Pins                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_QueryARPins(const struct FMagicLeapARPinQuery& Query, TArray<struct FGuid>* Pins)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins");

	UMagicLeapARPinFunctionLibrary_QueryARPins_Params params;
	params.Query = Query;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pins != nullptr)
		*Pins = params.Pins;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6FF0
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FString                                     PinIdString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGuid                                       ARPinId                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinFunctionLibrary::STATIC_ParseStringToARPinId(const struct FString& PinIdString, struct FGuid* ARPinId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId");

	UMagicLeapARPinFunctionLibrary_ParseStringToARPinId_Params params;
	params.PinIdString = PinIdString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ARPinId != nullptr)
		*ARPinId = params.ARPinId;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6FC0
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinFunctionLibrary::STATIC_IsTrackerValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid");

	UMagicLeapARPinFunctionLibrary_IsTrackerValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6D00
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                Count                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_GetNumAvailableARPins(int* Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins");

	UMagicLeapARPinFunctionLibrary_GetNumAvailableARPins_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Count != nullptr)
		*Count = params.Count;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6C20
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FMagicLeapARPinQuery                        CurrentGlobalFilter                                        (Parm, OutParm, NativeAccessSpecifierPublic)
//		MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_GetGlobalQueryFilter(struct FMagicLeapARPinQuery* CurrentGlobalFilter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter");

	UMagicLeapARPinFunctionLibrary_GetGlobalQueryFilter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (CurrentGlobalFilter != nullptr)
		*CurrentGlobalFilter = params.CurrentGlobalFilter;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6BF0
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UMagicLeapARPinFunctionLibrary::STATIC_GetContentBindingSaveGameUserIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex");

	UMagicLeapARPinFunctionLibrary_GetContentBindingSaveGameUserIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6B00
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     SearchPoint                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FGuid                                       PinId                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_GetClosestARPin(const struct FVector& SearchPoint, struct FGuid* PinId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin");

	UMagicLeapARPinFunctionLibrary_GetClosestARPin_Params params;
	params.SearchPoint = SearchPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PinId != nullptr)
		*PinId = params.PinId;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6A10
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                NumRequested                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FGuid>                               Pins                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_GetAvailableARPins(int NumRequested, TArray<struct FGuid>* Pins)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins");

	UMagicLeapARPinFunctionLibrary_GetAvailableARPins_Params params;
	params.NumRequested = NumRequested;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Pins != nullptr)
		*Pins = params.Pins;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6930
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FMagicLeapARPinState                        State                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMagicLeapARPinFunctionLibrary::STATIC_GetARPinStateToString(const struct FMagicLeapARPinState& State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString");

	UMagicLeapARPinFunctionLibrary_GetARPinStateToString_Params params;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6830
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FGuid                                       PinId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FMagicLeapARPinState                        State                                                      (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_GetARPinState(const struct FGuid& PinId, struct FMagicLeapARPinState* State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState");

	UMagicLeapARPinFunctionLibrary_GetARPinState_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (State != nullptr)
		*State = params.State;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC66A0
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FGuid                                       PinId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               PinFoundInEnvironment                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinFunctionLibrary::STATIC_GetARPinPositionAndOrientation_TrackingSpace(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace");

	UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_TrackingSpace_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (PinFoundInEnvironment != nullptr)
		*PinFoundInEnvironment = params.PinFoundInEnvironment;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6510
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FGuid                                       PinId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Orientation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               PinFoundInEnvironment                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UMagicLeapARPinFunctionLibrary::STATIC_GetARPinPositionAndOrientation(const struct FGuid& PinId, struct FVector* Position, struct FRotator* Orientation, bool* PinFoundInEnvironment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation");

	UMagicLeapARPinFunctionLibrary_GetARPinPositionAndOrientation_Params params;
	params.PinId = PinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Position != nullptr)
		*Position = params.Position;
	if (Orientation != nullptr)
		*Orientation = params.Orientation;
	if (PinFoundInEnvironment != nullptr)
		*PinFoundInEnvironment = params.PinFoundInEnvironment;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC64E0
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_DestroyTracker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker");

	UMagicLeapARPinFunctionLibrary_DestroyTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC64B0
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		MagicLeapARPin_EMagicLeapPassableWorldError        ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
MagicLeapARPin_EMagicLeapPassableWorldError UMagicLeapARPinFunctionLibrary::STATIC_CreateTracker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker");

	UMagicLeapARPinFunctionLibrary_CreateTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DC6410
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapARPinFunctionLibrary::STATIC_BindToOnMagicLeapContentBindingFoundDelegate(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate");

	UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapContentBindingFoundDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DC6370
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Delegate                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UMagicLeapARPinFunctionLibrary::STATIC_BindToOnMagicLeapARPinUpdatedDelegate(const struct FScriptDelegate& Delegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate");

	UMagicLeapARPinFunctionLibrary_BindToOnMagicLeapARPinUpdatedDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DC6240
//		Name   -> Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FGuid                                       ARPinId                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UMagicLeapARPinFunctionLibrary::STATIC_ARPinIdToString(const struct FGuid& ARPinId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString");

	UMagicLeapARPinFunctionLibrary_ARPinIdToString_Params params;
	params.ARPinId = ARPinId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AMagicLeapARPinInfoActorBase::OnUpdateARPinState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState");

	AMagicLeapARPinInfoActorBase_OnUpdateARPinState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DC75F0
//		Name   -> Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride
//		Flags  -> (Final, Native, Private, BlueprintCallable)
// Parameters:
//		bool                                               InVisibilityOverride                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void AMagicLeapARPinRenderer::SetVisibilityOverride(bool InVisibilityOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride");

	AMagicLeapARPinRenderer_SetVisibilityOverride_Params params;
	params.InVisibilityOverride = InVisibilityOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
