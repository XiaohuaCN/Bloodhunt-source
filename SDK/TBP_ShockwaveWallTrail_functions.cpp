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
//		Name   -> Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.StopSpawningParticles
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_ShockwaveWallTrail_C::StopSpawningParticles()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.StopSpawningParticles");

	ATBP_ShockwaveWallTrail_C_StopSpawningParticles_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_ShockwaveWallTrail_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ReceiveBeginPlay");

	ATBP_ShockwaveWallTrail_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ShockwaveWallTrail_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ReceiveTick");

	ATBP_ShockwaveWallTrail_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ExecuteUbergraph_TBP_ShockwaveWallTrail
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ShockwaveWallTrail_C::ExecuteUbergraph_TBP_ShockwaveWallTrail(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ShockwaveWallTrail.TBP_ShockwaveWallTrail_C.ExecuteUbergraph_TBP_ShockwaveWallTrail");

	ATBP_ShockwaveWallTrail_C_ExecuteUbergraph_TBP_ShockwaveWallTrail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
