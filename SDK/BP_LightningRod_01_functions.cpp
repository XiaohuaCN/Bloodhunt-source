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
//		Name   -> Function BP_LightningRod_01.BP_LightningRod_01_C.AddMiddleComponent
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LightningRod_01_C::AddMiddleComponent(int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightningRod_01.BP_LightningRod_01_C.AddMiddleComponent");

	ABP_LightningRod_01_C_AddMiddleComponent_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightningRod_01.BP_LightningRod_01_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_LightningRod_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightningRod_01.BP_LightningRod_01_C.UserConstructionScript");

	ABP_LightningRod_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
