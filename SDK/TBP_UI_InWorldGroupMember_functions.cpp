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
//		Name   -> Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_InWorldGroupMember_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.Construct");

	UTBP_UI_InWorldGroupMember_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.OnPlayerIndexChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		unsigned char                                      PlayerIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InWorldGroupMember_C::OnPlayerIndexChanged(unsigned char PlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.OnPlayerIndexChanged");

	UTBP_UI_InWorldGroupMember_C_OnPlayerIndexChanged_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.OnLifeStatusChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerPlayerLifeStatus                       InLifeStatus                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InWorldGroupMember_C::OnLifeStatusChanged(Tiger_ETigerPlayerLifeStatus InLifeStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.OnLifeStatusChanged");

	UTBP_UI_InWorldGroupMember_C_OnLifeStatusChanged_Params params;
	params.InLifeStatus = InLifeStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.HandleRemovedGroupMember
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_InWorldGroupMember_C::HandleRemovedGroupMember()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.HandleRemovedGroupMember");

	UTBP_UI_InWorldGroupMember_C_HandleRemovedGroupMember_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.ExecuteUbergraph_TBP_UI_InWorldGroupMember
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_InWorldGroupMember_C::ExecuteUbergraph_TBP_UI_InWorldGroupMember(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_InWorldGroupMember.TBP_UI_InWorldGroupMember_C.ExecuteUbergraph_TBP_UI_InWorldGroupMember");

	UTBP_UI_InWorldGroupMember_C_ExecuteUbergraph_TBP_UI_InWorldGroupMember_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
