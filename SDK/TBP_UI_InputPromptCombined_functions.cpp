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
//		Name   -> Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.UpdatePromptVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_InputPromptCombined_C::UpdatePromptVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.UpdatePromptVisibility");

	UTBP_UI_InputPromptCombined_C_UpdatePromptVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.Update Properties
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       PrefixText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       PostfixText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FName                                       Action                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               IsAxis                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InputPromptCombined_C::Update_Properties(const struct FText& PrefixText, const struct FText& PostfixText, const struct FName& Action, bool IsAxis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.Update Properties");

	UTBP_UI_InputPromptCombined_C_Update_Properties_Params params;
	params.PrefixText = PrefixText;
	params.PostfixText = PostfixText;
	params.Action = Action;
	params.IsAxis = IsAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.OnUseGamepadChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bNewIsProbablyUsingGamepad                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InputPromptCombined_C::OnUseGamepadChanged(bool bNewIsProbablyUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.OnUseGamepadChanged");

	UTBP_UI_InputPromptCombined_C_OnUseGamepadChanged_Params params;
	params.bNewIsProbablyUsingGamepad = bNewIsProbablyUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_InputPromptCombined_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.Construct");

	UTBP_UI_InputPromptCombined_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.BndEvt__Button_89_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_InputPromptCombined_C::BndEvt__Button_89_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.BndEvt__Button_89_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_InputPromptCombined_C_BndEvt__Button_89_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.SetClickability
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InputPromptCombined_C::SetClickability(bool Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.SetClickability");

	UTBP_UI_InputPromptCombined_C_SetClickability_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_InputPromptCombined_C::BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_InputPromptCombined_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_InputPromptCombined_C::BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_InputPromptCombined_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.ExecuteUbergraph_TBP_UI_InputPromptCombined
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InputPromptCombined_C::ExecuteUbergraph_TBP_UI_InputPromptCombined(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.ExecuteUbergraph_TBP_UI_InputPromptCombined");

	UTBP_UI_InputPromptCombined_C_ExecuteUbergraph_TBP_UI_InputPromptCombined_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.OnUnhovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_InputPromptCombined_C::OnUnhovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.OnUnhovered__DelegateSignature");

	UTBP_UI_InputPromptCombined_C_OnUnhovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.OnHovered__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_InputPromptCombined_C::OnHovered__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.OnHovered__DelegateSignature");

	UTBP_UI_InputPromptCombined_C_OnHovered__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_InputPromptCombined_C::OnClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPromptCombined.TBP_UI_InputPromptCombined_C.OnClicked__DelegateSignature");

	UTBP_UI_InputPromptCombined_C_OnClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
