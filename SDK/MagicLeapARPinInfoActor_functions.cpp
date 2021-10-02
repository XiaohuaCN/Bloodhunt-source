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
//		Name   -> Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void AMagicLeapARPinInfoActor_C::UpdatePinState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState");

	AMagicLeapARPinInfoActor_C_UpdatePinState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void AMagicLeapARPinInfoActor_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript");

	AMagicLeapARPinInfoActor_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void AMagicLeapARPinInfoActor_C::OnUpdateARPinState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState");

	AMagicLeapARPinInfoActor_C_OnUpdateARPinState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMagicLeapARPinInfoActor_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick");

	AMagicLeapARPinInfoActor_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void AMagicLeapARPinInfoActor_C::ExecuteUbergraph_MagicLeapARPinInfoActor(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor");

	AMagicLeapARPinInfoActor_C_ExecuteUbergraph_MagicLeapARPinInfoActor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
