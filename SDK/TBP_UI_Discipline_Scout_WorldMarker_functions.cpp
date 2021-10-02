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
//		Name   -> Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Fade Out Default Widgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Discipline_Scout_WorldMarker_C::Fade_Out_Default_Widgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Fade Out Default Widgets");

	UTBP_UI_Discipline_Scout_WorldMarker_C_Fade_Out_Default_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Fade In Default Widgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Discipline_Scout_WorldMarker_C::Fade_In_Default_Widgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Fade In Default Widgets");

	UTBP_UI_Discipline_Scout_WorldMarker_C_Fade_In_Default_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.AreDetectionWidgetsHiddenOrAnimatingToHidden
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               AreHiding                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Discipline_Scout_WorldMarker_C::AreDetectionWidgetsHiddenOrAnimatingToHidden(bool* AreHiding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.AreDetectionWidgetsHiddenOrAnimatingToHidden");

	UTBP_UI_Discipline_Scout_WorldMarker_C_AreDetectionWidgetsHiddenOrAnimatingToHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AreHiding != nullptr)
		*AreHiding = params.AreHiding;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Toggle Detected Widgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Effect_Size_Multiplier                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Discipline_Scout_WorldMarker_C::Toggle_Detected_Widgets(float Effect_Size_Multiplier, const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Toggle Detected Widgets");

	UTBP_UI_Discipline_Scout_WorldMarker_C_Toggle_Detected_Widgets_Params params;
	params.Effect_Size_Multiplier = Effect_Size_Multiplier;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Play Detected Animations
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Effect_Size_Multiplier                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               Should_Hide_Text                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Discipline_Scout_WorldMarker_C::Play_Detected_Animations(float Effect_Size_Multiplier, const struct FText& Text, bool Should_Hide_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Play Detected Animations");

	UTBP_UI_Discipline_Scout_WorldMarker_C_Play_Detected_Animations_Params params;
	params.Effect_Size_Multiplier = Effect_Size_Multiplier;
	params.Text = Text;
	params.Should_Hide_Text = Should_Hide_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Discipline_Scout_WorldMarker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Construct");

	UTBP_UI_Discipline_Scout_WorldMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Hide Detected Relevant Widgets
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Discipline_Scout_WorldMarker_C::Hide_Detected_Relevant_Widgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Hide Detected Relevant Widgets");

	UTBP_UI_Discipline_Scout_WorldMarker_C_Hide_Detected_Relevant_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Show Detected Relevant Widgets
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Discipline_Scout_WorldMarker_C::Show_Detected_Relevant_Widgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Show Detected Relevant Widgets");

	UTBP_UI_Discipline_Scout_WorldMarker_C_Show_Detected_Relevant_Widgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Fade Out Detected Text
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Discipline_Scout_WorldMarker_C::Fade_Out_Detected_Text()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.Fade Out Detected Text");

	UTBP_UI_Discipline_Scout_WorldMarker_C_Fade_Out_Detected_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.UpdateOffScreenState
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              InRotationDegrees                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Discipline_Scout_WorldMarker_C::UpdateOffScreenState(float InRotationDegrees)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.UpdateOffScreenState");

	UTBP_UI_Discipline_Scout_WorldMarker_C_UpdateOffScreenState_Params params;
	params.InRotationDegrees = InRotationDegrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.UpdateVisuals
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bInIsOnScreen                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Discipline_Scout_WorldMarker_C::UpdateVisuals(bool bInIsOnScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.UpdateVisuals");

	UTBP_UI_Discipline_Scout_WorldMarker_C_UpdateVisuals_Params params;
	params.bInIsOnScreen = bInIsOnScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.ExecuteUbergraph_TBP_UI_Discipline_Scout_WorldMarker
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Discipline_Scout_WorldMarker_C::ExecuteUbergraph_TBP_UI_Discipline_Scout_WorldMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Discipline_Scout_WorldMarker.TBP_UI_Discipline_Scout_WorldMarker_C.ExecuteUbergraph_TBP_UI_Discipline_Scout_WorldMarker");

	UTBP_UI_Discipline_Scout_WorldMarker_C_ExecuteUbergraph_TBP_UI_Discipline_Scout_WorldMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
