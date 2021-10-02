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

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.SetupVeins
struct UTBP_UI_TitleScreen_C_SetupVeins_Params
{
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.CloseErrorSubscreen
struct UTBP_UI_TitleScreen_C_CloseErrorSubscreen_Params
{
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OpenErrorSubscreen
struct UTBP_UI_TitleScreen_C_OpenErrorSubscreen_Params
{
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.HandleInputReaction
struct UTBP_UI_TitleScreen_C_HandleInputReaction_Params
{
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnMouseButtonDown
struct UTBP_UI_TitleScreen_C_OnMouseButtonDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                                 ReturnValue;                                               // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnKeyDown
struct UTBP_UI_TitleScreen_C_OnKeyDown_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                                   InKeyEvent;                                                // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                                 ReturnValue;                                               // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.PreConstruct
struct UTBP_UI_TitleScreen_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnVideoOpened
struct UTBP_UI_TitleScreen_C_OnVideoOpened_Params
{
	struct FString                                     OpenedUrl;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Tick
struct UTBP_UI_TitleScreen_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1
struct UTBP_UI_TitleScreen_C_WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1_Params
{
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Destruct
struct UTBP_UI_TitleScreen_C_Destruct_Params
{
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.Open
struct UTBP_UI_TitleScreen_C_Open_Params
{
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.BndEvt__ErrorSubscreen_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature
struct UTBP_UI_TitleScreen_C_BndEvt__ErrorSubscreen_K2Node_ComponentBoundEvent_0_OnRetry__DelegateSignature_Params
{
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageClosed_Event
struct UTBP_UI_TitleScreen_C_OnLandingPageClosed_Event_Params
{
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_3
struct UTBP_UI_TitleScreen_C_WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_3_Params
{
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_4
struct UTBP_UI_TitleScreen_C_WidgetAnimationEvt_OutAnimation_K2Node_WidgetAnimationEvent_4_Params
{
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.ExecuteUbergraph_TBP_UI_TitleScreen
struct UTBP_UI_TitleScreen_C_ExecuteUbergraph_TBP_UI_TitleScreen_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageFadeOutStarted__DelegateSignature
struct UTBP_UI_TitleScreen_C_OnLandingPageFadeOutStarted__DelegateSignature_Params
{
};

// Function TBP_UI_TitleScreen.TBP_UI_TitleScreen_C.OnLandingPageClosed__DelegateSignature
struct UTBP_UI_TitleScreen_C_OnLandingPageClosed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
