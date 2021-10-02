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
//		Name   -> Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadKeybind
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       InName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FKey                                        InKey                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InAxisScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               InIsAxis                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuKeybindings_C::LoadKeybind(struct FName* InName, struct FKey* InKey, int InIndex, float InAxisScale, bool InIsAxis)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadKeybind");

	UTBP_UI_SystemMenuKeybindings_C_LoadKeybind_Params params;
	params.InIndex = InIndex;
	params.InAxisScale = InAxisScale;
	params.InIsAxis = InIsAxis;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InName != nullptr)
		*InName = params.InName;
	if (InKey != nullptr)
		*InKey = params.InKey;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.RefreshKeyBindings
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ShouldClearChildren                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_SystemMenuKeybindings_C::RefreshKeyBindings(bool ShouldClearChildren)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.RefreshKeyBindings");

	UTBP_UI_SystemMenuKeybindings_C_RefreshKeyBindings_Params params;
	params.ShouldClearChildren = ShouldClearChildren;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadAxisKeyBindings
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FInputAxisKeyMapping>                UserInputBindings                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_SystemMenuKeybindings_C::LoadAxisKeyBindings(TArray<struct FInputAxisKeyMapping>* UserInputBindings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadAxisKeyBindings");

	UTBP_UI_SystemMenuKeybindings_C_LoadAxisKeyBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UserInputBindings != nullptr)
		*UserInputBindings = params.UserInputBindings;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadKeyBindings
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FInputActionKeyMapping>              UserInputBindings                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_SystemMenuKeybindings_C::LoadKeyBindings(TArray<struct FInputActionKeyMapping>* UserInputBindings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadKeyBindings");

	UTBP_UI_SystemMenuKeybindings_C_LoadKeyBindings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (UserInputBindings != nullptr)
		*UserInputBindings = params.UserInputBindings;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_SystemMenuKeybindings_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.Construct");

	UTBP_UI_SystemMenuKeybindings_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__ResetToDefaultsButton_K2Node_ComponentBoundEvent_0_OnWidgetClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SystemMenuKeybindings_C::BndEvt__ResetToDefaultsButton_K2Node_ComponentBoundEvent_0_OnWidgetClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__ResetToDefaultsButton_K2Node_ComponentBoundEvent_0_OnWidgetClicked__DelegateSignature");

	UTBP_UI_SystemMenuKeybindings_C_BndEvt__ResetToDefaultsButton_K2Node_ComponentBoundEvent_0_OnWidgetClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_SystemMenuKeybindings_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.OnOpen");

	UTBP_UI_SystemMenuKeybindings_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__GamepadSubmenuButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SystemMenuKeybindings_C::BndEvt__GamepadSubmenuButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__GamepadSubmenuButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature");

	UTBP_UI_SystemMenuKeybindings_C_BndEvt__GamepadSubmenuButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__KeyboardSubmenuButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_SystemMenuKeybindings_C::BndEvt__KeyboardSubmenuButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__KeyboardSubmenuButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature");

	UTBP_UI_SystemMenuKeybindings_C_BndEvt__KeyboardSubmenuButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.ExecuteUbergraph_TBP_UI_SystemMenuKeybindings
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_SystemMenuKeybindings_C::ExecuteUbergraph_TBP_UI_SystemMenuKeybindings(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.ExecuteUbergraph_TBP_UI_SystemMenuKeybindings");

	UTBP_UI_SystemMenuKeybindings_C_ExecuteUbergraph_TBP_UI_SystemMenuKeybindings_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
