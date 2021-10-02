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
//		Name   -> Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.SetText
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       InSubText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_TransitionHeader_C::SetText(const struct FText& InText, const struct FText& InSubText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.SetText");

	UTBP_UI_TransitionHeader_C_SetText_Params params;
	params.InText = InText;
	params.InSubText = InSubText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.TriggerAnimation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_TransitionHeader_C::TriggerAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.TriggerAnimation");

	UTBP_UI_TransitionHeader_C_TriggerAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.SetTextWithHeaderType
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       InSubText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
//		TEnumAsByte<ETigerHeaderType_ETigerHeaderType>     InHeaderType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionHeader_C::SetTextWithHeaderType(const struct FText& InText, const struct FText& InSubText, TEnumAsByte<ETigerHeaderType_ETigerHeaderType> InHeaderType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.SetTextWithHeaderType");

	UTBP_UI_TransitionHeader_C_SetTextWithHeaderType_Params params;
	params.InText = InText;
	params.InSubText = InSubText;
	params.InHeaderType = InHeaderType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.InitializeEffect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_TransitionHeader_C::InitializeEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.InitializeEffect");

	UTBP_UI_TransitionHeader_C_InitializeEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionHeader_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Tick");

	UTBP_UI_TransitionHeader_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_TransitionHeader_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Construct");

	UTBP_UI_TransitionHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.TriggerAnimationWithDelay
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_TransitionHeader_C::TriggerAnimationWithDelay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.TriggerAnimationWithDelay");

	UTBP_UI_TransitionHeader_C_TriggerAnimationWithDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_TransitionHeader_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.PreConstruct");

	UTBP_UI_TransitionHeader_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UTBP_UI_TransitionHeader_C::WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1");

	UTBP_UI_TransitionHeader_C_WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Play Header Animation
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsReversed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_TransitionHeader_C::Play_Header_Animation(bool IsReversed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Play Header Animation");

	UTBP_UI_TransitionHeader_C_Play_Header_Animation_Params params;
	params.IsReversed = IsReversed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.ExecuteUbergraph_TBP_UI_TransitionHeader
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionHeader_C::ExecuteUbergraph_TBP_UI_TransitionHeader(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.ExecuteUbergraph_TBP_UI_TransitionHeader");

	UTBP_UI_TransitionHeader_C_ExecuteUbergraph_TBP_UI_TransitionHeader_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.OnInAnimationFinished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_TransitionHeader_C::OnInAnimationFinished__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.OnInAnimationFinished__DelegateSignature");

	UTBP_UI_TransitionHeader_C_OnInAnimationFinished__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
