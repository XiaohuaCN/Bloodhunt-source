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

// Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.OnLevelChanged
struct UTBP_UI_LevelOverlay_C_OnLevelChanged_Params
{
	int                                                InLevel;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.UpdateBars
struct UTBP_UI_LevelOverlay_C_UpdateBars_Params
{
};

// Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.SetupUpdateConstants
struct UTBP_UI_LevelOverlay_C_SetupUpdateConstants_Params
{
	class UTigerLevelComponent*                        Level_Component;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.UpdateCurrentExperianceLevelReset
struct UTBP_UI_LevelOverlay_C_UpdateCurrentExperianceLevelReset_Params
{
};

// Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.UpdateCurrentExperience
struct UTBP_UI_LevelOverlay_C_UpdateCurrentExperience_Params
{
	class UTigerLevelComponent*                        Level_Component;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.OnAddExperience
struct UTBP_UI_LevelOverlay_C_OnAddExperience_Params
{
	int                                                Add_Experience;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.Construct
struct UTBP_UI_LevelOverlay_C_Construct_Params
{
};

// Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.Tick
struct UTBP_UI_LevelOverlay_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.PreConstruct
struct UTBP_UI_LevelOverlay_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_LevelOverlay.TBP_UI_LevelOverlay_C.ExecuteUbergraph_TBP_UI_LevelOverlay
struct UTBP_UI_LevelOverlay_C_ExecuteUbergraph_TBP_UI_LevelOverlay_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
