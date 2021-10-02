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
//		Name   -> Function TBP_RangedWeapon_Shotgun_Common.TBP_RangedWeapon_Shotgun_Common_C.OnHitAuthority
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class ATigerCharacter*                             Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerCharacter*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_RangedWeapon_Shotgun_Common_C::OnHitAuthority(class ATigerCharacter* Instigator, class ATigerCharacter* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Shotgun_Common.TBP_RangedWeapon_Shotgun_Common_C.OnHitAuthority");

	UTBP_RangedWeapon_Shotgun_Common_C_OnHitAuthority_Params params;
	params.Instigator = Instigator;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Shotgun_Common.TBP_RangedWeapon_Shotgun_Common_C.CalculateBulletDirection
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     InAimDirection                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerRangedRandomState                     InOutRandomState                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		int                                                InBulletIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerRangedWeaponComponent*                 InRangedWeaponComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Shotgun_Common_C::CalculateBulletDirection(const struct FVector& InAimDirection, struct FTigerRangedRandomState* InOutRandomState, int InBulletIndex, class UTigerRangedWeaponComponent* InRangedWeaponComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Shotgun_Common.TBP_RangedWeapon_Shotgun_Common_C.CalculateBulletDirection");

	UTBP_RangedWeapon_Shotgun_Common_C_CalculateBulletDirection_Params params;
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
