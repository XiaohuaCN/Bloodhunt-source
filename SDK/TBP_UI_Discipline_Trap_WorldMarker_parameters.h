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

// Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Fade Out Default Widgets
struct UTBP_UI_Discipline_Trap_WorldMarker_C_Fade_Out_Default_Widgets_Params
{
};

// Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Fade In Default Widgets
struct UTBP_UI_Discipline_Trap_WorldMarker_C_Fade_In_Default_Widgets_Params
{
};

// Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.AreDetectionWidgetsHiddenOrAnimatingToHidden
struct UTBP_UI_Discipline_Trap_WorldMarker_C_AreDetectionWidgetsHiddenOrAnimatingToHidden_Params
{
	bool                                               AreHiding;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Toggle Detected Widgets
struct UTBP_UI_Discipline_Trap_WorldMarker_C_Toggle_Detected_Widgets_Params
{
	float                                              Effect_Size_Multiplier;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Play Detected Animations
struct UTBP_UI_Discipline_Trap_WorldMarker_C_Play_Detected_Animations_Params
{
	float                                              Effect_Size_Multiplier;                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               Should_Hide_Text;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Construct
struct UTBP_UI_Discipline_Trap_WorldMarker_C_Construct_Params
{
};

// Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Hide Detected Relevant Widgets
struct UTBP_UI_Discipline_Trap_WorldMarker_C_Hide_Detected_Relevant_Widgets_Params
{
};

// Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Show Detected Relevant Widgets
struct UTBP_UI_Discipline_Trap_WorldMarker_C_Show_Detected_Relevant_Widgets_Params
{
};

// Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.Fade Out Detected Text
struct UTBP_UI_Discipline_Trap_WorldMarker_C_Fade_Out_Detected_Text_Params
{
};

// Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.UpdateOffScreenState
struct UTBP_UI_Discipline_Trap_WorldMarker_C_UpdateOffScreenState_Params
{
	float                                              InRotationDegrees;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.UpdateVisuals
struct UTBP_UI_Discipline_Trap_WorldMarker_C_UpdateVisuals_Params
{
	bool                                               bInIsOnScreen;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C.ExecuteUbergraph_TBP_UI_Discipline_Trap_WorldMarker
struct UTBP_UI_Discipline_Trap_WorldMarker_C_ExecuteUbergraph_TBP_UI_Discipline_Trap_WorldMarker_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
