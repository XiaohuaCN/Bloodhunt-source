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
//		Name   -> Function BP_SmallSpotlLight_01.BP_SmallSpotlLight_01_C.LightSetup
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerSpotLightComponent*                    LightToKeep                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerSpotLightComponent*                    LightToDestroy                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_SmallSpotlLight_01_C::LightSetup(class UTigerSpotLightComponent* LightToKeep, class UTigerSpotLightComponent* LightToDestroy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallSpotlLight_01.BP_SmallSpotlLight_01_C.LightSetup");

	ABP_SmallSpotlLight_01_C_LightSetup_Params params;
	params.LightToKeep = LightToKeep;
	params.LightToDestroy = LightToDestroy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_SmallSpotlLight_01.BP_SmallSpotlLight_01_C.SetCustomPrimitiveData
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_SmallSpotlLight_01_C::SetCustomPrimitiveData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallSpotlLight_01.BP_SmallSpotlLight_01_C.SetCustomPrimitiveData");

	ABP_SmallSpotlLight_01_C_SetCustomPrimitiveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_SmallSpotlLight_01.BP_SmallSpotlLight_01_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_SmallSpotlLight_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_SmallSpotlLight_01.BP_SmallSpotlLight_01_C.UserConstructionScript");

	ABP_SmallSpotlLight_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
