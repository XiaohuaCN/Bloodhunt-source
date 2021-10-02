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

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.GetAntiAliasingItemVisibility
struct UTBP_UI_SystemMenuGraphicsSettings_C_GetAntiAliasingItemVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.GetResolutionScaleItemVisibility
struct UTBP_UI_SystemMenuGraphicsSettings_C_GetResolutionScaleItemVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.GetFsrSettingsItemVisibility
struct UTBP_UI_SystemMenuGraphicsSettings_C_GetFsrSettingsItemVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ApplySettings
struct UTBP_UI_SystemMenuGraphicsSettings_C_ApplySettings_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitGraphicsSettings
struct UTBP_UI_SystemMenuGraphicsSettings_C_InitGraphicsSettings_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitDisplaySettings
struct UTBP_UI_SystemMenuGraphicsSettings_C_InitDisplaySettings_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.InitQualityOptions
struct UTBP_UI_SystemMenuGraphicsSettings_C_InitQualityOptions_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.SetQualityOptionLabels
struct UTBP_UI_SystemMenuGraphicsSettings_C_SetQualityOptionLabels_Params
{
	class UTBP_UI_Carousel_C*                          InOptionCarousel;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InOptionCount;                                             // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InUsesCustom;                                              // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InUsesOff;                                                 // 0x000D(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InUsesLow;                                                 // 0x000E(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshQualityOptions
struct UTBP_UI_SystemMenuGraphicsSettings_C_RefreshQualityOptions_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.SetSubmenuButtonNames
struct UTBP_UI_SystemMenuGraphicsSettings_C_SetSubmenuButtonNames_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.DiscardUnappliedChanges
struct UTBP_UI_SystemMenuGraphicsSettings_C_DiscardUnappliedChanges_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshResolutionOptions
struct UTBP_UI_SystemMenuGraphicsSettings_C_RefreshResolutionOptions_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.RefreshWindowModeOptions
struct UTBP_UI_SystemMenuGraphicsSettings_C_RefreshWindowModeOptions_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__ResolutionCarousel_K2Node_ComponentBoundEvent_1_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__ResolutionCarousel_K2Node_ComponentBoundEvent_1_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__DisplayModeCarousel_K2Node_ComponentBoundEvent_2_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__DisplayModeCarousel_K2Node_ComponentBoundEvent_2_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.Destruct
struct UTBP_UI_SystemMenuGraphicsSettings_C_Destruct_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.Construct
struct UTBP_UI_SystemMenuGraphicsSettings_C_Construct_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.PreConstruct
struct UTBP_UI_SystemMenuGraphicsSettings_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Resolution_TabButton_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__Resolution_TabButton_K2Node_ComponentBoundEvent_0_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Brightness_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__Brightness_TabButton_K2Node_ComponentBoundEvent_4_OnButtonPressed__DelegateSignature_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__Button_260_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__Button_260_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnBrightnessConfirm
struct UTBP_UI_SystemMenuGraphicsSettings_C_OnBrightnessConfirm_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__GammaSlider_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature_Params
{
	float                                              BoxValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SliderValue;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_TestCheckBox1_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_TestCheckBox1_K2Node_ComponentBoundEvent_7_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VisualEffectCarousel_K2Node_ComponentBoundEvent_8_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_VisualEffectCarousel_K2Node_ComponentBoundEvent_8_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ViewDistanceCarousel_K2Node_ComponentBoundEvent_9_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_ViewDistanceCarousel_K2Node_ComponentBoundEvent_9_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_MaterialCarousel_K2Node_ComponentBoundEvent_10_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_MaterialCarousel_K2Node_ComponentBoundEvent_10_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ShadowCarousel_K2Node_ComponentBoundEvent_11_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_ShadowCarousel_K2Node_ComponentBoundEvent_11_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarousel_K2Node_ComponentBoundEvent_12_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_QualityPresetCarousel_K2Node_ComponentBoundEvent_12_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureFilteringCarousel_K2Node_ComponentBoundEvent_13_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureFilteringCarousel_K2Node_ComponentBoundEvent_13_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_AntiAliasingCarousel_K2Node_ComponentBoundEvent_14_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_AntiAliasingCarousel_K2Node_ComponentBoundEvent_14_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureCarousel_K2Node_ComponentBoundEvent_15_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_TextureCarousel_K2Node_ComponentBoundEvent_15_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FoliageCarousel_K2Node_ComponentBoundEvent_16_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_FoliageCarousel_K2Node_ComponentBoundEvent_16_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VolumetricFogCarousel_K2Node_ComponentBoundEvent_17_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_VolumetricFogCarousel_K2Node_ComponentBoundEvent_17_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_VsyncBox_K2Node_ComponentBoundEvent_18_OnCheckStateChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_VsyncBox_K2Node_ComponentBoundEvent_18_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OnQualityOptionChanged
struct UTBP_UI_SystemMenuGraphicsSettings_C_OnQualityOptionChanged_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameLimitCarousel_K2Node_ComponentBoundEvent_20_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameLimitCarousel_K2Node_ComponentBoundEvent_20_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_3_CountdownFinished__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_3_CountdownFinished__DelegateSignature_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ConfirmApply
struct UTBP_UI_SystemMenuGraphicsSettings_C_ConfirmApply_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_22_Confirm__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_22_Confirm__DelegateSignature_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_23_Decline__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_RevertPrompt_K2Node_ComponentBoundEvent_23_Decline__DelegateSignature_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.OpenCategory
struct UTBP_UI_SystemMenuGraphicsSettings_C_OpenCategory_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.CloseCategory
struct UTBP_UI_SystemMenuGraphicsSettings_C_CloseCategory_Params
{
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrQualityCarousel_K2Node_ComponentBoundEvent_25_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrQualityCarousel_K2Node_ComponentBoundEvent_25_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrSharpeningSlider_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_FsrSharpeningSlider_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature_Params
{
	float                                              BoxValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SliderValue;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameRateSmoothingBox_K2Node_ComponentBoundEvent_24_OnCheckStateChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_FrameRateSmoothingBox_K2Node_ComponentBoundEvent_24_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightingQualityCarousel_K2Node_ComponentBoundEvent_28_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightingQualityCarousel_K2Node_ComponentBoundEvent_28_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ChromaticAberrationBox_K2Node_ComponentBoundEvent_29_OnCheckStateChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_ChromaticAberrationBox_K2Node_ComponentBoundEvent_29_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_FilmGrainBox_K2Node_ComponentBoundEvent_30_OnCheckStateChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_FilmGrainBox_K2Node_ComponentBoundEvent_30_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightShaftsItemBox_K2Node_ComponentBoundEvent_31_OnCheckStateChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_LightShaftsItemBox_K2Node_ComponentBoundEvent_31_OnCheckStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_AmbientOcclusionCarousel_K2Node_ComponentBoundEvent_36_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_AmbientOcclusionCarousel_K2Node_ComponentBoundEvent_36_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_BloomCarousel_K2Node_ComponentBoundEvent_37_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_BloomCarousel_K2Node_ComponentBoundEvent_37_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_LensFlareCarousel_K2Node_ComponentBoundEvent_38_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_LensFlareCarousel_K2Node_ComponentBoundEvent_38_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_MotionBlurCarousel_K2Node_ComponentBoundEvent_39_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_MotionBlurCarousel_K2Node_ComponentBoundEvent_39_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ScreenSpaceReflectionCarousel_K2Node_ComponentBoundEvent_40_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_ScreenSpaceReflectionCarousel_K2Node_ComponentBoundEvent_40_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature_Params
{
	float                                              BoxValue;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              SliderValue;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.BndEvt__TBP_UI_SystemMenuGraphicsSettings_SubSurfaceScatteringCarousel_K2Node_ComponentBoundEvent_32_SelectedItemIndexChanged__DelegateSignature
struct UTBP_UI_SystemMenuGraphicsSettings_C_BndEvt__TBP_UI_SystemMenuGraphicsSettings_SubSurfaceScatteringCarousel_K2Node_ComponentBoundEvent_32_SelectedItemIndexChanged__DelegateSignature_Params
{
	int                                                NewIndex;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_SystemMenuGraphicsSettings.TBP_UI_SystemMenuGraphicsSettings_C.ExecuteUbergraph_TBP_UI_SystemMenuGraphicsSettings
struct UTBP_UI_SystemMenuGraphicsSettings_C_ExecuteUbergraph_TBP_UI_SystemMenuGraphicsSettings_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
