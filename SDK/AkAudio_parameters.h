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

// Function AkAudio.AkPortalComponent.PortalPlacementValid
struct UAkPortalComponent_PortalPlacementValid_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkPortalComponent.OpenPortal
struct UAkPortalComponent_OpenPortal_Params
{
};

// Function AkAudio.AkPortalComponent.GetPrimitiveParent
struct UAkPortalComponent_GetPrimitiveParent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkPortalComponent.GetCurrentState
struct UAkPortalComponent_GetCurrentState_Params
{
	AkAudio_EAkAcousticPortalState                     ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkPortalComponent.ClosePortal
struct UAkPortalComponent_ClosePortal_Params
{
};

// Function AkAudio.AkAcousticPortal.OpenPortal
struct AAkAcousticPortal_OpenPortal_Params
{
};

// Function AkAudio.AkAcousticPortal.GetCurrentState
struct AAkAcousticPortal_GetCurrentState_Params
{
	AkAudio_EAkAcousticPortalState                     ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkAcousticPortal.ClosePortal
struct AAkAcousticPortal_ClosePortal_Params
{
};

// Function AkAudio.AkAmbientSound.StopAmbientSound
struct AAkAmbientSound_StopAmbientSound_Params
{
};

// Function AkAudio.AkAmbientSound.StartAmbientSound
struct AAkAmbientSound_StartAmbientSound_Params
{
};

// Function AkAudio.AkAndroidInitializationSettings.MigrateMultiCoreRendering
struct UAkAndroidInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkAudioEvent.GetMinimumDuration
struct UAkAudioEvent_GetMinimumDuration_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkAudioEvent.GetMaximumDuration
struct UAkAudioEvent_GetMaximumDuration_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkAudioEvent.GetMaxAttenuationRadius
struct UAkAudioEvent_GetMaxAttenuationRadius_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkAudioEvent.GetIsInfinite
struct UAkAudioEvent_GetIsInfinite_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameObject.Stop
struct UAkGameObject_Stop_Params
{
};

// Function AkAudio.AkGameObject.SetRTPCValue
struct UAkGameObject_SetRTPCValue_Params
{
	class UAkRtpc*                                     RTPCValue;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InterpolationTimeMs;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RTPC;                                                      // 0x0010(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameObject.PostAssociatedAkEventAsync
struct UAkGameObject_PostAssociatedAkEventAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallbackMask;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PostEventCallback;                                         // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0030(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // 0x0048(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameObject.PostAssociatedAkEvent
struct UAkGameObject_PostAssociatedAkEvent_Params
{
	int                                                CallbackMask;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PostEventCallback;                                         // 0x0004(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameObject.PostAkEventAsync
struct UAkGameObject_PostAkEventAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallbackMask;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PostEventCallback;                                         // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0038(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameObject.PostAkEvent
struct UAkGameObject_PostAkEvent_Params
{
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallbackMask;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PostEventCallback;                                         // 0x000C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FString                                     in_EventName;                                              // 0x0030(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameObject.GetRTPCValue
struct UAkGameObject_GetRTPCValue_Params
{
	class UAkRtpc*                                     RTPCValue;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_ERTPCValueType                             InputValueType;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_ERTPCValueType                             OutputValueType;                                           // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RTPC;                                                      // 0x0018(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.UseReverbVolumes
struct UAkComponent_UseReverbVolumes_Params
{
	bool                                               inUseReverbVolumes;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.UseEarlyReflections
struct UAkComponent_UseEarlyReflections_Params
{
	class UAkAuxBus*                                   AuxBus;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Order;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BusSendGain;                                               // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPathLength;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SpotReflectors;                                            // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuxBusName;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetSwitch
struct UAkComponent_SetSwitch_Params
{
	class UAkSwitchValue*                              SwitchValue;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SwitchGroup;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SwitchState;                                               // 0x0018(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetStopWhenOwnerDestroyed
struct UAkComponent_SetStopWhenOwnerDestroyed_Params
{
	bool                                               bStopWhenOwnerDestroyed;                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetOutputBusVolume
struct UAkComponent_SetOutputBusVolume_Params
{
	float                                              BusVolume;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetListeners
struct UAkComponent_SetListeners_Params
{
	TArray<class UAkComponent*>                        Listeners;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetGameObjectRadius
struct UAkComponent_SetGameObjectRadius_Params
{
	float                                              in_outerRadius;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              in_innerRadius;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetEarlyReflectionsVolume
struct UAkComponent_SetEarlyReflectionsVolume_Params
{
	float                                              SendVolume;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetEarlyReflectionsAuxBus
struct UAkComponent_SetEarlyReflectionsAuxBus_Params
{
	struct FString                                     AuxBusName;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.SetAttenuationScalingFactor
struct UAkComponent_SetAttenuationScalingFactor_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.PostTrigger
struct UAkComponent_PostTrigger_Params
{
	class UAkTrigger*                                  TriggerValue;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Trigger;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEndAsync
struct UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Params
{
	int                                                PlayingID;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0018(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.PostAssociatedAkEventAndWaitForEnd
struct UAkComponent_PostAssociatedAkEventAndWaitForEnd_Params
{
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0010(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.PostAkEventByName
struct UAkComponent_PostAkEventByName_Params
{
	struct FString                                     in_EventName;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.PostAkEventAndWaitForEndAsync
struct UAkComponent_PostAkEventAndWaitForEndAsync_Params
{
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0020(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.PostAkEventAndWaitForEnd
struct UAkComponent_PostAkEventAndWaitForEnd_Params
{
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     in_EventName;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0028(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkComponent.GetAttenuationRadius
struct UAkComponent_GetAttenuationRadius_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkAudioInputComponent.PostAssociatedAudioInputEvent
struct UAkAudioInputComponent_PostAssociatedAudioInputEvent_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.SetIsChecked
struct UAkCheckBox_SetIsChecked_Params
{
	bool                                               InIsChecked;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.SetCheckedState
struct UAkCheckBox_SetCheckedState_Params
{
	SlateCore_ECheckBoxState                           InCheckedState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.SetAkItemId
struct UAkCheckBox_SetAkItemId_Params
{
	struct FGuid                                       ItemId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.SetAkBoolProperty
struct UAkCheckBox_SetAkBoolProperty_Params
{
	struct FString                                     ItemProperty;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.IsPressed
struct UAkCheckBox_IsPressed_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.IsChecked
struct UAkCheckBox_IsChecked_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.GetCheckedState
struct UAkCheckBox_GetCheckedState_Params
{
	SlateCore_ECheckBoxState                           ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.GetAkProperty
struct UAkCheckBox_GetAkProperty_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkCheckBox.GetAkItemId
struct UAkCheckBox_GetAkItemId_Params
{
	struct FGuid                                       ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.UseReverbVolumes
struct UAkGameplayStatics_UseReverbVolumes_Params
{
	bool                                               inUseReverbVolumes;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.UseEarlyReflections
struct UAkGameplayStatics_UseEarlyReflections_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAuxBus*                                   AuxBus;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Order;                                                     // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BusSendGain;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxPathLength;                                             // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SpotReflectors;                                            // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuxBusName;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.UnloadBankByName
struct UAkGameplayStatics_UnloadBankByName_Params
{
	struct FString                                     BankName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.UnloadBankAsync
struct UAkGameplayStatics_UnloadBankAsync_Params
{
	class UAkAudioBank*                                Bank;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BankUnloadedCallback;                                      // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.UnloadBank
struct UAkGameplayStatics_UnloadBank_Params
{
	class UAkAudioBank*                                Bank;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BankName;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0018(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.StopProfilerCapture
struct UAkGameplayStatics_StopProfilerCapture_Params
{
};

// Function AkAudio.AkGameplayStatics.StopOutputCapture
struct UAkGameplayStatics_StopOutputCapture_Params
{
};

// Function AkAudio.AkGameplayStatics.StopAllAmbientSounds
struct UAkGameplayStatics_StopAllAmbientSounds_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.StopAll
struct UAkGameplayStatics_StopAll_Params
{
};

// Function AkAudio.AkGameplayStatics.StopActor
struct UAkGameplayStatics_StopActor_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.StartProfilerCapture
struct UAkGameplayStatics_StartProfilerCapture_Params
{
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.StartOutputCapture
struct UAkGameplayStatics_StartOutputCapture_Params
{
	struct FString                                     Filename;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.StartAllAmbientSounds
struct UAkGameplayStatics_StartAllAmbientSounds_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SpawnAkComponentAtLocation
struct UAkGameplayStatics_SpawnAkComponentAtLocation_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               AutoPost;                                                  // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AutoDestroy;                                               // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkComponent*                                ReturnValue;                                               // 0x0048(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetSwitch
struct UAkGameplayStatics_SetSwitch_Params
{
	class UAkSwitchValue*                              SwitchValue;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SwitchGroup;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SwitchState;                                               // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetState
struct UAkGameplayStatics_SetState_Params
{
	class UAkStateValue*                               StateValue;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       StateGroup;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       State;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetSpeakerAngles
struct UAkGameplayStatics_SetSpeakerAngles_Params
{
	TArray<float>                                      SpeakerAngles;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              HeightAngle;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceShareset;                                            // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetRTPCValue
struct UAkGameplayStatics_SetRTPCValue_Params
{
	class UAkRtpc*                                     RTPCValue;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InterpolationTimeMs;                                       // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RTPC;                                                      // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetReflectionsOrder
struct UAkGameplayStatics_SetReflectionsOrder_Params
{
	int                                                Order;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RefreshPaths;                                              // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetPanningRule
struct UAkGameplayStatics_SetPanningRule_Params
{
	AkAudio_EPanningRule                               PanRule;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetOutputBusVolume
struct UAkGameplayStatics_SetOutputBusVolume_Params
{
	float                                              BusVolume;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetOcclusionScalingFactor
struct UAkGameplayStatics_SetOcclusionScalingFactor_Params
{
	float                                              ScalingFactor;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetOcclusionRefreshInterval
struct UAkGameplayStatics_SetOcclusionRefreshInterval_Params
{
	float                                              RefreshInterval;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetMultiplePositions
struct UAkGameplayStatics_SetMultiplePositions_Params
{
	class UAkComponent*                                GameObjectAkComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Positions;                                                 // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	AkAudio_EAkMultiPositionType                       MultiPositionType;                                         // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetMultipleChannelMaskEmitterPositions
struct UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Params
{
	class UAkComponent*                                GameObjectAkComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkChannelMask>                      ChannelMasks;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Positions;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	AkAudio_EAkMultiPositionType                       MultiPositionType;                                         // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetMultipleChannelEmitterPositions
struct UAkGameplayStatics_SetMultipleChannelEmitterPositions_Params
{
	class UAkComponent*                                GameObjectAkComponent;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<AkAudio_EAkChannelConfiguration>            ChannelMasks;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                          Positions;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	AkAudio_EAkMultiPositionType                       MultiPositionType;                                         // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetCurrentAudioCultureAsync
struct UAkGameplayStatics_SetCurrentAudioCultureAsync_Params
{
	struct FString                                     AudioCulture;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Completed;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetCurrentAudioCulture
struct UAkGameplayStatics_SetCurrentAudioCulture_Params
{
	struct FString                                     AudioCulture;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0010(0x0018)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.SetBusConfig
struct UAkGameplayStatics_SetBusConfig_Params
{
	struct FString                                     BusName;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_EAkChannelConfiguration                    ChannelConfiguration;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostTrigger
struct UAkGameplayStatics_PostTrigger_Params
{
	class UAkTrigger*                                  TriggerValue;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       Trigger;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostEventByName
struct UAkGameplayStatics_PostEventByName_Params
{
	struct FString                                     EventName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostEventAttached
struct UAkGameplayStatics_PostEventAttached_Params
{
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostEventAtLocationByName
struct UAkGameplayStatics_PostEventAtLocationByName_Params
{
	struct FString                                     EventName;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostEventAtLocation
struct UAkGameplayStatics_PostEventAtLocation_Params
{
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0038(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostEvent
struct UAkGameplayStatics_PostEvent_Params
{
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallbackMask;                                              // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PostEventCallback;                                         // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0040(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEventAsync
struct UAkGameplayStatics_PostAndWaitForEndOfEventAsync_Params
{
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0028(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.PostAndWaitForEndOfEvent
struct UAkGameplayStatics_PostAndWaitForEndOfEvent_Params
{
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0028(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0038(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0050(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.LoadInitBank
struct UAkGameplayStatics_LoadInitBank_Params
{
};

// Function AkAudio.AkGameplayStatics.LoadBanks
struct UAkGameplayStatics_LoadBanks_Params
{
	TArray<class UAkAudioBank*>                        SoundBanks;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               SynchronizeSoundBanks;                                     // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.LoadBankByName
struct UAkGameplayStatics_LoadBankByName_Params
{
	struct FString                                     BankName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.LoadBankAsync
struct UAkGameplayStatics_LoadBankAsync_Params
{
	class UAkAudioBank*                                Bank;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             BankLoadedCallback;                                        // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.LoadBank
struct UAkGameplayStatics_LoadBank_Params
{
	class UAkAudioBank*                                Bank;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BankName;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLatentActionInfo                           LatentInfo;                                                // 0x0018(0x0018)  (Parm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UObject*                                     WorldContextObject;                                        // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.IsGame
struct UAkGameplayStatics_IsGame_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.IsEditor
struct UAkGameplayStatics_IsEditor_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetSpeakerAngles
struct UAkGameplayStatics_GetSpeakerAngles_Params
{
	TArray<float>                                      SpeakerAngles;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              HeightAngle;                                               // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceShareset;                                            // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetRTPCValue
struct UAkGameplayStatics_GetRTPCValue_Params
{
	class UAkRtpc*                                     RTPCValue;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_ERTPCValueType                             InputValueType;                                            // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_ERTPCValueType                             OutputValueType;                                           // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RTPC;                                                      // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetOcclusionScalingFactor
struct UAkGameplayStatics_GetOcclusionScalingFactor_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetCurrentAudioCulture
struct UAkGameplayStatics_GetCurrentAudioCulture_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetAvailableAudioCultures
struct UAkGameplayStatics_GetAvailableAudioCultures_Params
{
	TArray<struct FString>                             ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetAkMediaAssetUserData
struct UAkGameplayStatics_GetAkMediaAssetUserData_Params
{
	class UAkMediaAsset*                               Instance;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Type;                                                      // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetAkComponent
struct UAkGameplayStatics_GetAkComponent_Params
{
	class USceneComponent*                             AttachToComponent;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ComponentCreated;                                          // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AttachPointName;                                           // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0014(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                LocationType;                                              // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkComponent*                                ReturnValue;                                               // 0x0028(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.GetAkAudioTypeUserData
struct UAkGameplayStatics_GetAkAudioTypeUserData_Params
{
	class UAkAudioType*                                Instance;                                                  // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      Type;                                                      // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.ExecuteActionOnPlayingID
struct UAkGameplayStatics_ExecuteActionOnPlayingID_Params
{
	AkAudio_EAkActionOnEventType                       ActionType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TransitionDuration;                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_EAkCurveInterpolation                      FadeCurve;                                                 // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.ExecuteActionOnEvent
struct UAkGameplayStatics_ExecuteActionOnEvent_Params
{
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_EAkActionOnEventType                       ActionType;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TransitionDuration;                                        // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	AkAudio_EAkCurveInterpolation                      FadeCurve;                                                 // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayingID;                                                 // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.ClearBanks
struct UAkGameplayStatics_ClearBanks_Params
{
};

// Function AkAudio.AkGameplayStatics.CancelEventCallback
struct UAkGameplayStatics_CancelEventCallback_Params
{
	struct FScriptDelegate                             PostEventCallback;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGameplayStatics.AddOutputCaptureMarker
struct UAkGameplayStatics_AddOutputCaptureMarker_Params
{
	struct FString                                     MarkerText;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetType
struct UAkMIDIEventCallbackInfo_GetType_Params
{
	AkAudio_EAkMidiEventType                           ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetProgramChange
struct UAkMIDIEventCallbackInfo_GetProgramChange_Params
{
	struct FAkMidiProgramChange                        AsProgramChange;                                           // 0x0000(0x0003)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetPitchBend
struct UAkMIDIEventCallbackInfo_GetPitchBend_Params
{
	struct FAkMidiPitchBend                            AsPitchBend;                                               // 0x0000(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOn
struct UAkMIDIEventCallbackInfo_GetNoteOn_Params
{
	struct FAkMidiNoteOnOff                            AsNoteOn;                                                  // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteOff
struct UAkMIDIEventCallbackInfo_GetNoteOff_Params
{
	struct FAkMidiNoteOnOff                            AsNoteOff;                                                 // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetNoteAftertouch
struct UAkMIDIEventCallbackInfo_GetNoteAftertouch_Params
{
	struct FAkMidiNoteAftertouch                       AsNoteAftertouch;                                          // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetGeneric
struct UAkMIDIEventCallbackInfo_GetGeneric_Params
{
	struct FAkMidiGeneric                              AsGeneric;                                                 // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetChannelAftertouch
struct UAkMIDIEventCallbackInfo_GetChannelAftertouch_Params
{
	struct FAkMidiChannelAftertouch                    AsChannelAftertouch;                                       // 0x0000(0x0003)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0003(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetChannel
struct UAkMIDIEventCallbackInfo_GetChannel_Params
{
	unsigned char                                      ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMIDIEventCallbackInfo.GetCc
struct UAkMIDIEventCallbackInfo_GetCc_Params
{
	struct FAkMidiCc                                   AsCc;                                                      // 0x0000(0x0004)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkGeometryComponent.UpdateGeometry
struct UAkGeometryComponent_UpdateGeometry_Params
{
};

// Function AkAudio.AkGeometryComponent.SendGeometry
struct UAkGeometryComponent_SendGeometry_Params
{
};

// Function AkAudio.AkGeometryComponent.RemoveGeometry
struct UAkGeometryComponent_RemoveGeometry_Params
{
};

// Function AkAudio.AkGeometryComponent.ConvertMesh
struct UAkGeometryComponent_ConvertMesh_Params
{
};

// Function AkAudio.AkHololensInitializationSettings.MigrateMultiCoreRendering
struct UAkHololensInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToText
struct UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToText_Params
{
	struct FAkBoolPropertyToControl                    INAkBoolPropertyToControl;                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemBoolPropertiesConv.Conv_FAkBoolPropertyToControlToString
struct UAkItemBoolPropertiesConv_Conv_FAkBoolPropertyToControlToString_Params
{
	struct FAkBoolPropertyToControl                    INAkBoolPropertyToControl;                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemBoolProperties.SetSearchText
struct UAkItemBoolProperties_SetSearchText_Params
{
	struct FString                                     newText;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemBoolProperties.GetSelectedProperty
struct UAkItemBoolProperties_GetSelectedProperty_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemBoolProperties.GetSearchText
struct UAkItemBoolProperties_GetSearchText_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToText
struct UAkItemPropertiesConv_Conv_FAkPropertyToControlToText_Params
{
	struct FAkPropertyToControl                        INAkPropertyToControl;                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemPropertiesConv.Conv_FAkPropertyToControlToString
struct UAkItemPropertiesConv_Conv_FAkPropertyToControlToString_Params
{
	struct FAkPropertyToControl                        INAkPropertyToControl;                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemProperties.SetSearchText
struct UAkItemProperties_SetSearchText_Params
{
	struct FString                                     newText;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemProperties.GetSelectedProperty
struct UAkItemProperties_GetSelectedProperty_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkItemProperties.GetSearchText
struct UAkItemProperties_GetSearchText_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkLateReverbComponent.AssociateAkTextureSetComponent
struct UAkLateReverbComponent_AssociateAkTextureSetComponent_Params
{
	class UAkAcousticTextureSetComponent*              textureSetComponent;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkLinuxInitializationSettings.MigrateMultiCoreRendering
struct UAkLinuxInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkMacInitializationSettings.MigrateMultiCoreRendering
struct UAkMacInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkPS4InitializationSettings.MigrateMultiCoreRendering
struct UAkPS4InitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkRoomComponent.GetPrimitiveParent
struct UAkRoomComponent_GetPrimitiveParent_Params
{
	class UPrimitiveComponent*                         ReturnValue;                                               // 0x0000(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetValue
struct UAkSlider_SetValue_Params
{
	float                                              InValue;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetStepSize
struct UAkSlider_SetStepSize_Params
{
	float                                              InValue;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetSliderHandleColor
struct UAkSlider_SetSliderHandleColor_Params
{
	struct FLinearColor                                InValue;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetSliderBarColor
struct UAkSlider_SetSliderBarColor_Params
{
	struct FLinearColor                                InValue;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetLocked
struct UAkSlider_SetLocked_Params
{
	bool                                               InValue;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetIndentHandle
struct UAkSlider_SetIndentHandle_Params
{
	bool                                               InValue;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetAkSliderItemProperty
struct UAkSlider_SetAkSliderItemProperty_Params
{
	struct FString                                     ItemProperty;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.SetAkSliderItemId
struct UAkSlider_SetAkSliderItemId_Params
{
	struct FGuid                                       ItemId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.GetValue
struct UAkSlider_GetValue_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.GetAkSliderItemProperty
struct UAkSlider_GetAkSliderItemProperty_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSlider.GetAkSliderItemId
struct UAkSlider_GetAkSliderItemId_Params
{
	struct FGuid                                       ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet
struct UAkSurfaceReflectorSetComponent_UpdateSurfaceReflectorSet_Params
{
};

// Function AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet
struct UAkSurfaceReflectorSetComponent_SendSurfaceReflectorSet_Params
{
};

// Function AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet
struct UAkSurfaceReflectorSetComponent_RemoveSurfaceReflectorSet_Params
{
};

// Function AkAudio.AkSwitchInitializationSettings.MigrateMultiCoreRendering
struct UAkSwitchInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.Unsubscribe
struct UAkWaapiCalls_Unsubscribe_Params
{
	struct FAkWaapiSubscriptionId                      SubscriptionId;                                            // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               UnsubscriptionDone;                                        // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.SubscribeToWaapi
struct UAkWaapiCalls_SubscribeToWaapi_Params
{
	struct FAkWaapiUri                                 WaapiUri;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          WaapiOptions;                                              // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             Callback;                                                  // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkWaapiSubscriptionId                      SubscriptionId;                                            // 0x0030(0x0008)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               SubscriptionDone;                                          // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // 0x0040(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.SetSubscriptionID
struct UAkWaapiCalls_SetSubscriptionID_Params
{
	struct FAkWaapiSubscriptionId                      Subscription;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ID;                                                        // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.RegisterWaapiProjectLoadedCallback
struct UAkWaapiCalls_RegisterWaapiProjectLoadedCallback_Params
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.RegisterWaapiConnectionLostCallback
struct UAkWaapiCalls_RegisterWaapiConnectionLostCallback_Params
{
	struct FScriptDelegate                             Callback;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.GetSubscriptionID
struct UAkWaapiCalls_GetSubscriptionID_Params
{
	struct FAkWaapiSubscriptionId                      Subscription;                                              // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToText
struct UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToText_Params
{
	struct FAkWaapiSubscriptionId                      INAkWaapiSubscriptionId;                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.Conv_FAkWaapiSubscriptionIdToString
struct UAkWaapiCalls_Conv_FAkWaapiSubscriptionIdToString_Params
{
	struct FAkWaapiSubscriptionId                      INAkWaapiSubscriptionId;                                   // 0x0000(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiCalls.CallWaapi
struct UAkWaapiCalls_CallWaapi_Params
{
	struct FAkWaapiUri                                 WaapiUri;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          WaapiArgs;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          WaapiOptions;                                              // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToText
struct USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToText_Params
{
	struct FAkWaapiFieldNames                          INAkWaapiFieldNames;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.SAkWaapiFieldNamesConv.Conv_FAkWaapiFieldNamesToString
struct USAkWaapiFieldNamesConv_Conv_FAkWaapiFieldNamesToString_Params
{
	struct FAkWaapiFieldNames                          INAkWaapiFieldNames;                                       // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.SetStringField
struct UAkWaapiJsonManager_SetStringField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     FieldValue;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          Target;                                                    // 0x0020(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.SetObjectField
struct UAkWaapiJsonManager_SetObjectField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          FieldValue;                                                // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          Target;                                                    // 0x0020(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.SetNumberField
struct UAkWaapiJsonManager_SetNumberField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                              FieldValue;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          Target;                                                    // 0x0018(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.SetBoolField
struct UAkWaapiJsonManager_SetBoolField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                               FieldValue;                                                // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          Target;                                                    // 0x0018(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.SetArrayStringFields
struct UAkWaapiJsonManager_SetArrayStringFields_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FString>                             FieldStringValues;                                         // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          Target;                                                    // 0x0020(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.SetArrayObjectFields
struct UAkWaapiJsonManager_SetArrayObjectFields_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FAKWaapiJsonObject>                  FieldObjectValues;                                         // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          Target;                                                    // 0x0020(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // 0x0030(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.GetStringField
struct UAkWaapiJsonManager_GetStringField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          Target;                                                    // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.GetObjectField
struct UAkWaapiJsonManager_GetObjectField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          Target;                                                    // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          ReturnValue;                                               // 0x0020(0x0010)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.GetNumberField
struct UAkWaapiJsonManager_GetNumberField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          Target;                                                    // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
	float                                              ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.GetIntegerField
struct UAkWaapiJsonManager_GetIntegerField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          Target;                                                    // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.GetBoolField
struct UAkWaapiJsonManager_GetBoolField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          Target;                                                    // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.GetArrayField
struct UAkWaapiJsonManager_GetArrayField_Params
{
	struct FAkWaapiFieldNames                          FieldName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FAKWaapiJsonObject                          Target;                                                    // 0x0010(0x0010)  (Parm, NativeAccessSpecifierPublic)
	TArray<struct FAKWaapiJsonObject>                  ReturnValue;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToText
struct UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToText_Params
{
	struct FAKWaapiJsonObject                          INAKWaapiJsonObject;                                       // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiJsonManager.Conv_FAKWaapiJsonObjectToString
struct UAkWaapiJsonManager_Conv_FAKWaapiJsonObjectToString_Params
{
	struct FAKWaapiJsonObject                          INAKWaapiJsonObject;                                       // 0x0000(0x0010)  (Parm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToText
struct UAkWaapiUriConv_Conv_FAkWaapiUriToText_Params
{
	struct FAkWaapiUri                                 INAkWaapiUri;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FText                                       ReturnValue;                                               // 0x0010(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWaapiUriConv.Conv_FAkWaapiUriToString
struct UAkWaapiUriConv_Conv_FAkWaapiUriToString_Params
{
	struct FAkWaapiUri                                 INAkWaapiUri;                                              // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWindowsInitializationSettings.MigrateMultiCoreRendering
struct UAkWindowsInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWinGDKInitializationSettings.MigrateMultiCoreRendering
struct UAkWinGDKInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWwiseTree.SetSearchText
struct UAkWwiseTree_SetSearchText_Params
{
	struct FString                                     newText;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWwiseTree.GetSelectedItem
struct UAkWwiseTree_GetSelectedItem_Params
{
	struct FAkWwiseObjectDetails                       ReturnValue;                                               // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkWwiseTree.GetSearchText
struct UAkWwiseTree_GetSearchText_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkXboxOneGDKInitializationSettings.MigrateMultiCoreRendering
struct UAkXboxOneGDKInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.AkXboxOneInitializationSettings.MigrateMultiCoreRendering
struct UAkXboxOneInitializationSettings_MigrateMultiCoreRendering_Params
{
	bool                                               NewValue;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.PostEventAsync.PostEventAsync
struct UPostEventAsync_PostEventAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      Actor;                                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CallbackMask;                                              // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             PostEventCallback;                                         // 0x001C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<struct FAkExternalSourceInfo>               ExternalSources;                                           // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                               bStopWhenAttachedToDestroyed;                              // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPostEventAsync*                             ReturnValue;                                               // 0x0048(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.PostEventAsync.PollPostEventFuture
struct UPostEventAsync_PollPostEventFuture_Params
{
};

// Function AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync
struct UPostEventAtLocationAsync_PostEventAtLocationAsync_Params
{
	class UObject*                                     WorldContextObject;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               AkEvent;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Orientation;                                               // 0x001C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UPostEventAtLocationAsync*                   ReturnValue;                                               // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function AkAudio.PostEventAtLocationAsync.PollPostEventFuture
struct UPostEventAtLocationAsync_PollPostEventFuture_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
