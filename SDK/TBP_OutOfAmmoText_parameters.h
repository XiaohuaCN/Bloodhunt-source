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

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.SetNonReloadWidget
struct UTBP_OutOfAmmoText_C_SetNonReloadWidget_Params
{
	class UWidget*                                     Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ReloadAnimationDone
struct UTBP_OutOfAmmoText_C_ReloadAnimationDone_Params
{
};

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadAborted
struct UTBP_OutOfAmmoText_C_OnReloadAborted_Params
{
};

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadFinished
struct UTBP_OutOfAmmoText_C_OnReloadFinished_Params
{
};

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.OnReloadStart
struct UTBP_OutOfAmmoText_C_OnReloadStart_Params
{
};

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ReloadAnimationStartFadeOut
struct UTBP_OutOfAmmoText_C_ReloadAnimationStartFadeOut_Params
{
};

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.PlayReloadEndAnimation
struct UTBP_OutOfAmmoText_C_PlayReloadEndAnimation_Params
{
	class UWidgetAnimation*                            ReloadAnimation;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.IsWaitingForReloadingAnimation
struct UTBP_OutOfAmmoText_C_IsWaitingForReloadingAnimation_Params
{
	bool                                               AnimationPlaying;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Construct
struct UTBP_OutOfAmmoText_C_Construct_Params
{
};

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Tick
struct UTBP_OutOfAmmoText_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Aborted
struct UTBP_OutOfAmmoText_C_Reload_Aborted_Params
{
};

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Finished
struct UTBP_OutOfAmmoText_C_Reload_Finished_Params
{
};

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.Reload Start
struct UTBP_OutOfAmmoText_C_Reload_Start_Params
{
};

// Function TBP_OutOfAmmoText.TBP_OutOfAmmoText_C.ExecuteUbergraph_TBP_OutOfAmmoText
struct UTBP_OutOfAmmoText_C_ExecuteUbergraph_TBP_OutOfAmmoText_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
