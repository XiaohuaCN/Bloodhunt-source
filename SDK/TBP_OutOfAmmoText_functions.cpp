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
//		Name   -> Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.SetNonReloadWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_OutOfAmmoText_C::SetNonReloadWidget(class UWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.SetNonReloadWidget");

	UTBP_OutOfAmmoText_C_SetNonReloadWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ReloadAnimationDone
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_OutOfAmmoText_C::ReloadAnimationDone()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ReloadAnimationDone");

	UTBP_OutOfAmmoText_C_ReloadAnimationDone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadAborted
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_OutOfAmmoText_C::OnReloadAborted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadAborted");

	UTBP_OutOfAmmoText_C_OnReloadAborted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadFinished
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_OutOfAmmoText_C::OnReloadFinished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadFinished");

	UTBP_OutOfAmmoText_C_OnReloadFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadStart
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_OutOfAmmoText_C::OnReloadStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadStart");

	UTBP_OutOfAmmoText_C_OnReloadStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ReloadAnimationStartFadeOut
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_OutOfAmmoText_C::ReloadAnimationStartFadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ReloadAnimationStartFadeOut");

	UTBP_OutOfAmmoText_C_ReloadAnimationStartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.PlayReloadEndAnimation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UWidgetAnimation*                            ReloadAnimation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_OutOfAmmoText_C::PlayReloadEndAnimation(class UWidgetAnimation* ReloadAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.PlayReloadEndAnimation");

	UTBP_OutOfAmmoText_C_PlayReloadEndAnimation_Params params;
	params.ReloadAnimation = ReloadAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.IsWaitingForReloadingAnimation
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               AnimationPlaying                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_OutOfAmmoText_C::IsWaitingForReloadingAnimation(bool* AnimationPlaying)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.IsWaitingForReloadingAnimation");

	UTBP_OutOfAmmoText_C_IsWaitingForReloadingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AnimationPlaying != nullptr)
		*AnimationPlaying = params.AnimationPlaying;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_OutOfAmmoText_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Construct");

	UTBP_OutOfAmmoText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_OutOfAmmoText_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Tick");

	UTBP_OutOfAmmoText_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Aborted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_OutOfAmmoText_C::Reload_Aborted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Aborted");

	UTBP_OutOfAmmoText_C_Reload_Aborted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Finished
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_OutOfAmmoText_C::Reload_Finished()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Finished");

	UTBP_OutOfAmmoText_C_Reload_Finished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Start
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_OutOfAmmoText_C::Reload_Start()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Start");

	UTBP_OutOfAmmoText_C_Reload_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ExecuteUbergraph_TBP_OutOfAmmoText
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_OutOfAmmoText_C::ExecuteUbergraph_TBP_OutOfAmmoText(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ExecuteUbergraph_TBP_OutOfAmmoText");

	UTBP_OutOfAmmoText_C_ExecuteUbergraph_TBP_OutOfAmmoText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
