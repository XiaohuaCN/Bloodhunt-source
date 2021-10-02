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
//		Name   -> Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.SetIsChecked
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bInIsChecked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_CheckBox_C::SetIsChecked(bool bInIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.SetIsChecked");

	UTBP_UI_CheckBox_C_SetIsChecked_Params params;
	params.bInIsChecked = bInIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.GetCurrentStateTintColor
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FSlateColor                                 TintColor                                                  (Parm, OutParm)
void UTBP_UI_CheckBox_C::GetCurrentStateTintColor(struct FSlateColor* TintColor)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.GetCurrentStateTintColor");

	UTBP_UI_CheckBox_C_GetCurrentStateTintColor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TintColor != nullptr)
		*TintColor = params.TintColor;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_CheckBox_C::BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");

	UTBP_UI_CheckBox_C_BndEvt__CheckBoxWidget_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_CheckBox_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.PreConstruct");

	UTBP_UI_CheckBox_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CheckBox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.Tick");

	UTBP_UI_CheckBox_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.ExecuteUbergraph_TBP_UI_CheckBox
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_CheckBox_C::ExecuteUbergraph_TBP_UI_CheckBox(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.ExecuteUbergraph_TBP_UI_CheckBox");

	UTBP_UI_CheckBox_C_ExecuteUbergraph_TBP_UI_CheckBox_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.OnCheckStateChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_CheckBox_C::OnCheckStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_CheckBox.TBP_UI_CheckBox_C.OnCheckStateChanged__DelegateSignature");

	UTBP_UI_CheckBox_C_OnCheckStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
