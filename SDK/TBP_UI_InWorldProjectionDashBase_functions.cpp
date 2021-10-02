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
//		Name   -> Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.Tick
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
//		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InWorldProjectionDashBase_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.Tick");

	UTBP_UI_InWorldProjectionDashBase_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.UpdateOffScreenState
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              InRotationDegrees                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InWorldProjectionDashBase_C::UpdateOffScreenState(float InRotationDegrees)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.UpdateOffScreenState");

	UTBP_UI_InWorldProjectionDashBase_C_UpdateOffScreenState_Params params;
	params.InRotationDegrees = InRotationDegrees;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.OnScreenStateChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bInIsOnScreen                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_InWorldProjectionDashBase_C::OnScreenStateChanged(bool bInIsOnScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.OnScreenStateChanged");

	UTBP_UI_InWorldProjectionDashBase_C_OnScreenStateChanged_Params params;
	params.bInIsOnScreen = bInIsOnScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_InWorldProjectionDashBase_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.Construct");

	UTBP_UI_InWorldProjectionDashBase_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.ExecuteUbergraph_TBP_UI_InWorldProjectionDashBase
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InWorldProjectionDashBase_C::ExecuteUbergraph_TBP_UI_InWorldProjectionDashBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C.ExecuteUbergraph_TBP_UI_InWorldProjectionDashBase");

	UTBP_UI_InWorldProjectionDashBase_C_ExecuteUbergraph_TBP_UI_InWorldProjectionDashBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
