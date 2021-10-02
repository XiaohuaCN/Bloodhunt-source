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
//		Name   -> Function ML_Elysium.ML_Elysium_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void AML_Elysium_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ML_Elysium.ML_Elysium_C.ReceiveBeginPlay");

	AML_Elysium_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ML_Elysium.ML_Elysium_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AML_Elysium_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ML_Elysium.ML_Elysium_C.ReceiveEndPlay");

	AML_Elysium_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function ML_Elysium.ML_Elysium_C.ExecuteUbergraph_ML_Elysium
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AML_Elysium_C::ExecuteUbergraph_ML_Elysium(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ML_Elysium.ML_Elysium_C.ExecuteUbergraph_ML_Elysium");

	AML_Elysium_C_ExecuteUbergraph_ML_Elysium_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
