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
//		Name   -> Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetFadeWidth
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InLeftFadeWidth                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InRightFadeWidth                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionHorizontalFadeSlot_C::SetFadeWidth(float InLeftFadeWidth, float InRightFadeWidth)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetFadeWidth");

	UTBP_UI_TransitionHorizontalFadeSlot_C_SetFadeWidth_Params params;
	params.InLeftFadeWidth = InLeftFadeWidth;
	params.InRightFadeWidth = InRightFadeWidth;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetAnimationDelay
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InAnimationDelay                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bTriggerIntroAnimation                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_TransitionHorizontalFadeSlot_C::SetAnimationDelay(float InAnimationDelay, bool bTriggerIntroAnimation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetAnimationDelay");

	UTBP_UI_TransitionHorizontalFadeSlot_C_SetAnimationDelay_Params params;
	params.InAnimationDelay = InAnimationDelay;
	params.bTriggerIntroAnimation = bTriggerIntroAnimation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionHorizontalFadeSlot_C::SetColor(const struct FLinearColor& InColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.SetColor");

	UTBP_UI_TransitionHorizontalFadeSlot_C_SetColor_Params params;
	params.InColor = InColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_TransitionHorizontalFadeSlot_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.OnInitialized");

	UTBP_UI_TransitionHorizontalFadeSlot_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_TransitionHorizontalFadeSlot_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.Construct");

	UTBP_UI_TransitionHorizontalFadeSlot_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.TriggerInAnimation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_TransitionHorizontalFadeSlot_C::TriggerInAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.TriggerInAnimation");

	UTBP_UI_TransitionHorizontalFadeSlot_C_TriggerInAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_TransitionHorizontalFadeSlot_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.PreConstruct");

	UTBP_UI_TransitionHorizontalFadeSlot_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.OnTransitionStarted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_TransitionHorizontalFadeSlot_C::OnTransitionStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.OnTransitionStarted");

	UTBP_UI_TransitionHorizontalFadeSlot_C_OnTransitionStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.ExecuteUbergraph_TBP_UI_TransitionHorizontalFadeSlot
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionHorizontalFadeSlot_C::ExecuteUbergraph_TBP_UI_TransitionHorizontalFadeSlot(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C.ExecuteUbergraph_TBP_UI_TransitionHorizontalFadeSlot");

	UTBP_UI_TransitionHorizontalFadeSlot_C_ExecuteUbergraph_TBP_UI_TransitionHorizontalFadeSlot_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
