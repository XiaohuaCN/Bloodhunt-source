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
//		Name   -> Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.SetBackgroundColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bVisible                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_WheelItem_C::SetBackgroundColor(const struct FLinearColor& Color, bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.SetBackgroundColor");

	UTBP_UI_WheelItem_C_SetBackgroundColor_Params params;
	params.Color = Color;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.UpdateCanUse
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Can_Use                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_WheelItem_C::UpdateCanUse(bool Can_Use)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.UpdateCanUse");

	UTBP_UI_WheelItem_C_UpdateCanUse_Params params;
	params.Can_Use = Can_Use;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.ResetAnimation
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_WheelItem_C::ResetAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.ResetAnimation");

	UTBP_UI_WheelItem_C_ResetAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.SetSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_WheelItem_C::SetSelected(bool IsSelected)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.SetSelected");

	UTBP_UI_WheelItem_C_SetSelected_Params params;
	params.IsSelected = IsSelected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.UpdateData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_WheelItem_C::UpdateData(const struct FText& Name, class UTexture2D* Icon, int Count)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.UpdateData");

	UTBP_UI_WheelItem_C_UpdateData_Params params;
	params.Name = Name;
	params.Icon = Icon;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_1
//		Flags  -> (BlueprintEvent)
void UTBP_UI_WheelItem_C::WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_1");

	UTBP_UI_WheelItem_C_WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_2
//		Flags  -> (BlueprintEvent)
void UTBP_UI_WheelItem_C::WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_2()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_2");

	UTBP_UI_WheelItem_C_WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.ExecuteUbergraph_TBP_UI_WheelItem
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_WheelItem_C::ExecuteUbergraph_TBP_UI_WheelItem(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.ExecuteUbergraph_TBP_UI_WheelItem");

	UTBP_UI_WheelItem_C_ExecuteUbergraph_TBP_UI_WheelItem_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
