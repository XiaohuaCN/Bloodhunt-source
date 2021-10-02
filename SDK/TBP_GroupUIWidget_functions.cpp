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
//		Name   -> Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ClearOutOfSightWidgets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_GroupUIWidget_C::ClearOutOfSightWidgets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ClearOutOfSightWidgets");

	UTBP_GroupUIWidget_C_ClearOutOfSightWidgets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.CreateMemberWidget
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           OwningPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsReadyForMatchmaking                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UTBP_GroupMemberStatusWidget_C*              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UTBP_GroupMemberStatusWidget_C* UTBP_GroupUIWidget_C::CreateMemberWidget(class APlayerController* OwningPlayer, bool bIsReadyForMatchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.CreateMemberWidget");

	UTBP_GroupUIWidget_C_CreateMemberWidget_Params params;
	params.OwningPlayer = OwningPlayer;
	params.bIsReadyForMatchmaking = bIsReadyForMatchmaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddGroupMemberStatusWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           InOwningPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerPlayerState*                           InGroupMemberState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInIsReadyForMatchmaking                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_GroupUIWidget_C::AddGroupMemberStatusWidget(class APlayerController* InOwningPlayer, class ATigerPlayerState* InGroupMemberState, bool bInIsReadyForMatchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddGroupMemberStatusWidget");

	UTBP_GroupUIWidget_C_AddGroupMemberStatusWidget_Params params;
	params.InOwningPlayer = InOwningPlayer;
	params.InGroupMemberState = InGroupMemberState;
	params.bInIsReadyForMatchmaking = bInIsReadyForMatchmaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddOutOfSightWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APlayerController*                           InOwningPlayer                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerPlayerState*                           InGroupMember                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_GroupUIWidget_C::AddOutOfSightWidget(class APlayerController* InOwningPlayer, class ATigerPlayerState* InGroupMember)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddOutOfSightWidget");

	UTBP_GroupUIWidget_C_AddOutOfSightWidget_Params params;
	params.InOwningPlayer = InOwningPlayer;
	params.InGroupMember = InGroupMember;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ClearGroupMembers
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_GroupUIWidget_C::ClearGroupMembers()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ClearGroupMembers");

	UTBP_GroupUIWidget_C_ClearGroupMembers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddGroupMemberToCanvas
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           InGroupMember                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInIsReadyForMatchmaking                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_GroupUIWidget_C::AddGroupMemberToCanvas(class ATigerPlayerState* InGroupMember, bool bInIsReadyForMatchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.AddGroupMemberToCanvas");

	UTBP_GroupUIWidget_C_AddGroupMemberToCanvas_Params params;
	params.InGroupMember = InGroupMember;
	params.bInIsReadyForMatchmaking = bInIsReadyForMatchmaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.OnGroupMemberReadyStatusChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           InGroupMember                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInIsReadyForMatchmaking                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_GroupUIWidget_C::OnGroupMemberReadyStatusChanged(class ATigerPlayerState* InGroupMember, bool bInIsReadyForMatchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.OnGroupMemberReadyStatusChanged");

	UTBP_GroupUIWidget_C_OnGroupMemberReadyStatusChanged_Params params;
	params.InGroupMember = InGroupMember;
	params.bInIsReadyForMatchmaking = bInIsReadyForMatchmaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.PreConstruct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
//		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_GroupUIWidget_C::PreConstruct(bool IsDesignTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.PreConstruct");

	UTBP_GroupUIWidget_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ExecuteUbergraph_TBP_GroupUIWidget
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_GroupUIWidget_C::ExecuteUbergraph_TBP_GroupUIWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupUIWidget.TBP_GroupUIWidget_C.ExecuteUbergraph_TBP_GroupUIWidget");

	UTBP_GroupUIWidget_C_ExecuteUbergraph_TBP_GroupUIWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
