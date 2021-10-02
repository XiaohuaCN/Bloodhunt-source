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
//		Name   -> Function TBP_MatchMaker.TBP_MatchMaker_C.ReceiveBeginPlay
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_MatchMaker_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MatchMaker.TBP_MatchMaker_C.ReceiveBeginPlay");

	UTBP_MatchMaker_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MatchMaker.TBP_MatchMaker_C.ReceiveEndPlay
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MatchMaker_C::ReceiveEndPlay(TEnumAsByte<Engine_EEndPlayReason> EndPlayReason)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MatchMaker.TBP_MatchMaker_C.ReceiveEndPlay");

	UTBP_MatchMaker_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MatchMaker.TBP_MatchMaker_C.OnCountdownBegin
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_MatchMaker_C::OnCountdownBegin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MatchMaker.TBP_MatchMaker_C.OnCountdownBegin");

	UTBP_MatchMaker_C_OnCountdownBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MatchMaker.TBP_MatchMaker_C.OnTitleScreenClosed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_MatchMaker_C::OnTitleScreenClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MatchMaker.TBP_MatchMaker_C.OnTitleScreenClosed");

	UTBP_MatchMaker_C_OnTitleScreenClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_MatchMaker.TBP_MatchMaker_C.ExecuteUbergraph_TBP_MatchMaker
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_MatchMaker_C::ExecuteUbergraph_TBP_MatchMaker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_MatchMaker.TBP_MatchMaker_C.ExecuteUbergraph_TBP_MatchMaker");

	UTBP_MatchMaker_C_ExecuteUbergraph_TBP_MatchMaker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
