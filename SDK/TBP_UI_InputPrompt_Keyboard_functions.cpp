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
//		Name   -> Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.InputBindingChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       InInputName                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InputPrompt_Keyboard_C::InputBindingChanged(const struct FName& InInputName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.InputBindingChanged");

	UTBP_UI_InputPrompt_Keyboard_C_InputBindingChanged_Params params;
	params.InInputName = InInputName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.ConstructIcon
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_InputPrompt_Keyboard_C::ConstructIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.ConstructIcon");

	UTBP_UI_InputPrompt_Keyboard_C_ConstructIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdatePromptVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bUsingGamePad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InputPrompt_Keyboard_C::UpdatePromptVisibility(bool bUsingGamePad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdatePromptVisibility");

	UTBP_UI_InputPrompt_Keyboard_C_UpdatePromptVisibility_Params params;
	params.bUsingGamePad = bUsingGamePad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_InputPrompt_Keyboard_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.Construct");

	UTBP_UI_InputPrompt_Keyboard_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_InputPrompt_Keyboard_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.Destruct");

	UTBP_UI_InputPrompt_Keyboard_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnUseGamepadChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bNewIsProbablyUsingGamepad                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InputPrompt_Keyboard_C::OnUseGamepadChanged(bool bNewIsProbablyUsingGamepad)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnUseGamepadChanged");

	UTBP_UI_InputPrompt_Keyboard_C_OnUseGamepadChanged_Params params;
	params.bNewIsProbablyUsingGamepad = bNewIsProbablyUsingGamepad;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InputPrompt_Keyboard_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.PreConstruct");

	UTBP_UI_InputPrompt_Keyboard_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdateIcon
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_InputPrompt_Keyboard_C::UpdateIcon()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdateIcon");

	UTBP_UI_InputPrompt_Keyboard_C_UpdateIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdateProperties
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       NewPrefixText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FText                                       NewPostfixText                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               bNewUseKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FName                                       NewInputAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FName                                       NewInputAxis                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FKey                                        NewInputKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UTBP_UI_InputPrompt_Keyboard_C::UpdateProperties(const struct FText& NewPrefixText, const struct FText& NewPostfixText, bool bNewUseKey, const struct FName& NewInputAction, const struct FName& NewInputAxis, const struct FKey& NewInputKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdateProperties");

	UTBP_UI_InputPrompt_Keyboard_C_UpdateProperties_Params params;
	params.NewPrefixText = NewPrefixText;
	params.NewPostfixText = NewPostfixText;
	params.bNewUseKey = bNewUseKey;
	params.NewInputAction = NewInputAction;
	params.NewInputAxis = NewInputAxis;
	params.NewInputKey = NewInputKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnInputBindingChanged
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputActionKeyMapping                      OldKeyBinding                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FInputActionKeyMapping                      NewKeyBinding                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_InputPrompt_Keyboard_C::OnInputBindingChanged(const struct FInputActionKeyMapping& OldKeyBinding, const struct FInputActionKeyMapping& NewKeyBinding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnInputBindingChanged");

	UTBP_UI_InputPrompt_Keyboard_C_OnInputBindingChanged_Params params;
	params.OldKeyBinding = OldKeyBinding;
	params.NewKeyBinding = NewKeyBinding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnInputPresetChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_InputPrompt_Keyboard_C::OnInputPresetChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnInputPresetChanged");

	UTBP_UI_InputPrompt_Keyboard_C_OnInputPresetChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnAxisInputBindingChanged
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FInputAxisKeyMapping                        OldKeyBinding                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FInputAxisKeyMapping                        NewKeyBinding                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_InputPrompt_Keyboard_C::OnAxisInputBindingChanged(const struct FInputAxisKeyMapping& OldKeyBinding, const struct FInputAxisKeyMapping& NewKeyBinding)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnAxisInputBindingChanged");

	UTBP_UI_InputPrompt_Keyboard_C_OnAxisInputBindingChanged_Params params;
	params.OldKeyBinding = OldKeyBinding;
	params.NewKeyBinding = NewKeyBinding;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.ExecuteUbergraph_TBP_UI_InputPrompt_Keyboard
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InputPrompt_Keyboard_C::ExecuteUbergraph_TBP_UI_InputPrompt_Keyboard(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.ExecuteUbergraph_TBP_UI_InputPrompt_Keyboard");

	UTBP_UI_InputPrompt_Keyboard_C_ExecuteUbergraph_TBP_UI_InputPrompt_Keyboard_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
