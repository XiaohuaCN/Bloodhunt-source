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
//		Name   -> Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnPlayerEnter
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_RejuvenatingVoice_C::OnPlayerEnter(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnPlayerEnter");

	UTBP_RejuvenatingVoice_C_OnPlayerEnter_Params params;
	params.InPlayer = InPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnPlayerExit
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InPlayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_RejuvenatingVoice_C::OnPlayerExit(class ATigerPlayer* InPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnPlayerExit");

	UTBP_RejuvenatingVoice_C_OnPlayerExit_Params params;
	params.InPlayer = InPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealStart
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_RejuvenatingVoice_C::OnHealStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealStart");

	UTBP_RejuvenatingVoice_C_OnHealStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealStop
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_RejuvenatingVoice_C::OnHealStop()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealStop");

	UTBP_RejuvenatingVoice_C_OnHealStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealPulse
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               bInOnProjection                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_RejuvenatingVoice_C::OnHealPulse(bool bInOnProjection)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.OnHealPulse");

	UTBP_RejuvenatingVoice_C_OnHealPulse_Params params;
	params.bInOnProjection = bInOnProjection;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.ExecuteUbergraph_TBP_RejuvenatingVoice
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_RejuvenatingVoice_C::ExecuteUbergraph_TBP_RejuvenatingVoice(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RejuvenatingVoice.TBP_RejuvenatingVoice_C.ExecuteUbergraph_TBP_RejuvenatingVoice");

	UTBP_RejuvenatingVoice_C_ExecuteUbergraph_TBP_RejuvenatingVoice_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
