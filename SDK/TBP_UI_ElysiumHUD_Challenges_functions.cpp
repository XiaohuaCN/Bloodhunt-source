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
//		Name   -> Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.IsDataLoaded
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerController*                      InTigerPlayerController                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_UI_ElysiumHUD_Challenges_C::IsDataLoaded(class ATigerPlayerController* InTigerPlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.IsDataLoaded");

	UTBP_UI_ElysiumHUD_Challenges_C_IsDataLoaded_Params params;
	params.InTigerPlayerController = InTigerPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.PopulateChallenges
//		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NrOfChallenges                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumHUD_Challenges_C::PopulateChallenges(int NrOfChallenges)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.PopulateChallenges");

	UTBP_UI_ElysiumHUD_Challenges_C_PopulateChallenges_Params params;
	params.NrOfChallenges = NrOfChallenges;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.OnDataLoaded
//		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Challenges_C::OnDataLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.OnDataLoaded");

	UTBP_UI_ElysiumHUD_Challenges_C_OnDataLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.ListenToDataLoadingEvent
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Challenges_C::ListenToDataLoadingEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.ListenToDataLoadingEvent");

	UTBP_UI_ElysiumHUD_Challenges_C_ListenToDataLoadingEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.Data Listen Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ElysiumHUD_Challenges_C::Data_Listen_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.Data Listen Event");

	UTBP_UI_ElysiumHUD_Challenges_C_Data_Listen_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Challenges
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ElysiumHUD_Challenges_C::ExecuteUbergraph_TBP_UI_ElysiumHUD_Challenges(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ElysiumHUD_Challenges.TBP_UI_ElysiumHUD_Challenges_C.ExecuteUbergraph_TBP_UI_ElysiumHUD_Challenges");

	UTBP_UI_ElysiumHUD_Challenges_C_ExecuteUbergraph_TBP_UI_ElysiumHUD_Challenges_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
