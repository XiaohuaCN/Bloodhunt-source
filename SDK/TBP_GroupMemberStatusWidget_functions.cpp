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
//		Name   -> Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.SetPlayerColor
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      InPlayerIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_GroupMemberStatusWidget_C::SetPlayerColor(unsigned char InPlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.SetPlayerColor");

	UTBP_GroupMemberStatusWidget_C_SetPlayerColor_Params params;
	params.InPlayerIndex = InPlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.OnPawnChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class APawn*                                       New_Pawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_GroupMemberStatusWidget_C::OnPawnChanged(class APawn* New_Pawn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.OnPawnChanged");

	UTBP_GroupMemberStatusWidget_C_OnPawnChanged_Params params;
	params.New_Pawn = New_Pawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.UpdateElysiumVisibility
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_GroupMemberStatusWidget_C::UpdateElysiumVisibility()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.UpdateElysiumVisibility");

	UTBP_GroupMemberStatusWidget_C_UpdateElysiumVisibility_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.SetMember
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           InGroupMemberState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_GroupMemberStatusWidget_C::SetMember(class ATigerPlayerState* InGroupMemberState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.SetMember");

	UTBP_GroupMemberStatusWidget_C_SetMember_Params params;
	params.InGroupMemberState = InGroupMemberState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.UpdateMatchmakingReadyStatus
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InIsReadyForMatchmaking                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_GroupMemberStatusWidget_C::UpdateMatchmakingReadyStatus(bool InIsReadyForMatchmaking)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.UpdateMatchmakingReadyStatus");

	UTBP_GroupMemberStatusWidget_C_UpdateMatchmakingReadyStatus_Params params;
	params.InIsReadyForMatchmaking = InIsReadyForMatchmaking;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.ExecuteUbergraph_TBP_GroupMemberStatusWidget
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_GroupMemberStatusWidget_C::ExecuteUbergraph_TBP_GroupMemberStatusWidget(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_GroupMemberStatusWidget.TBP_GroupMemberStatusWidget_C.ExecuteUbergraph_TBP_GroupMemberStatusWidget");

	UTBP_GroupMemberStatusWidget_C_ExecuteUbergraph_TBP_GroupMemberStatusWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
