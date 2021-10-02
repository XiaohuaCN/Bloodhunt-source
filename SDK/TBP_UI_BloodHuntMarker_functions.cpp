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
//		Name   -> Function TBP_UI_BloodHuntMarker.TBP_UI_BloodHuntMarker_C.GetToolTipWidget_1
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UWidget*                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UWidget* UTBP_UI_BloodHuntMarker_C::GetToolTipWidget_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodHuntMarker.TBP_UI_BloodHuntMarker_C.GetToolTipWidget_1");

	UTBP_UI_BloodHuntMarker_C_GetToolTipWidget_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodHuntMarker.TBP_UI_BloodHuntMarker_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_BloodHuntMarker_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodHuntMarker.TBP_UI_BloodHuntMarker_C.Construct");

	UTBP_UI_BloodHuntMarker_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodHuntMarker.TBP_UI_BloodHuntMarker_C.OnIsOnMinimapIsSet
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bInIsOnMinimap                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BloodHuntMarker_C::OnIsOnMinimapIsSet(bool bInIsOnMinimap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodHuntMarker.TBP_UI_BloodHuntMarker_C.OnIsOnMinimapIsSet");

	UTBP_UI_BloodHuntMarker_C_OnIsOnMinimapIsSet_Params params;
	params.bInIsOnMinimap = bInIsOnMinimap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodHuntMarker.TBP_UI_BloodHuntMarker_C.ExecuteUbergraph_TBP_UI_BloodHuntMarker
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodHuntMarker_C::ExecuteUbergraph_TBP_UI_BloodHuntMarker(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodHuntMarker.TBP_UI_BloodHuntMarker_C.ExecuteUbergraph_TBP_UI_BloodHuntMarker");

	UTBP_UI_BloodHuntMarker_C_ExecuteUbergraph_TBP_UI_BloodHuntMarker_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
