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
//		Name   -> Function Crossbow_Gas_Cloud.Crossbow_Gas_Cloud_C.OnTriggerClient
//		Flags  -> (Event, Public, BlueprintEvent)
void ACrossbow_Gas_Cloud_C::OnTriggerClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Crossbow_Gas_Cloud.Crossbow_Gas_Cloud_C.OnTriggerClient");

	ACrossbow_Gas_Cloud_C_OnTriggerClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function Crossbow_Gas_Cloud.Crossbow_Gas_Cloud_C.OnVehicleHit
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class AActor*                                      InActor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACrossbow_Gas_Cloud_C::OnVehicleHit(class AActor* InActor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Crossbow_Gas_Cloud.Crossbow_Gas_Cloud_C.OnVehicleHit");

	ACrossbow_Gas_Cloud_C_OnVehicleHit_Params params;
	params.InActor = InActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function Crossbow_Gas_Cloud.Crossbow_Gas_Cloud_C.ExecuteUbergraph_Crossbow_Gas_Cloud
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ACrossbow_Gas_Cloud_C::ExecuteUbergraph_Crossbow_Gas_Cloud(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Crossbow_Gas_Cloud.Crossbow_Gas_Cloud_C.ExecuteUbergraph_Crossbow_Gas_Cloud");

	ACrossbow_Gas_Cloud_C_ExecuteUbergraph_Crossbow_Gas_Cloud_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
