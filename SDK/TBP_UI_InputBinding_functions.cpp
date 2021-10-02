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
//		Name   -> Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.SetAxisMapping
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ActionMappingIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FInputAxisKeyMapping                        UserAxisMapping                                            (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_InputBinding_C::SetAxisMapping(int ActionMappingIndex, const struct FInputAxisKeyMapping& UserAxisMapping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.SetAxisMapping");

	UTBP_UI_InputBinding_C_SetAxisMapping_Params params;
	params.ActionMappingIndex = ActionMappingIndex;
	params.UserAxisMapping = UserAxisMapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.SetActionMapping
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                ActionMappingIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FInputActionKeyMapping                      UserActionMapping                                          (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_InputBinding_C::SetActionMapping(int ActionMappingIndex, const struct FInputActionKeyMapping& UserActionMapping)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.SetActionMapping");

	UTBP_UI_InputBinding_C_SetActionMapping_Params params;
	params.ActionMappingIndex = ActionMappingIndex;
	params.UserActionMapping = UserActionMapping;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InputBinding_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.Tick");

	UTBP_UI_InputBinding_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_126_OnKeySelected__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
void UTBP_UI_InputBinding_C::BndEvt__InputKey_K2Node_ComponentBoundEvent_126_OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_126_OnKeySelected__DelegateSignature");

	UTBP_UI_InputBinding_C_BndEvt__InputKey_K2Node_ComponentBoundEvent_126_OnKeySelected__DelegateSignature_Params params;
	params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_InputBinding_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.Construct");

	UTBP_UI_InputBinding_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_46_OnIsSelectingKeyChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_InputBinding_C::BndEvt__InputKey_K2Node_ComponentBoundEvent_46_OnIsSelectingKeyChanged__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.BndEvt__InputKey_K2Node_ComponentBoundEvent_46_OnIsSelectingKeyChanged__DelegateSignature");

	UTBP_UI_InputBinding_C_BndEvt__InputKey_K2Node_ComponentBoundEvent_46_OnIsSelectingKeyChanged__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.OnMouseEnter
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_InputBinding_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.OnMouseEnter");

	UTBP_UI_InputBinding_C_OnMouseEnter_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.OnMouseLeave
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_InputBinding_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.OnMouseLeave");

	UTBP_UI_InputBinding_C_OnMouseLeave_Params params;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.ExecuteUbergraph_TBP_UI_InputBinding
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InputBinding_C::ExecuteUbergraph_TBP_UI_InputBinding(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InputBinding.TBP_UI_InputBinding_C.ExecuteUbergraph_TBP_UI_InputBinding");

	UTBP_UI_InputBinding_C_ExecuteUbergraph_TBP_UI_InputBinding_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
