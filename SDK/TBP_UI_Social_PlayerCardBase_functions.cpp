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
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnExtra
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::OnExtra()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnExtra");

	UTBP_UI_Social_PlayerCardBase_C_OnExtra_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnAdd
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::OnAdd()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnAdd");

	UTBP_UI_Social_PlayerCardBase_C_OnAdd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowAddButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               In_Show                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Social_PlayerCardBase_C::ShowAddButton(bool In_Show)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowAddButton");

	UTBP_UI_Social_PlayerCardBase_C_ShowAddButton_Params params;
	params.In_Show = In_Show;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowExtraButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Social_PlayerCardBase_C::ShowExtraButton(bool IsShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowExtraButton");

	UTBP_UI_Social_PlayerCardBase_C_ShowExtraButton_Params params;
	params.IsShow = IsShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetOnlineStatus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bInOnline                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Social_PlayerCardBase_C::SetOnlineStatus(bool bInOnline)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetOnlineStatus");

	UTBP_UI_Social_PlayerCardBase_C_SetOnlineStatus_Params params;
	params.bInOnline = bInOnline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowStatus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Social_PlayerCardBase_C::ShowStatus(bool InShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowStatus");

	UTBP_UI_Social_PlayerCardBase_C_ShowStatus_Params params;
	params.InShow = InShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OpenActionMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector2D                                   InCursorScreenSpace                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_PlayerCardBase_C::OpenActionMenu(const struct FVector2D& InCursorScreenSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OpenActionMenu");

	UTBP_UI_Social_PlayerCardBase_C_OpenActionMenu_Params params;
	params.InCursorScreenSpace = InCursorScreenSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.CloseActionMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::CloseActionMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.CloseActionMenu");

	UTBP_UI_Social_PlayerCardBase_C_CloseActionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.GetActionMenu
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UTBP_UI_Social_PlayerCardBase_C::GetActionMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.GetActionMenu");

	UTBP_UI_Social_PlayerCardBase_C_GetActionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnMouseButtonDown
//		Flags  -> (BlueprintCosmetic, Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FEventReply                                 ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FEventReply UTBP_UI_Social_PlayerCardBase_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnMouseButtonDown");

	UTBP_UI_Social_PlayerCardBase_C_OnMouseButtonDown_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnRemove
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::OnRemove()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnRemove");

	UTBP_UI_Social_PlayerCardBase_C_OnRemove_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowRemoveButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Social_PlayerCardBase_C::ShowRemoveButton(bool InShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowRemoveButton");

	UTBP_UI_Social_PlayerCardBase_C_ShowRemoveButton_Params params;
	params.InShow = InShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetPlayerName
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Social_PlayerCardBase_C::SetPlayerName(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetPlayerName");

	UTBP_UI_Social_PlayerCardBase_C_SetPlayerName_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetStatusText
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Social_PlayerCardBase_C::SetStatusText(const struct FText& InText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetStatusText");

	UTBP_UI_Social_PlayerCardBase_C_SetStatusText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowAcceptButton
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InShow                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Social_PlayerCardBase_C::ShowAcceptButton(bool InShow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowAcceptButton");

	UTBP_UI_Social_PlayerCardBase_C_ShowAcceptButton_Params params;
	params.InShow = InShow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnAccept
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::OnAccept()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnAccept");

	UTBP_UI_Social_PlayerCardBase_C_OnAccept_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_Social_PlayerCardBase_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Social_PlayerCardBase_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.PreConstruct");

	UTBP_UI_Social_PlayerCardBase_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::BndEvt__ExtraButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_Social_PlayerCardBase_C_BndEvt__ExtraButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::BndEvt__AddButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_Social_PlayerCardBase_C_BndEvt__AddButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__Button_324_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::BndEvt__Button_324_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__Button_324_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Social_PlayerCardBase_C_BndEvt__Button_324_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__Button_324_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::BndEvt__Button_324_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__Button_324_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Social_PlayerCardBase_C_BndEvt__Button_324_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::BndEvt__ExtraButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Social_PlayerCardBase_C_BndEvt__ExtraButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Social_PlayerCardBase_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Social_PlayerCardBase_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::BndEvt__AddButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Social_PlayerCardBase_C_BndEvt__AddButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.Social_PlayerCard_SetBorder_Hovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::Social_PlayerCard_SetBorder_Hovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.Social_PlayerCard_SetBorder_Hovered");

	UTBP_UI_Social_PlayerCardBase_C_Social_PlayerCard_SetBorder_Hovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.Social_PlayerCard_SetBorder_UnHovered
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::Social_PlayerCard_SetBorder_UnHovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.Social_PlayerCard_SetBorder_UnHovered");

	UTBP_UI_Social_PlayerCardBase_C_Social_PlayerCard_SetBorder_UnHovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Social_PlayerCardBase_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::BndEvt__AddButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Social_PlayerCardBase_C_BndEvt__AddButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::BndEvt__ExtraButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Social_PlayerCardBase_C_BndEvt__ExtraButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");

	UTBP_UI_Social_PlayerCardBase_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_PlayerCardBase_C::BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_Social_PlayerCardBase_C_BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ExecuteUbergraph_TBP_UI_Social_PlayerCardBase
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_PlayerCardBase_C::ExecuteUbergraph_TBP_UI_Social_PlayerCardBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ExecuteUbergraph_TBP_UI_Social_PlayerCardBase");

	UTBP_UI_Social_PlayerCardBase_C_ExecuteUbergraph_TBP_UI_Social_PlayerCardBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
