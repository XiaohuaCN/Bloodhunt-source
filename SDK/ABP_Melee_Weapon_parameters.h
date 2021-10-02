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

// Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.AnimGraph
struct UABP_Melee_Weapon_C_AnimGraph_Params
{
	struct FPoseLink                                   AnimGraph;                                                 // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.BlueprintInitializeAnimation
struct UABP_Melee_Weapon_C_BlueprintInitializeAnimation_Params
{
};

// Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.BlueprintUpdateAnimation
struct UABP_Melee_Weapon_C_BlueprintUpdateAnimation_Params
{
	float                                              DeltaTimeX;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.OnMelee
struct UABP_Melee_Weapon_C_OnMelee_Params
{
	int                                                AttackCount;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.ExecuteUbergraph_ABP_Melee_Weapon
struct UABP_Melee_Weapon_C_ExecuteUbergraph_ABP_Melee_Weapon_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
