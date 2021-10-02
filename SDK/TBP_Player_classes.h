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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_Player.TBP_Player_C
// 0x0464 (FullSize[0x1364] - InheritedSize[0x0F00])
class ATBP_Player_C : public ATigerPlayer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0F00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UAkComponent*                                TakeDamageAkComp;                                          // 0x0F08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTBP_PlayerVFXComponent_C*                   TBP_PlayerVFXComponent;                                    // 0x0F10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       RainOnCameraPostProcess;                                   // 0x0F18(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             ListenerComponent;                                         // 0x0F20(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                         ListenerSpringArm;                                         // 0x0F28(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       DeathPostProcess;                                          // 0x0F30(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    PS_VFX_GasDebuff;                                          // 0x0F38(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        OutlineBillboard;                                          // 0x0F40(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTBP_PlayerTraversalStateMachine_C*          PlayerTraversalStateMachine;                               // 0x0F48(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTBP_BuffPostProcessHandler_C*               BuffPostProcessHandler;                                    // 0x0F50(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       ScopePostProcess;                                          // 0x0F58(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       TraversalZoomBlurPostProcess;                              // 0x0F60(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    TraversalSmokeTrailFeet;                                   // 0x0F68(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    TraversalSmokeTrail;                                       // 0x0F70(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            AudioTrigger;                                              // 0x0F78(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SecondaryWeapon;                                           // 0x0F80(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        SecondaryMuzzleLight;                                      // 0x0F88(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             SecondaryProjectileSpawnLocator;                           // 0x0F90(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             SecondaryMuzzleLocator;                                    // 0x0F98(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       RedGasPostProcess;                                         // 0x0FA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        HairLight;                                                 // 0x0FA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTigerHSensesTargetComponent*                TigerHSensesTarget;                                        // 0x0FB0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       FeedingPostProcess;                                        // 0x0FB8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTBP_FeedingComponent_C*                     TBP_FeedingComponent;                                      // 0x0FC0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         FeedingLight;                                              // 0x0FC8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTBP_CharacterCustomizationComp_C*           CharacterCustomization;                                    // 0x0FD0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTBP_LevelComponent_C*                       TBP_LevelComponent;                                        // 0x0FD8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         Fill_Light;                                                // 0x0FE0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         Rim_Light;                                                 // 0x0FE8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         Key_Light;                                                 // 0x0FF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UVectorFieldComponent*                       VectorField;                                               // 0x0FF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                        MuzzleLight;                                               // 0x1000(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       DownedPostProcess;                                         // 0x1008(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             ProjectileSpawnRoot;                                       // 0x1010(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UWidgetComponent*                            HealthBarWidget;                                           // 0x1018(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             ProjectileSpawnLocator;                                    // 0x1020(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               InteractionVolume;                                         // 0x1028(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       LowHealthPostProcess;                                      // 0x1030(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPostProcessComponent*                       HeightenedSensesPostProcess;                               // 0x1038(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               FullscreenEffectsVolume;                                   // 0x1040(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPawnNoiseEmitterComponent*                  PawnNoiseEmitter;                                          // 0x1048(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                             MuzzleLocator;                                             // 0x1050(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               TriggerVolume;                                             // 0x1058(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      Weapon;                                                    // 0x1060(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              GasDebuffBurnTimeline_NewTrack_0_84279FD2437A84CAF9924F81F64E1CED; // 0x1068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             GasDebuffBurnTimeline__Direction_84279FD2437A84CAF9924F81F64E1CED; // 0x106C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_WYIH[0x3];                                     // 0x106D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          GasDebuffBurnTimeline;                                     // 0x1070(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              GasDebuffTimeline_NewTrack_0_1887B31C4D0B0FDB42B539B4308CF7BD; // 0x1078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             GasDebuffTimeline__Direction_1887B31C4D0B0FDB42B539B4308CF7BD; // 0x107C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_Q428[0x3];                                     // 0x107D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          GasDebuffTimeline;                                         // 0x1080(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutlineTimeline_Visibility_EAAB304D4327221D27448EAC650058F1; // 0x1088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             OutlineTimeline__Direction_EAAB304D4327221D27448EAC650058F1; // 0x108C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GPY5[0x3];                                     // 0x108D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          OutlineTimeline;                                           // 0x1090(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MuzzleFlashLight2Timeline_Intensity_CEEB9A454434A38325252583A6A3B6F4; // 0x1098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             MuzzleFlashLight2Timeline__Direction_CEEB9A454434A38325252583A6A3B6F4; // 0x109C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6DCF[0x3];                                     // 0x109D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          MuzzleFlashLight2Timeline;                                 // 0x10A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ScopeTimeline_FocusPosition_9CD21C2B43ADAB5B313DF2BE583E31DA; // 0x10A8(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ScopeTimeline_IsScoped_9CD21C2B43ADAB5B313DF2BE583E31DA;   // 0x10B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             ScopeTimeline__Direction_9CD21C2B43ADAB5B313DF2BE583E31DA; // 0x10B8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HPV6[0x7];                                     // 0x10B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          ScopeTimeline;                                             // 0x10C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MuzzleFlashLightTimeline_Intensity_051DB23B4BC6020389CC78B6EF022930; // 0x10C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             MuzzleFlashLightTimeline__Direction_051DB23B4BC6020389CC78B6EF022930; // 0x10CC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6BD4[0x3];                                     // 0x10CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          MuzzleFlashLightTimeline;                                  // 0x10D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Check_Dodge__Direction_2340BDC0451DB765FEDE2CB7146A5511;   // 0x10D8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KRWN[0x7];                                     // 0x10D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Check_Dodge;                                               // 0x10E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_Diablerize_Short_NewTrack_0_6970392F467F11B38587869BF53D9986; // 0x10E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_Diablerize_Short_Transition_6970392F467F11B38587869BF53D9986; // 0x10EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_Diablerize_Short__Direction_6970392F467F11B38587869BF53D9986; // 0x10F0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XS6L[0x7];                                     // 0x10F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_Diablerize_Short;                                 // 0x10F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_13__Direction_8F0808F345D8234F85595F9450BAE209;   // 0x1100(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_6S4C[0x7];                                     // 0x1101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_14;                                               // 0x1108(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_8_Opacity_7E2D82864AB41D91CE8753A3A2E4951C;       // 0x1110(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_8__Direction_7E2D82864AB41D91CE8753A3A2E4951C;    // 0x1114(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_EPLM[0x3];                                     // 0x1115(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_9;                                                // 0x1118(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_7_Zoom_30D72BD24E1509A1AF3FB099FA1C9EB6;          // 0x1120(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_7__Direction_30D72BD24E1509A1AF3FB099FA1C9EB6;    // 0x1124(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_22CW[0x3];                                     // 0x1125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_8;                                                // 0x1128(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_2_RainMultiplier_CECBE516414697453F25FAB3B5FB331C; // 0x1130(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_2__Direction_CECBE516414697453F25FAB3B5FB331C;    // 0x1134(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_HWNS[0x3];                                     // 0x1135(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_3;                                                // 0x1138(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_1_Sprint_Strength_2AEA3DD140966E986A8A2A830078C114; // 0x1140(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_1__Direction_2AEA3DD140966E986A8A2A830078C114;    // 0x1144(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GSA2[0x3];                                     // 0x1145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_2;                                                // 0x1148(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_FOV_Animation_CF5E7F2B4EE15F828E27CEACA36BC0AB; // 0x1150(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_0_Sprint_Strength_CF5E7F2B4EE15F828E27CEACA36BC0AB; // 0x1154(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_CF5E7F2B4EE15F828E27CEACA36BC0AB;    // 0x1158(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_IVAD[0x7];                                     // 0x1159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x1160(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_4_Zoom_1CA12BEA4ECFEA2FB018C7BE4DE80E72;          // 0x1168(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_4__Direction_1CA12BEA4ECFEA2FB018C7BE4DE80E72;    // 0x116C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J7IK[0x3];                                     // 0x116D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_5;                                                // 0x1170(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_3_Opacity_B82857664678EB85DC4CA0A80BD4542E;       // 0x1178(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_3__Direction_B82857664678EB85DC4CA0A80BD4542E;    // 0x117C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9VFY[0x3];                                     // 0x117D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_4;                                                // 0x1180(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Inside;                                                    // 0x1188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FeedingAudioAkEventID;                                     // 0x118C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DownedBlendWeight;                                         // 0x1190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InAssaultedZoneBlendWeight;                                // 0x1194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NearAssaultedZoneBlendWeight;                              // 0x1198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_SN8N[0x4];                                     // 0x119C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAudioComponent*                             HeightenedSensesSoundLoop;                                 // 0x11A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OriginalRainRate;                                          // 0x11A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_J9A2[0x4];                                     // 0x11AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                HSensesDelayHandle;                                        // 0x11B0(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>              SkeletalMeshDuplicates;                                    // 0x11B8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	int                                                CurrentTrailLoop;                                          // 0x11C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimFloat1;                                                // 0x11CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AnimFloat2;                                                // 0x11D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DIDE[0x4];                                     // 0x11D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      HeartMesh_Smoke;                                           // 0x11D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATBP_AshPile_C*                              AshFxActor;                                                // 0x11E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               DiablerizeFinished;                                        // 0x11E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsBeingDiablerized;                                        // 0x11E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	Tiger_ETigerPlayerLifeStatus                       LifeStatus;                                                // 0x11EA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9QWX[0x1];                                     // 0x11EB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     PreviousCameraLocation;                                    // 0x11EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Previous;                                                  // 0x11F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_DEHE[0x4];                                     // 0x1204(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UParticleSystemComponent*                    ScoutedParticles;                                          // 0x1208(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BloodVisibility;                                           // 0x1210(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_XND4[0x4];                                     // 0x1214(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATigerNPC*                                   CurrentNPCBeingFedOn;                                      // 0x1218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bWasAimGliding;                                            // 0x1220(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_NAGO[0x3];                                     // 0x1221(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FeedingBloodIndex;                                         // 0x1224(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      FeedingBloodVisibility;                                    // 0x1228(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              CurrentFeedingVisibility;                                  // 0x1238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_KW5R[0x4];                                     // 0x123C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    SpeedFullscreenEffectEventDispatch;                        // 0x1240(0x0010) (Edit, BlueprintVisible, ZeroConstructor, BlueprintAssignable, BlueprintCallable)
	class UAkAudioEvent*                               ProjectileCloseFlyby;                                      // 0x1250(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Was_Previously_Inside_Holy_Incense;                        // 0x1258(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_5BWK[0x7];                                     // 0x1259(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTimerHandle                                TraversalMostRecentTimer;                                  // 0x1260(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int                                                HolyIncenseAkEventID;                                      // 0x1268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                WallGrindAkEventID;                                        // 0x126C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DiablerizeVictimAkEventID;                                 // 0x1270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                DiablerizeAkEventID;                                       // 0x1274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ReviveAkEventID;                                           // 0x1278(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                SlideAkEventID;                                            // 0x127C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     PositionLastFrame;                                         // 0x1280(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ShieldShaderCount;                                         // 0x128C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<TEnumAsByte<PhysicsCore_EPhysicalSurface>, struct FName> SurfaceToAudioName;                                        // 0x1290(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              FeedingProgress;                                           // 0x12E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3I3G[0x4];                                     // 0x12E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNiagaraSystem*                              CashedDownedParticle;                                      // 0x12E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                             NiagaraDownedPath;                                         // 0x12F0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UNiagaraComponent*                           DownedNiagara;                                             // 0x1308(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                           DownedNiagara2;                                            // 0x1310(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                FeedingLoopAkEventID;                                      // 0x1318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                RedGasAkEventID;                                           // 0x131C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ExposePlayerInHeightenedSenses;                            // 0x1320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               IsInsideHolySmoke;                                         // 0x1321(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_RSIL[0x2];                                     // 0x1322(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DistanceToHolyIncenseVolume;                               // 0x1324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShouldUpdateListenerPosition;                              // 0x1328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_1NI5[0x3];                                     // 0x1329(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector2D                                   InterpolatedDirectionToRedGasEdge;                         // 0x132C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bEnableHealthBars;                                         // 0x1334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_734T[0x3];                                     // 0x1335(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     TakeDamageLocation;                                        // 0x1338(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FeedingFadeOutTime;                                        // 0x1344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ListenerOffset;                                            // 0x1348(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Intersection;                                              // 0x1354(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              RedGasPostProcessMaxFadeDistance;                          // 0x1360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Player.TBP_Player_C");
		return ptr;
	}



	void GetWeapon(class USkeletalMeshComponent** OutWeapon, class USkeletalMeshComponent** OutSecondWeapon);
	void OnRedGasPostProcessMaterialLoaded(TArray<class UObject*> InLoadedObjects);
	void QualityOptionChanged(const struct FTigerGraphicsSettings& GraphicsSettings);
	void SetupQualityOptions();
	void InitHealthBars();
	void UpdateSPCPlayerMaterialCollection();
	void Update_Red_Gas_MPC();
	void StartRedGasAudio();
	void StopRedGasAudio();
	bool CheckShouldUpdateListenerPosition(class APlayerController* Player_Controller);
	void EnableCharacterlighting();
	void SetAkAlignmentRTPC();
	void SetLodOnLocalPlayer();
	void SetAudioListenerOverride();
	void SetDamageTakenAudioSwitch(float Value);
	void StartSlidingAudio();
	void DetermineOwnerOfProjectile(class UObject* Object, class ATigerProjectile** AsTiger_Projectile);
	void SetRTPC_AltitudePlayer();
	void SetReverbStateOnExit(class UObject* Object);
	void SetReverbStateOnEnter(class UObject* Object);
	void DisableScreenCullSize();
	void PostLandingAudio();
	void PlayBeingDiablerizedAudio();
	void SetGroundedAudioState(bool Condition);
	void PlayDiablerizeAudio();
	void PlayReviveAudio();
	void DisableAllPostProcess();
	void StopCloseToRedGasAudio();
	void StartCloseToRedGasAudio();
	void OnTraversalPostProcessEnded();
	void UpdateTraversalPostProcess(float Duration, float Strength, const struct FVector2D& FocusPosition);
	float GetDiablerizeEffectStartTime();
	void DeactivateHeavyChargeFX();
	void UpdateAimGlideCosmetic();
	void DisableSkeletonSmokeEffects();
	void SetupCharacterDuplicates(class USkeletalMeshComponent* SkeletalMeshOriginal);
	void SwiftStrikeFX();
	void OnGroupMemberLifeStatusChanged(Tiger_ETigerPlayerLifeStatus NewLifeStatus);
	void UpdateInRedGasEffect(float Delta_Time);
	void UpdateDownedFX(float DeltaTime);
	void IsLocalClient(bool* Client);
	void UpdateFeedingFX(float Delta);
	void Set_Rain_Amount();
	void StunVisualEffect(class AActor* self2);
	void UserConstructionScript();
	void Timeline_3__FinishedFunc();
	void Timeline_3__UpdateFunc();
	void Timeline_4__FinishedFunc();
	void Timeline_4__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void Timeline_2__FinishedFunc();
	void Timeline_2__UpdateFunc();
	void Timeline_7__FinishedFunc();
	void Timeline_7__UpdateFunc();
	void Timeline_8__FinishedFunc();
	void Timeline_8__UpdateFunc();
	void ScopeTimeline__FinishedFunc();
	void ScopeTimeline__UpdateFunc();
	void Timeline_13__FinishedFunc();
	void Timeline_13__UpdateFunc();
	void Timeline_13__InvulnerabilityTrigger__EventFunc();
	void Timeline_13__ToggleCharacterVisibility__EventFunc();
	void Timeline_Diablerize_Short__FinishedFunc();
	void Timeline_Diablerize_Short__UpdateFunc();
	void Check_Dodge__FinishedFunc();
	void Check_Dodge__UpdateFunc();
	void MuzzleFlashLightTimeline__FinishedFunc();
	void MuzzleFlashLightTimeline__UpdateFunc();
	void MuzzleFlashLight2Timeline__FinishedFunc();
	void MuzzleFlashLight2Timeline__UpdateFunc();
	void OutlineTimeline__FinishedFunc();
	void OutlineTimeline__UpdateFunc();
	void GasDebuffTimeline__FinishedFunc();
	void GasDebuffTimeline__UpdateFunc();
	void GasDebuffBurnTimeline__FinishedFunc();
	void GasDebuffBurnTimeline__UpdateFunc();
	void InpActEvt_Left_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Right_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_PageUp_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_PageDown_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void OnLocalDisciplineUse(const struct FDisciplineUse& DisciplineUse, float ExpectedDuration);
	void DisciplineJumpFinished();
	void OnLocalDisciplineUseFailed(const struct FDisciplineUse& DisciplineUse);
	void LocalPlayer_BeginPlay();
	void OnLocalSprintStarted();
	void OnLocalSprintEnded();
	void OnLocalEnteredIndoor();
	void OnLocalExitedIndoor();
	void OnStartedFeedingApproach(float TravelTime);
	void OnFeedingDoneEvent(bool bTargetIsDrained, class ATigerCharacter* InTargetFedOn);
	void BndEvt__AudioTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnTigerMovementModeChanged(TEnumAsByte<Engine_EMovementMode> PrevMovementMode, Tiger_ETigerMovementMode PrevCustomMode, TEnumAsByte<Engine_EMovementMode> NewMovementMode, Tiger_ETigerMovementMode NewCustomMode);
	void OnExtraHealthDepleted();
	void OnStartedAimingCameraTransition();
	void OnStoppedAimingCameraTransition();
	void OnMasqueradeStateChanged_Event_1(bool InIsMasqueradeBreached, Tiger_ETigerAIPlayerAction InPlayerAction);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void OnShieldDepleted(class ATigerPlayer* InInstigator);
	void OnChangedAkAlignment(Tiger_ETigerCharacterAkAlignmentType InAlignment);
	void OnModEquipped();
	void Client_On_Mod_Equipped();
	void K2_OnEndViewTarget(class APlayerController* PC);
	void LocalPlayerTick(float InDeltaSeconds);
	void ReceiveBeginPlay();
	void OnDisciplineUseSucceeded(const struct FDisciplineUse& DisciplineUse);
	void OnLanded(const struct FHitResult& Hit);
	void ReceivePossessed(class AController* NewController);
	void OnShowDamageAmount(const struct FVector& InHitLocation, const struct FLinearColor& InDamageColor, int InTotalDamageAmount, int InHealthDamageAmount, bool bInHasExtraHealth, bool bInHasShield, float InRangedDamageFalloffPercent);
	void OnWeaponFired(bool bSecondaryWeaponFired);
	void OnRep_PlayerClan();
	void LifeStatusChanged(Tiger_ETigerPlayerLifeStatus NewLifeStatus);
	void OnGotPlayerState();
	void OnRep_PowerKit();
	void OnDodged(bool IsControllingPlayer, bool bLaunchedInAir, const struct FVector& LaunchDirection, unsigned char DodgeStage);
	void SpawnBloodDecal();
	void ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason);
	void OnGotScouted();
	void OnNoLongerScouted();
	void OnAboutToBeHitByDisplacement();
	void OnDamageTaken(float DamageTaken, class AActor* DamageInstigator);
	void OnDoubleJump(const struct FVector& Direction);
	void OnPlayMeleeHitEffects(class UTigerMeleeWeapon* WeaponHitBy, const struct FVector& ImpactLocation, const struct FVector& HitDirection);
	void OnStartedPhysicalInteraction(class UClass* PhysInteractionClass, bool bIsTargetPlayer);
	void OnInterruptedPhysicalInteraction(class UClass* PhysInteractionClass, bool bIsTargetPlayer);
	void OnFinishedPhysicalInteraction(class UClass* PhysInteractionClass, bool bIsTargetPlayer);
	void OnWeaponVisualChangedEvent();
	void OnWallJump(const struct FVector& InVelocity);
	void OnClimbStarted(const struct FVector& InVelocity);
	void OnClimbEnded(const struct FVector& InVelocity);
	void OnWallGrindStarted(const struct FVector& InVelocity);
	void OnWallGrindEnded(const struct FVector& InVelocity);
	void OnHardLanding(const struct FVector& InVelocity);
	void OnSlideJump(const struct FVector& InVelocity);
	void OnSlidingStarted(const struct FVector& InVelocity);
	void OnSlidingEnded(const struct FVector& InVelocity);
	void OnBecameSpectator();
	void OnBecameGroupMember();
	void OnStoppedBeingGroupMember();
	void BndEvt__OutlineComponent_K2Node_ComponentBoundEvent_2_OnOutlineModeRefreshed__DelegateSignature(Tiger_ETigerOutlineMode HighestPrioOutline);
	void UpdateHolyIncenseEffect(float InDeltaTime);
	void IncrementShieldShaderCounter();
	void DecrementShieldShaderCounter();
	void IncrementFeedingBloodIndex();
	void OnGoneBelowHalfHealth();
	void StopDiablerieToDeathTransition();
	void ExecuteUbergraph_TBP_Player(int EntryPoint);
	void SpeedFullscreenEffectEventDispatch__DelegateSignature(float TravelTime, bool bIsFeedingApproach);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
