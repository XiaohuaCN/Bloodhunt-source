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
//		Name   -> Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.PlayFlashEffect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_FlashEffect_C::PlayFlashEffect()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.PlayFlashEffect");

	UTBP_UI_FlashEffect_C_PlayFlashEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_FlashEffect_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.Construct");

	UTBP_UI_FlashEffect_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.WidgetAnimationEvt_Flash_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UTBP_UI_FlashEffect_C::WidgetAnimationEvt_Flash_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.WidgetAnimationEvt_Flash_K2Node_WidgetAnimationEvent_1");

	UTBP_UI_FlashEffect_C_WidgetAnimationEvt_Flash_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.ExecuteUbergraph_TBP_UI_FlashEffect
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_FlashEffect_C::ExecuteUbergraph_TBP_UI_FlashEffect(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.ExecuteUbergraph_TBP_UI_FlashEffect");

	UTBP_UI_FlashEffect_C_ExecuteUbergraph_TBP_UI_FlashEffect_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.Flash Finished__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_FlashEffect_C*                       Finished_Effect                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_FlashEffect_C::Flash_Finished__DelegateSignature(class UTBP_UI_FlashEffect_C* Finished_Effect)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_FlashEffect.TBP_UI_FlashEffect_C.Flash Finished__DelegateSignature");

	UTBP_UI_FlashEffect_C_Flash_Finished__DelegateSignature_Params params;
	params.Finished_Effect = Finished_Effect;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
