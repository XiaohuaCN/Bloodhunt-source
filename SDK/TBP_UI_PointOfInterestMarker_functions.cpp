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
//		Name   -> Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.ConvertToHighTierLootMarker
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_PointOfInterestMarker_C::ConvertToHighTierLootMarker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.ConvertToHighTierLootMarker");

	UTBP_UI_PointOfInterestMarker_C_ConvertToHighTierLootMarker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.SetToHighTierLootLocation
//		Flags  -> (Event, Protected, HasOutParms, BlueprintEvent)
void UTBP_UI_PointOfInterestMarker_C::SetToHighTierLootLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.SetToHighTierLootLocation");

	UTBP_UI_PointOfInterestMarker_C_SetToHighTierLootLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.ExecuteUbergraph_TBP_UI_PointOfInterestMarker
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_PointOfInterestMarker_C::ExecuteUbergraph_TBP_UI_PointOfInterestMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_PointOfInterestMarker.TBP_UI_PointOfInterestMarker_C.ExecuteUbergraph_TBP_UI_PointOfInterestMarker");

	UTBP_UI_PointOfInterestMarker_C_ExecuteUbergraph_TBP_UI_PointOfInterestMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
