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
//		Name   -> Function TBP_SpectatorPawn.TBP_SpectatorPawn_C.SetAudioListenerOverride
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_SpectatorPawn_C::SetAudioListenerOverride()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_SpectatorPawn.TBP_SpectatorPawn_C.SetAudioListenerOverride");

	ATBP_SpectatorPawn_C_SetAudioListenerOverride_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_SpectatorPawn.TBP_SpectatorPawn_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_SpectatorPawn_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_SpectatorPawn.TBP_SpectatorPawn_C.ReceiveTick");

	ATBP_SpectatorPawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_SpectatorPawn.TBP_SpectatorPawn_C.ExecuteUbergraph_TBP_SpectatorPawn
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_SpectatorPawn_C::ExecuteUbergraph_TBP_SpectatorPawn(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_SpectatorPawn.TBP_SpectatorPawn_C.ExecuteUbergraph_TBP_SpectatorPawn");

	ATBP_SpectatorPawn_C_ExecuteUbergraph_TBP_SpectatorPawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
