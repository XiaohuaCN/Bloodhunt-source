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

// Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.PopulateMenus
struct UTBP_UI_BloodTrackCustomizer_C_PopulateMenus_Params
{
};

// Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.SwitchSelectedPassive
struct UTBP_UI_BloodTrackCustomizer_C_SwitchSelectedPassive_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerBloodTrackPassiveConfig*               New_Passive;                                               // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.MenuClosing
struct UTBP_UI_BloodTrackCustomizer_C_MenuClosing_Params
{
};

// Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.PreviewMove
struct UTBP_UI_BloodTrackCustomizer_C_PreviewMove_Params
{
	TArray<int>                                        Movement_Data;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.ModifyBloodTrack
struct UTBP_UI_BloodTrackCustomizer_C_ModifyBloodTrack_Params
{
	TArray<int>                                        Movement_Data;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.MenuOpening
struct UTBP_UI_BloodTrackCustomizer_C_MenuOpening_Params
{
};

// Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.UpdateBackgroundVisibility
struct UTBP_UI_BloodTrackCustomizer_C_UpdateBackgroundVisibility_Params
{
};

// Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.OnInitialized
struct UTBP_UI_BloodTrackCustomizer_C_OnInitialized_Params
{
};

// Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.Destruct
struct UTBP_UI_BloodTrackCustomizer_C_Destruct_Params
{
};

// Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.OnBloodTrackUpdatedEvent_Event_1
struct UTBP_UI_BloodTrackCustomizer_C_OnBloodTrackUpdatedEvent_Event_1_Params
{
	class ATigerPlayer*                                InPlayer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C.ExecuteUbergraph_TBP_UI_BloodTrackCustomizer
struct UTBP_UI_BloodTrackCustomizer_C_ExecuteUbergraph_TBP_UI_BloodTrackCustomizer_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
