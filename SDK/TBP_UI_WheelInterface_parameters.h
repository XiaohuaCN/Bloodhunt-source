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

// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ConstructWheel
struct UTBP_UI_WheelInterface_C_ConstructWheel_Params
{
	int                                                In_Num_Items;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.On_InventoryBackground_MouseButtonDown_1
struct UTBP_UI_WheelInterface_C_On_InventoryBackground_MouseButtonDown_1_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.PlayOpenAnimation
struct UTBP_UI_WheelInterface_C_PlayOpenAnimation_Params
{
};

// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.PlayCloseAnimation
struct UTBP_UI_WheelInterface_C_PlayCloseAnimation_Params
{
};

// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ResetItems
struct UTBP_UI_WheelInterface_C_ResetItems_Params
{
};

// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetItem
struct UTBP_UI_WheelInterface_C_SetItem_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Label;                                                     // 0x0010(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int                                                Count;                                                     // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.UpdateHoverEffect
struct UTBP_UI_WheelInterface_C_UpdateHoverEffect_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetWheelUsable
struct UTBP_UI_WheelInterface_C_SetWheelUsable_Params
{
	bool                                               bNewUsable;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.SetIsItemSelected
struct UTBP_UI_WheelInterface_C_SetIsItemSelected_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsSelected;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.WidgetAnimationEvt_OpenMenu_K2Node_WidgetAnimationEvent_1
struct UTBP_UI_WheelInterface_C_WidgetAnimationEvt_OpenMenu_K2Node_WidgetAnimationEvent_1_Params
{
};

// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.OnNumberOfItemsChanged
struct UTBP_UI_WheelInterface_C_OnNumberOfItemsChanged_Params
{
	int                                                InNewNumberOfItems;                                        // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.ExecuteUbergraph_TBP_UI_WheelInterface
struct UTBP_UI_WheelInterface_C_ExecuteUbergraph_TBP_UI_WheelInterface_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_WheelInterface.TBP_UI_WheelInterface_C.OnMenuPrimary__DelegateSignature
struct UTBP_UI_WheelInterface_C_OnMenuPrimary__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
