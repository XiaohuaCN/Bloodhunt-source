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

// Function TBP_Player.TBP_Player_C.GetWeapon
struct ATBP_Player_C_GetWeapon_Params
{
	class USkeletalMeshComponent*                      OutWeapon;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      OutSecondWeapon;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnRedGasPostProcessMaterialLoaded
struct ATBP_Player_C_OnRedGasPostProcessMaterialLoaded_Params
{
	TArray<class UObject*>                             InLoadedObjects;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_Player.TBP_Player_C.QualityOptionChanged
struct ATBP_Player_C_QualityOptionChanged_Params
{
	struct FTigerGraphicsSettings                      GraphicsSettings;                                          // 0x0000(0x004C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function TBP_Player.TBP_Player_C.SetupQualityOptions
struct ATBP_Player_C_SetupQualityOptions_Params
{
};

// Function TBP_Player.TBP_Player_C.InitHealthBars
struct ATBP_Player_C_InitHealthBars_Params
{
};

// Function TBP_Player.TBP_Player_C.UpdateSPCPlayerMaterialCollection
struct ATBP_Player_C_UpdateSPCPlayerMaterialCollection_Params
{
};

// Function TBP_Player.TBP_Player_C.Update Red Gas MPC
struct ATBP_Player_C_Update_Red_Gas_MPC_Params
{
};

// Function TBP_Player.TBP_Player_C.StartRedGasAudio
struct ATBP_Player_C_StartRedGasAudio_Params
{
};

// Function TBP_Player.TBP_Player_C.StopRedGasAudio
struct ATBP_Player_C_StopRedGasAudio_Params
{
};

// Function TBP_Player.TBP_Player_C.CheckShouldUpdateListenerPosition
struct ATBP_Player_C_CheckShouldUpdateListenerPosition_Params
{
	class APlayerController*                           Player_Controller;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_Player.TBP_Player_C.EnableCharacterlighting
struct ATBP_Player_C_EnableCharacterlighting_Params
{
};

// Function TBP_Player.TBP_Player_C.SetAkAlignmentRTPC
struct ATBP_Player_C_SetAkAlignmentRTPC_Params
{
};

// Function TBP_Player.TBP_Player_C.SetLodOnLocalPlayer
struct ATBP_Player_C_SetLodOnLocalPlayer_Params
{
};

// Function TBP_Player.TBP_Player_C.SetAudioListenerOverride
struct ATBP_Player_C_SetAudioListenerOverride_Params
{
};

// Function TBP_Player.TBP_Player_C.SetDamageTakenAudioSwitch
struct ATBP_Player_C_SetDamageTakenAudioSwitch_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.StartSlidingAudio
struct ATBP_Player_C_StartSlidingAudio_Params
{
};

// Function TBP_Player.TBP_Player_C.DetermineOwnerOfProjectile
struct ATBP_Player_C_DetermineOwnerOfProjectile_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerProjectile*                            AsTiger_Projectile;                                        // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.SetRTPC:AltitudePlayer
struct ATBP_Player_C_SetRTPC_AltitudePlayer_Params
{
};

// Function TBP_Player.TBP_Player_C.SetReverbStateOnExit
struct ATBP_Player_C_SetReverbStateOnExit_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.SetReverbStateOnEnter
struct ATBP_Player_C_SetReverbStateOnEnter_Params
{
	class UObject*                                     Object;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.DisableScreenCullSize
struct ATBP_Player_C_DisableScreenCullSize_Params
{
};

// Function TBP_Player.TBP_Player_C.PostLandingAudio
struct ATBP_Player_C_PostLandingAudio_Params
{
};

// Function TBP_Player.TBP_Player_C.PlayBeingDiablerizedAudio
struct ATBP_Player_C_PlayBeingDiablerizedAudio_Params
{
};

// Function TBP_Player.TBP_Player_C.SetGroundedAudioState
struct ATBP_Player_C_SetGroundedAudioState_Params
{
	bool                                               Condition;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_Player.TBP_Player_C.PlayDiablerizeAudio
struct ATBP_Player_C_PlayDiablerizeAudio_Params
{
};

// Function TBP_Player.TBP_Player_C.PlayReviveAudio
struct ATBP_Player_C_PlayReviveAudio_Params
{
};

// Function TBP_Player.TBP_Player_C.DisableAllPostProcess
struct ATBP_Player_C_DisableAllPostProcess_Params
{
};

// Function TBP_Player.TBP_Player_C.StopCloseToRedGasAudio
struct ATBP_Player_C_StopCloseToRedGasAudio_Params
{
};

// Function TBP_Player.TBP_Player_C.StartCloseToRedGasAudio
struct ATBP_Player_C_StartCloseToRedGasAudio_Params
{
};

// Function TBP_Player.TBP_Player_C.OnTraversalPostProcessEnded
struct ATBP_Player_C_OnTraversalPostProcessEnded_Params
{
};

// Function TBP_Player.TBP_Player_C.UpdateTraversalPostProcess
struct ATBP_Player_C_UpdateTraversalPostProcess_Params
{
	float                                              Duration;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Strength;                                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   FocusPosition;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.GetDiablerizeEffectStartTime
struct ATBP_Player_C_GetDiablerizeEffectStartTime_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.DeactivateHeavyChargeFX
struct ATBP_Player_C_DeactivateHeavyChargeFX_Params
{
};

// Function TBP_Player.TBP_Player_C.UpdateAimGlideCosmetic
struct ATBP_Player_C_UpdateAimGlideCosmetic_Params
{
};

// Function TBP_Player.TBP_Player_C.DisableSkeletonSmokeEffects
struct ATBP_Player_C_DisableSkeletonSmokeEffects_Params
{
};

// Function TBP_Player.TBP_Player_C.SetupCharacterDuplicates
struct ATBP_Player_C_SetupCharacterDuplicates_Params
{
	class USkeletalMeshComponent*                      SkeletalMeshOriginal;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.SwiftStrikeFX
struct ATBP_Player_C_SwiftStrikeFX_Params
{
};

// Function TBP_Player.TBP_Player_C.OnGroupMemberLifeStatusChanged
struct ATBP_Player_C_OnGroupMemberLifeStatusChanged_Params
{
	Tiger_ETigerPlayerLifeStatus                       NewLifeStatus;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.UpdateInRedGasEffect
struct ATBP_Player_C_UpdateInRedGasEffect_Params
{
	float                                              Delta_Time;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.UpdateDownedFX
struct ATBP_Player_C_UpdateDownedFX_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.IsLocalClient
struct ATBP_Player_C_IsLocalClient_Params
{
	bool                                               Client;                                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_Player.TBP_Player_C.UpdateFeedingFX
struct ATBP_Player_C_UpdateFeedingFX_Params
{
	float                                              Delta;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.Set Rain Amount
struct ATBP_Player_C_Set_Rain_Amount_Params
{
};

// Function TBP_Player.TBP_Player_C.StunVisualEffect
struct ATBP_Player_C_StunVisualEffect_Params
{
	class AActor*                                      self2;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.UserConstructionScript
struct ATBP_Player_C_UserConstructionScript_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_3__FinishedFunc
struct ATBP_Player_C_Timeline_3__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_3__UpdateFunc
struct ATBP_Player_C_Timeline_3__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_4__FinishedFunc
struct ATBP_Player_C_Timeline_4__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_4__UpdateFunc
struct ATBP_Player_C_Timeline_4__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_0__FinishedFunc
struct ATBP_Player_C_Timeline_0__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_0__UpdateFunc
struct ATBP_Player_C_Timeline_0__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_1__FinishedFunc
struct ATBP_Player_C_Timeline_1__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_1__UpdateFunc
struct ATBP_Player_C_Timeline_1__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_2__FinishedFunc
struct ATBP_Player_C_Timeline_2__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_2__UpdateFunc
struct ATBP_Player_C_Timeline_2__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_7__FinishedFunc
struct ATBP_Player_C_Timeline_7__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_7__UpdateFunc
struct ATBP_Player_C_Timeline_7__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_8__FinishedFunc
struct ATBP_Player_C_Timeline_8__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_8__UpdateFunc
struct ATBP_Player_C_Timeline_8__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.ScopeTimeline__FinishedFunc
struct ATBP_Player_C_ScopeTimeline__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.ScopeTimeline__UpdateFunc
struct ATBP_Player_C_ScopeTimeline__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_13__FinishedFunc
struct ATBP_Player_C_Timeline_13__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_13__UpdateFunc
struct ATBP_Player_C_Timeline_13__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_13__InvulnerabilityTrigger__EventFunc
struct ATBP_Player_C_Timeline_13__InvulnerabilityTrigger__EventFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_13__ToggleCharacterVisibility__EventFunc
struct ATBP_Player_C_Timeline_13__ToggleCharacterVisibility__EventFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_Diablerize_Short__FinishedFunc
struct ATBP_Player_C_Timeline_Diablerize_Short__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Timeline_Diablerize_Short__UpdateFunc
struct ATBP_Player_C_Timeline_Diablerize_Short__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Check Dodge__FinishedFunc
struct ATBP_Player_C_Check_Dodge__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.Check Dodge__UpdateFunc
struct ATBP_Player_C_Check_Dodge__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.MuzzleFlashLightTimeline__FinishedFunc
struct ATBP_Player_C_MuzzleFlashLightTimeline__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.MuzzleFlashLightTimeline__UpdateFunc
struct ATBP_Player_C_MuzzleFlashLightTimeline__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.MuzzleFlashLight2Timeline__FinishedFunc
struct ATBP_Player_C_MuzzleFlashLight2Timeline__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.MuzzleFlashLight2Timeline__UpdateFunc
struct ATBP_Player_C_MuzzleFlashLight2Timeline__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.OutlineTimeline__FinishedFunc
struct ATBP_Player_C_OutlineTimeline__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.OutlineTimeline__UpdateFunc
struct ATBP_Player_C_OutlineTimeline__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.GasDebuffTimeline__FinishedFunc
struct ATBP_Player_C_GasDebuffTimeline__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.GasDebuffTimeline__UpdateFunc
struct ATBP_Player_C_GasDebuffTimeline__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.GasDebuffBurnTimeline__FinishedFunc
struct ATBP_Player_C_GasDebuffBurnTimeline__FinishedFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.GasDebuffBurnTimeline__UpdateFunc
struct ATBP_Player_C_GasDebuffBurnTimeline__UpdateFunc_Params
{
};

// Function TBP_Player.TBP_Player_C.InpActEvt_Left_K2Node_InputKeyEvent_4
struct ATBP_Player_C_InpActEvt_Left_K2Node_InputKeyEvent_4_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.InpActEvt_Right_K2Node_InputKeyEvent_3
struct ATBP_Player_C_InpActEvt_Right_K2Node_InputKeyEvent_3_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_2
struct ATBP_Player_C_InpActEvt_PageUp_K2Node_InputKeyEvent_2_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_1
struct ATBP_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_1_Params
{
	struct FKey                                        Key;                                                       // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnLocalDisciplineUse
struct ATBP_Player_C_OnLocalDisciplineUse_Params
{
	struct FDisciplineUse                              DisciplineUse;                                             // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ExpectedDuration;                                          // 0x0050(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.DisciplineJumpFinished
struct ATBP_Player_C_DisciplineJumpFinished_Params
{
};

// Function TBP_Player.TBP_Player_C.OnLocalDisciplineUseFailed
struct ATBP_Player_C_OnLocalDisciplineUseFailed_Params
{
	struct FDisciplineUse                              DisciplineUse;                                             // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_Player.TBP_Player_C.LocalPlayer BeginPlay
struct ATBP_Player_C_LocalPlayer_BeginPlay_Params
{
};

// Function TBP_Player.TBP_Player_C.OnLocalSprintStarted
struct ATBP_Player_C_OnLocalSprintStarted_Params
{
};

// Function TBP_Player.TBP_Player_C.OnLocalSprintEnded
struct ATBP_Player_C_OnLocalSprintEnded_Params
{
};

// Function TBP_Player.TBP_Player_C.OnLocalEnteredIndoor
struct ATBP_Player_C_OnLocalEnteredIndoor_Params
{
};

// Function TBP_Player.TBP_Player_C.OnLocalExitedIndoor
struct ATBP_Player_C_OnLocalExitedIndoor_Params
{
};

// Function TBP_Player.TBP_Player_C.OnStartedFeedingApproach
struct ATBP_Player_C_OnStartedFeedingApproach_Params
{
	float                                              TravelTime;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnFeedingDoneEvent
struct ATBP_Player_C_OnFeedingDoneEvent_Params
{
	bool                                               bTargetIsDrained;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATigerCharacter*                             InTargetFedOn;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.BndEvt__AudioTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ATBP_Player_C_BndEvt__AudioTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnTigerMovementModeChanged
struct ATBP_Player_C_OnTigerMovementModeChanged_Params
{
	TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode;                                          // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerMovementMode                           PrevCustomMode;                                            // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_EMovementMode>                  NewMovementMode;                                           // 0x0002(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerMovementMode                           NewCustomMode;                                             // 0x0003(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnExtraHealthDepleted
struct ATBP_Player_C_OnExtraHealthDepleted_Params
{
};

// Function TBP_Player.TBP_Player_C.OnStartedAimingCameraTransition
struct ATBP_Player_C_OnStartedAimingCameraTransition_Params
{
};

// Function TBP_Player.TBP_Player_C.OnStoppedAimingCameraTransition
struct ATBP_Player_C_OnStoppedAimingCameraTransition_Params
{
};

// Function TBP_Player.TBP_Player_C.OnMasqueradeStateChanged_Event_1
struct ATBP_Player_C_OnMasqueradeStateChanged_Event_1_Params
{
	bool                                               InIsMasqueradeBreached;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	Tiger_ETigerAIPlayerAction                         InPlayerAction;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.ReceiveActorBeginOverlap
struct ATBP_Player_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.ReceiveActorEndOverlap
struct ATBP_Player_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnShieldDepleted
struct ATBP_Player_C_OnShieldDepleted_Params
{
	class ATigerPlayer*                                InInstigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnChangedAkAlignment
struct ATBP_Player_C_OnChangedAkAlignment_Params
{
	Tiger_ETigerCharacterAkAlignmentType               InAlignment;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnModEquipped
struct ATBP_Player_C_OnModEquipped_Params
{
};

// Function TBP_Player.TBP_Player_C.Client On Mod Equipped
struct ATBP_Player_C_Client_On_Mod_Equipped_Params
{
};

// Function TBP_Player.TBP_Player_C.K2_OnEndViewTarget
struct ATBP_Player_C_K2_OnEndViewTarget_Params
{
	class APlayerController*                           PC;                                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.LocalPlayerTick
struct ATBP_Player_C_LocalPlayerTick_Params
{
	float                                              InDeltaSeconds;                                            // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.ReceiveBeginPlay
struct ATBP_Player_C_ReceiveBeginPlay_Params
{
};

// Function TBP_Player.TBP_Player_C.OnDisciplineUseSucceeded
struct ATBP_Player_C_OnDisciplineUseSucceeded_Params
{
	struct FDisciplineUse                              DisciplineUse;                                             // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_Player.TBP_Player_C.OnLanded
struct ATBP_Player_C_OnLanded_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function TBP_Player.TBP_Player_C.ReceivePossessed
struct ATBP_Player_C_ReceivePossessed_Params
{
	class AController*                                 NewController;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnShowDamageAmount
struct ATBP_Player_C_OnShowDamageAmount_Params
{
	struct FVector                                     InHitLocation;                                             // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                InDamageColor;                                             // 0x000C(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InTotalDamageAmount;                                       // 0x001C(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InHealthDamageAmount;                                      // 0x0020(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInHasExtraHealth;                                         // 0x0024(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bInHasShield;                                              // 0x0025(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InRangedDamageFalloffPercent;                              // 0x0028(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnWeaponFired
struct ATBP_Player_C_OnWeaponFired_Params
{
	bool                                               bSecondaryWeaponFired;                                     // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_Player.TBP_Player_C.OnRep_PlayerClan
struct ATBP_Player_C_OnRep_PlayerClan_Params
{
};

// Function TBP_Player.TBP_Player_C.LifeStatusChanged
struct ATBP_Player_C_LifeStatusChanged_Params
{
	Tiger_ETigerPlayerLifeStatus                       NewLifeStatus;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnGotPlayerState
struct ATBP_Player_C_OnGotPlayerState_Params
{
};

// Function TBP_Player.TBP_Player_C.OnRep_PowerKit
struct ATBP_Player_C_OnRep_PowerKit_Params
{
};

// Function TBP_Player.TBP_Player_C.OnDodged
struct ATBP_Player_C_OnDodged_Params
{
	bool                                               IsControllingPlayer;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bLaunchedInAir;                                            // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     LaunchDirection;                                           // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      DodgeStage;                                                // 0x0010(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.SpawnBloodDecal
struct ATBP_Player_C_SpawnBloodDecal_Params
{
};

// Function TBP_Player.TBP_Player_C.ReceiveEndPlay
struct ATBP_Player_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnGotScouted
struct ATBP_Player_C_OnGotScouted_Params
{
};

// Function TBP_Player.TBP_Player_C.OnNoLongerScouted
struct ATBP_Player_C_OnNoLongerScouted_Params
{
};

// Function TBP_Player.TBP_Player_C.OnAboutToBeHitByDisplacement
struct ATBP_Player_C_OnAboutToBeHitByDisplacement_Params
{
};

// Function TBP_Player.TBP_Player_C.OnDamageTaken
struct ATBP_Player_C_OnDamageTaken_Params
{
	float                                              DamageTaken;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageInstigator;                                          // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnDoubleJump
struct ATBP_Player_C_OnDoubleJump_Params
{
	struct FVector                                     Direction;                                                 // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnPlayMeleeHitEffects
struct ATBP_Player_C_OnPlayMeleeHitEffects_Params
{
	class UTigerMeleeWeapon*                           WeaponHitBy;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ImpactLocation;                                            // 0x0008(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     HitDirection;                                              // 0x0014(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnStartedPhysicalInteraction
struct ATBP_Player_C_OnStartedPhysicalInteraction_Params
{
	class UClass*                                      PhysInteractionClass;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               bIsTargetPlayer;                                           // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_Player.TBP_Player_C.OnInterruptedPhysicalInteraction
struct ATBP_Player_C_OnInterruptedPhysicalInteraction_Params
{
	class UClass*                                      PhysInteractionClass;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               bIsTargetPlayer;                                           // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_Player.TBP_Player_C.OnFinishedPhysicalInteraction
struct ATBP_Player_C_OnFinishedPhysicalInteraction_Params
{
	class UClass*                                      PhysInteractionClass;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                               bIsTargetPlayer;                                           // 0x0008(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_Player.TBP_Player_C.OnWeaponVisualChangedEvent
struct ATBP_Player_C_OnWeaponVisualChangedEvent_Params
{
};

// Function TBP_Player.TBP_Player_C.OnWallJump
struct ATBP_Player_C_OnWallJump_Params
{
	struct FVector                                     InVelocity;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnClimbStarted
struct ATBP_Player_C_OnClimbStarted_Params
{
	struct FVector                                     InVelocity;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnClimbEnded
struct ATBP_Player_C_OnClimbEnded_Params
{
	struct FVector                                     InVelocity;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnWallGrindStarted
struct ATBP_Player_C_OnWallGrindStarted_Params
{
	struct FVector                                     InVelocity;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnWallGrindEnded
struct ATBP_Player_C_OnWallGrindEnded_Params
{
	struct FVector                                     InVelocity;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnHardLanding
struct ATBP_Player_C_OnHardLanding_Params
{
	struct FVector                                     InVelocity;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnSlideJump
struct ATBP_Player_C_OnSlideJump_Params
{
	struct FVector                                     InVelocity;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnSlidingStarted
struct ATBP_Player_C_OnSlidingStarted_Params
{
	struct FVector                                     InVelocity;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnSlidingEnded
struct ATBP_Player_C_OnSlidingEnded_Params
{
	struct FVector                                     InVelocity;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.OnBecameSpectator
struct ATBP_Player_C_OnBecameSpectator_Params
{
};

// Function TBP_Player.TBP_Player_C.OnBecameGroupMember
struct ATBP_Player_C_OnBecameGroupMember_Params
{
};

// Function TBP_Player.TBP_Player_C.OnStoppedBeingGroupMember
struct ATBP_Player_C_OnStoppedBeingGroupMember_Params
{
};

// Function TBP_Player.TBP_Player_C.BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature
struct ATBP_Player_C_BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature_Params
{
	Tiger_ETigerOutlineMode                            HighestPrioOutline;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.UpdateHolyIncenseEffect
struct ATBP_Player_C_UpdateHolyIncenseEffect_Params
{
	float                                              InDeltaTime;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.IncrementShieldShaderCounter
struct ATBP_Player_C_IncrementShieldShaderCounter_Params
{
};

// Function TBP_Player.TBP_Player_C.DecrementShieldShaderCounter
struct ATBP_Player_C_DecrementShieldShaderCounter_Params
{
};

// Function TBP_Player.TBP_Player_C.IncrementFeedingBloodIndex
struct ATBP_Player_C_IncrementFeedingBloodIndex_Params
{
};

// Function TBP_Player.TBP_Player_C.OnGoneBelowHalfHealth
struct ATBP_Player_C_OnGoneBelowHalfHealth_Params
{
};

// Function TBP_Player.TBP_Player_C.StopDiablerieToDeathTransition
struct ATBP_Player_C_StopDiablerieToDeathTransition_Params
{
};

// Function TBP_Player.TBP_Player_C.ExecuteUbergraph_TBP_Player
struct ATBP_Player_C_ExecuteUbergraph_TBP_Player_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Player.TBP_Player_C.SpeedFullscreenEffectEventDispatch__DelegateSignature
struct ATBP_Player_C_SpeedFullscreenEffectEventDispatch__DelegateSignature_Params
{
	float                                              TravelTime;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsFeedingApproach;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
