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
//		Name   -> Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.UpdateCurrentDownKeys
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_MoviePlayer_C::UpdateCurrentDownKeys()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.UpdateCurrentDownKeys");

	UTBP_UI_MoviePlayer_C_UpdateCurrentDownKeys_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.IsLastVideo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               bIsLastVideo                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_MoviePlayer_C::IsLastVideo(bool* bIsLastVideo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.IsLastVideo");

	UTBP_UI_MoviePlayer_C_IsLastVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsLastVideo != nullptr)
		*bIsLastVideo = params.bIsLastVideo;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.SetCinematicState
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InCinematic                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_MoviePlayer_C::SetCinematicState(bool InCinematic)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.SetCinematicState");

	UTBP_UI_MoviePlayer_C_SetCinematicState_Params params;
	params.InCinematic = InCinematic;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.CancelPlayback
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_MoviePlayer_C::CancelPlayback()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.CancelPlayback");

	UTBP_UI_MoviePlayer_C_CancelPlayback_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnKeyUp
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTBP_UI_MoviePlayer_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnKeyUp");

	UTBP_UI_MoviePlayer_C_OnKeyUp_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.StartPlaying
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               PlaySucceeded                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_MoviePlayer_C::StartPlaying(bool* PlaySucceeded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.StartPlaying");

	UTBP_UI_MoviePlayer_C_StartPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (PlaySucceeded != nullptr)
		*PlaySucceeded = params.PlaySucceeded;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.FinishedPlaying
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_MoviePlayer_C::FinishedPlaying()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.FinishedPlaying");

	UTBP_UI_MoviePlayer_C_FinishedPlaying_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_MoviePlayer_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.Construct");

	UTBP_UI_MoviePlayer_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.EndReached
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_MoviePlayer_C::EndReached()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.EndReached");

	UTBP_UI_MoviePlayer_C_EndReached_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.FinishedLoading
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     OpenedUrl                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_MoviePlayer_C::FinishedLoading(const struct FString& OpenedUrl)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.FinishedLoading");

	UTBP_UI_MoviePlayer_C_FinishedLoading_Params params;
	params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MoviePlayer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.Tick");

	UTBP_UI_MoviePlayer_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnMenuBack
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_MoviePlayer_C::OnMenuBack()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnMenuBack");

	UTBP_UI_MoviePlayer_C_OnMenuBack_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.ExecuteUbergraph_TBP_UI_MoviePlayer
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_MoviePlayer_C::ExecuteUbergraph_TBP_UI_MoviePlayer(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.ExecuteUbergraph_TBP_UI_MoviePlayer");

	UTBP_UI_MoviePlayer_C_ExecuteUbergraph_TBP_UI_MoviePlayer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnClosed__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_MoviePlayer_C::OnClosed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C.OnClosed__DelegateSignature");

	UTBP_UI_MoviePlayer_C_OnClosed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
