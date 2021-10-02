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
//		Name   -> Function TBP_Player.TBP_Player_C.GetWeapon
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class USkeletalMeshComponent*                      OutWeapon                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMeshComponent*                      OutSecondWeapon                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::GetWeapon(class USkeletalMeshComponent** OutWeapon, class USkeletalMeshComponent** OutSecondWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.GetWeapon");

	ATBP_Player_C_GetWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutWeapon != nullptr)
		*OutWeapon = params.OutWeapon;
	if (OutSecondWeapon != nullptr)
		*OutSecondWeapon = params.OutSecondWeapon;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnRedGasPostProcessMaterialLoaded
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UObject*>                             InLoadedObjects                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ATBP_Player_C::OnRedGasPostProcessMaterialLoaded(TArray<class UObject*> InLoadedObjects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnRedGasPostProcessMaterialLoaded");

	ATBP_Player_C_OnRedGasPostProcessMaterialLoaded_Params params;
	params.InLoadedObjects = InLoadedObjects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.QualityOptionChanged
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerGraphicsSettings                      GraphicsSettings                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void ATBP_Player_C::QualityOptionChanged(const struct FTigerGraphicsSettings& GraphicsSettings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.QualityOptionChanged");

	ATBP_Player_C_QualityOptionChanged_Params params;
	params.GraphicsSettings = GraphicsSettings;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.SetupQualityOptions
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::SetupQualityOptions()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.SetupQualityOptions");

	ATBP_Player_C_SetupQualityOptions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.InitHealthBars
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::InitHealthBars()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.InitHealthBars");

	ATBP_Player_C_InitHealthBars_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.UpdateSPCPlayerMaterialCollection
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::UpdateSPCPlayerMaterialCollection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.UpdateSPCPlayerMaterialCollection");

	ATBP_Player_C_UpdateSPCPlayerMaterialCollection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Update Red Gas MPC
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::Update_Red_Gas_MPC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Update Red Gas MPC");

	ATBP_Player_C_Update_Red_Gas_MPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.StartRedGasAudio
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::StartRedGasAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.StartRedGasAudio");

	ATBP_Player_C_StartRedGasAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.StopRedGasAudio
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::StopRedGasAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.StopRedGasAudio");

	ATBP_Player_C_StopRedGasAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.CheckShouldUpdateListenerPosition
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class APlayerController*                           Player_Controller                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ATBP_Player_C::CheckShouldUpdateListenerPosition(class APlayerController* Player_Controller)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.CheckShouldUpdateListenerPosition");

	ATBP_Player_C_CheckShouldUpdateListenerPosition_Params params;
	params.Player_Controller = Player_Controller;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.EnableCharacterlighting
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::EnableCharacterlighting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.EnableCharacterlighting");

	ATBP_Player_C_EnableCharacterlighting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.SetAkAlignmentRTPC
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::SetAkAlignmentRTPC()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.SetAkAlignmentRTPC");

	ATBP_Player_C_SetAkAlignmentRTPC_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.SetLodOnLocalPlayer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::SetLodOnLocalPlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.SetLodOnLocalPlayer");

	ATBP_Player_C_SetLodOnLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.SetAudioListenerOverride
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::SetAudioListenerOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.SetAudioListenerOverride");

	ATBP_Player_C_SetAudioListenerOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.SetDamageTakenAudioSwitch
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::SetDamageTakenAudioSwitch(float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.SetDamageTakenAudioSwitch");

	ATBP_Player_C_SetDamageTakenAudioSwitch_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.StartSlidingAudio
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Player_C::StartSlidingAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.StartSlidingAudio");

	ATBP_Player_C_StartSlidingAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.DetermineOwnerOfProjectile
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerProjectile*                            AsTiger_Projectile                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::DetermineOwnerOfProjectile(class UObject* Object, class ATigerProjectile** AsTiger_Projectile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.DetermineOwnerOfProjectile");

	ATBP_Player_C_DetermineOwnerOfProjectile_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsTiger_Projectile != nullptr)
		*AsTiger_Projectile = params.AsTiger_Projectile;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.SetRTPC:AltitudePlayer
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::SetRTPC_AltitudePlayer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.SetRTPC:AltitudePlayer");

	ATBP_Player_C_SetRTPC_AltitudePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.SetReverbStateOnExit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::SetReverbStateOnExit(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.SetReverbStateOnExit");

	ATBP_Player_C_SetReverbStateOnExit_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.SetReverbStateOnEnter
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::SetReverbStateOnEnter(class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.SetReverbStateOnEnter");

	ATBP_Player_C_SetReverbStateOnEnter_Params params;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.DisableScreenCullSize
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::DisableScreenCullSize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.DisableScreenCullSize");

	ATBP_Player_C_DisableScreenCullSize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.PostLandingAudio
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::PostLandingAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.PostLandingAudio");

	ATBP_Player_C_PostLandingAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.PlayBeingDiablerizedAudio
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Player_C::PlayBeingDiablerizedAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.PlayBeingDiablerizedAudio");

	ATBP_Player_C_PlayBeingDiablerizedAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.SetGroundedAudioState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Condition                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Player_C::SetGroundedAudioState(bool Condition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.SetGroundedAudioState");

	ATBP_Player_C_SetGroundedAudioState_Params params;
	params.Condition = Condition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.PlayDiablerizeAudio
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::PlayDiablerizeAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.PlayDiablerizeAudio");

	ATBP_Player_C_PlayDiablerizeAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.PlayReviveAudio
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::PlayReviveAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.PlayReviveAudio");

	ATBP_Player_C_PlayReviveAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.DisableAllPostProcess
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::DisableAllPostProcess()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.DisableAllPostProcess");

	ATBP_Player_C_DisableAllPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.StopCloseToRedGasAudio
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::StopCloseToRedGasAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.StopCloseToRedGasAudio");

	ATBP_Player_C_StopCloseToRedGasAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.StartCloseToRedGasAudio
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::StartCloseToRedGasAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.StartCloseToRedGasAudio");

	ATBP_Player_C_StartCloseToRedGasAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnTraversalPostProcessEnded
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Player_C::OnTraversalPostProcessEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnTraversalPostProcessEnded");

	ATBP_Player_C_OnTraversalPostProcessEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.UpdateTraversalPostProcess
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   FocusPosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::UpdateTraversalPostProcess(float Duration, float Strength, const struct FVector2D& FocusPosition)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.UpdateTraversalPostProcess");

	ATBP_Player_C_UpdateTraversalPostProcess_Params params;
	params.Duration = Duration;
	params.Strength = Strength;
	params.FocusPosition = FocusPosition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.GetDiablerizeEffectStartTime
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
float ATBP_Player_C::GetDiablerizeEffectStartTime()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.GetDiablerizeEffectStartTime");

	ATBP_Player_C_GetDiablerizeEffectStartTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.DeactivateHeavyChargeFX
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Player_C::DeactivateHeavyChargeFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.DeactivateHeavyChargeFX");

	ATBP_Player_C_DeactivateHeavyChargeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.UpdateAimGlideCosmetic
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::UpdateAimGlideCosmetic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.UpdateAimGlideCosmetic");

	ATBP_Player_C_UpdateAimGlideCosmetic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.DisableSkeletonSmokeEffects
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Player_C::DisableSkeletonSmokeEffects()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.DisableSkeletonSmokeEffects");

	ATBP_Player_C_DisableSkeletonSmokeEffects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.SetupCharacterDuplicates
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class USkeletalMeshComponent*                      SkeletalMeshOriginal                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::SetupCharacterDuplicates(class USkeletalMeshComponent* SkeletalMeshOriginal)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.SetupCharacterDuplicates");

	ATBP_Player_C_SetupCharacterDuplicates_Params params;
	params.SkeletalMeshOriginal = SkeletalMeshOriginal;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.SwiftStrikeFX
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Player_C::SwiftStrikeFX()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.SwiftStrikeFX");

	ATBP_Player_C_SwiftStrikeFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnGroupMemberLifeStatusChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPlayerLifeStatus                       NewLifeStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnGroupMemberLifeStatusChanged(Tiger_ETigerPlayerLifeStatus NewLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnGroupMemberLifeStatusChanged");

	ATBP_Player_C_OnGroupMemberLifeStatusChanged_Params params;
	params.NewLifeStatus = NewLifeStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.UpdateInRedGasEffect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delta_Time                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::UpdateInRedGasEffect(float Delta_Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.UpdateInRedGasEffect");

	ATBP_Player_C_UpdateInRedGasEffect_Params params;
	params.Delta_Time = Delta_Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.UpdateDownedFX
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DeltaTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::UpdateDownedFX(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.UpdateDownedFX");

	ATBP_Player_C_UpdateDownedFX_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.IsLocalClient
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Client                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Player_C::IsLocalClient(bool* Client)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.IsLocalClient");

	ATBP_Player_C_IsLocalClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Client != nullptr)
		*Client = params.Client;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.UpdateFeedingFX
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::UpdateFeedingFX(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.UpdateFeedingFX");

	ATBP_Player_C_UpdateFeedingFX_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Set Rain Amount
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Player_C::Set_Rain_Amount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Set Rain Amount");

	ATBP_Player_C_Set_Rain_Amount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.StunVisualEffect
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      self2                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::StunVisualEffect(class AActor* self2)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.StunVisualEffect");

	ATBP_Player_C_StunVisualEffect_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Player_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.UserConstructionScript");

	ATBP_Player_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_3__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_3__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_3__FinishedFunc");

	ATBP_Player_C_Timeline_3__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_3__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_3__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_3__UpdateFunc");

	ATBP_Player_C_Timeline_3__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_4__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_4__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_4__FinishedFunc");

	ATBP_Player_C_Timeline_4__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_4__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_4__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_4__UpdateFunc");

	ATBP_Player_C_Timeline_4__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_0__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_0__FinishedFunc");

	ATBP_Player_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_0__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_0__UpdateFunc");

	ATBP_Player_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_1__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_1__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_1__FinishedFunc");

	ATBP_Player_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_1__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_1__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_1__UpdateFunc");

	ATBP_Player_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_2__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_2__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_2__FinishedFunc");

	ATBP_Player_C_Timeline_2__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_2__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_2__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_2__UpdateFunc");

	ATBP_Player_C_Timeline_2__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_7__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_7__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_7__FinishedFunc");

	ATBP_Player_C_Timeline_7__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_7__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_7__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_7__UpdateFunc");

	ATBP_Player_C_Timeline_7__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_8__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_8__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_8__FinishedFunc");

	ATBP_Player_C_Timeline_8__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_8__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_8__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_8__UpdateFunc");

	ATBP_Player_C_Timeline_8__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.ScopeTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::ScopeTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.ScopeTimeline__FinishedFunc");

	ATBP_Player_C_ScopeTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.ScopeTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::ScopeTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.ScopeTimeline__UpdateFunc");

	ATBP_Player_C_ScopeTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_13__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_13__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_13__FinishedFunc");

	ATBP_Player_C_Timeline_13__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_13__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_13__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_13__UpdateFunc");

	ATBP_Player_C_Timeline_13__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_13__InvulnerabilityTrigger__EventFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_13__InvulnerabilityTrigger__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_13__InvulnerabilityTrigger__EventFunc");

	ATBP_Player_C_Timeline_13__InvulnerabilityTrigger__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_13__ToggleCharacterVisibility__EventFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_13__ToggleCharacterVisibility__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_13__ToggleCharacterVisibility__EventFunc");

	ATBP_Player_C_Timeline_13__ToggleCharacterVisibility__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_Diablerize_Short__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_Diablerize_Short__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_Diablerize_Short__FinishedFunc");

	ATBP_Player_C_Timeline_Diablerize_Short__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Timeline_Diablerize_Short__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Timeline_Diablerize_Short__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Timeline_Diablerize_Short__UpdateFunc");

	ATBP_Player_C_Timeline_Diablerize_Short__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Check Dodge__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Check_Dodge__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Check Dodge__FinishedFunc");

	ATBP_Player_C_Check_Dodge__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Check Dodge__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::Check_Dodge__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Check Dodge__UpdateFunc");

	ATBP_Player_C_Check_Dodge__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.MuzzleFlashLightTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::MuzzleFlashLightTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.MuzzleFlashLightTimeline__FinishedFunc");

	ATBP_Player_C_MuzzleFlashLightTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.MuzzleFlashLightTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::MuzzleFlashLightTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.MuzzleFlashLightTimeline__UpdateFunc");

	ATBP_Player_C_MuzzleFlashLightTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.MuzzleFlashLight2Timeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::MuzzleFlashLight2Timeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.MuzzleFlashLight2Timeline__FinishedFunc");

	ATBP_Player_C_MuzzleFlashLight2Timeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.MuzzleFlashLight2Timeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::MuzzleFlashLight2Timeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.MuzzleFlashLight2Timeline__UpdateFunc");

	ATBP_Player_C_MuzzleFlashLight2Timeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OutlineTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::OutlineTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OutlineTimeline__FinishedFunc");

	ATBP_Player_C_OutlineTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OutlineTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::OutlineTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OutlineTimeline__UpdateFunc");

	ATBP_Player_C_OutlineTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.GasDebuffTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::GasDebuffTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.GasDebuffTimeline__FinishedFunc");

	ATBP_Player_C_GasDebuffTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.GasDebuffTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::GasDebuffTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.GasDebuffTimeline__UpdateFunc");

	ATBP_Player_C_GasDebuffTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.GasDebuffBurnTimeline__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::GasDebuffBurnTimeline__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.GasDebuffBurnTimeline__FinishedFunc");

	ATBP_Player_C_GasDebuffBurnTimeline__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.GasDebuffBurnTimeline__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Player_C::GasDebuffBurnTimeline__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.GasDebuffBurnTimeline__UpdateFunc");

	ATBP_Player_C_GasDebuffBurnTimeline__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.InpActEvt_Left_K2Node_InputKeyEvent_4
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ATBP_Player_C::InpActEvt_Left_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.InpActEvt_Left_K2Node_InputKeyEvent_4");

	ATBP_Player_C_InpActEvt_Left_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.InpActEvt_Right_K2Node_InputKeyEvent_3
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ATBP_Player_C::InpActEvt_Right_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.InpActEvt_Right_K2Node_InputKeyEvent_3");

	ATBP_Player_C_InpActEvt_Right_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_2
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ATBP_Player_C::InpActEvt_PageUp_K2Node_InputKeyEvent_2(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.InpActEvt_PageUp_K2Node_InputKeyEvent_2");

	ATBP_Player_C_InpActEvt_PageUp_K2Node_InputKeyEvent_2_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ATBP_Player_C::InpActEvt_PageDown_K2Node_InputKeyEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.InpActEvt_PageDown_K2Node_InputKeyEvent_1");

	ATBP_Player_C_InpActEvt_PageDown_K2Node_InputKeyEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnLocalDisciplineUse
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FDisciplineUse                              DisciplineUse                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		float                                              ExpectedDuration                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnLocalDisciplineUse(const struct FDisciplineUse& DisciplineUse, float ExpectedDuration)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnLocalDisciplineUse");

	ATBP_Player_C_OnLocalDisciplineUse_Params params;
	params.DisciplineUse = DisciplineUse;
	params.ExpectedDuration = ExpectedDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.DisciplineJumpFinished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_Player_C::DisciplineJumpFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.DisciplineJumpFinished");

	ATBP_Player_C_DisciplineJumpFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnLocalDisciplineUseFailed
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FDisciplineUse                              DisciplineUse                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ATBP_Player_C::OnLocalDisciplineUseFailed(const struct FDisciplineUse& DisciplineUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnLocalDisciplineUseFailed");

	ATBP_Player_C_OnLocalDisciplineUseFailed_Params params;
	params.DisciplineUse = DisciplineUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.LocalPlayer BeginPlay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_Player_C::LocalPlayer_BeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.LocalPlayer BeginPlay");

	ATBP_Player_C_LocalPlayer_BeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnLocalSprintStarted
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Player_C::OnLocalSprintStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnLocalSprintStarted");

	ATBP_Player_C_OnLocalSprintStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnLocalSprintEnded
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Player_C::OnLocalSprintEnded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnLocalSprintEnded");

	ATBP_Player_C_OnLocalSprintEnded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnLocalEnteredIndoor
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Player_C::OnLocalEnteredIndoor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnLocalEnteredIndoor");

	ATBP_Player_C_OnLocalEnteredIndoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnLocalExitedIndoor
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Player_C::OnLocalExitedIndoor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnLocalExitedIndoor");

	ATBP_Player_C_OnLocalExitedIndoor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnStartedFeedingApproach
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              TravelTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnStartedFeedingApproach(float TravelTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnStartedFeedingApproach");

	ATBP_Player_C_OnStartedFeedingApproach_Params params;
	params.TravelTime = TravelTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnFeedingDoneEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bTargetIsDrained                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class ATigerCharacter*                             InTargetFedOn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnFeedingDoneEvent(bool bTargetIsDrained, class ATigerCharacter* InTargetFedOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnFeedingDoneEvent");

	ATBP_Player_C_OnFeedingDoneEvent_Params params;
	params.bTargetIsDrained = bTargetIsDrained;
	params.InTargetFedOn = InTargetFedOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.BndEvt__AudioTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::BndEvt__AudioTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.BndEvt__AudioTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ATBP_Player_C_BndEvt__AudioTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnTigerMovementModeChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EMovementMode>                  PrevMovementMode                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerMovementMode                           PrevCustomMode                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<Engine_EMovementMode>                  NewMovementMode                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerMovementMode                           NewCustomMode                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnTigerMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, Tiger_ETigerMovementMode PrevCustomMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, Tiger_ETigerMovementMode NewCustomMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnTigerMovementModeChanged");

	ATBP_Player_C_OnTigerMovementModeChanged_Params params;
	params.PrevMovementMode = PrevMovementMode;
	params.PrevCustomMode = PrevCustomMode;
	params.NewMovementMode = NewMovementMode;
	params.NewCustomMode = NewCustomMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnExtraHealthDepleted
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Player_C::OnExtraHealthDepleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnExtraHealthDepleted");

	ATBP_Player_C_OnExtraHealthDepleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnStartedAimingCameraTransition
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Player_C::OnStartedAimingCameraTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnStartedAimingCameraTransition");

	ATBP_Player_C_OnStartedAimingCameraTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnStoppedAimingCameraTransition
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Player_C::OnStoppedAimingCameraTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnStoppedAimingCameraTransition");

	ATBP_Player_C_OnStoppedAimingCameraTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnMasqueradeStateChanged_Event_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsMasqueradeBreached                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		Tiger_ETigerAIPlayerAction                         InPlayerAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnMasqueradeStateChanged_Event_1(bool InIsMasqueradeBreached, Tiger_ETigerAIPlayerAction InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnMasqueradeStateChanged_Event_1");

	ATBP_Player_C_OnMasqueradeStateChanged_Event_1_Params params;
	params.InIsMasqueradeBreached = InIsMasqueradeBreached;
	params.InPlayerAction = InPlayerAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.ReceiveActorBeginOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.ReceiveActorBeginOverlap");

	ATBP_Player_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.ReceiveActorEndOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.ReceiveActorEndOverlap");

	ATBP_Player_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnShieldDepleted
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnShieldDepleted(class ATigerPlayer* InInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnShieldDepleted");

	ATBP_Player_C_OnShieldDepleted_Params params;
	params.InInstigator = InInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnChangedAkAlignment
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		Tiger_ETigerCharacterAkAlignmentType               InAlignment                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnChangedAkAlignment(Tiger_ETigerCharacterAkAlignmentType InAlignment)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnChangedAkAlignment");

	ATBP_Player_C_OnChangedAkAlignment_Params params;
	params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnModEquipped
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Player_C::OnModEquipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnModEquipped");

	ATBP_Player_C_OnModEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.Client On Mod Equipped
//		Flags  -> (Net, NetClient, BlueprintCallable, BlueprintEvent)
void ATBP_Player_C::Client_On_Mod_Equipped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.Client On Mod Equipped");

	ATBP_Player_C_Client_On_Mod_Equipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.K2_OnEndViewTarget
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class APlayerController*                           PC                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::K2_OnEndViewTarget(class APlayerController* PC)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.K2_OnEndViewTarget");

	ATBP_Player_C_K2_OnEndViewTarget_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.LocalPlayerTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              InDeltaSeconds                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::LocalPlayerTick(float InDeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.LocalPlayerTick");

	ATBP_Player_C_LocalPlayerTick_Params params;
	params.InDeltaSeconds = InDeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Player_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.ReceiveBeginPlay");

	ATBP_Player_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnDisciplineUseSucceeded
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FDisciplineUse                              DisciplineUse                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ATBP_Player_C::OnDisciplineUseSucceeded(const struct FDisciplineUse& DisciplineUse)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnDisciplineUseSucceeded");

	ATBP_Player_C_OnDisciplineUseSucceeded_Params params;
	params.DisciplineUse = DisciplineUse;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnLanded
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ATBP_Player_C::OnLanded(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnLanded");

	ATBP_Player_C_OnLanded_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.ReceivePossessed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::ReceivePossessed(class AController* NewController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.ReceivePossessed");

	ATBP_Player_C_ReceivePossessed_Params params;
	params.NewController = NewController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnShowDamageAmount
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FVector                                     InHitLocation                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                InDamageColor                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InTotalDamageAmount                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InHealthDamageAmount                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInHasExtraHealth                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bInHasShield                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              InRangedDamageFalloffPercent                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnShowDamageAmount(const struct FVector& InHitLocation, const struct FLinearColor& InDamageColor, int InTotalDamageAmount, int InHealthDamageAmount, bool bInHasExtraHealth, bool bInHasShield, float InRangedDamageFalloffPercent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnShowDamageAmount");

	ATBP_Player_C_OnShowDamageAmount_Params params;
	params.InHitLocation = InHitLocation;
	params.InDamageColor = InDamageColor;
	params.InTotalDamageAmount = InTotalDamageAmount;
	params.InHealthDamageAmount = InHealthDamageAmount;
	params.bInHasExtraHealth = bInHasExtraHealth;
	params.bInHasShield = bInHasShield;
	params.InRangedDamageFalloffPercent = InRangedDamageFalloffPercent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnWeaponFired
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bSecondaryWeaponFired                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Player_C::OnWeaponFired(bool bSecondaryWeaponFired)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnWeaponFired");

	ATBP_Player_C_OnWeaponFired_Params params;
	params.bSecondaryWeaponFired = bSecondaryWeaponFired;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnRep_PlayerClan
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Player_C::OnRep_PlayerClan()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnRep_PlayerClan");

	ATBP_Player_C_OnRep_PlayerClan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.LifeStatusChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPlayerLifeStatus                       NewLifeStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::LifeStatusChanged(Tiger_ETigerPlayerLifeStatus NewLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.LifeStatusChanged");

	ATBP_Player_C_LifeStatusChanged_Params params;
	params.NewLifeStatus = NewLifeStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnGotPlayerState
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Player_C::OnGotPlayerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnGotPlayerState");

	ATBP_Player_C_OnGotPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnRep_PowerKit
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Player_C::OnRep_PowerKit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnRep_PowerKit");

	ATBP_Player_C_OnRep_PowerKit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnDodged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               IsControllingPlayer                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bLaunchedInAir                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FVector                                     LaunchDirection                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		unsigned char                                      DodgeStage                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnDodged(bool IsControllingPlayer, bool bLaunchedInAir, const struct FVector& LaunchDirection, unsigned char DodgeStage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnDodged");

	ATBP_Player_C_OnDodged_Params params;
	params.IsControllingPlayer = IsControllingPlayer;
	params.bLaunchedInAir = bLaunchedInAir;
	params.LaunchDirection = LaunchDirection;
	params.DodgeStage = DodgeStage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.SpawnBloodDecal
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Player_C::SpawnBloodDecal()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.SpawnBloodDecal");

	ATBP_Player_C_SpawnBloodDecal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.ReceiveEndPlay");

	ATBP_Player_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnGotScouted
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Player_C::OnGotScouted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnGotScouted");

	ATBP_Player_C_OnGotScouted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnNoLongerScouted
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Player_C::OnNoLongerScouted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnNoLongerScouted");

	ATBP_Player_C_OnNoLongerScouted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnAboutToBeHitByDisplacement
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Player_C::OnAboutToBeHitByDisplacement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnAboutToBeHitByDisplacement");

	ATBP_Player_C_OnAboutToBeHitByDisplacement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnDamageTaken
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
//		float                                              DamageTaken                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageInstigator                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnDamageTaken(float DamageTaken, class AActor* DamageInstigator)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnDamageTaken");

	ATBP_Player_C_OnDamageTaken_Params params;
	params.DamageTaken = DamageTaken;
	params.DamageInstigator = DamageInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnDoubleJump
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FVector                                     Direction                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnDoubleJump(const struct FVector& Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnDoubleJump");

	ATBP_Player_C_OnDoubleJump_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnPlayMeleeHitEffects
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class UTigerMeleeWeapon*                           WeaponHitBy                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ImpactLocation                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     HitDirection                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnPlayMeleeHitEffects(class UTigerMeleeWeapon* WeaponHitBy, const struct FVector& ImpactLocation, const struct FVector& HitDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnPlayMeleeHitEffects");

	ATBP_Player_C_OnPlayMeleeHitEffects_Params params;
	params.WeaponHitBy = WeaponHitBy;
	params.ImpactLocation = ImpactLocation;
	params.HitDirection = HitDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnStartedPhysicalInteraction
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UClass*                                      PhysInteractionClass                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               bIsTargetPlayer                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Player_C::OnStartedPhysicalInteraction(class UClass* PhysInteractionClass, bool bIsTargetPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnStartedPhysicalInteraction");

	ATBP_Player_C_OnStartedPhysicalInteraction_Params params;
	params.PhysInteractionClass = PhysInteractionClass;
	params.bIsTargetPlayer = bIsTargetPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnInterruptedPhysicalInteraction
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UClass*                                      PhysInteractionClass                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               bIsTargetPlayer                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Player_C::OnInterruptedPhysicalInteraction(class UClass* PhysInteractionClass, bool bIsTargetPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnInterruptedPhysicalInteraction");

	ATBP_Player_C_OnInterruptedPhysicalInteraction_Params params;
	params.PhysInteractionClass = PhysInteractionClass;
	params.bIsTargetPlayer = bIsTargetPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnFinishedPhysicalInteraction
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UClass*                                      PhysInteractionClass                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		bool                                               bIsTargetPlayer                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Player_C::OnFinishedPhysicalInteraction(class UClass* PhysInteractionClass, bool bIsTargetPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnFinishedPhysicalInteraction");

	ATBP_Player_C_OnFinishedPhysicalInteraction_Params params;
	params.PhysInteractionClass = PhysInteractionClass;
	params.bIsTargetPlayer = bIsTargetPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnWeaponVisualChangedEvent
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Player_C::OnWeaponVisualChangedEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnWeaponVisualChangedEvent");

	ATBP_Player_C_OnWeaponVisualChangedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnWallJump
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FVector                                     InVelocity                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnWallJump(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnWallJump");

	ATBP_Player_C_OnWallJump_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnClimbStarted
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FVector                                     InVelocity                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnClimbStarted(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnClimbStarted");

	ATBP_Player_C_OnClimbStarted_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnClimbEnded
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FVector                                     InVelocity                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnClimbEnded(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnClimbEnded");

	ATBP_Player_C_OnClimbEnded_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnWallGrindStarted
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FVector                                     InVelocity                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnWallGrindStarted(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnWallGrindStarted");

	ATBP_Player_C_OnWallGrindStarted_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnWallGrindEnded
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FVector                                     InVelocity                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnWallGrindEnded(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnWallGrindEnded");

	ATBP_Player_C_OnWallGrindEnded_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnHardLanding
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FVector                                     InVelocity                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnHardLanding(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnHardLanding");

	ATBP_Player_C_OnHardLanding_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnSlideJump
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FVector                                     InVelocity                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnSlideJump(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnSlideJump");

	ATBP_Player_C_OnSlideJump_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnSlidingStarted
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FVector                                     InVelocity                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnSlidingStarted(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnSlidingStarted");

	ATBP_Player_C_OnSlidingStarted_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnSlidingEnded
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FVector                                     InVelocity                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::OnSlidingEnded(const struct FVector& InVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnSlidingEnded");

	ATBP_Player_C_OnSlidingEnded_Params params;
	params.InVelocity = InVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnBecameSpectator
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Player_C::OnBecameSpectator()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnBecameSpectator");

	ATBP_Player_C_OnBecameSpectator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnBecameGroupMember
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Player_C::OnBecameGroupMember()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnBecameGroupMember");

	ATBP_Player_C_OnBecameGroupMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnStoppedBeingGroupMember
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Player_C::OnStoppedBeingGroupMember()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnStoppedBeingGroupMember");

	ATBP_Player_C_OnStoppedBeingGroupMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		Tiger_ETigerOutlineMode                            HighestPrioOutline                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature(Tiger_ETigerOutlineMode HighestPrioOutline)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature");

	ATBP_Player_C_BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature_Params params;
	params.HighestPrioOutline = HighestPrioOutline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.UpdateHolyIncenseEffect
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		float                                              InDeltaTime                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::UpdateHolyIncenseEffect(float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.UpdateHolyIncenseEffect");

	ATBP_Player_C_UpdateHolyIncenseEffect_Params params;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.IncrementShieldShaderCounter
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_Player_C::IncrementShieldShaderCounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.IncrementShieldShaderCounter");

	ATBP_Player_C_IncrementShieldShaderCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.DecrementShieldShaderCounter
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_Player_C::DecrementShieldShaderCounter()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.DecrementShieldShaderCounter");

	ATBP_Player_C_DecrementShieldShaderCounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.IncrementFeedingBloodIndex
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Player_C::IncrementFeedingBloodIndex()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.IncrementFeedingBloodIndex");

	ATBP_Player_C_IncrementFeedingBloodIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.OnGoneBelowHalfHealth
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Player_C::OnGoneBelowHalfHealth()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.OnGoneBelowHalfHealth");

	ATBP_Player_C_OnGoneBelowHalfHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.StopDiablerieToDeathTransition
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_Player_C::StopDiablerieToDeathTransition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.StopDiablerieToDeathTransition");

	ATBP_Player_C_StopDiablerieToDeathTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.ExecuteUbergraph_TBP_Player
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Player_C::ExecuteUbergraph_TBP_Player(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.ExecuteUbergraph_TBP_Player");

	ATBP_Player_C_ExecuteUbergraph_TBP_Player_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Player.TBP_Player_C.SpeedFullscreenEffectEventDispatch__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              TravelTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsFeedingApproach                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Player_C::SpeedFullscreenEffectEventDispatch__DelegateSignature(float TravelTime, bool bIsFeedingApproach)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Player.TBP_Player_C.SpeedFullscreenEffectEventDispatch__DelegateSignature");

	ATBP_Player_C_SpeedFullscreenEffectEventDispatch__DelegateSignature_Params params;
	params.TravelTime = TravelTime;
	params.bIsFeedingApproach = bIsFeedingApproach;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
