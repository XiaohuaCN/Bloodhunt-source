#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.InputBindingChanged
struct UTBP_UI_InputPrompt_Keyboard_C_InputBindingChanged_Params
{
	struct FName                                       InInputName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.ConstructIcon
struct UTBP_UI_InputPrompt_Keyboard_C_ConstructIcon_Params
{
};

// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdatePromptVisibility
struct UTBP_UI_InputPrompt_Keyboard_C_UpdatePromptVisibility_Params
{
	bool                                               bUsingGamePad;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.Construct
struct UTBP_UI_InputPrompt_Keyboard_C_Construct_Params
{
};

// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.Destruct
struct UTBP_UI_InputPrompt_Keyboard_C_Destruct_Params
{
};

// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnUseGamepadChanged
struct UTBP_UI_InputPrompt_Keyboard_C_OnUseGamepadChanged_Params
{
	bool                                               bNewIsProbablyUsingGamepad;                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.PreConstruct
struct UTBP_UI_InputPrompt_Keyboard_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdateIcon
struct UTBP_UI_InputPrompt_Keyboard_C_UpdateIcon_Params
{
};

// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.UpdateProperties
struct UTBP_UI_InputPrompt_Keyboard_C_UpdateProperties_Params
{
	struct FText                                       NewPrefixText;                                             // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       NewPostfixText;                                            // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bNewUseKey;                                                // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FName                                       NewInputAction;                                            // 0x0034(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FName                                       NewInputAxis;                                              // 0x003C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        NewInputKey;                                               // 0x0048(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnInputBindingChanged
struct UTBP_UI_InputPrompt_Keyboard_C_OnInputBindingChanged_Params
{
	struct FInputActionKeyMapping                      OldKeyBinding;                                             // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FInputActionKeyMapping                      NewKeyBinding;                                             // 0x0028(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnInputPresetChanged
struct UTBP_UI_InputPrompt_Keyboard_C_OnInputPresetChanged_Params
{
};

// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.OnAxisInputBindingChanged
struct UTBP_UI_InputPrompt_Keyboard_C_OnAxisInputBindingChanged_Params
{
	struct FInputAxisKeyMapping                        OldKeyBinding;                                             // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FInputAxisKeyMapping                        NewKeyBinding;                                             // 0x0028(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_InputPrompt_Keyboard.TBP_UI_InputPrompt_Keyboard_C.ExecuteUbergraph_TBP_UI_InputPrompt_Keyboard
struct UTBP_UI_InputPrompt_Keyboard_C_ExecuteUbergraph_TBP_UI_InputPrompt_Keyboard_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
