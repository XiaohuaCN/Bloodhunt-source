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

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.CreateInWorldWidget
struct ATBP_ScoutingFamiliar_C_CreateInWorldWidget_Params
{
	class APawn*                                       OwningPawn;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Ravaging Bats Trait
struct ATBP_ScoutingFamiliar_C_Ravaging_Bats_Trait_Params
{
	class AActor*                                      DamagedActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayer*                                Player;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.StartScanAudio
struct ATBP_ScoutingFamiliar_C_StartScanAudio_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ColorCodeEffect
struct ATBP_ScoutingFamiliar_C_ColorCodeEffect_Params
{
	class UParticleSystemComponent*                    ParticleComponentToColor;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldOverrideDefaultColor;                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                                StandardColorOverride;                                     // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                EnemyColorOverride;                                        // 0x001C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldOverrideEnemyCoor;                                  // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.SpawnEmitterColorCoded
struct ATBP_ScoutingFamiliar_C_SpawnEmitterColorCoded_Params
{
	class UParticleSystem*                             InParticleAssetToSpawn;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                                  InRelativeTransform;                                       // 0x0010(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FName                                       InAttachPointName;                                         // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             InComponentAttachedTo;                                     // 0x0048(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInShouldSpawnForEnemy;                                    // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bInShouldSpawnForAlly;                                     // 0x0051(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UParticleSystemComponent*                    SpawnedParticle;                                           // 0x0058(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Deactivate Projectile Effects
struct ATBP_ScoutingFamiliar_C_Deactivate_Projectile_Effects_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Activate Projectile Effects
struct ATBP_ScoutingFamiliar_C_Activate_Projectile_Effects_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Spawn Projectile Trail
struct ATBP_ScoutingFamiliar_C_Spawn_Projectile_Trail_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Despawn Projectile Trail
struct ATBP_ScoutingFamiliar_C_Despawn_Projectile_Trail_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Try Hide World Marker Detection
struct ATBP_ScoutingFamiliar_C_Try_Hide_World_Marker_Detection_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Try Show World Marker Detection
struct ATBP_ScoutingFamiliar_C_Try_Show_World_Marker_Detection_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.GetWorldMarkerWidget
struct ATBP_ScoutingFamiliar_C_GetWorldMarkerWidget_Params
{
	bool                                               bIsWorldMarkerClass;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UTBP_UI_Discipline_Scout_WorldMarker_C*      WorldMarker;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.Toggle WorldMarker Detection State
struct ATBP_ScoutingFamiliar_C_Toggle_WorldMarker_Detection_State_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsCharacterFriendlyWithDisciplineCaster
struct ATBP_ScoutingFamiliar_C_IsCharacterFriendlyWithDisciplineCaster_Params
{
	class ATigerCharacter*                             Potentially_Friendly_Character;                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Friendly;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsLocallyControlled
struct ATBP_ScoutingFamiliar_C_IsLocallyControlled_Params
{
	bool                                               Is_Locally_Controlled;                                     // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.GetScoutingDistanceToOwnerLimit
struct ATBP_ScoutingFamiliar_C_GetScoutingDistanceToOwnerLimit_Params
{
	float                                              MaxScoutingDistance;                                       // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.AddRevealedChar
struct ATBP_ScoutingFamiliar_C_AddRevealedChar_Params
{
	class ATigerCharacter*                             Character;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Time;                                                      // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.PlaySound
struct ATBP_ScoutingFamiliar_C_PlaySound_Params
{
	class UAkAudioEvent*                               Audio;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.IsServerOrOwner
struct ATBP_ScoutingFamiliar_C_IsServerOrOwner_Params
{
	bool                                               Is_Owner_Or_Server;                                        // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BndEvt__ScanSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct ATBP_ScoutingFamiliar_C_BndEvt__ScanSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bFromSweep;                                                // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  SweepResult;                                               // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BndEvt__ScanSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
struct ATBP_ScoutingFamiliar_C_BndEvt__ScanSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      OtherActor;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         OtherComp;                                                 // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OtherBodyIndex;                                            // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ActivateScouting
struct ATBP_ScoutingFamiliar_C_ActivateScouting_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ActivateFeedback
struct ATBP_ScoutingFamiliar_C_ActivateFeedback_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ReceiveBeginPlay
struct ATBP_ScoutingFamiliar_C_ReceiveBeginPlay_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ReceiveDestroyed
struct ATBP_ScoutingFamiliar_C_ReceiveDestroyed_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.TickRevealedCharacters
struct ATBP_ScoutingFamiliar_C_TickRevealedCharacters_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnTargetLocationChanged
struct ATBP_ScoutingFamiliar_C_OnTargetLocationChanged_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnScoutStartedReturnToOwner
struct ATBP_ScoutingFamiliar_C_OnScoutStartedReturnToOwner_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.OnArrivedAtOwner
struct ATBP_ScoutingFamiliar_C_OnArrivedAtOwner_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.BatDestroy
struct ATBP_ScoutingFamiliar_C_BatDestroy_Params
{
};

// Function TBP_ScoutingFamiliar.TBP_ScoutingFamiliar_C.ExecuteUbergraph_TBP_ScoutingFamiliar
struct ATBP_ScoutingFamiliar_C_ExecuteUbergraph_TBP_ScoutingFamiliar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
