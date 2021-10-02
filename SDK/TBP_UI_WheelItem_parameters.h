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

// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.SetBackgroundColor
struct UTBP_UI_WheelItem_C_SetBackgroundColor_Params
{
	struct FLinearColor                                Color;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bVisible;                                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.UpdateCanUse
struct UTBP_UI_WheelItem_C_UpdateCanUse_Params
{
	bool                                               Can_Use;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.ResetAnimation
struct UTBP_UI_WheelItem_C_ResetAnimation_Params
{
};

// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.SetSelected
struct UTBP_UI_WheelItem_C_SetSelected_Params
{
	bool                                               IsSelected;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.UpdateData
struct UTBP_UI_WheelItem_C_UpdateData_Params
{
	struct FText                                       Name;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Icon;                                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Count;                                                     // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_1
struct UTBP_UI_WheelItem_C_WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_1_Params
{
};

// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_2
struct UTBP_UI_WheelItem_C_WidgetAnimationEvt_ShowForbiddenIcon_K2Node_WidgetAnimationEvent_2_Params
{
};

// Function TBP_UI_WheelItem.TBP_UI_WheelItem_C.ExecuteUbergraph_TBP_UI_WheelItem
struct UTBP_UI_WheelItem_C_ExecuteUbergraph_TBP_UI_WheelItem_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
