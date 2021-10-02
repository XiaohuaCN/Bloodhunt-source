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

// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.AssignPhysicalMaterial
struct UTBP_PlayerWallGrindState_C_AssignPhysicalMaterial_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FName                                       BoneName;                                                  // 0x008C(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.CheckForParticleSystemUpdate
struct UTBP_PlayerWallGrindState_C_CheckForParticleSystemUpdate_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitResult;                                                 // 0x0008(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ACharacter*                                  Character;                                                 // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.DestroyParticleSystem
struct UTBP_PlayerWallGrindState_C_DestroyParticleSystem_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.CreateParticleSystem
struct UTBP_PlayerWallGrindState_C_CreateParticleSystem_Params
{
	struct FName                                       BoneName;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  HitResult;                                                 // 0x0008(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ACharacter*                                  Character;                                                 // 0x0098(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.StartEffect
struct UTBP_PlayerWallGrindState_C_StartEffect_Params
{
	struct FName                                       InAssociatedBoneName;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  InHitResult;                                               // 0x0008(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ATigerCharacter*                             InTigerCharacter;                                          // 0x0098(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.StopEffect
struct UTBP_PlayerWallGrindState_C_StopEffect_Params
{
	struct FName                                       InAssociatedBoneName;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerCharacter*                             InTigerCharacter;                                          // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.UpdateEffect
struct UTBP_PlayerWallGrindState_C_UpdateEffect_Params
{
	struct FName                                       InAssociatedBoneName;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                                  InHitResult;                                               // 0x0008(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class ATigerCharacter*                             InTigerCharacter;                                          // 0x0098(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_PlayerWallGrindState.TBP_PlayerWallGrindState_C.ExecuteUbergraph_TBP_PlayerWallGrindState
struct UTBP_PlayerWallGrindState_C_ExecuteUbergraph_TBP_PlayerWallGrindState_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
