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
//		Name   -> Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnJoinedParty
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerParty                                 InParty                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ATBP_ElysiumPlayer_C::OnJoinedParty(const struct FTigerParty& InParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnJoinedParty");

	ATBP_ElysiumPlayer_C_OnJoinedParty_Params params;
	params.InParty = InParty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnGotPlayerState
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_ElysiumPlayer_C::OnGotPlayerState()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnGotPlayerState");

	ATBP_ElysiumPlayer_C_OnGotPlayerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnLeftParty
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerParty                                 InParty                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void ATBP_ElysiumPlayer_C::OnLeftParty(const struct FTigerParty& InParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.OnLeftParty");

	ATBP_ElysiumPlayer_C_OnLeftParty_Params params;
	params.InParty = InParty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_ElysiumPlayer_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ReceiveBeginPlay");

	ATBP_ElysiumPlayer_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ExecuteUbergraph_TBP_ElysiumPlayer
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ElysiumPlayer_C::ExecuteUbergraph_TBP_ElysiumPlayer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ElysiumPlayer.TBP_ElysiumPlayer_C.ExecuteUbergraph_TBP_ElysiumPlayer");

	ATBP_ElysiumPlayer_C_ExecuteUbergraph_TBP_ElysiumPlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
