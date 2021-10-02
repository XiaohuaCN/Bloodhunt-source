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

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Set Is Clickable
struct UTBP_UI_MenuButton_C_Set_Is_Clickable_Params
{
	bool                                               bIsClickable;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.SetButtonStyleTexture
struct UTBP_UI_MenuButton_C_SetButtonStyleTexture_Params
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.UpdateBackgroundStyle
struct UTBP_UI_MenuButton_C_UpdateBackgroundStyle_Params
{
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.UpdateBorderOpacity
struct UTBP_UI_MenuButton_C_UpdateBorderOpacity_Params
{
	float                                              DeltaTime;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.SetButtonText
struct UTBP_UI_MenuButton_C_SetButtonText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Tick
struct UTBP_UI_MenuButton_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnRemovedFromFocusPath
struct UTBP_UI_MenuButton_C_OnRemovedFromFocusPath_Params
{
	struct FFocusEvent                                 InFocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.PreConstruct
struct UTBP_UI_MenuButton_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.Construct
struct UTBP_UI_MenuButton_C_Construct_Params
{
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_300_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_MenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_300_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnInitialized
struct UTBP_UI_MenuButton_C_OnInitialized_Params
{
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
struct UTBP_UI_MenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature
struct UTBP_UI_MenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_334_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_MenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_334_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.BndEvt__Button_K2Node_ComponentBoundEvent_323_OnButtonHoverEvent__DelegateSignature
struct UTBP_UI_MenuButton_C_BndEvt__Button_K2Node_ComponentBoundEvent_323_OnButtonHoverEvent__DelegateSignature_Params
{
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.ExecuteUbergraph_TBP_UI_MenuButton
struct UTBP_UI_MenuButton_C_ExecuteUbergraph_TBP_UI_MenuButton_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnUnhovered__DelegateSignature
struct UTBP_UI_MenuButton_C_OnUnhovered__DelegateSignature_Params
{
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnHovered__DelegateSignature
struct UTBP_UI_MenuButton_C_OnHovered__DelegateSignature_Params
{
};

// Function TBP_UI_MenuButton.TBP_UI_MenuButton_C.OnClicked__DelegateSignature
struct UTBP_UI_MenuButton_C_OnClicked__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
