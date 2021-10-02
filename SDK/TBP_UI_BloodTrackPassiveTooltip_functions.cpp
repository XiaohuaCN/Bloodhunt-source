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
//		Name   -> Function TBP_UI_BloodTrackPassiveTooltip.TBP_UI_BloodTrackPassiveTooltip_C.HideDropPrompt
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Hide                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_BloodTrackPassiveTooltip_C::HideDropPrompt(bool Hide)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveTooltip.TBP_UI_BloodTrackPassiveTooltip_C.HideDropPrompt");

	UTBP_UI_BloodTrackPassiveTooltip_C_HideDropPrompt_Params params;
	params.Hide = Hide;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveTooltip.TBP_UI_BloodTrackPassiveTooltip_C.SetPassive
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerBloodTrackPassiveConfig*               New_Passive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackPassiveTooltip_C::SetPassive(class UTigerBloodTrackPassiveConfig* New_Passive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveTooltip.TBP_UI_BloodTrackPassiveTooltip_C.SetPassive");

	UTBP_UI_BloodTrackPassiveTooltip_C_SetPassive_Params params;
	params.New_Passive = New_Passive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveTooltip.TBP_UI_BloodTrackPassiveTooltip_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_BloodTrackPassiveTooltip_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveTooltip.TBP_UI_BloodTrackPassiveTooltip_C.Construct");

	UTBP_UI_BloodTrackPassiveTooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodTrackPassiveTooltip.TBP_UI_BloodTrackPassiveTooltip_C.ExecuteUbergraph_TBP_UI_BloodTrackPassiveTooltip
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodTrackPassiveTooltip_C::ExecuteUbergraph_TBP_UI_BloodTrackPassiveTooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodTrackPassiveTooltip.TBP_UI_BloodTrackPassiveTooltip_C.ExecuteUbergraph_TBP_UI_BloodTrackPassiveTooltip");

	UTBP_UI_BloodTrackPassiveTooltip_C_ExecuteUbergraph_TBP_UI_BloodTrackPassiveTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
