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
//		Name   -> Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.OnRep_Replicated Passive Activated
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ScoutingFamiliarPassive_C::OnRep_Replicated_Passive_Activated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.OnRep_Replicated Passive Activated");

	UTBP_ScoutingFamiliarPassive_C_OnRep_Replicated_Passive_Activated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.CreateOrbitingParticles
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UParticleSystemComponent*                    ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UParticleSystemComponent* UTBP_ScoutingFamiliarPassive_C::CreateOrbitingParticles()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.CreateOrbitingParticles");

	UTBP_ScoutingFamiliarPassive_C_CreateOrbitingParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.ScoutSpawned
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerFamiliarScout*                         SpawnedScout                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ScoutingFamiliarPassive_C::ScoutSpawned(class ATigerFamiliarScout* SpawnedScout)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.ScoutSpawned");

	UTBP_ScoutingFamiliarPassive_C_ScoutSpawned_Params params;
	params.SpawnedScout = SpawnedScout;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Scout Destroyed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      DestroyedActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ScoutingFamiliarPassive_C::Scout_Destroyed(class AActor* DestroyedActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Scout Destroyed");

	UTBP_ScoutingFamiliarPassive_C_Scout_Destroyed_Params params;
	params.DestroyedActor = DestroyedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Begin Fade Out
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ScoutingFamiliarPassive_C::Begin_Fade_Out()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Begin Fade Out");

	UTBP_ScoutingFamiliarPassive_C_Begin_Fade_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Begin Fade In
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_ScoutingFamiliarPassive_C::Begin_Fade_In()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.Begin Fade In");

	UTBP_ScoutingFamiliarPassive_C_Begin_Fade_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.EvaluateVisibility
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void UTBP_ScoutingFamiliarPassive_C::EvaluateVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.EvaluateVisibility");

	UTBP_ScoutingFamiliarPassive_C_EvaluateVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.ExecuteUbergraph_TBP_ScoutingFamiliarPassive
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_ScoutingFamiliarPassive_C::ExecuteUbergraph_TBP_ScoutingFamiliarPassive(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C.ExecuteUbergraph_TBP_ScoutingFamiliarPassive");

	UTBP_ScoutingFamiliarPassive_C_ExecuteUbergraph_TBP_ScoutingFamiliarPassive_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
