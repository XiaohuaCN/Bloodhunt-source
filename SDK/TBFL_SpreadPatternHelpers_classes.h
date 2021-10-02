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

// BlueprintGeneratedClass TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTBFL_SpreadPatternHelpers_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C");
		return ptr;
	}



	void STATIC_GetPositionInGrid(int Index, int Width, int Height, class UObject* __WorldContext, int* X, int* Y);
	void STATIC_AddNoise(const struct FVector& InDirection, float MagnitudeInDegrees, struct FTigerRangedRandomState* RandomState, class UObject* __WorldContext, struct FVector* OutDirection);
	void STATIC_GetSpreadRange(bool ShouldBeInsideSpreadRadius, class UTigerRangedWeaponComponent* RangedWeaponComponent, class UObject* __WorldContext, float* NegativeSpreadInDegrees, float* PositiveSpreadInDegrees);
	void STATIC_GetBulletsPerFire(class UTigerRangedWeaponComponent* RangedWeaponComponent, class UObject* __WorldContext, int* BulletCount);
	void STATIC_GetBulletProgressInSectionFloat(float SectionStart, float SectionEnd, float BulletProgress, class UObject* __WorldContext, bool* IsInSection, float* ProgressInSection);
	void STATIC_RotateDirectionLeft(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection);
	void STATIC_RotateDirectionRight(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection);
	void STATIC_RotateDirectionDown(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection);
	void STATIC_RotateDirectionUp(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection);
	void STATIC_GetBulletProgressInSection(int BulletSectionStart, int BulletSectionEnd, int BulletIndex, class UObject* __WorldContext, bool* IsInSection, float* Progress);
	void STATIC_GetBulletProgress(int BulletIndex, class UTigerRangedWeaponComponent* RangedWeaponComponent, class UObject* __WorldContext, float* BulletProgress);
	void STATIC_DirectionAlongLine(float BeginYaw, float EndYaw, float BeginPitch, float EndPitch, float Progress, const struct FVector& AimDirection, class UObject* __WorldContext, struct FVector* Direction);
	void STATIC_DirectionInCircle(const struct FVector& AimDirection, float ProgressionZeroToOne, float RadiusDegrees, float RotationOffset, class UObject* __WorldContext, struct FVector* Point);
	void STATIC_DirectionInArc(float MinRotationDegrees, float MaxRotationDegrees, float ProgressZeroToOne, const struct FVector& AimDirection, float RadiusDegrees, class UObject* __WorldContext, struct FVector* Point);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
