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
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.SetChatPosition
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               HasMatchStarted                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ChatWindow_C::SetChatPosition(bool HasMatchStarted)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.SetChatPosition");

	UTBP_UI_ChatWindow_C_SetChatPosition_Params params;
	params.HasMatchStarted = HasMatchStarted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.NotifyBannedStatus
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerChatComponent*                         InChatComponent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ChatWindow_C::NotifyBannedStatus(class UTigerChatComponent* InChatComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.NotifyBannedStatus");

	UTBP_UI_ChatWindow_C_NotifyBannedStatus_Params params;
	params.InChatComponent = InChatComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.VerifyCanSendMessage
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bCanSend                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ChatWindow_C::VerifyCanSendMessage(bool* bCanSend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.VerifyCanSendMessage");

	UTBP_UI_ChatWindow_C_VerifyCanSendMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bCanSend != nullptr)
		*bCanSend = params.bCanSend;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Should Prevent Trying To Type In General Chat
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               bShouldPrevent                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ChatWindow_C::Should_Prevent_Trying_To_Type_In_General_Chat(bool* bShouldPrevent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Should Prevent Trying To Type In General Chat");

	UTBP_UI_ChatWindow_C_Should_Prevent_Trying_To_Type_In_General_Chat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bShouldPrevent != nullptr)
		*bShouldPrevent = params.bShouldPrevent;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Has Chat Prefix
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FString                                     InChatMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
//		struct FString                                     InPrefix                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
//		struct FString                                     InPrefixShort                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
//		bool                                               bHasPrefix                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ChatWindow_C::Has_Chat_Prefix(struct FString* InChatMessage, struct FString* InPrefix, struct FString* InPrefixShort, bool* bHasPrefix)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Has Chat Prefix");

	UTBP_UI_ChatWindow_C_Has_Chat_Prefix_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InChatMessage != nullptr)
		*InChatMessage = params.InChatMessage;
	if (InPrefix != nullptr)
		*InPrefix = params.InPrefix;
	if (InPrefixShort != nullptr)
		*InPrefixShort = params.InPrefixShort;
	if (bHasPrefix != nullptr)
		*bHasPrefix = params.bHasPrefix;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.CreateGameMessage
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InGameMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               bIsBanMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ChatWindow_C::CreateGameMessage(const struct FText& InGameMessage, bool bIsBanMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.CreateGameMessage");

	UTBP_UI_ChatWindow_C_CreateGameMessage_Params params;
	params.InGameMessage = InGameMessage;
	params.bIsBanMessage = bIsBanMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.SetChatMode
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsGroupChat                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ChatWindow_C::SetChatMode(bool bIsGroupChat)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.SetChatMode");

	UTBP_UI_ChatWindow_C_SetChatMode_Params params;
	params.bIsGroupChat = bIsGroupChat;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Remove Muted Players Messages
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPersistentPlayerID                    InMutedPlayerId                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ChatWindow_C::Remove_Muted_Players_Messages(const struct FTigerPersistentPlayerID& InMutedPlayerId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Remove Muted Players Messages");

	UTBP_UI_ChatWindow_C_Remove_Muted_Players_Messages_Params params;
	params.InMutedPlayerId = InMutedPlayerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.EnableOptionsMenu
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ChatWindow_C::EnableOptionsMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.EnableOptionsMenu");

	UTBP_UI_ChatWindow_C_EnableOptionsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddAsFriend
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChatWindow_C::AddAsFriend()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddAsFriend");

	UTBP_UI_ChatWindow_C_AddAsFriend_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.InviteToGroup
//		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_ChatWindow_C::InviteToGroup()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.InviteToGroup");

	UTBP_UI_ChatWindow_C_InviteToGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddNewMessage
//		Flags  -> (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerChatMessage                           InChatMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ChatWindow_C::AddNewMessage(const struct FTigerChatMessage& InChatMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddNewMessage");

	UTBP_UI_ChatWindow_C_AddNewMessage_Params params;
	params.InChatMessage = InChatMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_ChatWindow_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Construct");

	UTBP_UI_ChatWindow_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeOutWindow
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChatWindow_C::FadeOutWindow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeOutWindow");

	UTBP_UI_ChatWindow_C_FadeOutWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeInWindow
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChatWindow_C::FadeInWindow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeInWindow");

	UTBP_UI_ChatWindow_C_FadeInWindow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.StartFadeOutTimer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChatWindow_C::StartFadeOutTimer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.StartFadeOutTimer");

	UTBP_UI_ChatWindow_C_StartFadeOutTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_ChatWindow_C::BndEvt__InputTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const struct FText& Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature");

	UTBP_UI_ChatWindow_C_BndEvt__InputTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeInBackground
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChatWindow_C::FadeInBackground()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeInBackground");

	UTBP_UI_ChatWindow_C_FadeInBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddMessage
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerChatMessage                           InChatMessage                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_ChatWindow_C::AddMessage(const struct FTigerChatMessage& InChatMessage)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddMessage");

	UTBP_UI_ChatWindow_C_AddMessage_Params params;
	params.InChatMessage = InChatMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Focus on Input Box
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChatWindow_C::Focus_on_Input_Box()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Focus on Input Box");

	UTBP_UI_ChatWindow_C_Focus_on_Input_Box_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeOutBackground
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChatWindow_C::FadeOutBackground()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeOutBackground");

	UTBP_UI_ChatWindow_C_FadeOutBackground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageNameHovered
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerChatMessage                           InChatData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_ChatWindow_C::OnMessageNameHovered(const struct FTigerChatMessage& InChatData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageNameHovered");

	UTBP_UI_ChatWindow_C_OnMessageNameHovered_Params params;
	params.InChatData = InChatData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageNameUnhovered
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChatWindow_C::OnMessageNameUnhovered()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageNameUnhovered");

	UTBP_UI_ChatWindow_C_OnMessageNameUnhovered_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnOptionsBoxOpened
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChatWindow_C::OnOptionsBoxOpened()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnOptionsBoxOpened");

	UTBP_UI_ChatWindow_C_OnOptionsBoxOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsInviteToGroup_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChatWindow_C::BndEvt__OptionsInviteToGroup_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsInviteToGroup_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature");

	UTBP_UI_ChatWindow_C_BndEvt__OptionsInviteToGroup_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsAddFriend_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChatWindow_C::BndEvt__OptionsAddFriend_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsAddFriend_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature");

	UTBP_UI_ChatWindow_C_BndEvt__OptionsAddFriend_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.HideOptionsMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChatWindow_C::HideOptionsMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.HideOptionsMenu");

	UTBP_UI_ChatWindow_C_HideOptionsMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsMute_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature
//		Flags  -> (BlueprintEvent)
void UTBP_UI_ChatWindow_C::BndEvt__OptionsMute_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsMute_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature");

	UTBP_UI_ChatWindow_C_BndEvt__OptionsMute_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnRightClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChatWindow_C::OnRightClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnRightClicked");

	UTBP_UI_ChatWindow_C_OnRightClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_55_OnEditableTextBoxCommittedEvent__DelegateSignature
//		Flags  -> (HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ChatWindow_C::BndEvt__InputTextBox_K2Node_ComponentBoundEvent_55_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_55_OnEditableTextBoxCommittedEvent__DelegateSignature");

	UTBP_UI_ChatWindow_C_BndEvt__InputTextBox_K2Node_ComponentBoundEvent_55_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnSwapChatInputPressed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChatWindow_C::OnSwapChatInputPressed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnSwapChatInputPressed");

	UTBP_UI_ChatWindow_C_OnSwapChatInputPressed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.WelcomePlayersInElysium
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_ChatWindow_C::WelcomePlayersInElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.WelcomePlayersInElysium");

	UTBP_UI_ChatWindow_C_WelcomePlayersInElysium_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnBanStatusChanged
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerMuteInfo                              InMuteInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_ChatWindow_C::OnBanStatusChanged(const struct FTigerMuteInfo& InMuteInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnBanStatusChanged");

	UTBP_UI_ChatWindow_C_OnBanStatusChanged_Params params;
	params.InMuteInfo = InMuteInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnPreMatchStateChanged
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPreMatchStateInfo                     PreMatchState                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void UTBP_UI_ChatWindow_C::OnPreMatchStateChanged(const struct FTigerPreMatchStateInfo& PreMatchState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnPreMatchStateChanged");

	UTBP_UI_ChatWindow_C_OnPreMatchStateChanged_Params params;
	params.PreMatchState = PreMatchState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.ExecuteUbergraph_TBP_UI_ChatWindow
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_ChatWindow_C::ExecuteUbergraph_TBP_UI_ChatWindow(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.ExecuteUbergraph_TBP_UI_ChatWindow");

	UTBP_UI_ChatWindow_C_ExecuteUbergraph_TBP_UI_ChatWindow_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageInput__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       MessageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               bWriteOnlyToGroupMembers                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_ChatWindow_C::OnMessageInput__DelegateSignature(const struct FText& MessageText, bool bWriteOnlyToGroupMembers)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageInput__DelegateSignature");

	UTBP_UI_ChatWindow_C_OnMessageInput__DelegateSignature_Params params;
	params.MessageText = MessageText;
	params.bWriteOnlyToGroupMembers = bWriteOnlyToGroupMembers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
