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

// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadKeybind
struct UTBP_UI_SystemMenuKeybindings_C_LoadKeybind_Params
{
	struct FName                                       InName;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FKey                                        InKey;                                                     // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	int                                                InIndex;                                                   // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InAxisScale;                                               // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InIsAxis;                                                  // 0x0028(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.RefreshKeyBindings
struct UTBP_UI_SystemMenuKeybindings_C_RefreshKeyBindings_Params
{
	bool                                               ShouldClearChildren;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadAxisKeyBindings
struct UTBP_UI_SystemMenuKeybindings_C_LoadAxisKeyBindings_Params
{
	TArray<struct FInputAxisKeyMapping>                UserInputBindings;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.LoadKeyBindings
struct UTBP_UI_SystemMenuKeybindings_C_LoadKeyBindings_Params
{
	TArray<struct FInputActionKeyMapping>              UserInputBindings;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.Construct
struct UTBP_UI_SystemMenuKeybindings_C_Construct_Params
{
};

// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__ResetToDefaultsButton_K2Node_ComponentBoundEvent_0_OnWidgetClicked__DelegateSignature
struct UTBP_UI_SystemMenuKeybindings_C_BndEvt__ResetToDefaultsButton_K2Node_ComponentBoundEvent_0_OnWidgetClicked__DelegateSignature_Params
{
};

// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.OnOpen
struct UTBP_UI_SystemMenuKeybindings_C_OnOpen_Params
{
};

// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__GamepadSubmenuButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature
struct UTBP_UI_SystemMenuKeybindings_C_BndEvt__GamepadSubmenuButton_K2Node_ComponentBoundEvent_1_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.BndEvt__KeyboardSubmenuButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature
struct UTBP_UI_SystemMenuKeybindings_C_BndEvt__KeyboardSubmenuButton_K2Node_ComponentBoundEvent_2_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_SystemMenuKeybindings.TBP_UI_SystemMenuKeybindings_C.ExecuteUbergraph_TBP_UI_SystemMenuKeybindings
struct UTBP_UI_SystemMenuKeybindings_C_ExecuteUbergraph_TBP_UI_SystemMenuKeybindings_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
