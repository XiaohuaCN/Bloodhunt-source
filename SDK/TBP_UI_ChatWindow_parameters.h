#pragma once

// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.SetChatPosition
struct UTBP_UI_ChatWindow_C_SetChatPosition_Params
{
	bool                                               HasMatchStarted;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.NotifyBannedStatus
struct UTBP_UI_ChatWindow_C_NotifyBannedStatus_Params
{
	class UTigerChatComponent*                         InChatComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.VerifyCanSendMessage
struct UTBP_UI_ChatWindow_C_VerifyCanSendMessage_Params
{
	bool                                               bCanSend;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Should Prevent Trying To Type In General Chat
struct UTBP_UI_ChatWindow_C_Should_Prevent_Trying_To_Type_In_General_Chat_Params
{
	bool                                               bShouldPrevent;                                            // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Has Chat Prefix
struct UTBP_UI_ChatWindow_C_Has_Chat_Prefix_Params
{
	struct FString                                     InChatMessage;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	struct FString                                     InPrefix;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	struct FString                                     InPrefixShort;                                             // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash)
	bool                                               bHasPrefix;                                                // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.CreateGameMessage
struct UTBP_UI_ChatWindow_C_CreateGameMessage_Params
{
	struct FText                                       InGameMessage;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bIsBanMessage;                                             // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.SetChatMode
struct UTBP_UI_ChatWindow_C_SetChatMode_Params
{
	bool                                               bIsGroupChat;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Remove Muted Players Messages
struct UTBP_UI_ChatWindow_C_Remove_Muted_Players_Messages_Params
{
	struct FTigerPersistentPlayerID                    InMutedPlayerId;                                           // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.EnableOptionsMenu
struct UTBP_UI_ChatWindow_C_EnableOptionsMenu_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddAsFriend
struct UTBP_UI_ChatWindow_C_AddAsFriend_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.InviteToGroup
struct UTBP_UI_ChatWindow_C_InviteToGroup_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddNewMessage
struct UTBP_UI_ChatWindow_C_AddNewMessage_Params
{
	struct FTigerChatMessage                           InChatMessage;                                             // 0x0000(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Construct
struct UTBP_UI_ChatWindow_C_Construct_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeOutWindow
struct UTBP_UI_ChatWindow_C_FadeOutWindow_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeInWindow
struct UTBP_UI_ChatWindow_C_FadeInWindow_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.StartFadeOutTimer
struct UTBP_UI_ChatWindow_C_StartFadeOutTimer_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
struct UTBP_UI_ChatWindow_C_BndEvt__InputTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeInBackground
struct UTBP_UI_ChatWindow_C_FadeInBackground_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.AddMessage
struct UTBP_UI_ChatWindow_C_AddMessage_Params
{
	struct FTigerChatMessage                           InChatMessage;                                             // 0x0000(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.Focus on Input Box
struct UTBP_UI_ChatWindow_C_Focus_on_Input_Box_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.FadeOutBackground
struct UTBP_UI_ChatWindow_C_FadeOutBackground_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageNameHovered
struct UTBP_UI_ChatWindow_C_OnMessageNameHovered_Params
{
	struct FTigerChatMessage                           InChatData;                                                // 0x0000(0x0058)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageNameUnhovered
struct UTBP_UI_ChatWindow_C_OnMessageNameUnhovered_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnOptionsBoxOpened
struct UTBP_UI_ChatWindow_C_OnOptionsBoxOpened_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsInviteToGroup_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature
struct UTBP_UI_ChatWindow_C_BndEvt__OptionsInviteToGroup_K2Node_ComponentBoundEvent_1_MenuClicked__DelegateSignature_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsAddFriend_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature
struct UTBP_UI_ChatWindow_C_BndEvt__OptionsAddFriend_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.HideOptionsMenu
struct UTBP_UI_ChatWindow_C_HideOptionsMenu_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__OptionsMute_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature
struct UTBP_UI_ChatWindow_C_BndEvt__OptionsMute_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnRightClicked
struct UTBP_UI_ChatWindow_C_OnRightClicked_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.BndEvt__InputTextBox_K2Node_ComponentBoundEvent_55_OnEditableTextBoxCommittedEvent__DelegateSignature
struct UTBP_UI_ChatWindow_C_BndEvt__InputTextBox_K2Node_ComponentBoundEvent_55_OnEditableTextBoxCommittedEvent__DelegateSignature_Params
{
	struct FText                                       Text;                                                      // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TEnumAsByte<SlateCore_ETextCommit>                 CommitMethod;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnSwapChatInputPressed
struct UTBP_UI_ChatWindow_C_OnSwapChatInputPressed_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.WelcomePlayersInElysium
struct UTBP_UI_ChatWindow_C_WelcomePlayersInElysium_Params
{
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnBanStatusChanged
struct UTBP_UI_ChatWindow_C_OnBanStatusChanged_Params
{
	struct FTigerMuteInfo                              InMuteInfo;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnPreMatchStateChanged
struct UTBP_UI_ChatWindow_C_OnPreMatchStateChanged_Params
{
	struct FTigerPreMatchStateInfo                     PreMatchState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.ExecuteUbergraph_TBP_UI_ChatWindow
struct UTBP_UI_ChatWindow_C_ExecuteUbergraph_TBP_UI_ChatWindow_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ChatWindow.TBP_UI_ChatWindow_C.OnMessageInput__DelegateSignature
struct UTBP_UI_ChatWindow_C_OnMessageInput__DelegateSignature_Params
{
	struct FText                                       MessageText;                                               // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               bWriteOnlyToGroupMembers;                                  // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
