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
//		Name   -> Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistanceForTextWidget
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTextBlock*                                  InTextWidget                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InWorldIconBase_C::UpdatePlayerDistanceForTextWidget(class UTextBlock* InTextWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistanceForTextWidget");

	UTBP_UI_InWorldIconBase_C_UpdatePlayerDistanceForTextWidget_Params params;
	params.InTextWidget = InTextWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.MoveWidgetsToOffscreenPositions
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InAngle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     InTranslationWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     InRotationWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     InInverseTranslationWidget                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InWorldIconBase_C::MoveWidgetsToOffscreenPositions(float InAngle, class UWidget* InTranslationWidget, class UWidget* InRotationWidget, class UWidget* InInverseTranslationWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.MoveWidgetsToOffscreenPositions");

	UTBP_UI_InWorldIconBase_C_MoveWidgetsToOffscreenPositions_Params params;
	params.InAngle = InAngle;
	params.InTranslationWidget = InTranslationWidget;
	params.InRotationWidget = InRotationWidget;
	params.InInverseTranslationWidget = InInverseTranslationWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateDistanceWidgetScaling
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UWidget*>                             InWidgets                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		struct FTS_InWorldIconDistanceScaling              InDistanceScalingParams                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InWorldIconBase_C::UpdateDistanceWidgetScaling(TArray<class UWidget*>* InWidgets, struct FTS_InWorldIconDistanceScaling* InDistanceScalingParams)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateDistanceWidgetScaling");

	UTBP_UI_InWorldIconBase_C_UpdateDistanceWidgetScaling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InWidgets != nullptr)
		*InWidgets = params.InWidgets;
	if (InDistanceScalingParams != nullptr)
		*InDistanceScalingParams = params.InDistanceScalingParams;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateOffScreenWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InAngle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InWorldIconBase_C::UpdateOffScreenWidgets(float InAngle)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateOffScreenWidgets");

	UTBP_UI_InWorldIconBase_C_UpdateOffScreenWidgets_Params params;
	params.InAngle = InAngle;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.GetVerticalIconOffset
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              OutIconOffset                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InWorldIconBase_C::GetVerticalIconOffset(float* OutIconOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.GetVerticalIconOffset");

	UTBP_UI_InWorldIconBase_C_GetVerticalIconOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutIconOffset != nullptr)
		*OutIconOffset = params.OutIconOffset;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.GetHorizontalIconOffset
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		float                                              OutIconOffset                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InWorldIconBase_C::GetHorizontalIconOffset(float* OutIconOffset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.GetHorizontalIconOffset");

	UTBP_UI_InWorldIconBase_C_GetHorizontalIconOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutIconOffset != nullptr)
		*OutIconOffset = params.OutIconOffset;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateVisuals
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bInIsOnScreen                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InWorldIconBase_C::UpdateVisuals(bool bInIsOnScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateVisuals");

	UTBP_UI_InWorldIconBase_C_UpdateVisuals_Params params;
	params.bInIsOnScreen = bInIsOnScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistance
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_InWorldIconBase_C::UpdatePlayerDistance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistance");

	UTBP_UI_InWorldIconBase_C_UpdatePlayerDistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateOffScreenState
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              InRotationDegrees                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InWorldIconBase_C::UpdateOffScreenState(float InRotationDegrees)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateOffScreenState");

	UTBP_UI_InWorldIconBase_C_UpdateOffScreenState_Params params;
	params.InRotationDegrees = InRotationDegrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.OnScreenStateChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bInIsOnScreen                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InWorldIconBase_C::OnScreenStateChanged(bool bInIsOnScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.OnScreenStateChanged");

	UTBP_UI_InWorldIconBase_C_OnScreenStateChanged_Params params;
	params.bInIsOnScreen = bInIsOnScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.OnInnerWidgetChanged
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_InWorldIconBase_C::OnInnerWidgetChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.OnInnerWidgetChanged");

	UTBP_UI_InWorldIconBase_C_OnInnerWidgetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_InWorldIconBase_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.Construct");

	UTBP_UI_InWorldIconBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistanceScalingWidgets
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_InWorldIconBase_C::UpdatePlayerDistanceScalingWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistanceScalingWidgets");

	UTBP_UI_InWorldIconBase_C_UpdatePlayerDistanceScalingWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.ExecuteUbergraph_TBP_UI_InWorldIconBase
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InWorldIconBase_C::ExecuteUbergraph_TBP_UI_InWorldIconBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.ExecuteUbergraph_TBP_UI_InWorldIconBase");

	UTBP_UI_InWorldIconBase_C_ExecuteUbergraph_TBP_UI_InWorldIconBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
