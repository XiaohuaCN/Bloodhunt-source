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

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistanceForTextWidget
struct UTBP_UI_InWorldIconBase_C_UpdatePlayerDistanceForTextWidget_Params
{
	class UTextBlock*                                  InTextWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.MoveWidgetsToOffscreenPositions
struct UTBP_UI_InWorldIconBase_C_MoveWidgetsToOffscreenPositions_Params
{
	float                                              InAngle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     InTranslationWidget;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     InRotationWidget;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                     InInverseTranslationWidget;                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateDistanceWidgetScaling
struct UTBP_UI_InWorldIconBase_C_UpdateDistanceWidgetScaling_Params
{
	TArray<class UWidget*>                             InWidgets;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FTS_InWorldIconDistanceScaling              InDistanceScalingParams;                                   // 0x0010(0x001C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateOffScreenWidgets
struct UTBP_UI_InWorldIconBase_C_UpdateOffScreenWidgets_Params
{
	float                                              InAngle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.GetVerticalIconOffset
struct UTBP_UI_InWorldIconBase_C_GetVerticalIconOffset_Params
{
	float                                              OutIconOffset;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.GetHorizontalIconOffset
struct UTBP_UI_InWorldIconBase_C_GetHorizontalIconOffset_Params
{
	float                                              OutIconOffset;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateVisuals
struct UTBP_UI_InWorldIconBase_C_UpdateVisuals_Params
{
	bool                                               bInIsOnScreen;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistance
struct UTBP_UI_InWorldIconBase_C_UpdatePlayerDistance_Params
{
};

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdateOffScreenState
struct UTBP_UI_InWorldIconBase_C_UpdateOffScreenState_Params
{
	float                                              InRotationDegrees;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.OnScreenStateChanged
struct UTBP_UI_InWorldIconBase_C_OnScreenStateChanged_Params
{
	bool                                               bInIsOnScreen;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.OnInnerWidgetChanged
struct UTBP_UI_InWorldIconBase_C_OnInnerWidgetChanged_Params
{
};

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.Construct
struct UTBP_UI_InWorldIconBase_C_Construct_Params
{
};

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.UpdatePlayerDistanceScalingWidgets
struct UTBP_UI_InWorldIconBase_C_UpdatePlayerDistanceScalingWidgets_Params
{
};

// Function TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C.ExecuteUbergraph_TBP_UI_InWorldIconBase
struct UTBP_UI_InWorldIconBase_C_ExecuteUbergraph_TBP_UI_InWorldIconBase_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
