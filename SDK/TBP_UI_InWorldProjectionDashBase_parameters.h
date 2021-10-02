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

// Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.Tick
struct UTBP_UI_InWorldProjectionDashBase_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.UpdateOffScreenState
struct UTBP_UI_InWorldProjectionDashBase_C_UpdateOffScreenState_Params
{
	float                                              InRotationDegrees;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.OnScreenStateChanged
struct UTBP_UI_InWorldProjectionDashBase_C_OnScreenStateChanged_Params
{
	bool                                               bInIsOnScreen;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.Construct
struct UTBP_UI_InWorldProjectionDashBase_C_Construct_Params
{
};

// Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.ExecuteUbergraph_TBP_UI_InWorldProjectionDashBase
struct UTBP_UI_InWorldProjectionDashBase_C_ExecuteUbergraph_TBP_UI_InWorldProjectionDashBase_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
