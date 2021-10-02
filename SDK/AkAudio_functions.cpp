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
//		Offset -> 0x00921520
//		Name   -> Function AkAudio.AkPortalComponent.PortalPlacementValid
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkPortalComponent::PortalPlacementValid()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.PortalPlacementValid");

	UAkPortalComponent_PortalPlacementValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00921500
//		Name   -> Function AkAudio.AkPortalComponent.OpenPortal
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAkPortalComponent::OpenPortal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.OpenPortal");

	UAkPortalComponent_OpenPortal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009213C0
//		Name   -> Function AkAudio.AkPortalComponent.GetPrimitiveParent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UPrimitiveComponent*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPrimitiveComponent* UAkPortalComponent::GetPrimitiveParent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.GetPrimitiveParent");

	UAkPortalComponent_GetPrimitiveParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009212D0
//		Name   -> Function AkAudio.AkPortalComponent.GetCurrentState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AkAudio_EAkAcousticPortalState                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AkAudio_EAkAcousticPortalState UAkPortalComponent::GetCurrentState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.GetCurrentState");

	UAkPortalComponent_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00921190
//		Name   -> Function AkAudio.AkPortalComponent.ClosePortal
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAkPortalComponent::ClosePortal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkPortalComponent.ClosePortal");

	UAkPortalComponent_ClosePortal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009214E0
//		Name   -> Function AkAudio.AkAcousticPortal.OpenPortal
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AAkAcousticPortal::OpenPortal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.OpenPortal");

	AAkAcousticPortal_OpenPortal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009212A0
//		Name   -> Function AkAudio.AkAcousticPortal.GetCurrentState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		AkAudio_EAkAcousticPortalState                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AkAudio_EAkAcousticPortalState AAkAcousticPortal::GetCurrentState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.GetCurrentState");

	AAkAcousticPortal_GetCurrentState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00921170
//		Name   -> Function AkAudio.AkAcousticPortal.ClosePortal
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void AAkAcousticPortal::ClosePortal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkAcousticPortal.ClosePortal");

	AAkAcousticPortal_ClosePortal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009226B0
//		Name   -> Function AkAudio.AkAmbientSound.StopAmbientSound
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
void AAkAmbientSound::StopAmbientSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StopAmbientSound");

	AAkAmbientSound_StopAmbientSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00922690
//		Name   -> Function AkAudio.AkAmbientSound.StartAmbientSound
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
void AAkAmbientSound::StartAmbientSound()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkAmbientSound.StartAmbientSound");

	AAkAmbientSound_StartAmbientSound_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00921450
//		Name   -> Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkAndroidInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering");

	UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00921390
//		Name   -> Function AkAudio.AkAudioEvent.GetMinimumDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkAudioEvent::GetMinimumDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetMinimumDuration");

	UAkAudioEvent_GetMinimumDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00921360
//		Name   -> Function AkAudio.AkAudioEvent.GetMaximumDuration
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkAudioEvent::GetMaximumDuration()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetMaximumDuration");

	UAkAudioEvent_GetMaximumDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00921330
//		Name   -> Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkAudioEvent::GetMaxAttenuationRadius()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius");

	UAkAudioEvent_GetMaxAttenuationRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00921300
//		Name   -> Function AkAudio.AkAudioEvent.GetIsInfinite
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkAudioEvent::GetIsInfinite()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioEvent.GetIsInfinite");

	UAkAudioEvent_GetIsInfinite_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00927EC0
//		Name   -> Function AkAudio.AkGameObject.Stop
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
void UAkGameObject::Stop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.Stop");

	UAkGameObject_Stop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00927340
//		Name   -> Function AkAudio.AkGameObject.SetRTPCValue
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, Const)
// Parameters:
//		class UAkRtpc*                                     RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InterpolationTimeMs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     RTPC                                                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameObject::SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int InterpolationTimeMs, const struct FString& RTPC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.SetRTPCValue");

	UAkGameObject_SetRTPCValue_Params params;
	params.RTPCValue = RTPCValue;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;
	params.RTPC = RTPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00925BF0
//		Name   -> Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
//		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameObject::PostAssociatedAkEventAsync(class UObject* WorldContextObject, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo, int* PlayingID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAssociatedAkEventAsync");

	UAkGameObject_PostAssociatedAkEventAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayingID != nullptr)
		*PlayingID = params.PlayingID;

}


// Function:
//		Offset -> 0x00925A50
//		Name   -> Function AkAudio.AkGameObject.PostAssociatedAkEvent
//		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkGameObject::PostAssociatedAkEvent(int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAssociatedAkEvent");

	UAkGameObject_PostAssociatedAkEvent_Params params;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00925290
//		Name   -> Function AkAudio.AkGameObject.PostAkEventAsync
//		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
void UAkGameObject::PostAkEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, int* PlayingID, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAkEventAsync");

	UAkGameObject_PostAkEventAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AkEvent = AkEvent;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayingID != nullptr)
		*PlayingID = params.PlayingID;

}


// Function:
//		Offset -> 0x00925060
//		Name   -> Function AkAudio.AkGameObject.PostAkEvent
//		Flags  -> (BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		struct FString                                     in_EventName                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkGameObject::PostAkEvent(class UAkAudioEvent* AkEvent, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FString& in_EventName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.PostAkEvent");

	UAkGameObject_PostAkEvent_Params params;
	params.AkEvent = AkEvent;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;
	params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009245D0
//		Name   -> Function AkAudio.AkGameObject.GetRTPCValue
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UAkRtpc*                                     RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AkAudio_ERTPCValueType                             InputValueType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AkAudio_ERTPCValueType                             OutputValueType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     RTPC                                                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PlayingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameObject::GetRTPCValue(class UAkRtpc* RTPCValue, AkAudio_ERTPCValueType InputValueType, float* Value, AkAudio_ERTPCValueType* OutputValueType, const struct FString& RTPC, int PlayingID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameObject.GetRTPCValue");

	UAkGameObject_GetRTPCValue_Params params;
	params.RTPCValue = RTPCValue;
	params.InputValueType = InputValueType;
	params.RTPC = RTPC;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (OutputValueType != nullptr)
		*OutputValueType = params.OutputValueType;

}


