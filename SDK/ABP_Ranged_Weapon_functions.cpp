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
//		Name   -> Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimGraph
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
void UABP_Ranged_Weapon_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimGraph");

	UABP_Ranged_Weapon_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimGraph != nullptr)
		*AnimGraph = params.AnimGraph;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.BlueprintUpdateAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Ranged_Weapon_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.BlueprintUpdateAnimation");

	UABP_Ranged_Weapon_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.BlueprintInitializeAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
void UABP_Ranged_Weapon_C::BlueprintInitializeAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.BlueprintInitializeAnimation");

	UABP_Ranged_Weapon_C_BlueprintInitializeAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimNotify_HideMagazine1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UABP_Ranged_Weapon_C::AnimNotify_HideMagazine1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimNotify_HideMagazine1");

	UABP_Ranged_Weapon_C_AnimNotify_HideMagazine1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimNotify_HideMagazine2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UABP_Ranged_Weapon_C::AnimNotify_HideMagazine2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimNotify_HideMagazine2");

	UABP_Ranged_Weapon_C_AnimNotify_HideMagazine2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimNotify_UnHideMagazine1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UABP_Ranged_Weapon_C::AnimNotify_UnHideMagazine1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimNotify_UnHideMagazine1");

	UABP_Ranged_Weapon_C_AnimNotify_UnHideMagazine1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimNotify_UnHideMagazine2
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UABP_Ranged_Weapon_C::AnimNotify_UnHideMagazine2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.AnimNotify_UnHideMagazine2");

	UABP_Ranged_Weapon_C_AnimNotify_UnHideMagazine2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.ExecuteUbergraph_ABP_Ranged_Weapon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UABP_Ranged_Weapon_C::ExecuteUbergraph_ABP_Ranged_Weapon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ABP_Ranged_Weapon.ABP_Ranged_Weapon_C.ExecuteUbergraph_ABP_Ranged_Weapon");

	UABP_Ranged_Weapon_C_ExecuteUbergraph_ABP_Ranged_Weapon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
