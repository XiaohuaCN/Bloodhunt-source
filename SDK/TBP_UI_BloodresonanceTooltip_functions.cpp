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
//		Name   -> Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.SetBloodType
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerBloodType                              InBloodType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodResonanceTooltip_C::SetBloodType(Tiger_ETigerBloodType InBloodType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.SetBloodType");

	UTBP_UI_BloodResonanceTooltip_C_SetBloodType_Params params;
	params.InBloodType = InBloodType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.OnBloodResonanceAdded
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerBloodType                              InBloodType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodResonanceTooltip_C::OnBloodResonanceAdded(Tiger_ETigerBloodType InBloodType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.OnBloodResonanceAdded");

	UTBP_UI_BloodResonanceTooltip_C_OnBloodResonanceAdded_Params params;
	params.InBloodType = InBloodType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_BloodResonanceTooltip_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.Construct");

	UTBP_UI_BloodResonanceTooltip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.OnBloodResonanceWasCappedAfterFeed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerBloodType                              InBloodType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerBloodResonanceBlockType                InBlockType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodResonanceTooltip_C::OnBloodResonanceWasCappedAfterFeed(Tiger_ETigerBloodType InBloodType, Tiger_ETigerBloodResonanceBlockType InBlockType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.OnBloodResonanceWasCappedAfterFeed");

	UTBP_UI_BloodResonanceTooltip_C_OnBloodResonanceWasCappedAfterFeed_Params params;
	params.InBloodType = InBloodType;
	params.InBlockType = InBlockType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.ExecuteUbergraph_TBP_UI_BloodResonanceTooltip
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_BloodResonanceTooltip_C::ExecuteUbergraph_TBP_UI_BloodResonanceTooltip(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.ExecuteUbergraph_TBP_UI_BloodResonanceTooltip");

	UTBP_UI_BloodResonanceTooltip_C_ExecuteUbergraph_TBP_UI_BloodResonanceTooltip_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
