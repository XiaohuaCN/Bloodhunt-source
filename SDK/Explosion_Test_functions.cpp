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
//		Name   -> Function Explosion_Test.Explosion_Test_C.OnTriggerClient
//		Flags  -> (Event, Public, BlueprintEvent)
void AExplosion_Test_C::OnTriggerClient()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Explosion_Test.Explosion_Test_C.OnTriggerClient");

	AExplosion_Test_C_OnTriggerClient_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function Explosion_Test.Explosion_Test_C.ExecuteUbergraph_Explosion_Test
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AExplosion_Test_C::ExecuteUbergraph_Explosion_Test(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Explosion_Test.Explosion_Test_C.ExecuteUbergraph_Explosion_Test");

	AExplosion_Test_C_ExecuteUbergraph_Explosion_Test_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
