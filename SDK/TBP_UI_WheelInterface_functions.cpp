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
//		Name   -> Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ConstructWheel
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                In_Num_Items                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_WheelInterface_C::ConstructWheel(int In_Num_Items)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ConstructWheel");

	UTBP_UI_WheelInterface_C_ConstructWheel_Params params;
	params.In_Num_Items = In_Num_Items;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.On_InventoryBackground_MouseButtonDown_1
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTBP_UI_WheelInterface_C::On_InventoryBackground_MouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.On_InventoryBackground_MouseButtonDown_1");

	UTBP_UI_WheelInterface_C_On_InventoryBackground_MouseButtonDown_1_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.PlayOpenAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_WheelInterface_C::PlayOpenAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.PlayOpenAnimation");

	UTBP_UI_WheelInterface_C_PlayOpenAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.PlayCloseAnimation
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_WheelInterface_C::PlayCloseAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.PlayCloseAnimation");

	UTBP_UI_WheelInterface_C_PlayCloseAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ResetItems
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_WheelInterface_C::ResetItems()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ResetItems");

	UTBP_UI_WheelInterface_C_ResetItems_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetItem
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Label                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_WheelInterface_C::SetItem(int Index, class UTexture2D* Icon, const struct FText& Label, int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetItem");

	UTBP_UI_WheelInterface_C_SetItem_Params params;
	params.Index = Index;
	params.Icon = Icon;
	params.Label = Label;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.UpdateHoverEffect
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_WheelInterface_C::UpdateHoverEffect(int Index)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.UpdateHoverEffect");

	UTBP_UI_WheelInterface_C_UpdateHoverEffect_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetWheelUsable
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bNewUsable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_WheelInterface_C::SetWheelUsable(bool bNewUsable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetWheelUsable");

	UTBP_UI_WheelInterface_C_SetWheelUsable_Params params;
	params.bNewUsable = bNewUsable;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetIsItemSelected
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsSelected                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_WheelInterface_C::SetIsItemSelected(int Index, bool bIsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetIsItemSelected");

	UTBP_UI_WheelInterface_C_SetIsItemSelected_Params params;
	params.Index = Index;
	params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.WidgetAnimationEvt_OpenMenu_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UTBP_UI_WheelInterface_C::WidgetAnimationEvt_OpenMenu_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.WidgetAnimationEvt_OpenMenu_K2Node_WidgetAnimationEvent_1");

	UTBP_UI_WheelInterface_C_WidgetAnimationEvt_OpenMenu_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.OnNumberOfItemsChanged
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		int                                                InNewNumberOfItems                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_WheelInterface_C::OnNumberOfItemsChanged(int InNewNumberOfItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.OnNumberOfItemsChanged");

	UTBP_UI_WheelInterface_C_OnNumberOfItemsChanged_Params params;
	params.InNewNumberOfItems = InNewNumberOfItems;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ExecuteUbergraph_TBP_UI_WheelInterface
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_WheelInterface_C::ExecuteUbergraph_TBP_UI_WheelInterface(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ExecuteUbergraph_TBP_UI_WheelInterface");

	UTBP_UI_WheelInterface_C_ExecuteUbergraph_TBP_UI_WheelInterface_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.OnMenuPrimary__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_UI_WheelInterface_C::OnMenuPrimary__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.OnMenuPrimary__DelegateSignature");

	UTBP_UI_WheelInterface_C_OnMenuPrimary__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
