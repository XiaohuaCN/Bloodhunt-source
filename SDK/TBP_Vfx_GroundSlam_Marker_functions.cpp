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
//		Name   -> Function TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C.ToggleUIVisibility
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_Vfx_GroundSlam_Marker_C::ToggleUIVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C.ToggleUIVisibility");

	ATBP_Vfx_GroundSlam_Marker_C_ToggleUIVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C.ExecuteUbergraph_TBP_Vfx_GroundSlam_Marker
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Vfx_GroundSlam_Marker_C::ExecuteUbergraph_TBP_Vfx_GroundSlam_Marker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vfx_GroundSlam_Marker.TBP_Vfx_GroundSlam_Marker_C.ExecuteUbergraph_TBP_Vfx_GroundSlam_Marker");

	ATBP_Vfx_GroundSlam_Marker_C_ExecuteUbergraph_TBP_Vfx_GroundSlam_Marker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
