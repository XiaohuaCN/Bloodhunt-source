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
//		Name   -> Function TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C.Demo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     AimDirection                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerRangedRandomState                     RandomState                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              NoiseMagnitudeInDegrees                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     OutDirection                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_RangedWeapon_Shotgun_Master_C::Demo(const struct FVector& AimDirection, struct FTigerRangedRandomState* RandomState, int BulletIndex, class UTigerRangedWeaponComponent* RangedWeaponComponent, float NoiseMagnitudeInDegrees, struct FVector* OutDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C.Demo");

	UTBP_RangedWeapon_Shotgun_Master_C_Demo_Params params;
	params.AimDirection = AimDirection;
	params.BulletIndex = BulletIndex;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.NoiseMagnitudeInDegrees = NoiseMagnitudeInDegrees;

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
//		Name   -> Function TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C.CalculateBulletDirection
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     InAimDirection                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerRangedRandomState                     InOutRandomState                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		int                                                InBulletIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerRangedWeaponComponent*                 InRangedWeaponComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Shotgun_Master_C::CalculateBulletDirection(const struct FVector& InAimDirection, struct FTigerRangedRandomState* InOutRandomState, int InBulletIndex, class UTigerRangedWeaponComponent* InRangedWeaponComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Shotgun_Master.TBP_RangedWeapon_Shotgun_Master_C.CalculateBulletDirection");

	UTBP_RangedWeapon_Shotgun_Master_C_CalculateBulletDirection_Params params;
	params.InAimDirection = InAimDirection;
	params.InBulletIndex = InBulletIndex;
	params.InRangedWeaponComponent = InRangedWeaponComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InOutRandomState != nullptr)
		*InOutRandomState = params.InOutRandomState;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
