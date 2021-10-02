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
//		Name   -> Function I_Destruction.I_Destruction_C.TriggerAlarm
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UI_Destruction_C::TriggerAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_Destruction.I_Destruction_C.TriggerAlarm");

	UI_Destruction_C_TriggerAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function I_Destruction.I_Destruction_C.StaticMeshComponentHit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		struct FVector                                     ImpactVelocity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UI_Destruction_C::StaticMeshComponentHit(const struct FHitResult& HitResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function I_Destruction.I_Destruction_C.StaticMeshComponentHit");

	UI_Destruction_C_StaticMeshComponentHit_Params params;
	params.HitResult = HitResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
