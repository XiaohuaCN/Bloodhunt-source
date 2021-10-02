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

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnExtra
struct UTBP_UI_Social_PlayerCardBase_C_OnExtra_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnAdd
struct UTBP_UI_Social_PlayerCardBase_C_OnAdd_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowAddButton
struct UTBP_UI_Social_PlayerCardBase_C_ShowAddButton_Params
{
	bool                                               In_Show;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowExtraButton
struct UTBP_UI_Social_PlayerCardBase_C_ShowExtraButton_Params
{
	bool                                               IsShow;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetOnlineStatus
struct UTBP_UI_Social_PlayerCardBase_C_SetOnlineStatus_Params
{
	bool                                               bInOnline;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowStatus
struct UTBP_UI_Social_PlayerCardBase_C_ShowStatus_Params
{
	bool                                               InShow;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OpenActionMenu
struct UTBP_UI_Social_PlayerCardBase_C_OpenActionMenu_Params
{
	struct FVector2D                                   InCursorScreenSpace;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.CloseActionMenu
struct UTBP_UI_Social_PlayerCardBase_C_CloseActionMenu_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.GetActionMenu
struct UTBP_UI_Social_PlayerCardBase_C_GetActionMenu_Params
{
	class UWidget*                                     ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnMouseButtonDown
struct UTBP_UI_Social_PlayerCardBase_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnRemove
struct UTBP_UI_Social_PlayerCardBase_C_OnRemove_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowRemoveButton
struct UTBP_UI_Social_PlayerCardBase_C_ShowRemoveButton_Params
{
	bool                                               InShow;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetPlayerName
struct UTBP_UI_Social_PlayerCardBase_C_SetPlayerName_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.SetStatusText
struct UTBP_UI_Social_PlayerCardBase_C_SetStatusText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ShowAcceptButton
struct UTBP_UI_Social_PlayerCardBase_C_ShowAcceptButton_Params
{
	bool                                               InShow;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.OnAccept
struct UTBP_UI_Social_PlayerCardBase_C_OnAccept_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_Social_PlayerCardBase_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.PreConstruct
struct UTBP_UI_Social_PlayerCardBase_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_Social_PlayerCardBase_C_BndEvt__ExtraButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_Social_PlayerCardBase_C_BndEvt__AddButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__Button_324_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Social_PlayerCardBase_C_BndEvt__Button_324_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__Button_324_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Social_PlayerCardBase_C_BndEvt__Button_324_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Social_PlayerCardBase_C_BndEvt__ExtraButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Social_PlayerCardBase_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Social_PlayerCardBase_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Social_PlayerCardBase_C_BndEvt__AddButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.Social_PlayerCard_SetBorder_Hovered
struct UTBP_UI_Social_PlayerCardBase_C_Social_PlayerCard_SetBorder_Hovered_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.Social_PlayerCard_SetBorder_UnHovered
struct UTBP_UI_Social_PlayerCardBase_C_Social_PlayerCard_SetBorder_UnHovered_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Social_PlayerCardBase_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__AddButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Social_PlayerCardBase_C_BndEvt__AddButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__ExtraButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Social_PlayerCardBase_C_BndEvt__ExtraButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_Social_PlayerCardBase_C_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_Social_PlayerCardBase_C_BndEvt__InviteButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_Social_PlayerCardBase.TBP_UI_Social_PlayerCardBase_C.ExecuteUbergraph_TBP_UI_Social_PlayerCardBase
struct UTBP_UI_Social_PlayerCardBase_C_ExecuteUbergraph_TBP_UI_Social_PlayerCardBase_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
