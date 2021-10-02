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

// Function TBP_RangedWeapon_Shotgun_DoubleBarreled.TBP_RangedWeapon_Shotgun_DoubleBarreled_C.OnHitAuthority
struct UTBP_RangedWeapon_Shotgun_DoubleBarreled_C_OnHitAuthority_Params
{
	class ATigerCharacter*                             Instigator;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerCharacter*                             Target;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_RangedWeapon_Shotgun_DoubleBarreled.TBP_RangedWeapon_Shotgun_DoubleBarreled_C.CalculateBulletDirection
struct UTBP_RangedWeapon_Shotgun_DoubleBarreled_C_CalculateBulletDirection_Params
{
	struct FVector                                     InAimDirection;                                            // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTigerRangedRandomState                     InOutRandomState;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	int                                                InBulletIndex;                                             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerRangedWeaponComponent*                 InRangedWeaponComponent;                                   // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
