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
//		Name   -> Function TBP_Enraged.TBP_Enraged_C.PlayEnrageAudio
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Enraged_C::PlayEnrageAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Enraged.TBP_Enraged_C.PlayEnrageAudio");

	ATBP_Enraged_C_PlayEnrageAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Enraged.TBP_Enraged_C.StopEnrageAudio
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Enraged_C::StopEnrageAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Enraged.TBP_Enraged_C.StopEnrageAudio");

	ATBP_Enraged_C_StopEnrageAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Enraged.TBP_Enraged_C.OnRegenStarted
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Enraged_C::OnRegenStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Enraged.TBP_Enraged_C.OnRegenStarted");

	ATBP_Enraged_C_OnRegenStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Enraged.TBP_Enraged_C.OnRegenStopped
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Enraged_C::OnRegenStopped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Enraged.TBP_Enraged_C.OnRegenStopped");

	ATBP_Enraged_C_OnRegenStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Enraged.TBP_Enraged_C.ReceiveEndPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Enraged_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Enraged.TBP_Enraged_C.ReceiveEndPlay");

	ATBP_Enraged_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Enraged.TBP_Enraged_C.ExecuteUbergraph_TBP_Enraged
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Enraged_C::ExecuteUbergraph_TBP_Enraged(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Enraged.TBP_Enraged_C.ExecuteUbergraph_TBP_Enraged");

	ATBP_Enraged_C_ExecuteUbergraph_TBP_Enraged_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
