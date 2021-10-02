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

// Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.Decide LifeTime
struct ATBP_BestialTrailVisualizer_DebugLines_C_Decide_LifeTime_Params
{
	float                                              ExtraLifeTimePerStack;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FinalLifeTime;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.AddPoint
struct ATBP_BestialTrailVisualizer_DebugLines_C_AddPoint_Params
{
	struct FTigerPlayerSavedLocation                   New_Location;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.BeginEndTracking
struct ATBP_BestialTrailVisualizer_DebugLines_C_BeginEndTracking_Params
{
};

// Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveBeginPlay
struct ATBP_BestialTrailVisualizer_DebugLines_C_ReceiveBeginPlay_Params
{
};

// Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveInitialTrackingPoints
struct ATBP_BestialTrailVisualizer_DebugLines_C_ReceiveInitialTrackingPoints_Params
{
	TArray<struct FTigerPlayerSavedLocation>           Locations;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class ATigerPlayer*                                TrackedPlayer;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveNewTrackingPoint
struct ATBP_BestialTrailVisualizer_DebugLines_C_ReceiveNewTrackingPoint_Params
{
	struct FTigerPlayerSavedLocation                   NewLocation;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ExecuteUbergraph_TBP_BestialTrailVisualizer_DebugLines
struct ATBP_BestialTrailVisualizer_DebugLines_C_ExecuteUbergraph_TBP_BestialTrailVisualizer_DebugLines_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
