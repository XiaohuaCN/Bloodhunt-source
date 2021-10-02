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
//		Name   -> Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.UpdateAvailability
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Social_Friend_Subscreen_C::UpdateAvailability()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.UpdateAvailability");

	UTBP_UI_Social_Friend_Subscreen_C_UpdateAvailability_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.RemoveFriendFromList
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerFriend*                                InLostFriend                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Friend_Subscreen_C::RemoveFriendFromList(class UTigerFriend** InLostFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.RemoveFriendFromList");

	UTBP_UI_Social_Friend_Subscreen_C_RemoveFriendFromList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InLostFriend != nullptr)
		*InLostFriend = params.InLostFriend;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.AddFriendToList
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerFriend*                                InNewFriend                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Friend_Subscreen_C::AddFriendToList(class UTigerFriend** InNewFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.AddFriendToList");

	UTBP_UI_Social_Friend_Subscreen_C_AddFriendToList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InNewFriend != nullptr)
		*InNewFriend = params.InNewFriend;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.RefreshFriendsList
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Social_Friend_Subscreen_C::RefreshFriendsList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.RefreshFriendsList");

	UTBP_UI_Social_Friend_Subscreen_C_RefreshFriendsList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendAdded
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerFriend*                                InNewFriend                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Friend_Subscreen_C::OnFriendAdded(class UTigerFriend* InNewFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendAdded");

	UTBP_UI_Social_Friend_Subscreen_C_OnFriendAdded_Params params;
	params.InNewFriend = InNewFriend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendRemoved
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerFriend*                                InLostFriend                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Friend_Subscreen_C::OnFriendRemoved(class UTigerFriend* InLostFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendRemoved");

	UTBP_UI_Social_Friend_Subscreen_C_OnFriendRemoved_Params params;
	params.InLostFriend = InLostFriend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendsLoaded
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_Social_Friend_Subscreen_C::OnFriendsLoaded()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendsLoaded");

	UTBP_UI_Social_Friend_Subscreen_C_OnFriendsLoaded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnOpen
//		Flags  -> (Event, Protected, BlueprintEvent)
void UTBP_UI_Social_Friend_Subscreen_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnOpen");

	UTBP_UI_Social_Friend_Subscreen_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_Social_Friend_Subscreen_C::BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UTBP_UI_Social_Friend_Subscreen_C_BndEvt__Button_90_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendServiceStatusChanged
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		Tiger_ETigerOnlineServiceStatus                    InServiceStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Friend_Subscreen_C::OnFriendServiceStatusChanged(Tiger_ETigerOnlineServiceStatus InServiceStatus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.OnFriendServiceStatusChanged");

	UTBP_UI_Social_Friend_Subscreen_C_OnFriendServiceStatusChanged_Params params;
	params.InServiceStatus = InServiceStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Friend_Subscreen
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_Friend_Subscreen_C::ExecuteUbergraph_TBP_UI_Social_Friend_Subscreen(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_Friend_Subscreen.TBP_UI_Social_Friend_Subscreen_C.ExecuteUbergraph_TBP_UI_Social_Friend_Subscreen");

	UTBP_UI_Social_Friend_Subscreen_C_ExecuteUbergraph_TBP_UI_Social_Friend_Subscreen_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
