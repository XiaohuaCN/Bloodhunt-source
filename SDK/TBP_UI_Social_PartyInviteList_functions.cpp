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
//		Name   -> Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.Open
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Social_PartyInviteList_C::Open()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.Open");

	UTBP_UI_Social_PartyInviteList_C_Open_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.Close
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Social_PartyInviteList_C::Close()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.Close");

	UTBP_UI_Social_PartyInviteList_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.OnInviteReceived
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UTigerPartyInvite*                           InInvite                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_PartyInviteList_C::OnInviteReceived(class UTigerPartyInvite* InInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.OnInviteReceived");

	UTBP_UI_Social_PartyInviteList_C_OnInviteReceived_Params params;
	params.InInvite = InInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.OnInviteRemoved
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		class UTigerPartyInvite*                           InInvite                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_PartyInviteList_C::OnInviteRemoved(class UTigerPartyInvite* InInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.OnInviteRemoved");

	UTBP_UI_Social_PartyInviteList_C_OnInviteRemoved_Params params;
	params.InInvite = InInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.ExecuteUbergraph_TBP_UI_Social_PartyInviteList
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_PartyInviteList_C::ExecuteUbergraph_TBP_UI_Social_PartyInviteList(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PartyInviteList.TBP_UI_Social_PartyInviteList_C.ExecuteUbergraph_TBP_UI_Social_PartyInviteList");

	UTBP_UI_Social_PartyInviteList_C_ExecuteUbergraph_TBP_UI_Social_PartyInviteList_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
