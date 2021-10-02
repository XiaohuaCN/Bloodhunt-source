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
//		Name   -> Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.GetMeleeWeaponCategory
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ENUM_MeleeWeaponCategories_ENUM_MeleeWeaponCategories> MeleeWeaponCategory                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MeleeWeapon_Master_C::GetMeleeWeaponCategory(TEnumAsByte<ENUM_MeleeWeaponCategories_ENUM_MeleeWeaponCategories>* MeleeWeaponCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.GetMeleeWeaponCategory");

	UTBP_MeleeWeapon_Master_C_GetMeleeWeaponCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (MeleeWeaponCategory != nullptr)
		*MeleeWeaponCategory = params.MeleeWeaponCategory;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.OnWorldObjectHit
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             InInstigator                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FHitResult                                  InWorldObjectHitResult                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		struct FVector                                     InSwingDirection                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MeleeWeapon_Master_C::OnWorldObjectHit(class ATigerCharacter* InInstigator, const struct FHitResult& InWorldObjectHitResult, const struct FVector& InSwingDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.OnWorldObjectHit");

	UTBP_MeleeWeapon_Master_C_OnWorldObjectHit_Params params;
	params.InInstigator = InInstigator;
	params.InWorldObjectHitResult = InWorldObjectHitResult;
	params.InSwingDirection = InSwingDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.OnHit
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerCharacter*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerWeaponMeleeAttackType                  AttackType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Damage                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MeleeWeapon_Master_C::OnHit(class ATigerCharacter* Instigator, class ATigerCharacter* Target, Tiger_ETigerWeaponMeleeAttackType AttackType, float Damage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.OnHit");

	UTBP_MeleeWeapon_Master_C_OnHit_Params params;
	params.Instigator = Instigator;
	params.Target = Target;
	params.AttackType = AttackType;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.ExecuteUbergraph_TBP_MeleeWeapon_Master
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MeleeWeapon_Master_C::ExecuteUbergraph_TBP_MeleeWeapon_Master(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.ExecuteUbergraph_TBP_MeleeWeapon_Master");

	UTBP_MeleeWeapon_Master_C_ExecuteUbergraph_TBP_MeleeWeapon_Master_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
