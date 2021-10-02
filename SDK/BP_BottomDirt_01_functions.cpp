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
//		Name   -> Function BP_BottomDirt_01.BP_BottomDirt_01_C.SetCustomPrimitiveData
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_BottomDirt_01_C::SetCustomPrimitiveData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BottomDirt_01.BP_BottomDirt_01_C.SetCustomPrimitiveData");

	ABP_BottomDirt_01_C_SetCustomPrimitiveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_BottomDirt_01.BP_BottomDirt_01_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_BottomDirt_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BottomDirt_01.BP_BottomDirt_01_C.UserConstructionScript");

	ABP_BottomDirt_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_BottomDirt_01.BP_BottomDirt_01_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_BottomDirt_01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BottomDirt_01.BP_BottomDirt_01_C.ReceiveBeginPlay");

	ABP_BottomDirt_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_BottomDirt_01.BP_BottomDirt_01_C.ExecuteUbergraph_BP_BottomDirt_01
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_BottomDirt_01_C::ExecuteUbergraph_BP_BottomDirt_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_BottomDirt_01.BP_BottomDirt_01_C.ExecuteUbergraph_BP_BottomDirt_01");

	ABP_BottomDirt_01_C_ExecuteUbergraph_BP_BottomDirt_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
