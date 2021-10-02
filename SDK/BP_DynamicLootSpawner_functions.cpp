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
//		Name   -> Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.On Spawn Loot
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_DynamicLootSpawner_C::On_Spawn_Loot()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.On Spawn Loot");

	UBP_DynamicLootSpawner_C_On_Spawn_Loot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UBP_DynamicLootSpawner_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.ReceiveBeginPlay");

	UBP_DynamicLootSpawner_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.BreakLoop
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_DynamicLootSpawner_C::BreakLoop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.BreakLoop");

	UBP_DynamicLootSpawner_C_BreakLoop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.Chose Random Amount
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UBP_DynamicLootSpawner_C::Chose_Random_Amount()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.Chose Random Amount");

	UBP_DynamicLootSpawner_C_Chose_Random_Amount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.ExecuteUbergraph_BP_DynamicLootSpawner
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UBP_DynamicLootSpawner_C::ExecuteUbergraph_BP_DynamicLootSpawner(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_DynamicLootSpawner.BP_DynamicLootSpawner_C.ExecuteUbergraph_BP_DynamicLootSpawner");

	UBP_DynamicLootSpawner_C_ExecuteUbergraph_BP_DynamicLootSpawner_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
