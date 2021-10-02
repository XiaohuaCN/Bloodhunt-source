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
//		Name   -> Function TBP_UI_Black.TBP_UI_Black_C.StartFadeOut
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Black_C::StartFadeOut()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Black.TBP_UI_Black_C.StartFadeOut");

	UTBP_UI_Black_C_StartFadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Black.TBP_UI_Black_C.WidgetAnimationEvt_FadeOutAnim_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Black_C::WidgetAnimationEvt_FadeOutAnim_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Black.TBP_UI_Black_C.WidgetAnimationEvt_FadeOutAnim_K2Node_WidgetAnimationEvent_1");

	UTBP_UI_Black_C_WidgetAnimationEvt_FadeOutAnim_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Black.TBP_UI_Black_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Black_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Black.TBP_UI_Black_C.Construct");

	UTBP_UI_Black_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Black.TBP_UI_Black_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Black_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Black.TBP_UI_Black_C.Tick");

	UTBP_UI_Black_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Black.TBP_UI_Black_C.ExecuteUbergraph_TBP_UI_Black
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Black_C::ExecuteUbergraph_TBP_UI_Black(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Black.TBP_UI_Black_C.ExecuteUbergraph_TBP_UI_Black");

	UTBP_UI_Black_C_ExecuteUbergraph_TBP_UI_Black_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
