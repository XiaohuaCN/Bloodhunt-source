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

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.SetFullscreenIcon
struct UTBP_UI_VideoPlayer_C_SetFullscreenIcon_Params
{
	bool                                               Expanded;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Hide
struct UTBP_UI_VideoPlayer_C_Hide_Params
{
};

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Show
struct UTBP_UI_VideoPlayer_C_Show_Params
{
	class UMediaSource*                                InMediaSource;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Construct
struct UTBP_UI_VideoPlayer_C_Construct_Params
{
};

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMediaOpened
struct UTBP_UI_VideoPlayer_C_OnMediaOpened_Params
{
	struct FString                                     OpenedUrl;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.BndEvt__PauseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_VideoPlayer_C_BndEvt__PauseButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.Tick
struct UTBP_UI_VideoPlayer_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubMouseCaptureBegin
struct UTBP_UI_VideoPlayer_C_OnScrubMouseCaptureBegin_Params
{
};

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubMouseCaptureEnd
struct UTBP_UI_VideoPlayer_C_OnScrubMouseCaptureEnd_Params
{
};

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnScrubValueChanged
struct UTBP_UI_VideoPlayer_C_OnScrubValueChanged_Params
{
	float                                              Value;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMouseEnter
struct UTBP_UI_VideoPlayer_C_OnMouseEnter_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                               MouseEvent;                                                // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.OnMouseLeave
struct UTBP_UI_VideoPlayer_C_OnMouseLeave_Params
{
	struct FPointerEvent                               MouseEvent;                                                // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.BndEvt__FullscreenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UTBP_UI_VideoPlayer_C_BndEvt__FullscreenButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.ExecuteUbergraph_TBP_UI_VideoPlayer
struct UTBP_UI_VideoPlayer_C_ExecuteUbergraph_TBP_UI_VideoPlayer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_VideoPlayer.TBP_UI_VideoPlayer_C.FullscreenButtonPressed__DelegateSignature
struct UTBP_UI_VideoPlayer_C_FullscreenButtonPressed__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
