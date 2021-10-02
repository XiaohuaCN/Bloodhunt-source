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
//		Name   -> Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.LightSetup
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerSpotLightComponent*                    Light_Component                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SmallWallLamp01_C::LightSetup(class UTigerSpotLightComponent* Light_Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.LightSetup");

	ABP_SmallWallLamp01_C_LightSetup_Params params;
	params.Light_Component = Light_Component;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_SmallWallLamp01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.UserConstructionScript");

	ABP_SmallWallLamp01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_SmallWallLamp01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.ReceiveBeginPlay");

	ABP_SmallWallLamp01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.ExecuteUbergraph_BP_SmallWallLamp01
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SmallWallLamp01_C::ExecuteUbergraph_BP_SmallWallLamp01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallWallLamp01.BP_SmallWallLamp01_C.ExecuteUbergraph_BP_SmallWallLamp01");

	ABP_SmallWallLamp01_C_ExecuteUbergraph_BP_SmallWallLamp01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
