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
//		Name   -> Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.InpActEvt_MapToggle_K2Node_InputActionEvent_1
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void ATBP_ElysiumPlayerController_C::InpActEvt_MapToggle_K2Node_InputActionEvent_1(const struct FKey& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.InpActEvt_MapToggle_K2Node_InputActionEvent_1");

	ATBP_ElysiumPlayerController_C_InpActEvt_MapToggle_K2Node_InputActionEvent_1_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ElysiumPlayerController_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.ReceiveTick");

	ATBP_ElysiumPlayerController_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.OnInGameMenuToggled
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_ElysiumPlayerController_C::OnInGameMenuToggled(bool bIsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.OnInGameMenuToggled");

	ATBP_ElysiumPlayerController_C_OnInGameMenuToggled_Params params;
	params.bIsOpen = bIsOpen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.OnPreloadingDone
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_ElysiumPlayerController_C::OnPreloadingDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.OnPreloadingDone");

	ATBP_ElysiumPlayerController_C_OnPreloadingDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_ElysiumPlayerController_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.ReceiveBeginPlay");

	ATBP_ElysiumPlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.ExecuteUbergraph_TBP_ElysiumPlayerController
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ElysiumPlayerController_C::ExecuteUbergraph_TBP_ElysiumPlayerController(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumPlayerController.TBP_ElysiumPlayerController_C.ExecuteUbergraph_TBP_ElysiumPlayerController");

	ATBP_ElysiumPlayerController_C_ExecuteUbergraph_TBP_ElysiumPlayerController_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
