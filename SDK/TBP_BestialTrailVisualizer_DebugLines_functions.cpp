// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.Decide LifeTime
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              ExtraLifeTimePerStack                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              FinalLifeTime                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BestialTrailVisualizer_DebugLines_C::Decide_LifeTime(float ExtraLifeTimePerStack, float* FinalLifeTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.Decide LifeTime");

	ATBP_BestialTrailVisualizer_DebugLines_C_Decide_LifeTime_Params params;
	params.ExtraLifeTimePerStack = ExtraLifeTimePerStack;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (FinalLifeTime != nullptr)
		*FinalLifeTime = params.FinalLifeTime;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.AddPoint
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPlayerSavedLocation                   New_Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ATBP_BestialTrailVisualizer_DebugLines_C::AddPoint(const struct FTigerPlayerSavedLocation& New_Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.AddPoint");

	ATBP_BestialTrailVisualizer_DebugLines_C_AddPoint_Params params;
	params.New_Location = New_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.BeginEndTracking
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_BestialTrailVisualizer_DebugLines_C::BeginEndTracking()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.BeginEndTracking");

	ATBP_BestialTrailVisualizer_DebugLines_C_BeginEndTracking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_BestialTrailVisualizer_DebugLines_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveBeginPlay");

	ATBP_BestialTrailVisualizer_DebugLines_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveInitialTrackingPoints
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<struct FTigerPlayerSavedLocation>           Locations                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		class ATigerPlayer*                                TrackedPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BestialTrailVisualizer_DebugLines_C::ReceiveInitialTrackingPoints(TArray<struct FTigerPlayerSavedLocation> Locations, class ATigerPlayer* TrackedPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveInitialTrackingPoints");

	ATBP_BestialTrailVisualizer_DebugLines_C_ReceiveInitialTrackingPoints_Params params;
	params.Locations = Locations;
	params.TrackedPlayer = TrackedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveNewTrackingPoint
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTigerPlayerSavedLocation                   NewLocation                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void ATBP_BestialTrailVisualizer_DebugLines_C::ReceiveNewTrackingPoint(const struct FTigerPlayerSavedLocation& NewLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ReceiveNewTrackingPoint");

	ATBP_BestialTrailVisualizer_DebugLines_C_ReceiveNewTrackingPoint_Params params;
	params.NewLocation = NewLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ExecuteUbergraph_TBP_BestialTrailVisualizer_DebugLines
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_BestialTrailVisualizer_DebugLines_C::ExecuteUbergraph_TBP_BestialTrailVisualizer_DebugLines(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C.ExecuteUbergraph_TBP_BestialTrailVisualizer_DebugLines");

	ATBP_BestialTrailVisualizer_DebugLines_C_ExecuteUbergraph_TBP_BestialTrailVisualizer_DebugLines_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
