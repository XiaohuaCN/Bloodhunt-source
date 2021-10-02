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
//		Name   -> Function BPI_PlayerAnimation.BPI_PlayerAnimation_C.GetWeapon
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class USkeletalMeshComponent*                      OutWeapon                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class USkeletalMeshComponent*                      OutSecondWeapon                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBPI_PlayerAnimation_C::GetWeapon(class USkeletalMeshComponent** OutWeapon, class USkeletalMeshComponent** OutSecondWeapon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BPI_PlayerAnimation.BPI_PlayerAnimation_C.GetWeapon");

	UBPI_PlayerAnimation_C_GetWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutWeapon != nullptr)
		*OutWeapon = params.OutWeapon;
	if (OutSecondWeapon != nullptr)
		*OutSecondWeapon = params.OutSecondWeapon;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