// Function:
//		Offset -> 0x009228C0
//		Name   -> Function AkAudio.AkComponent.UseReverbVolumes
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               inUseReverbVolumes                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::UseReverbVolumes(bool inUseReverbVolumes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseReverbVolumes");

	UAkComponent_UseReverbVolumes_Params params;
	params.inUseReverbVolumes = inUseReverbVolumes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009226D0
//		Name   -> Function AkAudio.AkComponent.UseEarlyReflections
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UAkAuxBus*                                   AuxBus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              BusSendGain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxPathLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               SpotReflectors                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     AuxBusName                                                 (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::UseEarlyReflections(class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.UseEarlyReflections");

	UAkComponent_UseEarlyReflections_Params params;
	params.AuxBus = AuxBus;
	params.Order = Order;
	params.BusSendGain = BusSendGain;
	params.MaxPathLength = MaxPathLength;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009224E0
//		Name   -> Function AkAudio.AkComponent.SetSwitch
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		class UAkSwitchValue*                              SwitchValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     SwitchGroup                                                (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     SwitchState                                                (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetSwitch(class UAkSwitchValue* SwitchValue, const struct FString& SwitchGroup, const struct FString& SwitchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetSwitch");

	UAkComponent_SetSwitch_Params params;
	params.SwitchValue = SwitchValue;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00922450
//		Name   -> Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bStopWhenOwnerDestroyed                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetStopWhenOwnerDestroyed(bool bStopWhenOwnerDestroyed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed");

	UAkComponent_SetStopWhenOwnerDestroyed_Params params;
	params.bStopWhenOwnerDestroyed = bStopWhenOwnerDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009223D0
//		Name   -> Function AkAudio.AkComponent.SetOutputBusVolume
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              BusVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetOutputBusVolume(float BusVolume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetOutputBusVolume");

	UAkComponent_SetOutputBusVolume_Params params;
	params.BusVolume = BusVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00922320
//		Name   -> Function AkAudio.AkComponent.SetListeners
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class UAkComponent*>                        Listeners                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UAkComponent::SetListeners(TArray<class UAkComponent*> Listeners)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetListeners");

	UAkComponent_SetListeners_Params params;
	params.Listeners = Listeners;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009221C0
//		Name   -> Function AkAudio.AkComponent.SetGameObjectRadius
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              in_outerRadius                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              in_innerRadius                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetGameObjectRadius(float in_outerRadius, float in_innerRadius)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetGameObjectRadius");

	UAkComponent_SetGameObjectRadius_Params params;
	params.in_outerRadius = in_outerRadius;
	params.in_innerRadius = in_innerRadius;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00922140
//		Name   -> Function AkAudio.AkComponent.SetEarlyReflectionsVolume
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              SendVolume                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetEarlyReflectionsVolume(float SendVolume)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetEarlyReflectionsVolume");

	UAkComponent_SetEarlyReflectionsVolume_Params params;
	params.SendVolume = SendVolume;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009220A0
//		Name   -> Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     AuxBusName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetEarlyReflectionsAuxBus(const struct FString& AuxBusName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus");

	UAkComponent_SetEarlyReflectionsAuxBus_Params params;
	params.AuxBusName = AuxBusName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00921FA0
//		Name   -> Function AkAudio.AkComponent.SetAttenuationScalingFactor
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::SetAttenuationScalingFactor(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.SetAttenuationScalingFactor");

	UAkComponent_SetAttenuationScalingFactor_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00921D30
//		Name   -> Function AkAudio.AkComponent.PostTrigger
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		class UAkTrigger*                                  TriggerValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Trigger                                                    (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkComponent::PostTrigger(class UAkTrigger* TriggerValue, const struct FString& Trigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostTrigger");

	UAkComponent_PostTrigger_Params params;
	params.TriggerValue = TriggerValue;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00921B60
//		Name   -> Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
void UAkComponent::PostAssociatedAkEventAndWaitForEndAsync(int* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync");

	UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Params params;
	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayingID != nullptr)
		*PlayingID = params.PlayingID;

}


// Function:
//		Offset -> 0x009219F0
//		Name   -> Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkComponent::PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd");

	UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params params;
	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00921940
//		Name   -> Function AkAudio.AkComponent.PostAkEventByName
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     in_EventName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkComponent::PostAkEventByName(const struct FString& in_EventName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventByName");

	UAkComponent_PostAkEventByName_Params params;
	params.in_EventName = in_EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00921770
//		Name   -> Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
void UAkComponent::PostAkEventAndWaitForEndAsync(class UAkAudioEvent* AkEvent, int* PlayingID, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync");

	UAkComponent_PostAkEventAndWaitForEndAsync_Params params;
	params.AkEvent = AkEvent;
	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayingID != nullptr)
		*PlayingID = params.PlayingID;

}


// Function:
//		Offset -> 0x00921580
//		Name   -> Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     in_EventName                                               (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkComponent::PostAkEventAndWaitForEnd(class UAkAudioEvent* AkEvent, const struct FString& in_EventName, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.PostAkEventAndWaitForEnd");

	UAkComponent_PostAkEventAndWaitForEnd_Params params;
	params.AkEvent = AkEvent;
	params.in_EventName = in_EventName;
	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00921240
//		Name   -> Function AkAudio.AkComponent.GetAttenuationRadius
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkComponent::GetAttenuationRadius()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkComponent.GetAttenuationRadius");

	UAkComponent_GetAttenuationRadius_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00921D00
//		Name   -> Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkAudioInputComponent::PostAssociatedAudioInputEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent");

	UAkAudioInputComponent_PostAssociatedAudioInputEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00922290
//		Name   -> Function AkAudio.AkCheckBox.SetIsChecked
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InIsChecked                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkCheckBox::SetIsChecked(bool InIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetIsChecked");

	UAkCheckBox_SetIsChecked_Params params;
	params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00922020
//		Name   -> Function AkAudio.AkCheckBox.SetCheckedState
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		SlateCore_ECheckBoxState                           InCheckedState                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkCheckBox::SetCheckedState(SlateCore_ECheckBoxState InCheckedState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetCheckedState");

	UAkCheckBox_SetCheckedState_Params params;
	params.InCheckedState = InCheckedState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00921F00
//		Name   -> Function AkAudio.AkCheckBox.SetAkItemId
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FGuid                                       ItemId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkCheckBox::SetAkItemId(const struct FGuid& ItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetAkItemId");

	UAkCheckBox_SetAkItemId_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00921E60
//		Name   -> Function AkAudio.AkCheckBox.SetAkBoolProperty
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ItemProperty                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkCheckBox::SetAkBoolProperty(const struct FString& ItemProperty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.SetAkBoolProperty");

	UAkCheckBox_SetAkBoolProperty_Params params;
	params.ItemProperty = ItemProperty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00921420
//		Name   -> Function AkAudio.AkCheckBox.IsPressed
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkCheckBox::IsPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.IsPressed");

	UAkCheckBox_IsPressed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009213F0
//		Name   -> Function AkAudio.AkCheckBox.IsChecked
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkCheckBox::IsChecked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.IsChecked");

	UAkCheckBox_IsChecked_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00921270
//		Name   -> Function AkAudio.AkCheckBox.GetCheckedState
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		SlateCore_ECheckBoxState                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
SlateCore_ECheckBoxState UAkCheckBox::GetCheckedState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetCheckedState");

	UAkCheckBox_GetCheckedState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009211F0
//		Name   -> Function AkAudio.AkCheckBox.GetAkProperty
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkCheckBox::GetAkProperty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetAkProperty");

	UAkCheckBox_GetAkProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009211B0
//		Name   -> Function AkAudio.AkCheckBox.GetAkItemId
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGuid                                       ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGuid UAkCheckBox::GetAkItemId()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkCheckBox.GetAkItemId");

	UAkCheckBox_GetAkItemId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00928540
//		Name   -> Function AkAudio.AkGameplayStatics.UseReverbVolumes
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               inUseReverbVolumes                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_UseReverbVolumes(bool inUseReverbVolumes, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseReverbVolumes");

	UAkGameplayStatics_UseReverbVolumes_Params params;
	params.inUseReverbVolumes = inUseReverbVolumes;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00928320
//		Name   -> Function AkAudio.AkGameplayStatics.UseEarlyReflections
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkAuxBus*                                   AuxBus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              BusSendGain                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MaxPathLength                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               SpotReflectors                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     AuxBusName                                                 (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_UseEarlyReflections(class AActor* Actor, class UAkAuxBus* AuxBus, int Order, float BusSendGain, float MaxPathLength, bool SpotReflectors, const struct FString& AuxBusName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UseEarlyReflections");

	UAkGameplayStatics_UseEarlyReflections_Params params;
	params.Actor = Actor;
	params.AuxBus = AuxBus;
	params.Order = Order;
	params.BusSendGain = BusSendGain;
	params.MaxPathLength = MaxPathLength;
	params.SpotReflectors = SpotReflectors;
	params.AuxBusName = AuxBusName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00928290
//		Name   -> Function AkAudio.AkGameplayStatics.UnloadBankByName
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     BankName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_UnloadBankByName(const struct FString& BankName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBankByName");

	UAkGameplayStatics_UnloadBankByName_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009281B0
//		Name   -> Function AkAudio.AkGameplayStatics.UnloadBankAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UAkAudioBank*                                Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             BankUnloadedCallback                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_UnloadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankUnloadedCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBankAsync");

	UAkGameplayStatics_UnloadBankAsync_Params params;
	params.Bank = Bank;
	params.BankUnloadedCallback = BankUnloadedCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00928040
//		Name   -> Function AkAudio.AkGameplayStatics.UnloadBank
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAkAudioBank*                                Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     BankName                                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_UnloadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.UnloadBank");

	UAkGameplayStatics_UnloadBank_Params params;
	params.Bank = Bank;
	params.BankName = BankName;
	params.LatentInfo = LatentInfo;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00928020
//		Name   -> Function AkAudio.AkGameplayStatics.StopProfilerCapture
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
void UAkGameplayStatics::STATIC_StopProfilerCapture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopProfilerCapture");

	UAkGameplayStatics_StopProfilerCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00928000
//		Name   -> Function AkAudio.AkGameplayStatics.StopOutputCapture
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
void UAkGameplayStatics::STATIC_StopOutputCapture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopOutputCapture");

	UAkGameplayStatics_StopOutputCapture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00927F80
//		Name   -> Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_StopAllAmbientSounds(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAllAmbientSounds");

	UAkGameplayStatics_StopAllAmbientSounds_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00927F60
//		Name   -> Function AkAudio.AkGameplayStatics.StopAll
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
void UAkGameplayStatics::STATIC_StopAll()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopAll");

	UAkGameplayStatics_StopAll_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00927EE0
//		Name   -> Function AkAudio.AkGameplayStatics.StopActor
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_StopActor(class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StopActor");

	UAkGameplayStatics_StopActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00927E30
//		Name   -> Function AkAudio.AkGameplayStatics.StartProfilerCapture
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_StartProfilerCapture(const struct FString& Filename)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartProfilerCapture");

	UAkGameplayStatics_StartProfilerCapture_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00927DA0
//		Name   -> Function AkAudio.AkGameplayStatics.StartOutputCapture
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_StartOutputCapture(const struct FString& Filename)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartOutputCapture");

	UAkGameplayStatics_StartOutputCapture_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00927D20
//		Name   -> Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_StartAllAmbientSounds(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.StartAllAmbientSounds");

	UAkGameplayStatics_StartAllAmbientSounds_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00927AE0
//		Name   -> Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               AutoPost                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               AutoDestroy                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkComponent*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkComponent* UAkGameplayStatics::STATIC_SpawnAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, const struct FString& EventName, bool AutoDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation");

	UAkGameplayStatics_SpawnAkComponentAtLocation_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AkEvent = AkEvent;
	params.Location = Location;
	params.Orientation = Orientation;
	params.AutoPost = AutoPost;
	params.EventName = EventName;
	params.AutoDestroy = AutoDestroy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00927990
//		Name   -> Function AkAudio.AkGameplayStatics.SetSwitch
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAkSwitchValue*                              SwitchValue                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       SwitchGroup                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       SwitchState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetSwitch(class UAkSwitchValue* SwitchValue, class AActor* Actor, const struct FName& SwitchGroup, const struct FName& SwitchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSwitch");

	UAkGameplayStatics_SetSwitch_Params params;
	params.SwitchValue = SwitchValue;
	params.Actor = Actor;
	params.SwitchGroup = SwitchGroup;
	params.SwitchState = SwitchState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00927890
//		Name   -> Function AkAudio.AkGameplayStatics.SetState
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAkStateValue*                               StateValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       StateGroup                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       State                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetState(class UAkStateValue* StateValue, const struct FName& StateGroup, const struct FName& State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetState");

	UAkGameplayStatics_SetState_Params params;
	params.StateValue = StateValue;
	params.StateGroup = StateGroup;
	params.State = State;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00927740
//		Name   -> Function AkAudio.AkGameplayStatics.SetSpeakerAngles
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<float>                                      SpeakerAngles                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		float                                              HeightAngle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     DeviceShareset                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetSpeakerAngles(TArray<float> SpeakerAngles, float HeightAngle, const struct FString& DeviceShareset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetSpeakerAngles");

	UAkGameplayStatics_SetSpeakerAngles_Params params;
	params.SpeakerAngles = SpeakerAngles;
	params.HeightAngle = HeightAngle;
	params.DeviceShareset = DeviceShareset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009274F0
//		Name   -> Function AkAudio.AkGameplayStatics.SetRTPCValue
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAkRtpc*                                     RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InterpolationTimeMs                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       RTPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetRTPCValue(class UAkRtpc* RTPCValue, float Value, int InterpolationTimeMs, class AActor* Actor, const struct FName& RTPC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetRTPCValue");

	UAkGameplayStatics_SetRTPCValue_Params params;
	params.RTPCValue = RTPCValue;
	params.Value = Value;
	params.InterpolationTimeMs = InterpolationTimeMs;
	params.Actor = Actor;
	params.RTPC = RTPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00927680
//		Name   -> Function AkAudio.AkGameplayStatics.SetReflectionsOrder
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                Order                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               RefreshPaths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetReflectionsOrder(int Order, bool RefreshPaths)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetReflectionsOrder");

	UAkGameplayStatics_SetReflectionsOrder_Params params;
	params.Order = Order;
	params.RefreshPaths = RefreshPaths;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009272D0
//		Name   -> Function AkAudio.AkGameplayStatics.SetPanningRule
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		AkAudio_EPanningRule                               PanRule                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetPanningRule(AkAudio_EPanningRule PanRule)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetPanningRule");

	UAkGameplayStatics_SetPanningRule_Params params;
	params.PanRule = PanRule;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00927210
//		Name   -> Function AkAudio.AkGameplayStatics.SetOutputBusVolume
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              BusVolume                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetOutputBusVolume(float BusVolume, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOutputBusVolume");

	UAkGameplayStatics_SetOutputBusVolume_Params params;
	params.BusVolume = BusVolume;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00927190
//		Name   -> Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              ScalingFactor                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetOcclusionScalingFactor(float ScalingFactor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor");

	UAkGameplayStatics_SetOcclusionScalingFactor_Params params;
	params.ScalingFactor = ScalingFactor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009270D0
//		Name   -> Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              RefreshInterval                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetOcclusionRefreshInterval(float RefreshInterval, class AActor* Actor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval");

	UAkGameplayStatics_SetOcclusionRefreshInterval_Params params;
	params.RefreshInterval = RefreshInterval;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00926F70
//		Name   -> Function AkAudio.AkGameplayStatics.SetMultiplePositions
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAkComponent*                                GameObjectAkComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FTransform>                          Positions                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		AkAudio_EAkMultiPositionType                       MultiPositionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetMultiplePositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultiplePositions");

	UAkGameplayStatics_SetMultiplePositions_Params params;
	params.GameObjectAkComponent = GameObjectAkComponent;
	params.Positions = Positions;
	params.MultiPositionType = MultiPositionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00926D90
//		Name   -> Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAkComponent*                                GameObjectAkComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FAkChannelMask>                      ChannelMasks                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FTransform>                          Positions                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		AkAudio_EAkMultiPositionType                       MultiPositionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetMultipleChannelMaskEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FAkChannelMask> ChannelMasks, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions");

	UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Params params;
	params.GameObjectAkComponent = GameObjectAkComponent;
	params.ChannelMasks = ChannelMasks;
	params.Positions = Positions;
	params.MultiPositionType = MultiPositionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00926BB0
//		Name   -> Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAkComponent*                                GameObjectAkComponent                                      (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<AkAudio_EAkChannelConfiguration>            ChannelMasks                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		TArray<struct FTransform>                          Positions                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
//		AkAudio_EAkMultiPositionType                       MultiPositionType                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetMultipleChannelEmitterPositions(class UAkComponent* GameObjectAkComponent, TArray<AkAudio_EAkChannelConfiguration> ChannelMasks, TArray<struct FTransform> Positions, AkAudio_EAkMultiPositionType MultiPositionType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions");

	UAkGameplayStatics_SetMultipleChannelEmitterPositions_Params params;
	params.GameObjectAkComponent = GameObjectAkComponent;
	params.ChannelMasks = ChannelMasks;
	params.Positions = Positions;
	params.MultiPositionType = MultiPositionType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00926AC0
//		Name   -> Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     AudioCulture                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Completed                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetCurrentAudioCultureAsync(const struct FString& AudioCulture, const struct FScriptDelegate& Completed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync");

	UAkGameplayStatics_SetCurrentAudioCultureAsync_Params params;
	params.AudioCulture = AudioCulture;
	params.Completed = Completed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00926970
//		Name   -> Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     AudioCulture                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetCurrentAudioCulture(const struct FString& AudioCulture, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture");

	UAkGameplayStatics_SetCurrentAudioCulture_Params params;
	params.AudioCulture = AudioCulture;
	params.LatentInfo = LatentInfo;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009268A0
//		Name   -> Function AkAudio.AkGameplayStatics.SetBusConfig
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     BusName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AkAudio_EAkChannelConfiguration                    ChannelConfiguration                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_SetBusConfig(const struct FString& BusName, AkAudio_EAkChannelConfiguration ChannelConfiguration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.SetBusConfig");

	UAkGameplayStatics_SetBusConfig_Params params;
	params.BusName = BusName;
	params.ChannelConfiguration = ChannelConfiguration;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009267A0
//		Name   -> Function AkAudio.AkGameplayStatics.PostTrigger
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAkTrigger*                                  TriggerValue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       Trigger                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_PostTrigger(class UAkTrigger* TriggerValue, class AActor* Actor, const struct FName& Trigger)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostTrigger");

	UAkGameplayStatics_PostTrigger_Params params;
	params.TriggerValue = TriggerValue;
	params.Actor = Actor;
	params.Trigger = Trigger;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00926680
//		Name   -> Function AkAudio.AkGameplayStatics.PostEventByName
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_PostEventByName(const struct FString& EventName, class AActor* Actor, bool bStopWhenAttachedToDestroyed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventByName");

	UAkGameplayStatics_PostEventByName_Params params;
	params.EventName = EventName;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00926490
//		Name   -> Function AkAudio.AkGameplayStatics.PostEventAttached
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     EventName                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkGameplayStatics::STATIC_PostEventAttached(class UAkAudioEvent* AkEvent, class AActor* Actor, const struct FName& AttachPointName, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAttached");

	UAkGameplayStatics_PostEventAttached_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.AttachPointName = AttachPointName;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00926320
//		Name   -> Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     EventName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_PostEventAtLocationByName(const struct FString& EventName, const struct FVector& Location, const struct FRotator& Orientation, class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocationByName");

	UAkGameplayStatics_PostEventAtLocationByName_Params params;
	params.EventName = EventName;
	params.Location = Location;
	params.Orientation = Orientation;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00926160
//		Name   -> Function AkAudio.AkGameplayStatics.PostEventAtLocation
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     EventName                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkGameplayStatics::STATIC_PostEventAtLocation(class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation, const struct FString& EventName, class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEventAtLocation");

	UAkGameplayStatics_PostEventAtLocation_Params params;
	params.AkEvent = AkEvent;
	params.Location = Location;
	params.Orientation = Orientation;
	params.EventName = EventName;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00925E70
//		Name   -> Function AkAudio.AkGameplayStatics.PostEvent
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     EventName                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkGameplayStatics::STATIC_PostEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed, const struct FString& EventName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostEvent");

	UAkGameplayStatics_PostEvent_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009257F0
//		Name   -> Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PlayingID                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_PostAndWaitForEndOfEventAsync(class UAkAudioEvent* AkEvent, class AActor* Actor, int* PlayingID, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync");

	UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.ExternalSources = ExternalSources;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlayingID != nullptr)
		*PlayingID = params.PlayingID;

}


// Function:
//		Offset -> 0x00925550
//		Name   -> Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		struct FString                                     EventName                                                  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkGameplayStatics::STATIC_PostAndWaitForEndOfEvent(class UAkAudioEvent* AkEvent, class AActor* Actor, bool bStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo> ExternalSources, const struct FString& EventName, const struct FLatentActionInfo& LatentInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent");

	UAkGameplayStatics_PostAndWaitForEndOfEvent_Params params;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;
	params.ExternalSources = ExternalSources;
	params.EventName = EventName;
	params.LatentInfo = LatentInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00925040
//		Name   -> Function AkAudio.AkGameplayStatics.LoadInitBank
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
void UAkGameplayStatics::STATIC_LoadInitBank()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadInitBank");

	UAkGameplayStatics_LoadInitBank_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00924F50
//		Name   -> Function AkAudio.AkGameplayStatics.LoadBanks
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<class UAkAudioBank*>                        SoundBanks                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               SynchronizeSoundBanks                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_LoadBanks(TArray<class UAkAudioBank*> SoundBanks, bool SynchronizeSoundBanks)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBanks");

	UAkGameplayStatics_LoadBanks_Params params;
	params.SoundBanks = SoundBanks;
	params.SynchronizeSoundBanks = SynchronizeSoundBanks;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00924EC0
//		Name   -> Function AkAudio.AkGameplayStatics.LoadBankByName
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     BankName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_LoadBankByName(const struct FString& BankName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBankByName");

	UAkGameplayStatics_LoadBankByName_Params params;
	params.BankName = BankName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00924DE0
//		Name   -> Function AkAudio.AkGameplayStatics.LoadBankAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UAkAudioBank*                                Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             BankLoadedCallback                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_LoadBankAsync(class UAkAudioBank* Bank, const struct FScriptDelegate& BankLoadedCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBankAsync");

	UAkGameplayStatics_LoadBankAsync_Params params;
	params.Bank = Bank;
	params.BankLoadedCallback = BankLoadedCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00924C70
//		Name   -> Function AkAudio.AkGameplayStatics.LoadBank
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAkAudioBank*                                Bank                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     BankName                                                   (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_LoadBank(class UAkAudioBank* Bank, const struct FString& BankName, const struct FLatentActionInfo& LatentInfo, class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.LoadBank");

	UAkGameplayStatics_LoadBank_Params params;
	params.Bank = Bank;
	params.BankName = BankName;
	params.LatentInfo = LatentInfo;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00924BE0
//		Name   -> Function AkAudio.AkGameplayStatics.IsGame
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkGameplayStatics::STATIC_IsGame(class UObject* WorldContextObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsGame");

	UAkGameplayStatics_IsGame_Params params;
	params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00924BB0
//		Name   -> Function AkAudio.AkGameplayStatics.IsEditor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkGameplayStatics::STATIC_IsEditor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.IsEditor");

	UAkGameplayStatics_IsEditor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00924A50
//		Name   -> Function AkAudio.AkGameplayStatics.GetSpeakerAngles
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<float>                                      SpeakerAngles                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
//		float                                              HeightAngle                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     DeviceShareset                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_GetSpeakerAngles(TArray<float>* SpeakerAngles, float* HeightAngle, const struct FString& DeviceShareset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetSpeakerAngles");

	UAkGameplayStatics_GetSpeakerAngles_Params params;
	params.DeviceShareset = DeviceShareset;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpeakerAngles != nullptr)
		*SpeakerAngles = params.SpeakerAngles;
	if (HeightAngle != nullptr)
		*HeightAngle = params.HeightAngle;

}


// Function:
//		Offset -> 0x00924820
//		Name   -> Function AkAudio.AkGameplayStatics.GetRTPCValue
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UAkRtpc*                                     RTPCValue                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PlayingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AkAudio_ERTPCValueType                             InputValueType                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AkAudio_ERTPCValueType                             OutputValueType                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       RTPC                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_GetRTPCValue(class UAkRtpc* RTPCValue, int PlayingID, AkAudio_ERTPCValueType InputValueType, float* Value, AkAudio_ERTPCValueType* OutputValueType, class AActor* Actor, const struct FName& RTPC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetRTPCValue");

	UAkGameplayStatics_GetRTPCValue_Params params;
	params.RTPCValue = RTPCValue;
	params.PlayingID = PlayingID;
	params.InputValueType = InputValueType;
	params.Actor = Actor;
	params.RTPC = RTPC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
	if (OutputValueType != nullptr)
		*OutputValueType = params.OutputValueType;

}


// Function:
//		Offset -> 0x009245A0
//		Name   -> Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkGameplayStatics::STATIC_GetOcclusionScalingFactor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor");

	UAkGameplayStatics_GetOcclusionScalingFactor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00924520
//		Name   -> Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkGameplayStatics::STATIC_GetCurrentAudioCulture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture");

	UAkGameplayStatics_GetCurrentAudioCulture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00924440
//		Name   -> Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TArray<struct FString>                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FString> UAkGameplayStatics::STATIC_GetAvailableAudioCultures()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures");

	UAkGameplayStatics_GetAvailableAudioCultures_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009241D0
//		Name   -> Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAkMediaAsset*                               Instance                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UAkGameplayStatics::STATIC_GetAkMediaAssetUserData(class UAkMediaAsset* Instance, class UClass* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData");

	UAkGameplayStatics_GetAkMediaAssetUserData_Params params;
	params.Instance = Instance;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009242A0
//		Name   -> Function AkAudio.AkGameplayStatics.GetAkComponent
//		Flags  -> (Final, Native, Static, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		class USceneComponent*                             AttachToComponent                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ComponentCreated                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FName                                       AttachPointName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TEnumAsByte<Engine_EAttachLocation>                LocationType                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkComponent*                                ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAkComponent* UAkGameplayStatics::STATIC_GetAkComponent(class USceneComponent* AttachToComponent, bool* ComponentCreated, const struct FName& AttachPointName, const struct FVector& Location, TEnumAsByte<Engine_EAttachLocation> LocationType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkComponent");

	UAkGameplayStatics_GetAkComponent_Params params;
	params.AttachToComponent = AttachToComponent;
	params.AttachPointName = AttachPointName;
	params.Location = Location;
	params.LocationType = LocationType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (ComponentCreated != nullptr)
		*ComponentCreated = params.ComponentCreated;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009241D0
//		Name   -> Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAkAudioType*                                Instance                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UClass*                                      Type                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UObject* UAkGameplayStatics::STATIC_GetAkAudioTypeUserData(class UAkAudioType* Instance, class UClass* Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData");

	UAkGameplayStatics_GetAkAudioTypeUserData_Params params;
	params.Instance = Instance;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00924090
//		Name   -> Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		AkAudio_EAkActionOnEventType                       ActionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PlayingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TransitionDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AkAudio_EAkCurveInterpolation                      FadeCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_ExecuteActionOnPlayingID(AkAudio_EAkActionOnEventType ActionType, int PlayingID, int TransitionDuration, AkAudio_EAkCurveInterpolation FadeCurve)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID");

	UAkGameplayStatics_ExecuteActionOnPlayingID_Params params;
	params.ActionType = ActionType;
	params.PlayingID = PlayingID;
	params.TransitionDuration = TransitionDuration;
	params.FadeCurve = FadeCurve;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00923EC0
//		Name   -> Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AkAudio_EAkActionOnEventType                       ActionType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TransitionDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AkAudio_EAkCurveInterpolation                      FadeCurve                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                PlayingID                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_ExecuteActionOnEvent(class UAkAudioEvent* AkEvent, AkAudio_EAkActionOnEventType ActionType, class AActor* Actor, int TransitionDuration, AkAudio_EAkCurveInterpolation FadeCurve, int PlayingID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent");

	UAkGameplayStatics_ExecuteActionOnEvent_Params params;
	params.AkEvent = AkEvent;
	params.ActionType = ActionType;
	params.Actor = Actor;
	params.TransitionDuration = TransitionDuration;
	params.FadeCurve = FadeCurve;
	params.PlayingID = PlayingID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00923EA0
//		Name   -> Function AkAudio.AkGameplayStatics.ClearBanks
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
void UAkGameplayStatics::STATIC_ClearBanks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.ClearBanks");

	UAkGameplayStatics_ClearBanks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00923E00
//		Name   -> Function AkAudio.AkGameplayStatics.CancelEventCallback
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_CancelEventCallback(const struct FScriptDelegate& PostEventCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.CancelEventCallback");

	UAkGameplayStatics_CancelEventCallback_Params params;
	params.PostEventCallback = PostEventCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00923D70
//		Name   -> Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MarkerText                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkGameplayStatics::STATIC_AddOutputCaptureMarker(const struct FString& MarkerText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker");

	UAkGameplayStatics_AddOutputCaptureMarker_Params params;
	params.MarkerText = MarkerText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0092D040
//		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetType
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		AkAudio_EAkMidiEventType                           ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
AkAudio_EAkMidiEventType UAkMIDIEventCallbackInfo::GetType()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetType");

	UAkMIDIEventCallbackInfo_GetType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0092CF90
//		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkMidiProgramChange                        AsProgramChange                                            (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetProgramChange(struct FAkMidiProgramChange* AsProgramChange)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange");

	UAkMIDIEventCallbackInfo_GetProgramChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsProgramChange != nullptr)
		*AsProgramChange = params.AsProgramChange;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0092CEE0
//		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkMidiPitchBend                            AsPitchBend                                                (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetPitchBend(struct FAkMidiPitchBend* AsPitchBend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend");

	UAkMIDIEventCallbackInfo_GetPitchBend_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsPitchBend != nullptr)
		*AsPitchBend = params.AsPitchBend;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0092CE30
//		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkMidiNoteOnOff                            AsNoteOn                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetNoteOn(struct FAkMidiNoteOnOff* AsNoteOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn");

	UAkMIDIEventCallbackInfo_GetNoteOn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsNoteOn != nullptr)
		*AsNoteOn = params.AsNoteOn;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0092CD80
//		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkMidiNoteOnOff                            AsNoteOff                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetNoteOff(struct FAkMidiNoteOnOff* AsNoteOff)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff");

	UAkMIDIEventCallbackInfo_GetNoteOff_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsNoteOff != nullptr)
		*AsNoteOff = params.AsNoteOff;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0092CCD0
//		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkMidiNoteAftertouch                       AsNoteAftertouch                                           (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetNoteAftertouch(struct FAkMidiNoteAftertouch* AsNoteAftertouch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch");

	UAkMIDIEventCallbackInfo_GetNoteAftertouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsNoteAftertouch != nullptr)
		*AsNoteAftertouch = params.AsNoteAftertouch;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0092CC20
//		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkMidiGeneric                              AsGeneric                                                  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetGeneric(struct FAkMidiGeneric* AsGeneric)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric");

	UAkMIDIEventCallbackInfo_GetGeneric_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsGeneric != nullptr)
		*AsGeneric = params.AsGeneric;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0092CB70
//		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkMidiChannelAftertouch                    AsChannelAftertouch                                        (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetChannelAftertouch(struct FAkMidiChannelAftertouch* AsChannelAftertouch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch");

	UAkMIDIEventCallbackInfo_GetChannelAftertouch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsChannelAftertouch != nullptr)
		*AsChannelAftertouch = params.AsChannelAftertouch;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0092CB40
//		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		unsigned char                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
unsigned char UAkMIDIEventCallbackInfo::GetChannel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetChannel");

	UAkMIDIEventCallbackInfo_GetChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0092CA90
//		Name   -> Function AkAudio.AkMIDIEventCallbackInfo.GetCc
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkMidiCc                                   AsCc                                                       (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkMIDIEventCallbackInfo::GetCc(struct FAkMidiCc* AsCc)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkMIDIEventCallbackInfo.GetCc");

	UAkMIDIEventCallbackInfo_GetCc_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsCc != nullptr)
		*AsCc = params.AsCc;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0092D0B0
//		Name   -> Function AkAudio.AkGeometryComponent.UpdateGeometry
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAkGeometryComponent::UpdateGeometry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.UpdateGeometry");

	UAkGeometryComponent_UpdateGeometry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0092D090
//		Name   -> Function AkAudio.AkGeometryComponent.SendGeometry
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAkGeometryComponent::SendGeometry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.SendGeometry");

	UAkGeometryComponent_SendGeometry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0092D070
//		Name   -> Function AkAudio.AkGeometryComponent.RemoveGeometry
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAkGeometryComponent::RemoveGeometry()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.RemoveGeometry");

	UAkGeometryComponent_RemoveGeometry_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0092CA70
//		Name   -> Function AkAudio.AkGeometryComponent.ConvertMesh
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAkGeometryComponent::ConvertMesh()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkGeometryComponent.ConvertMesh");

	UAkGeometryComponent_ConvertMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00921450
//		Name   -> Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkHololensInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering");

	UAkHololensInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009312C0
//		Name   -> Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FAkBoolPropertyToControl                    INAkBoolPropertyToControl                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkItemBoolPropertiesConv::STATIC_Conv_FAkBoolPropertyToControlToText(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText");

	UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Params params;
	params.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009311D0
//		Name   -> Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FAkBoolPropertyToControl                    INAkBoolPropertyToControl                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemBoolPropertiesConv::STATIC_Conv_FAkBoolPropertyToControlToString(const struct FAkBoolPropertyToControl& INAkBoolPropertyToControl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString");

	UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Params params;
	params.INAkBoolPropertyToControl = INAkBoolPropertyToControl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009319A0
//		Name   -> Function AkAudio.AkItemBoolProperties.SetSearchText
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     newText                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkItemBoolProperties::SetSearchText(const struct FString& newText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.SetSearchText");

	UAkItemBoolProperties_SetSearchText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00931580
//		Name   -> Function AkAudio.AkItemBoolProperties.GetSelectedProperty
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemBoolProperties::GetSelectedProperty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.GetSelectedProperty");

	UAkItemBoolProperties_GetSelectedProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00931480
//		Name   -> Function AkAudio.AkItemBoolProperties.GetSearchText
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemBoolProperties::GetSearchText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemBoolProperties.GetSearchText");

	UAkItemBoolProperties_GetSearchText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009312C0
//		Name   -> Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FAkPropertyToControl                        INAkPropertyToControl                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkItemPropertiesConv::STATIC_Conv_FAkPropertyToControlToText(const struct FAkPropertyToControl& INAkPropertyToControl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText");

	UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Params params;
	params.INAkPropertyToControl = INAkPropertyToControl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009311D0
//		Name   -> Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FAkPropertyToControl                        INAkPropertyToControl                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemPropertiesConv::STATIC_Conv_FAkPropertyToControlToString(const struct FAkPropertyToControl& INAkPropertyToControl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString");

	UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Params params;
	params.INAkPropertyToControl = INAkPropertyToControl;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00931A40
//		Name   -> Function AkAudio.AkItemProperties.SetSearchText
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     newText                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkItemProperties::SetSearchText(const struct FString& newText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.SetSearchText");

	UAkItemProperties_SetSearchText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00931600
//		Name   -> Function AkAudio.AkItemProperties.GetSelectedProperty
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemProperties::GetSelectedProperty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.GetSelectedProperty");

	UAkItemProperties_GetSelectedProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00931500
//		Name   -> Function AkAudio.AkItemProperties.GetSearchText
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkItemProperties::GetSearchText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkItemProperties.GetSearchText");

	UAkItemProperties_GetSearchText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00931140
//		Name   -> Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UAkAcousticTextureSetComponent*              textureSetComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkLateReverbComponent::AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* textureSetComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent");

	UAkLateReverbComponent_AssociateAkTextureSetComponent_Params params;
	params.textureSetComponent = textureSetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00921450
//		Name   -> Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkLinuxInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering");

	UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00921450
//		Name   -> Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkMacInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering");

	UAkMacInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009316B0
//		Name   -> Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkPS4InitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering");

	UAkPS4InitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00931450
//		Name   -> Function AkAudio.AkRoomComponent.GetPrimitiveParent
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UPrimitiveComponent*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPrimitiveComponent* UAkRoomComponent::GetPrimitiveParent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkRoomComponent.GetPrimitiveParent");

	UAkRoomComponent_GetPrimitiveParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00931C80
//		Name   -> Function AkAudio.AkSlider.SetValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetValue(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetValue");

	UAkSlider_SetValue_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00931C00
//		Name   -> Function AkAudio.AkSlider.SetStepSize
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetStepSize(float InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetStepSize");

	UAkSlider_SetStepSize_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00931B70
//		Name   -> Function AkAudio.AkSlider.SetSliderHandleColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetSliderHandleColor");

	UAkSlider_SetSliderHandleColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00931AE0
//		Name   -> Function AkAudio.AkSlider.SetSliderBarColor
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FLinearColor                                InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetSliderBarColor");

	UAkSlider_SetSliderBarColor_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00931910
//		Name   -> Function AkAudio.AkSlider.SetLocked
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetLocked(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetLocked");

	UAkSlider_SetLocked_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00931880
//		Name   -> Function AkAudio.AkSlider.SetIndentHandle
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetIndentHandle(bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetIndentHandle");

	UAkSlider_SetIndentHandle_Params params;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009317E0
//		Name   -> Function AkAudio.AkSlider.SetAkSliderItemProperty
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ItemProperty                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetAkSliderItemProperty(const struct FString& ItemProperty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetAkSliderItemProperty");

	UAkSlider_SetAkSliderItemProperty_Params params;
	params.ItemProperty = ItemProperty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00931740
//		Name   -> Function AkAudio.AkSlider.SetAkSliderItemId
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FGuid                                       ItemId                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSlider::SetAkSliderItemId(const struct FGuid& ItemId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.SetAkSliderItemId");

	UAkSlider_SetAkSliderItemId_Params params;
	params.ItemId = ItemId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00931680
//		Name   -> Function AkAudio.AkSlider.GetValue
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkSlider::GetValue()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetValue");

	UAkSlider_GetValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00931400
//		Name   -> Function AkAudio.AkSlider.GetAkSliderItemProperty
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkSlider::GetAkSliderItemProperty()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetAkSliderItemProperty");

	UAkSlider_GetAkSliderItemProperty_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009313C0
//		Name   -> Function AkAudio.AkSlider.GetAkSliderItemId
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FGuid                                       ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FGuid UAkSlider::GetAkSliderItemId()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSlider.GetAkSliderItemId");

	UAkSlider_GetAkSliderItemId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00937900
//		Name   -> Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet");

	UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009368C0
//		Name   -> Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet");

	UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009368A0
//		Name   -> Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet");

	UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00921450
//		Name   -> Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkSwitchInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering");

	UAkSwitchInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009377E0
//		Name   -> Function AkAudio.AkWaapiCalls.Unsubscribe
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiSubscriptionId                      SubscriptionId                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               UnsubscriptionDone                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiCalls::STATIC_Unsubscribe(const struct FAkWaapiSubscriptionId& SubscriptionId, bool* UnsubscriptionDone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Unsubscribe");

	UAkWaapiCalls_Unsubscribe_Params params;
	params.SubscriptionId = SubscriptionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UnsubscriptionDone != nullptr)
		*UnsubscriptionDone = params.UnsubscriptionDone;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00937570
//		Name   -> Function AkAudio.AkWaapiCalls.SubscribeToWaapi
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiUri                                 WaapiUri                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          WaapiOptions                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FAkWaapiSubscriptionId                      SubscriptionId                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               SubscriptionDone                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiCalls::STATIC_SubscribeToWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiOptions, const struct FScriptDelegate& Callback, struct FAkWaapiSubscriptionId* SubscriptionId, bool* SubscriptionDone)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.SubscribeToWaapi");

	UAkWaapiCalls_SubscribeToWaapi_Params params;
	params.WaapiUri = WaapiUri;
	params.WaapiOptions = WaapiOptions;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SubscriptionId != nullptr)
		*SubscriptionId = params.SubscriptionId;
	if (SubscriptionDone != nullptr)
		*SubscriptionDone = params.SubscriptionDone;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009374A0
//		Name   -> Function AkAudio.AkWaapiCalls.SetSubscriptionID
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiSubscriptionId                      Subscription                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ID                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkWaapiCalls::STATIC_SetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription, int ID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.SetSubscriptionID");

	UAkWaapiCalls_SetSubscriptionID_Params params;
	params.Subscription = Subscription;
	params.ID = ID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x009367F0
//		Name   -> Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkWaapiCalls::STATIC_RegisterWaapiProjectLoadedCallback(const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback");

	UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00936740
//		Name   -> Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             Callback                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkWaapiCalls::STATIC_RegisterWaapiConnectionLostCallback(const struct FScriptDelegate& Callback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback");

	UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Params params;
	params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009366B0
//		Name   -> Function AkAudio.AkWaapiCalls.GetSubscriptionID
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiSubscriptionId                      Subscription                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkWaapiCalls::STATIC_GetSubscriptionID(const struct FAkWaapiSubscriptionId& Subscription)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.GetSubscriptionID");

	UAkWaapiCalls_GetSubscriptionID_Params params;
	params.Subscription = Subscription;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00935B50
//		Name   -> Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FAkWaapiSubscriptionId                      INAkWaapiSubscriptionId                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkWaapiCalls::STATIC_Conv_FAkWaapiSubscriptionIdToText(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText");

	UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Params params;
	params.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00935A80
//		Name   -> Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FAkWaapiSubscriptionId                      INAkWaapiSubscriptionId                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWaapiCalls::STATIC_Conv_FAkWaapiSubscriptionIdToString(const struct FAkWaapiSubscriptionId& INAkWaapiSubscriptionId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString");

	UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Params params;
	params.INAkWaapiSubscriptionId = INAkWaapiSubscriptionId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00935640
//		Name   -> Function AkAudio.AkWaapiCalls.CallWaapi
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiUri                                 WaapiUri                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          WaapiArgs                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          WaapiOptions                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiCalls::STATIC_CallWaapi(const struct FAkWaapiUri& WaapiUri, const struct FAKWaapiJsonObject& WaapiArgs, const struct FAKWaapiJsonObject& WaapiOptions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiCalls.CallWaapi");

	UAkWaapiCalls_CallWaapi_Params params;
	params.WaapiUri = WaapiUri;
	params.WaapiArgs = WaapiArgs;
	params.WaapiOptions = WaapiOptions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009312C0
//		Name   -> Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FAkWaapiFieldNames                          INAkWaapiFieldNames                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText USAkWaapiFieldNamesConv::STATIC_Conv_FAkWaapiFieldNamesToText(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText");

	USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Params params;
	params.INAkWaapiFieldNames = INAkWaapiFieldNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009311D0
//		Name   -> Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FAkWaapiFieldNames                          INAkWaapiFieldNames                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString USAkWaapiFieldNamesConv::STATIC_Conv_FAkWaapiFieldNamesToString(const struct FAkWaapiFieldNames& INAkWaapiFieldNames)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString");

	USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Params params;
	params.INAkWaapiFieldNames = INAkWaapiFieldNames;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009372C0
//		Name   -> Function AkAudio.AkWaapiJsonManager.SetStringField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     FieldValue                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FString& FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetStringField");

	UAkWaapiJsonManager_SetStringField_Params params;
	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009370A0
//		Name   -> Function AkAudio.AkWaapiJsonManager.SetObjectField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          FieldValue                                                 (Parm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetObjectField");

	UAkWaapiJsonManager_SetObjectField_Params params;
	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00936ED0
//		Name   -> Function AkAudio.AkWaapiJsonManager.SetNumberField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		float                                              FieldValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetNumberField(const struct FAkWaapiFieldNames& FieldName, float FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetNumberField");

	UAkWaapiJsonManager_SetNumberField_Params params;
	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00936D00
//		Name   -> Function AkAudio.AkWaapiJsonManager.SetBoolField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		bool                                               FieldValue                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetBoolField(const struct FAkWaapiFieldNames& FieldName, bool FieldValue, const struct FAKWaapiJsonObject& Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetBoolField");

	UAkWaapiJsonManager_SetBoolField_Params params;
	params.FieldName = FieldName;
	params.FieldValue = FieldValue;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00936B00
//		Name   -> Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             FieldStringValues                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetArrayStringFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FString> FieldStringValues, const struct FAKWaapiJsonObject& Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetArrayStringFields");

	UAkWaapiJsonManager_SetArrayStringFields_Params params;
	params.FieldName = FieldName;
	params.FieldStringValues = FieldStringValues;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009368E0
//		Name   -> Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FAKWaapiJsonObject>                  FieldObjectValues                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_SetArrayObjectFields(const struct FAkWaapiFieldNames& FieldName, TArray<struct FAKWaapiJsonObject> FieldObjectValues, const struct FAKWaapiJsonObject& Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields");

	UAkWaapiJsonManager_SetArrayObjectFields_Params params;
	params.FieldName = FieldName;
	params.FieldObjectValues = FieldObjectValues;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00936520
//		Name   -> Function AkAudio.AkWaapiJsonManager.GetStringField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWaapiJsonManager::STATIC_GetStringField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetStringField");

	UAkWaapiJsonManager_GetStringField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00936280
//		Name   -> Function AkAudio.AkWaapiJsonManager.GetObjectField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAKWaapiJsonObject UAkWaapiJsonManager::STATIC_GetObjectField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetObjectField");

	UAkWaapiJsonManager_GetObjectField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00936130
//		Name   -> Function AkAudio.AkWaapiJsonManager.GetNumberField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UAkWaapiJsonManager::STATIC_GetNumberField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetNumberField");

	UAkWaapiJsonManager_GetNumberField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00935FE0
//		Name   -> Function AkAudio.AkWaapiJsonManager.GetIntegerField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UAkWaapiJsonManager::STATIC_GetIntegerField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetIntegerField");

	UAkWaapiJsonManager_GetIntegerField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00935E90
//		Name   -> Function AkAudio.AkWaapiJsonManager.GetBoolField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAkWaapiJsonManager::STATIC_GetBoolField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetBoolField");

	UAkWaapiJsonManager_GetBoolField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00935C40
//		Name   -> Function AkAudio.AkWaapiJsonManager.GetArrayField
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAkWaapiFieldNames                          FieldName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FAKWaapiJsonObject                          Target                                                     (Parm, NativeAccessSpecifierPublic)
//		TArray<struct FAKWaapiJsonObject>                  ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FAKWaapiJsonObject> UAkWaapiJsonManager::STATIC_GetArrayField(const struct FAkWaapiFieldNames& FieldName, const struct FAKWaapiJsonObject& Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.GetArrayField");

	UAkWaapiJsonManager_GetArrayField_Params params;
	params.FieldName = FieldName;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00935950
//		Name   -> Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FAKWaapiJsonObject                          INAKWaapiJsonObject                                        (Parm, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkWaapiJsonManager::STATIC_Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText");

	UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Params params;
	params.INAKWaapiJsonObject = INAKWaapiJsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00935840
//		Name   -> Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FAKWaapiJsonObject                          INAKWaapiJsonObject                                        (Parm, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWaapiJsonManager::STATIC_Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& INAKWaapiJsonObject)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString");

	UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Params params;
	params.INAKWaapiJsonObject = INAKWaapiJsonObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009312C0
//		Name   -> Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FAkWaapiUri                                 INAkWaapiUri                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FText UAkWaapiUriConv::STATIC_Conv_FAkWaapiUriToText(const struct FAkWaapiUri& INAkWaapiUri)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText");

	UAkWaapiUriConv_Conv_FAkWaapiUriToText_Params params;
	params.INAkWaapiUri = INAkWaapiUri;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x009311D0
//		Name   -> Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
// Parameters:
//		struct FAkWaapiUri                                 INAkWaapiUri                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWaapiUriConv::STATIC_Conv_FAkWaapiUriToString(const struct FAkWaapiUri& INAkWaapiUri)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString");

	UAkWaapiUriConv_Conv_FAkWaapiUriToString_Params params;
	params.INAkWaapiUri = INAkWaapiUri;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00921450
//		Name   -> Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkWindowsInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering");

	UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00921450
//		Name   -> Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkWinGDKInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering");

	UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00931A40
//		Name   -> Function AkAudio.AkWwiseTree.SetSearchText
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     newText                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkWwiseTree::SetSearchText(const struct FString& newText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.SetSearchText");

	UAkWwiseTree_SetSearchText_Params params;
	params.newText = newText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00936400
//		Name   -> Function AkAudio.AkWwiseTree.GetSelectedItem
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FAkWwiseObjectDetails                       ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FAkWwiseObjectDetails UAkWwiseTree::GetSelectedItem()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.GetSelectedItem");

	UAkWwiseTree_GetSelectedItem_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00931500
//		Name   -> Function AkAudio.AkWwiseTree.GetSearchText
//		Flags  -> (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UAkWwiseTree::GetSearchText()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkWwiseTree.GetSearchText");

	UAkWwiseTree_GetSearchText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00921450
//		Name   -> Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkXboxOneGDKInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering");

	UAkXboxOneGDKInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00921450
//		Name   -> Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
//		Flags  -> (Final, Native, Public)
// Parameters:
//		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAkXboxOneInitializationSettings::MigrateMultiCoreRendering(bool NewValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering");

	UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Params params;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0093ABC0
//		Name   -> Function AkAudio.PostEventAsync.PostEventAsync
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                CallbackMask                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             PostEventCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
//		TArray<struct FAkExternalSourceInfo>               ExternalSources                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
//		bool                                               bStopWhenAttachedToDestroyed                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UPostEventAsync*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPostEventAsync* UPostEventAsync::STATIC_PostEventAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, class AActor* Actor, int CallbackMask, const struct FScriptDelegate& PostEventCallback, TArray<struct FAkExternalSourceInfo> ExternalSources, bool bStopWhenAttachedToDestroyed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAsync.PostEventAsync");

	UPostEventAsync_PostEventAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AkEvent = AkEvent;
	params.Actor = Actor;
	params.CallbackMask = CallbackMask;
	params.PostEventCallback = PostEventCallback;
	params.ExternalSources = ExternalSources;
	params.bStopWhenAttachedToDestroyed = bStopWhenAttachedToDestroyed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0093AB80
//		Name   -> Function AkAudio.PostEventAsync.PollPostEventFuture
//		Flags  -> (Final, Native, Private)
void UPostEventAsync::PollPostEventFuture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAsync.PollPostEventFuture");

	UPostEventAsync_PollPostEventFuture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0093AE50
//		Name   -> Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAkAudioEvent*                               AkEvent                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		class UPostEventAtLocationAsync*                   ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPostEventAtLocationAsync* UPostEventAtLocationAsync::STATIC_PostEventAtLocationAsync(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, const struct FVector& Location, const struct FRotator& Orientation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync");

	UPostEventAtLocationAsync_PostEventAtLocationAsync_Params params;
	params.WorldContextObject = WorldContextObject;
	params.AkEvent = AkEvent;
	params.Location = Location;
	params.Orientation = Orientation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0093ABA0
//		Name   -> Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
//		Flags  -> (Final, Native, Private)
void UPostEventAtLocationAsync::PollPostEventFuture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture");

	UPostEventAtLocationAsync_PollPostEventFuture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
