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

// Function TBP_BulletProjectile.TBP_BulletProjectile_C.TriggerEffects
struct ATBP_BulletProjectile_C_TriggerEffects_Params
{
	class UPhysicalMaterial*                           PhysMaterial;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ImpactPoint;                                               // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         Hit_Component;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Normal;                                                    // 0x0020(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ProjectileDirection;                                       // 0x002C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BulletProjectile.TBP_BulletProjectile_C.HandleParticlesSpawning
struct ATBP_BulletProjectile_C_HandleParticlesSpawning_Params
{
	struct FVector                                     Impact_Point;                                              // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          Surface_Type;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         Potential_Scene_Component;                                 // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BulletProjectile.TBP_BulletProjectile_C.HandleDecalSpawning
struct ATBP_BulletProjectile_C_HandleDecalSpawning_Params
{
	struct FVector                                     WorldLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    WorldRotation;                                             // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UPrimitiveComponent*                         Potential_Scene_Component;                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TEnumAsByte<PhysicsCore_EPhysicalSurface>          Surface_Type;                                              // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BulletProjectile.TBP_BulletProjectile_C.TryPlayHitWallSound
struct ATBP_BulletProjectile_C_TryPlayHitWallSound_Params
{
	class UPrimitiveComponent*                         Hit_Component;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BulletProjectile.TBP_BulletProjectile_C.ReceiveBeginPlay
struct ATBP_BulletProjectile_C_ReceiveBeginPlay_Params
{
};

// Function TBP_BulletProjectile.TBP_BulletProjectile_C.TriggerHitEffects
struct ATBP_BulletProjectile_C_TriggerHitEffects_Params
{
	struct FHitResult                                  Hit;                                                       // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// Function TBP_BulletProjectile.TBP_BulletProjectile_C.ReceiveTick
struct ATBP_BulletProjectile_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BulletProjectile.TBP_BulletProjectile_C.OnReactivate
struct ATBP_BulletProjectile_C_OnReactivate_Params
{
};

// Function TBP_BulletProjectile.TBP_BulletProjectile_C.ExecuteUbergraph_TBP_BulletProjectile
struct ATBP_BulletProjectile_C_ExecuteUbergraph_TBP_BulletProjectile_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
