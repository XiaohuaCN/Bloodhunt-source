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
//		Name   -> Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnMasqueradeStateUpdated
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InMasqueradeBroken                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		Tiger_ETigerAIPlayerAction                         InPlayerAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_StatusIcon_C::OnMasqueradeStateUpdated(bool InMasqueradeBroken, Tiger_ETigerAIPlayerAction InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnMasqueradeStateUpdated");

	UTBP_UI_StatusIcon_C_OnMasqueradeStateUpdated_Params params;
	params.InMasqueradeBroken = InMasqueradeBroken;
	params.InPlayerAction = InPlayerAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.SetStatusIcon
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon>        InStatusIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_StatusIcon_C::SetStatusIcon(TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon> InStatusIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.SetStatusIcon");

	UTBP_UI_StatusIcon_C_SetStatusIcon_Params params;
	params.InStatusIcon = InStatusIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.UpdateActiveStatus
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_StatusIcon_C::UpdateActiveStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.UpdateActiveStatus");

	UTBP_UI_StatusIcon_C_UpdateActiveStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnReviveStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InReviveActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               InIsTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_StatusIcon_C::OnReviveStateChanged(bool InReviveActive, bool InIsTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnReviveStateChanged");

	UTBP_UI_StatusIcon_C_OnReviveStateChanged_Params params;
	params.InReviveActive = InReviveActive;
	params.InIsTarget = InIsTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnDiablerizeStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InDiablerizeActive                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               InIsTarget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_StatusIcon_C::OnDiablerizeStateChanged(bool InDiablerizeActive, bool InIsTarget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnDiablerizeStateChanged");

	UTBP_UI_StatusIcon_C_OnDiablerizeStateChanged_Params params;
	params.InDiablerizeActive = InDiablerizeActive;
	params.InIsTarget = InIsTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnMasqueradeStateChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InMasqueradeBroken                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		Tiger_ETigerAIPlayerAction                         InPlayerAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_StatusIcon_C::OnMasqueradeStateChanged(bool InMasqueradeBroken, Tiger_ETigerAIPlayerAction InPlayerAction)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnMasqueradeStateChanged");

	UTBP_UI_StatusIcon_C_OnMasqueradeStateChanged_Params params;
	params.InMasqueradeBroken = InMasqueradeBroken;
	params.InPlayerAction = InPlayerAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.SetPawn
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       InPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_StatusIcon_C::SetPawn(class APawn* InPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.SetPawn");

	UTBP_UI_StatusIcon_C_SetPawn_Params params;
	params.InPawn = InPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_StatusIcon_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.PreConstruct");

	UTBP_UI_StatusIcon_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.ExecuteUbergraph_TBP_UI_StatusIcon
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_StatusIcon_C::ExecuteUbergraph_TBP_UI_StatusIcon(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.ExecuteUbergraph_TBP_UI_StatusIcon");

	UTBP_UI_StatusIcon_C_ExecuteUbergraph_TBP_UI_StatusIcon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnStatusIconChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon>        InNewStatusIcon                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_StatusIcon_C::OnStatusIconChanged__DelegateSignature(TEnumAsByte<TBE_StatusIcon_ETBE_StatusIcon> InNewStatusIcon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_StatusIcon.TBP_UI_StatusIcon_C.OnStatusIconChanged__DelegateSignature");

	UTBP_UI_StatusIcon_C_OnStatusIconChanged__DelegateSignature_Params params;
	params.InNewStatusIcon = InNewStatusIcon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
