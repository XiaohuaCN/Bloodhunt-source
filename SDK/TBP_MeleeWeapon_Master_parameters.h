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
// Parameters
//---------------------------------------------------------------------------

// Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.GetMeleeWeaponCategory
struct UTBP_MeleeWeapon_Master_C_GetMeleeWeaponCategory_Params
{
	TEnumAsByte<ENUM_MeleeWeaponCategories_ENUM_MeleeWeaponCategories> MeleeWeaponCategory;                                       // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.OnWorldObjectHit
struct UTBP_MeleeWeapon_Master_C_OnWorldObjectHit_Params
{
	class ATigerCharacter*                             InInstigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  InWorldObjectHitResult;                                    // 0x0008(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                     InSwingDirection;                                          // 0x0094(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.OnHit
struct UTBP_MeleeWeapon_Master_C_OnHit_Params
{
	class ATigerCharacter*                             Instigator;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerCharacter*                             Target;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerWeaponMeleeAttackType                  AttackType;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Damage;                                                    // 0x0014(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MeleeWeapon_Master.TBP_MeleeWeapon_Master_C.ExecuteUbergraph_TBP_MeleeWeapon_Master
struct UTBP_MeleeWeapon_Master_C_ExecuteUbergraph_TBP_MeleeWeapon_Master_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
