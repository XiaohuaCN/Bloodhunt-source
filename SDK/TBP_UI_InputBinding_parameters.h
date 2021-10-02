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

// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.SetAxisMapping
struct UTBP_UI_InputBinding_C_SetAxisMapping_Params
{
	int                                                ActionMappingIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputAxisKeyMapping                        UserAxisMapping;                                           // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.SetActionMapping
struct UTBP_UI_InputBinding_C_SetActionMapping_Params
{
	int                                                ActionMappingIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInputActionKeyMapping                      UserActionMapping;                                         // 0x0008(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.Tick
struct UTBP_UI_InputBinding_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_126_OnKeySelected__DelegateSignature
struct UTBP_UI_InputBinding_C_BndEvt__InputKey_K2Node_ComponentBoundEvent_126_OnKeySelected__DelegateSignature_Params
{
	struct FInputChord                                 SelectedKey;                                               // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.Construct
struct UTBP_UI_InputBinding_C_Construct_Params
{
};

// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_46_OnIsSelectingKeyChanged__DelegateSignature
struct UTBP_UI_InputBinding_C_BndEvt__InputKey_K2Node_ComponentBoundEvent_46_OnIsSelectingKeyChanged__DelegateSignature_Params
{
};

// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.OnMouseEnter
struct UTBP_UI_InputBinding_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.OnMouseLeave
struct UTBP_UI_InputBinding_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.ExecuteUbergraph_TBP_UI_InputBinding
struct UTBP_UI_InputBinding_C_ExecuteUbergraph_TBP_UI_InputBinding_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
