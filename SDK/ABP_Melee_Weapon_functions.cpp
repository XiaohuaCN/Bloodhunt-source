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
//		Name   -> Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UABP_Melee_Weapon_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.AnimGraph");

	UABP_Melee_Weapon_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.BlueprintInitializeAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
void UABP_Melee_Weapon_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.BlueprintInitializeAnimation");

	UABP_Melee_Weapon_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Melee_Weapon_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.BlueprintUpdateAnimation");

	UABP_Melee_Weapon_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.OnMelee
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                AttackCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Melee_Weapon_C::OnMelee(int AttackCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.OnMelee");

	UABP_Melee_Weapon_C_OnMelee_Params params;
	params.AttackCount = AttackCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.ExecuteUbergraph_ABP_Melee_Weapon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Melee_Weapon_C::ExecuteUbergraph_ABP_Melee_Weapon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Melee_Weapon.ABP_Melee_Weapon_C.ExecuteUbergraph_ABP_Melee_Weapon");

	UABP_Melee_Weapon_C_ExecuteUbergraph_ABP_Melee_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
