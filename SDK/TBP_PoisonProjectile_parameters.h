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

// Function TBP_PoisonProjectile.TBP_PoisonProjectile_C.HandleParticlesSpawning
struct ATBP_PoisonProjectile_C_HandleParticlesSpawning_Params
{
	struct FVector                                     Impact_Point;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          Surface_Type;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         Potential_Scene_Component;                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_PoisonProjectile.TBP_PoisonProjectile_C.ReceiveBeginPlay
struct ATBP_PoisonProjectile_C_ReceiveBeginPlay_Params
{
};

// Function TBP_PoisonProjectile.TBP_PoisonProjectile_C.ExecuteUbergraph_TBP_PoisonProjectile
struct ATBP_PoisonProjectile_C_ExecuteUbergraph_TBP_PoisonProjectile_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
