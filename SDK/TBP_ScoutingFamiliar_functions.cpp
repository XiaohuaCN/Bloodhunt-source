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
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.CreateInWorldWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       OwningPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ScoutingFamiliar_C::CreateInWorldWidget(class APawn* OwningPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.CreateInWorldWidget");

	ATBP_ScoutingFamiliar_C_CreateInWorldWidget_Params params;
	params.OwningPawn = OwningPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Ravaging Bats Trait
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerPlayer*                                Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ScoutingFamiliar_C::Ravaging_Bats_Trait(class AActor* DamagedActor, class AActor* DamageCauser, class ATigerPlayer* Player)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Ravaging Bats Trait");

	ATBP_ScoutingFamiliar_C_Ravaging_Bats_Trait_Params params;
	params.DamagedActor = DamagedActor;
	params.DamageCauser = DamageCauser;
	params.Player = Player;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.StartScanAudio
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ScoutingFamiliar_C::StartScanAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.StartScanAudio");

	ATBP_ScoutingFamiliar_C_StartScanAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ColorCodeEffect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UParticleSystemComponent*                    ParticleComponentToColor                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bShouldOverrideDefaultColor                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FLinearColor                                StandardColorOverride                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                EnemyColorOverride                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bShouldOverrideEnemyCoor                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_ScoutingFamiliar_C::ColorCodeEffect(class UParticleSystemComponent* ParticleComponentToColor, bool bShouldOverrideDefaultColor, const struct FLinearColor& StandardColorOverride, const struct FLinearColor& EnemyColorOverride, bool bShouldOverrideEnemyCoor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ColorCodeEffect");

	ATBP_ScoutingFamiliar_C_ColorCodeEffect_Params params;
	params.ParticleComponentToColor = ParticleComponentToColor;
	params.bShouldOverrideDefaultColor = bShouldOverrideDefaultColor;
	params.StandardColorOverride = StandardColorOverride;
	params.EnemyColorOverride = EnemyColorOverride;
	params.bShouldOverrideEnemyCoor = bShouldOverrideEnemyCoor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.SpawnEmitterColorCoded
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UParticleSystem*                             InParticleAssetToSpawn                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTransform                                  InRelativeTransform                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FName                                       InAttachPointName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USceneComponent*                             InComponentAttachedTo                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInShouldSpawnForEnemy                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bInShouldSpawnForAlly                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UParticleSystemComponent*                    SpawnedParticle                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ScoutingFamiliar_C::SpawnEmitterColorCoded(class UParticleSystem* InParticleAssetToSpawn, const struct FTransform& InRelativeTransform, const struct FName& InAttachPointName, class USceneComponent* InComponentAttachedTo, bool bInShouldSpawnForEnemy, bool bInShouldSpawnForAlly, class UParticleSystemComponent** SpawnedParticle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.SpawnEmitterColorCoded");

	ATBP_ScoutingFamiliar_C_SpawnEmitterColorCoded_Params params;
	params.InParticleAssetToSpawn = InParticleAssetToSpawn;
	params.InRelativeTransform = InRelativeTransform;
	params.InAttachPointName = InAttachPointName;
	params.InComponentAttachedTo = InComponentAttachedTo;
	params.bInShouldSpawnForEnemy = bInShouldSpawnForEnemy;
	params.bInShouldSpawnForAlly = bInShouldSpawnForAlly;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (SpawnedParticle != nullptr)
		*SpawnedParticle = params.SpawnedParticle;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Deactivate Projectile Effects
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ScoutingFamiliar_C::Deactivate_Projectile_Effects()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Deactivate Projectile Effects");

	ATBP_ScoutingFamiliar_C_Deactivate_Projectile_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Activate Projectile Effects
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ScoutingFamiliar_C::Activate_Projectile_Effects()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Activate Projectile Effects");

	ATBP_ScoutingFamiliar_C_Activate_Projectile_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Spawn Projectile Trail
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ScoutingFamiliar_C::Spawn_Projectile_Trail()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Spawn Projectile Trail");

	ATBP_ScoutingFamiliar_C_Spawn_Projectile_Trail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Despawn Projectile Trail
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_ScoutingFamiliar_C::Despawn_Projectile_Trail()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Despawn Projectile Trail");

	ATBP_ScoutingFamiliar_C_Despawn_Projectile_Trail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Try Hide World Marker Detection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ScoutingFamiliar_C::Try_Hide_World_Marker_Detection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Try Hide World Marker Detection");

	ATBP_ScoutingFamiliar_C_Try_Hide_World_Marker_Detection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Try Show World Marker Detection
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ScoutingFamiliar_C::Try_Show_World_Marker_Detection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Try Show World Marker Detection");

	ATBP_ScoutingFamiliar_C_Try_Show_World_Marker_Detection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.GetWorldMarkerWidget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsWorldMarkerClass                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTBP_UI_Discipline_Scout_WorldMarker_C*      WorldMarker                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ScoutingFamiliar_C::GetWorldMarkerWidget(bool* bIsWorldMarkerClass, class UTBP_UI_Discipline_Scout_WorldMarker_C** WorldMarker)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.GetWorldMarkerWidget");

	ATBP_ScoutingFamiliar_C_GetWorldMarkerWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsWorldMarkerClass != nullptr)
		*bIsWorldMarkerClass = params.bIsWorldMarkerClass;
	if (WorldMarker != nullptr)
		*WorldMarker = params.WorldMarker;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Toggle WorldMarker Detection State
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ScoutingFamiliar_C::Toggle_WorldMarker_Detection_State()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Toggle WorldMarker Detection State");

	ATBP_ScoutingFamiliar_C_Toggle_WorldMarker_Detection_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsCharacterFriendlyWithDisciplineCaster
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ATigerCharacter*                             Potentially_Friendly_Character                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Is_Friendly                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_ScoutingFamiliar_C::IsCharacterFriendlyWithDisciplineCaster(class ATigerCharacter* Potentially_Friendly_Character, bool* Is_Friendly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsCharacterFriendlyWithDisciplineCaster");

	ATBP_ScoutingFamiliar_C_IsCharacterFriendlyWithDisciplineCaster_Params params;
	params.Potentially_Friendly_Character = Potentially_Friendly_Character;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Friendly != nullptr)
		*Is_Friendly = params.Is_Friendly;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsLocallyControlled
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Is_Locally_Controlled                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_ScoutingFamiliar_C::IsLocallyControlled(bool* Is_Locally_Controlled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsLocallyControlled");

	ATBP_ScoutingFamiliar_C_IsLocallyControlled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Locally_Controlled != nullptr)
		*Is_Locally_Controlled = params.Is_Locally_Controlled;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.GetScoutingDistanceToOwnerLimit
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              MaxScoutingDistance                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ScoutingFamiliar_C::GetScoutingDistanceToOwnerLimit(float* MaxScoutingDistance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.GetScoutingDistanceToOwnerLimit");

	ATBP_ScoutingFamiliar_C_GetScoutingDistanceToOwnerLimit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MaxScoutingDistance != nullptr)
		*MaxScoutingDistance = params.MaxScoutingDistance;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.AddRevealedChar
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Time                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ScoutingFamiliar_C::AddRevealedChar(class ATigerCharacter* Character, float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.AddRevealedChar");

	ATBP_ScoutingFamiliar_C_AddRevealedChar_Params params;
	params.Character = Character;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.PlaySound
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Audio                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ScoutingFamiliar_C::PlaySound(class UAkAudioEvent* Audio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.PlaySound");

	ATBP_ScoutingFamiliar_C_PlaySound_Params params;
	params.Audio = Audio;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsServerOrOwner
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               Is_Owner_Or_Server                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_ScoutingFamiliar_C::IsServerOrOwner(bool* Is_Owner_Or_Server)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsServerOrOwner");

	ATBP_ScoutingFamiliar_C_IsServerOrOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Owner_Or_Server != nullptr)
		*Is_Owner_Or_Server = params.Is_Owner_Or_Server;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BndEvt__ScanSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ATBP_ScoutingFamiliar_C::BndEvt__ScanSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BndEvt__ScanSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature");

	ATBP_ScoutingFamiliar_C_BndEvt__ScanSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;
	params.bFromSweep = bFromSweep;
	params.SweepResult = SweepResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BndEvt__ScanSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ScoutingFamiliar_C::BndEvt__ScanSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BndEvt__ScanSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ATBP_ScoutingFamiliar_C_BndEvt__ScanSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
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
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ActivateScouting
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_ScoutingFamiliar_C::ActivateScouting()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ActivateScouting");

	ATBP_ScoutingFamiliar_C_ActivateScouting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ActivateFeedback
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_ScoutingFamiliar_C::ActivateFeedback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ActivateFeedback");

	ATBP_ScoutingFamiliar_C_ActivateFeedback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_ScoutingFamiliar_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ReceiveBeginPlay");

	ATBP_ScoutingFamiliar_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ReceiveDestroyed
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_ScoutingFamiliar_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ReceiveDestroyed");

	ATBP_ScoutingFamiliar_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.TickRevealedCharacters
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_ScoutingFamiliar_C::TickRevealedCharacters()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.TickRevealedCharacters");

	ATBP_ScoutingFamiliar_C_TickRevealedCharacters_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnTargetLocationChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_ScoutingFamiliar_C::OnTargetLocationChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnTargetLocationChanged");

	ATBP_ScoutingFamiliar_C_OnTargetLocationChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnScoutStartedReturnToOwner
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_ScoutingFamiliar_C::OnScoutStartedReturnToOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnScoutStartedReturnToOwner");

	ATBP_ScoutingFamiliar_C_OnScoutStartedReturnToOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnArrivedAtOwner
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_ScoutingFamiliar_C::OnArrivedAtOwner()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnArrivedAtOwner");

	ATBP_ScoutingFamiliar_C_OnArrivedAtOwner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BatDestroy
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_ScoutingFamiliar_C::BatDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BatDestroy");

	ATBP_ScoutingFamiliar_C_BatDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ExecuteUbergraph_TBP_ScoutingFamiliar
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ScoutingFamiliar_C::ExecuteUbergraph_TBP_ScoutingFamiliar(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ExecuteUbergraph_TBP_ScoutingFamiliar");

	ATBP_ScoutingFamiliar_C_ExecuteUbergraph_TBP_ScoutingFamiliar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
