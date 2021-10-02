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
//		Name   -> Function Crossbow_Explosion_3.Crossbow_Explosion_2_C.OnTriggerClient
//		Flags  -> (Event, Public, BlueprintEvent)
void ACrossbow_Explosion_2_C::OnTriggerClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Crossbow_Explosion_3.Crossbow_Explosion_2_C.OnTriggerClient");

	ACrossbow_Explosion_2_C_OnTriggerClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function Crossbow_Explosion_3.Crossbow_Explosion_2_C.ExecuteUbergraph_Crossbow_Explosion_3
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACrossbow_Explosion_2_C::ExecuteUbergraph_Crossbow_Explosion_3(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Crossbow_Explosion_3.Crossbow_Explosion_2_C.ExecuteUbergraph_Crossbow_Explosion_3");

	ACrossbow_Explosion_2_C_ExecuteUbergraph_Crossbow_Explosion_3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
