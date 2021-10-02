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
//		Name   -> Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.ChangeAnimationSpeed
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InAnimationSpeed                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionWidget_C::ChangeAnimationSpeed(float InAnimationSpeed)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.ChangeAnimationSpeed");

	UTBP_UI_TransitionWidget_C_ChangeAnimationSpeed_Params params;
	params.InAnimationSpeed = InAnimationSpeed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.EnableRendering
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_TransitionWidget_C::EnableRendering()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.EnableRendering");

	UTBP_UI_TransitionWidget_C_EnableRendering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.DisableRendering
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_TransitionWidget_C::DisableRendering()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.DisableRendering");

	UTBP_UI_TransitionWidget_C_DisableRendering_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.ExecuteUbergraph_TBP_UI_TransitionWidget
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_TransitionWidget_C::ExecuteUbergraph_TBP_UI_TransitionWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_TransitionWidget.TBP_UI_TransitionWidget_C.ExecuteUbergraph_TBP_UI_TransitionWidget");

	UTBP_UI_TransitionWidget_C_ExecuteUbergraph_TBP_UI_TransitionWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
