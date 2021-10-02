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
//		Name   -> Function TBP_StakeProjectile.TBP_StakeProjectile_C.HandleParticlesSpawning
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Impact_Point                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FRotator                                    Rotation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		TEnumAsByte<PhysicsCore_EPhysicalSurface>          Surface_Type                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         Potential_Scene_Component                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_StakeProjectile_C::HandleParticlesSpawning(const struct FVector& Impact_Point, const struct FRotator& Rotation, TEnumAsByte<PhysicsCore_EPhysicalSurface> Surface_Type, class UPrimitiveComponent* Potential_Scene_Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_StakeProjectile.TBP_StakeProjectile_C.HandleParticlesSpawning");

	ATBP_StakeProjectile_C_HandleParticlesSpawning_Params params;
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
//		Name   -> Function TBP_StakeProjectile.TBP_StakeProjectile_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_StakeProjectile_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_StakeProjectile.TBP_StakeProjectile_C.ReceiveBeginPlay");

	ATBP_StakeProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_StakeProjectile.TBP_StakeProjectile_C.ExecuteUbergraph_TBP_StakeProjectile
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_StakeProjectile_C::ExecuteUbergraph_TBP_StakeProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_StakeProjectile.TBP_StakeProjectile_C.ExecuteUbergraph_TBP_StakeProjectile");

	ATBP_StakeProjectile_C_ExecuteUbergraph_TBP_StakeProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
