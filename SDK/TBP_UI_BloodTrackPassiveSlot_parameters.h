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

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.SetToUltimatePredatorPassive
struct UTBP_UI_BloodTrackPassiveSlot_C_SetToUltimatePredatorPassive_Params
{
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.SetOpacity
struct UTBP_UI_BloodTrackPassiveSlot_C_SetOpacity_Params
{
	float                                              InOpacity;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragOver
struct UTBP_UI_BloodTrackPassiveSlot_C_OnDragOver_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.CanPassiveOccupyThisSlot
struct UTBP_UI_BloodTrackPassiveSlot_C_CanPassiveOccupyThisSlot_Params
{
	class UTigerBloodTrackPassiveConfig*               New_Passive;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.CalculateBloodTrackMovement
struct UTBP_UI_BloodTrackPassiveSlot_C_CalculateBloodTrackMovement_Params
{
	class UTBP_BloodTrack_DragDropReorderOperation_C*  Drag_Operation;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int>                                        Movement;                                                  // 0x0008(0x0010)  (Parm, OutParm)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDrop
struct UTBP_UI_BloodTrackPassiveSlot_C_OnDrop_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               ReturnValue;                                               // 0x00B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.RestoreIcon
struct UTBP_UI_BloodTrackPassiveSlot_C_RestoreIcon_Params
{
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.GetAbsoluteIconLocation
struct UTBP_UI_BloodTrackPassiveSlot_C_GetAbsoluteIconLocation_Params
{
	float                                              Absolute_X;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.MoveIconToAbsoluteLocation
struct UTBP_UI_BloodTrackPassiveSlot_C_MoveIconToAbsoluteLocation_Params
{
	float                                              AbsoluteX;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnMouseButtonDown
struct UTBP_UI_BloodTrackPassiveSlot_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragDetected
struct UTBP_UI_BloodTrackPassiveSlot_C_OnDragDetected_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.SetPassive
struct UTBP_UI_BloodTrackPassiveSlot_C_SetPassive_Params
{
	class UTigerBloodTrackPassiveConfig*               Passive;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.Tick
struct UTBP_UI_BloodTrackPassiveSlot_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragEnter
struct UTBP_UI_BloodTrackPassiveSlot_C_OnDragEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               PointerEvent;                                              // 0x0038(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // 0x00A8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragLeave
struct UTBP_UI_BloodTrackPassiveSlot_C_OnDragLeave_Params
{
	struct FPointerEvent                               PointerEvent;                                              // 0x0000(0x0070)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                          Operation;                                                 // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnDragCancelled
struct UTBP_UI_BloodTrackPassiveSlot_C_OnDragCancelled_Params
{
	struct FPointerEvent                               PointerEvent;                                              // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                          Operation;                                                 // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnMouseEnter
struct UTBP_UI_BloodTrackPassiveSlot_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.OnMouseLeave
struct UTBP_UI_BloodTrackPassiveSlot_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_BloodTrackPassiveSlot.TBP_UI_BloodTrackPassiveSlot_C.ExecuteUbergraph_TBP_UI_BloodTrackPassiveSlot
struct UTBP_UI_BloodTrackPassiveSlot_C_ExecuteUbergraph_TBP_UI_BloodTrackPassiveSlot_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
