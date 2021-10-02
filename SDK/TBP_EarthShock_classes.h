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

// BlueprintGeneratedClass TBP_EarthShock.TBP_EarthShock_C
// 0x0074 (FullSize[0x01EC] - InheritedSize[0x0178])
class UTBP_EarthShock_C : public UTigerDisciplineEarthshock
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0178(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UDecalComponent*                             Indicator;                                                 // 0x0180(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              IndicatorOffset;                                           // 0x0188(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_0BZB[0x4];                                     // 0x018C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAkComponent*                                AudioComponent;                                            // 0x0190(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                AimingAkEventID;                                           // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_9CRF[0x4];                                     // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 LeapTimeCurve;                                             // 0x01A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        IndicatorMesh;                                             // 0x01A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATBP_Vfx_GroundSlam_Marker_C*                Indicator_Actor;                                           // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Target_Is_Wall;                                            // 0x01B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_8G5S[0x7];                                     // 0x01B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATBP_VFX_GroundSlam_Impact_C*                Impact_VFX_Actor;                                          // 0x01C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Calculated_Rotation;                                       // 0x01C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                                     Calculated_Position;                                       // 0x01D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Base_Position;                                             // 0x01E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_EarthShock.TBP_EarthShock_C");
		return ptr;
	}



	void Set_Indicator_Location___Rotation(const struct FVector& Location, const struct FRotator& Rotation);
	void Set_Indicator_Visibility(bool Has_Valid_Target_Location);
	void Spawn_Impact_VFX_Actor_Check();
	void Set_Variables(bool Target_Is_Wall, const struct FRotator& Calculated_Rotation, const struct FVector& Calculated_Position, const struct FVector& Base_Position);
	struct FVector CalculateConeDirection();
	struct FVector CalculateKnockbackForce(class ATigerCharacter* InHitCharacter);
	bool EvaluateIsTargetLocationValid(bool bIsWall, const struct FHitResult& InHitSurface);
	float GetLeapTime(const struct FVector& InLeapVector);
	void CalculateDecalLocationAndRotation(const struct FVector& TargetLocation, const struct FVector& SurfaceNormal, struct FRotator* Rotation, struct FVector* DecalOffset);
	void OnLanded(const struct FVector& InLocation, const struct FVector& InSurfaceNormal, bool bInTargetIsWall);
	void OnRemoveTargetIndicator();
	void OnSpawnTargetIndicator();
	void OnTargetIndicatorUpdated(bool bInHasTargetLocation, const struct FVector& InTargetLocation, const struct FVector& InSurfaceNormal, bool bInTargetIsWall);
	void OnEnemyCharacterHit(class ATigerCharacter* InHitCharacter);
	void ExecuteUbergraph_TBP_EarthShock(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
