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

// BlueprintGeneratedClass TBP_Vehicle_01.TBP_Vehicle_01_C
// 0x01E0 (FullSize[0x0468] - InheritedSize[0x0288])
class ATBP_Vehicle_01_C : public ATigerVehicle
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                                AkComponent;                                               // 0x0290(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                        LootableChildActor;                                        // 0x0298(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                               CollisionBox;                                              // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_FlashingLightIntensity_E276A4F846AD647EA78499941D2D43DE; // 0x02A8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_E276A4F846AD647EA78499941D2D43DE;    // 0x02AC(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_T8VV[0x3];                                     // 0x02AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<ENUM_VehicleSelection_ENUM_VehicleSelection> Select_Vehicle;                                            // 0x02B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ShowShadow;                                                // 0x02B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               EnableLights;                                              // 0x02BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_IX7G[0x1];                                     // 0x02BB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              FrontLightsIntensity;                                      // 0x02BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BackLightsIntensity;                                       // 0x02C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Chans_of_alarm_trigger;                                    // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NumberOfAlarmsBlinks;                                      // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               BreakPlacedVehicle;                                        // 0x02CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_24QL[0x3];                                     // 0x02CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfBlinked;                                           // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FrontLightsMultiplied;                                     // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BackLightsMultiplied;                                      // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              LightsIntensityDuringAlarm;                                // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EnableAlarm;                                               // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               CarAlarmIsOn;                                              // 0x02E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_K589[0x6];                                     // 0x02E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FVector>                             AllColorTintsInterior;                                     // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     ColorTintInterior;                                         // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasBeenLandedOn;                                           // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_6ISF[0x3];                                     // 0x0305(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ExteriorColors;                                            // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InteriorColors;                                            // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              BounceMultiplier;                                          // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8C4E[0x4];                                     // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FS_VehicleSetups                            CarSetup;                                                  // 0x0318(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	bool                                               UseRandomDirt;                                             // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_GXZO[0x3];                                     // 0x0339(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Dirtyness;                                                 // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               UseRandomRust;                                             // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_KPT0[0x3];                                     // 0x0341(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Rustyness;                                                 // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                      CrushZonesX_Locations;                                     // 0x0348(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               CrushZones;                                                // 0x0358(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int>                                        CrushZoneActivated;                                        // 0x0368(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystem*                             GlassShatterEffect;                                        // 0x0378(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               LandingOnCarAudio;                                         // 0x0380(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                             GlassShatterLocations;                                     // 0x0388(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FName>                               GlassShatterSockets;                                       // 0x0398(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ShouldBreak;                                               // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_0KNO[0x7];                                     // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FS_ColorTintPresets>                 ColorTintPresets;                                          // 0x03B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_ColorTintPresets                         ChosenColorTintPreset;                                     // 0x03C0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        AlreadyCrushedZones;                                       // 0x03D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               ObjectIsActive;                                            // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_43WT[0x3];                                     // 0x03E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRandomStream                               DirtynessStream;                                           // 0x03EC(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	struct FRandomStream                               RustynessStream;                                           // 0x03F4(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor)
	unsigned char                                      UnknownData_9LZL[0x4];                                     // 0x03FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USpotLightComponent*                         Spot_FrontLeft;                                            // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         Spot_FrontRight;                                           // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         Spot_BackLeft;                                             // 0x0410(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpotLightComponent*                         Spot_BackRight;                                            // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        SM_Shadow;                                                 // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>                AllMeshes;                                                 // 0x0428(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               UseRandomWindowTint;                                       // 0x0438(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DK3X[0x3];                                     // 0x0439(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WindowTint;                                                // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Passive_Flashing;                                          // 0x0440(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JF3R[0x3];                                     // 0x0441(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Branding;                                                  // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                           BrandingMaterialOverride;                                  // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               CastDynamicShadow_;                                        // 0x0450(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HYXQ[0x7];                                     // 0x0451(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTBP_Vehicle_01_DataInterface_C*             TBPVehicle01CDO;                                           // 0x0458(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FrontWheelRotation;                                        // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AUDIO_RandomCarAlarms;                                     // 0x0464(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Vehicle_01.TBP_Vehicle_01_C");
		return ptr;
	}



	void GetPingInfo(struct FTS_PingableActorInfo* OutInfo);
	void GetPingCategory(struct FName* OutCategory);
	void IsPolice(bool* IsPolice);
	void AUDIO_RandomizeCarAlarms();
	void SpawnGlassShatterEffect(const struct FVector& Location);
	void DisableAlarm();
	void Set_Custom_Primitive_Vector(TArray<class UStaticMeshComponent*>* Static_Meshes, bool Runtime, Shark_ESharkCustomPrimitiveVector3DataName NewParam, const struct FVector& Value);
	void Set_Custom_Primitive_Float(TArray<class UStaticMeshComponent*>* Static_Meshes, bool Runtime, Shark_ESharkCustomPrimitiveFloatDataName NewParam, float Value);
	bool IsEntity();
	void SetFrontLightColor(class UTigerSpotLightComponent* TigerSpotLight, class UTigerSpotLightComponent** OutTigerSpotLight);
	void SetCustomPrimitiveData();
	void SetCollision();
	void SetBranding();
	void SetUntintedColors(TArray<class UStaticMeshComponent*>* Meshes);
	void SetColorTintPresets();
	void SetMeshComponents();
	void SetParametersPerVehicle();
	void PlaceObjects();
	void CustomizableElements(TArray<class UStaticMeshComponent*>* Meshes);
	void Color(TArray<class UStaticMeshComponent*>* Meshes);
	void TurnLightsOnOrOff(bool IsRuntime);
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void StaticMeshComponentHit(const struct FHitResult& HitResult, const struct FVector& ImpactVelocity);
	void ReceiveBeginPlay();
	void OnBeginCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount);
	void OnObjectActivated();
	void OnObjectDeactivated();
	void OnRebuild();
	void ActivateAlarm();
	void TriggerAlarm();
	void ExecuteUbergraph_TBP_Vehicle_01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
