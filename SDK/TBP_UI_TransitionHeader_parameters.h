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

// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.SetText
struct UTBP_UI_TransitionHeader_C_SetText_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       InSubText;                                                 // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.TriggerAnimation
struct UTBP_UI_TransitionHeader_C_TriggerAnimation_Params
{
};

// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.SetTextWithHeaderType
struct UTBP_UI_TransitionHeader_C_SetTextWithHeaderType_Params
{
	struct FText                                       InText;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       InSubText;                                                 // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	TEnumAsByte<ETigerHeaderType_ETigerHeaderType>     InHeaderType;                                              // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.InitializeEffect
struct UTBP_UI_TransitionHeader_C_InitializeEffect_Params
{
};

// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Tick
struct UTBP_UI_TransitionHeader_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Construct
struct UTBP_UI_TransitionHeader_C_Construct_Params
{
};

// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.TriggerAnimationWithDelay
struct UTBP_UI_TransitionHeader_C_TriggerAnimationWithDelay_Params
{
};

// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.PreConstruct
struct UTBP_UI_TransitionHeader_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1
struct UTBP_UI_TransitionHeader_C_WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1_Params
{
};

// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.Play Header Animation
struct UTBP_UI_TransitionHeader_C_Play_Header_Animation_Params
{
	bool                                               IsReversed;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.ExecuteUbergraph_TBP_UI_TransitionHeader
struct UTBP_UI_TransitionHeader_C_ExecuteUbergraph_TBP_UI_TransitionHeader_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C.OnInAnimationFinished__DelegateSignature
struct UTBP_UI_TransitionHeader_C_OnInAnimationFinished__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
