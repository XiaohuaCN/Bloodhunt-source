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
//		Name   -> Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetPositionInGrid
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Width                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Height                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SpreadPatternHelpers_C::STATIC_GetPositionInGrid(int Index, int Width, int Height, class UObject* __WorldContext, int* X, int* Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetPositionInGrid");

	UTBFL_SpreadPatternHelpers_C_GetPositionInGrid_Params params;
	params.Index = Index;
	params.Width = Width;
	params.Height = Height;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.AddNoise
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector                                     InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MagnitudeInDegrees                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerRangedRandomState                     RandomState                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     OutDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SpreadPatternHelpers_C::STATIC_AddNoise(const struct FVector& InDirection, float MagnitudeInDegrees, struct FTigerRangedRandomState* RandomState, class UObject* __WorldContext, struct FVector* OutDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.AddNoise");

	UTBFL_SpreadPatternHelpers_C_AddNoise_Params params;
	params.InDirection = InDirection;
	params.MagnitudeInDegrees = MagnitudeInDegrees;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomState != nullptr)
		*RandomState = params.RandomState;
	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetSpreadRange
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ShouldBeInsideSpreadRadius                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NegativeSpreadInDegrees                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              PositiveSpreadInDegrees                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SpreadPatternHelpers_C::STATIC_GetSpreadRange(bool ShouldBeInsideSpreadRadius, class UTigerRangedWeaponComponent* RangedWeaponComponent, class UObject* __WorldContext, float* NegativeSpreadInDegrees, float* PositiveSpreadInDegrees)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetSpreadRange");

	UTBFL_SpreadPatternHelpers_C_GetSpreadRange_Params params;
	params.ShouldBeInsideSpreadRadius = ShouldBeInsideSpreadRadius;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NegativeSpreadInDegrees != nullptr)
		*NegativeSpreadInDegrees = params.NegativeSpreadInDegrees;
	if (PositiveSpreadInDegrees != nullptr)
		*PositiveSpreadInDegrees = params.PositiveSpreadInDegrees;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletsPerFire
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletCount                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SpreadPatternHelpers_C::STATIC_GetBulletsPerFire(class UTigerRangedWeaponComponent* RangedWeaponComponent, class UObject* __WorldContext, int* BulletCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletsPerFire");

	UTBFL_SpreadPatternHelpers_C_GetBulletsPerFire_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BulletCount != nullptr)
		*BulletCount = params.BulletCount;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletProgressInSectionFloat
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              SectionStart                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              SectionEnd                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BulletProgress                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsInSection                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              ProgressInSection                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SpreadPatternHelpers_C::STATIC_GetBulletProgressInSectionFloat(float SectionStart, float SectionEnd, float BulletProgress, class UObject* __WorldContext, bool* IsInSection, float* ProgressInSection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletProgressInSectionFloat");

	UTBFL_SpreadPatternHelpers_C_GetBulletProgressInSectionFloat_Params params;
	params.SectionStart = SectionStart;
	params.SectionEnd = SectionEnd;
	params.BulletProgress = BulletProgress;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInSection != nullptr)
		*IsInSection = params.IsInSection;
	if (ProgressInSection != nullptr)
		*ProgressInSection = params.ProgressInSection;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionLeft
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector                                     InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Degrees                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     OutDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SpreadPatternHelpers_C::STATIC_RotateDirectionLeft(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionLeft");

	UTBFL_SpreadPatternHelpers_C_RotateDirectionLeft_Params params;
	params.InDirection = InDirection;
	params.Degrees = Degrees;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionRight
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector                                     InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Degrees                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     OutDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SpreadPatternHelpers_C::STATIC_RotateDirectionRight(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionRight");

	UTBFL_SpreadPatternHelpers_C_RotateDirectionRight_Params params;
	params.InDirection = InDirection;
	params.Degrees = Degrees;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionDown
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector                                     InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Degrees                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     OutDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SpreadPatternHelpers_C::STATIC_RotateDirectionDown(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionDown");

	UTBFL_SpreadPatternHelpers_C_RotateDirectionDown_Params params;
	params.InDirection = InDirection;
	params.Degrees = Degrees;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionUp
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector                                     InDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Degrees                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     OutDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SpreadPatternHelpers_C::STATIC_RotateDirectionUp(const struct FVector& InDirection, float Degrees, class UObject* __WorldContext, struct FVector* OutDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.RotateDirectionUp");

	UTBFL_SpreadPatternHelpers_C_RotateDirectionUp_Params params;
	params.InDirection = InDirection;
	params.Degrees = Degrees;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletProgressInSection
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                BulletSectionStart                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletSectionEnd                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsInSection                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		float                                              Progress                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SpreadPatternHelpers_C::STATIC_GetBulletProgressInSection(int BulletSectionStart, int BulletSectionEnd, int BulletIndex, class UObject* __WorldContext, bool* IsInSection, float* Progress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletProgressInSection");

	UTBFL_SpreadPatternHelpers_C_GetBulletProgressInSection_Params params;
	params.BulletSectionStart = BulletSectionStart;
	params.BulletSectionEnd = BulletSectionEnd;
	params.BulletIndex = BulletIndex;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsInSection != nullptr)
		*IsInSection = params.IsInSection;
	if (Progress != nullptr)
		*Progress = params.Progress;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletProgress
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BulletProgress                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SpreadPatternHelpers_C::STATIC_GetBulletProgress(int BulletIndex, class UTigerRangedWeaponComponent* RangedWeaponComponent, class UObject* __WorldContext, float* BulletProgress)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.GetBulletProgress");

	UTBFL_SpreadPatternHelpers_C_GetBulletProgress_Params params;
	params.BulletIndex = BulletIndex;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (BulletProgress != nullptr)
		*BulletProgress = params.BulletProgress;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.DirectionAlongLine
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              BeginYaw                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              EndYaw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              BeginPitch                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              EndPitch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Progress                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     AimDirection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SpreadPatternHelpers_C::STATIC_DirectionAlongLine(float BeginYaw, float EndYaw, float BeginPitch, float EndPitch, float Progress, const struct FVector& AimDirection, class UObject* __WorldContext, struct FVector* Direction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.DirectionAlongLine");

	UTBFL_SpreadPatternHelpers_C_DirectionAlongLine_Params params;
	params.BeginYaw = BeginYaw;
	params.EndYaw = EndYaw;
	params.BeginPitch = BeginPitch;
	params.EndPitch = EndPitch;
	params.Progress = Progress;
	params.AimDirection = AimDirection;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Direction != nullptr)
		*Direction = params.Direction;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.DirectionInCircle
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector                                     AimDirection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ProgressionZeroToOne                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              RadiusDegrees                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              RotationOffset                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Point                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SpreadPatternHelpers_C::STATIC_DirectionInCircle(const struct FVector& AimDirection, float ProgressionZeroToOne, float RadiusDegrees, float RotationOffset, class UObject* __WorldContext, struct FVector* Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.DirectionInCircle");

	UTBFL_SpreadPatternHelpers_C_DirectionInCircle_Params params;
	params.AimDirection = AimDirection;
	params.ProgressionZeroToOne = ProgressionZeroToOne;
	params.RadiusDegrees = RadiusDegrees;
	params.RotationOffset = RotationOffset;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Point != nullptr)
		*Point = params.Point;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.DirectionInArc
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              MinRotationDegrees                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              MaxRotationDegrees                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ProgressZeroToOne                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     AimDirection                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              RadiusDegrees                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Point                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SpreadPatternHelpers_C::STATIC_DirectionInArc(float MinRotationDegrees, float MaxRotationDegrees, float ProgressZeroToOne, const struct FVector& AimDirection, float RadiusDegrees, class UObject* __WorldContext, struct FVector* Point)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SpreadPatternHelpers.TBFL_SpreadPatternHelpers_C.DirectionInArc");

	UTBFL_SpreadPatternHelpers_C_DirectionInArc_Params params;
	params.MinRotationDegrees = MinRotationDegrees;
	params.MaxRotationDegrees = MaxRotationDegrees;
	params.ProgressZeroToOne = ProgressZeroToOne;
	params.AimDirection = AimDirection;
	params.RadiusDegrees = RadiusDegrees;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Point != nullptr)
		*Point = params.Point;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
