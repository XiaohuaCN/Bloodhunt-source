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
//		Name   -> Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.HandleLifeStatusChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPlayerLifeStatus                       NewLifeStatus                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_GroupMemberOutOfSightWidget_C::HandleLifeStatusChanged(Tiger_ETigerPlayerLifeStatus NewLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.HandleLifeStatusChanged");

	UTBP_GroupMemberOutOfSightWidget_C_HandleLifeStatusChanged_Params params;
	params.NewLifeStatus = NewLifeStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.HandlePlayerChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayer*                                InTigerPlayer                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_GroupMemberOutOfSightWidget_C::HandlePlayerChanged(class ATigerPlayer* InTigerPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.HandlePlayerChanged");

	UTBP_GroupMemberOutOfSightWidget_C_HandlePlayerChanged_Params params;
	params.InTigerPlayer = InTigerPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.GetColorAndOpacity
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UTBP_GroupMemberOutOfSightWidget_C::GetColorAndOpacity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.GetColorAndOpacity");

	UTBP_GroupMemberOutOfSightWidget_C_GetColorAndOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.Initialize
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           Player_State                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_GroupMemberOutOfSightWidget_C::Initialize(class ATigerPlayerState* Player_State)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.Initialize");

	UTBP_GroupMemberOutOfSightWidget_C_Initialize_Params params;
	params.Player_State = Player_State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnPawnChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       NewPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_GroupMemberOutOfSightWidget_C::OnPawnChanged(class APawn* NewPawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnPawnChanged");

	UTBP_GroupMemberOutOfSightWidget_C_OnPawnChanged_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnScreenStateChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               bInIsOnScreen                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_GroupMemberOutOfSightWidget_C::OnScreenStateChanged(bool bInIsOnScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnScreenStateChanged");

	UTBP_GroupMemberOutOfSightWidget_C_OnScreenStateChanged_Params params;
	params.bInIsOnScreen = bInIsOnScreen;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.Destruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_GroupMemberOutOfSightWidget_C::Destruct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.Destruct");

	UTBP_GroupMemberOutOfSightWidget_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnNameChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_GroupMemberOutOfSightWidget_C::OnNameChanged()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnNameChanged");

	UTBP_GroupMemberOutOfSightWidget_C_OnNameChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_GroupMemberOutOfSightWidget_C::ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget");

	UTBP_GroupMemberOutOfSightWidget_C_ExecuteUbergraph_TBP_GroupMemberOutOfSightWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnLifeStatusChanged__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPlayerLifeStatus                       InLifeStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_GroupMemberOutOfSightWidget_C::OnLifeStatusChanged__DelegateSignature(Tiger_ETigerPlayerLifeStatus InLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberOutOfSightWidget.TBP_GroupMemberOutOfSightWidget_C.OnLifeStatusChanged__DelegateSignature");

	UTBP_GroupMemberOutOfSightWidget_C_OnLifeStatusChanged__DelegateSignature_Params params;
	params.InLifeStatus = InLifeStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
