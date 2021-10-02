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
//		Name   -> Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.SetVisible
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_NewNotification_C::SetVisible(bool InVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.SetVisible");

	UTBP_UI_NewNotification_C_SetVisible_Params params;
	params.InVisible = InVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Initialize
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_NewNotification_C::Initialize()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Initialize");

	UTBP_UI_NewNotification_C_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_NewNotification_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Construct");

	UTBP_UI_NewNotification_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_NewNotification_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.Destruct");

	UTBP_UI_NewNotification_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.CheckShouldBeActive
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_NewNotification_C::CheckShouldBeActive()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.CheckShouldBeActive");

	UTBP_UI_NewNotification_C_CheckShouldBeActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.BindNewsUpdateEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_NewNotification_C::BindNewsUpdateEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.BindNewsUpdateEvent");

	UTBP_UI_NewNotification_C_BindNewsUpdateEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.OnHide
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              DelayTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_NewNotification_C::OnHide(float DelayTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.OnHide");

	UTBP_UI_NewNotification_C_OnHide_Params params;
	params.DelayTime = DelayTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.ExecuteUbergraph_TBP_UI_NewNotification
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_NewNotification_C::ExecuteUbergraph_TBP_UI_NewNotification(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_NewNotification.TBP_UI_NewNotification_C.ExecuteUbergraph_TBP_UI_NewNotification");

	UTBP_UI_NewNotification_C_ExecuteUbergraph_TBP_UI_NewNotification_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
