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
//		Name   -> Function TBP_RangedWeapon_AssaultRifle_2.TBP_RangedWeapon_AssaultRifle_1_C.OnHitAuthority
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class ATigerCharacter*                             Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerCharacter*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_RangedWeapon_AssaultRifle_1_C::OnHitAuthority(class ATigerCharacter* Instigator, class ATigerCharacter* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_AssaultRifle_2.TBP_RangedWeapon_AssaultRifle_1_C.OnHitAuthority");

	UTBP_RangedWeapon_AssaultRifle_1_C_OnHitAuthority_Params params;
	params.Instigator = Instigator;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
