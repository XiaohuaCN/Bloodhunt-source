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
//		Name   -> Function TBP_BulletProjectile.TBP_BulletProjectile_C.TriggerEffects
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPhysicalMaterial*                           PhysMaterial                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ImpactPoint                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         Hit_Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Normal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ProjectileDirection                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BulletProjectile_C::TriggerEffects(class UPhysicalMaterial* PhysMaterial, const struct FVector& ImpactPoint, class UPrimitiveComponent* Hit_Component, const struct FVector& Normal, const struct FVector& ProjectileDirection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BulletProjectile.TBP_BulletProjectile_C.TriggerEffects");

	ATBP_BulletProjectile_C_TriggerEffects_Params params;
	params.PhysMaterial = PhysMaterial;
	params.ImpactPoint = ImpactPoint;
	params.Hit_Component = Hit_Component;
	params.Normal = Normal;
	params.ProjectileDirection = ProjectileDirection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BulletProjectile.TBP_BulletProjectile_C.HandleParticlesSpawning
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Impact_Point                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<PhysicsCore_EPhysicalSurface>          Surface_Type                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         Potential_Scene_Component                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BulletProjectile_C::HandleParticlesSpawning(const struct FVector& Impact_Point, const struct FRotator& Rotation, TEnumAsByte<PhysicsCore_EPhysicalSurface> Surface_Type, class UPrimitiveComponent* Potential_Scene_Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BulletProjectile.TBP_BulletProjectile_C.HandleParticlesSpawning");

	ATBP_BulletProjectile_C_HandleParticlesSpawning_Params params;
	params.Impact_Point = Impact_Point;
	params.Rotation = Rotation;
	params.Surface_Type = Surface_Type;
	params.Potential_Scene_Component = Potential_Scene_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BulletProjectile.TBP_BulletProjectile_C.HandleDecalSpawning
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     WorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    WorldRotation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UPrimitiveComponent*                         Potential_Scene_Component                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TEnumAsByte<PhysicsCore_EPhysicalSurface>          Surface_Type                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BulletProjectile_C::HandleDecalSpawning(const struct FVector& WorldLocation, const struct FRotator& WorldRotation, class UPrimitiveComponent* Potential_Scene_Component, TEnumAsByte<PhysicsCore_EPhysicalSurface> Surface_Type)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BulletProjectile.TBP_BulletProjectile_C.HandleDecalSpawning");

	ATBP_BulletProjectile_C_HandleDecalSpawning_Params params;
	params.WorldLocation = WorldLocation;
	params.WorldRotation = WorldRotation;
	params.Potential_Scene_Component = Potential_Scene_Component;
	params.Surface_Type = Surface_Type;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BulletProjectile.TBP_BulletProjectile_C.TryPlayHitWallSound
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         Hit_Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BulletProjectile_C::TryPlayHitWallSound(class UPrimitiveComponent* Hit_Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BulletProjectile.TBP_BulletProjectile_C.TryPlayHitWallSound");

	ATBP_BulletProjectile_C_TryPlayHitWallSound_Params params;
	params.Hit_Component = Hit_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BulletProjectile.TBP_BulletProjectile_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_BulletProjectile_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BulletProjectile.TBP_BulletProjectile_C.ReceiveBeginPlay");

	ATBP_BulletProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BulletProjectile.TBP_BulletProjectile_C.TriggerHitEffects
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
void ATBP_BulletProjectile_C::TriggerHitEffects(const struct FHitResult& Hit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BulletProjectile.TBP_BulletProjectile_C.TriggerHitEffects");

	ATBP_BulletProjectile_C_TriggerHitEffects_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BulletProjectile.TBP_BulletProjectile_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BulletProjectile_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BulletProjectile.TBP_BulletProjectile_C.ReceiveTick");

	ATBP_BulletProjectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BulletProjectile.TBP_BulletProjectile_C.OnReactivate
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_BulletProjectile_C::OnReactivate()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BulletProjectile.TBP_BulletProjectile_C.OnReactivate");

	ATBP_BulletProjectile_C_OnReactivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BulletProjectile.TBP_BulletProjectile_C.ExecuteUbergraph_TBP_BulletProjectile
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BulletProjectile_C::ExecuteUbergraph_TBP_BulletProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BulletProjectile.TBP_BulletProjectile_C.ExecuteUbergraph_TBP_BulletProjectile");

	ATBP_BulletProjectile_C_ExecuteUbergraph_TBP_BulletProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
