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

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.Create Challenge Completed Notification
struct UTBP_UI_Notifications_C_Create_Challenge_Completed_Notification_Params
{
	class UTigerChallenge*                             InCompletedChallenge;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Challenge_Notification_Item_C*       Challenge_UI_Notification;                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddFriendNotification
struct UTBP_UI_Notifications_C_AddFriendNotification_Params
{
	class UTexture2D*                                  InIcon;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       InMessage;                                                 // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UAkAudioEvent*                               InAudioEvent;                                              // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.FormatPlayerNameColored
struct UTBP_UI_Notifications_C_FormatPlayerNameColored_Params
{
	struct FText                                       InNotificationText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class ATigerPlayerState*                           InPlayerState;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       OutNotificationText;                                       // 0x0020(0x0018)  (Parm, OutParm)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddEnemyBrokeMasqueradeNotification
struct UTBP_UI_Notifications_C_AddEnemyBrokeMasqueradeNotification_Params
{
	class ATigerPlayerState*                           EnemyPlayer;                                               // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayPingVOAudio
struct UTBP_UI_Notifications_C_PlayPingVOAudio_Params
{
	struct FTigerPingNotificationNetData               InPingData;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class ATigerPlayerState*                           InPlayerState;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayCancelPingAudio
struct UTBP_UI_Notifications_C_PlayCancelPingAudio_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                     Object;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayCorrespondingPingAudio
struct UTBP_UI_Notifications_C_PlayCorrespondingPingAudio_Params
{
	bool                                               bIsInIntrested;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UObject*                                     PingBase;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.CreatePingNotification
struct UTBP_UI_Notifications_C_CreatePingNotification_Params
{
	struct FText                                       InNotificationText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  InTexture;                                                 // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InIconScale;                                               // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerUIColor                                InUIColor;                                                 // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayerState*                           InPlayerState;                                             // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsItem;                                                   // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetFormattedPingPingName
struct UTBP_UI_Notifications_C_GetFormattedPingPingName_Params
{
	struct FText                                       InNotificationText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	Tiger_ETigerUIColor                                InTigerColor;                                              // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       OutNotificationText;                                       // 0x0020(0x0018)  (Parm, OutParm)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.FormatColoredGroupMemberName
struct UTBP_UI_Notifications_C_FormatColoredGroupMemberName_Params
{
	struct FText                                       InNotificationText;                                        // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class ATigerPlayerState*                           InPlayerState;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       OutNotificationText;                                       // 0x0020(0x0018)  (Parm, OutParm)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetItemCountText
struct UTBP_UI_Notifications_C_GetItemCountText_Params
{
	int                                                Count;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0008(0x0018)  (Parm, OutParm)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddExperienceGainNotification
struct UTBP_UI_Notifications_C_AddExperienceGainNotification_Params
{
	struct FText                                       Reason;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	int                                                Amount;                                                    // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                                  Icon;                                                      // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddMosquitoNotification
struct UTBP_UI_Notifications_C_AddMosquitoNotification_Params
{
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddItemNotification
struct UTBP_UI_Notifications_C_AddItemNotification_Params
{
	struct FTigerItemNotification                      TigerItemNotification;                                     // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddDeathNotification
struct UTBP_UI_Notifications_C_AddDeathNotification_Params
{
	struct FText                                       DeadPlayerName;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       InstigatorName;                                            // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsPlayerInSameGroup;                                       // 0x0030(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnPlayerDeath
struct UTBP_UI_Notifications_C_OnPlayerDeath_Params
{
	struct FText                                       PlayerName;                                                // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       InstigatorName;                                            // 0x0018(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                               bIsPlayerInSameGroup;                                      // 0x0030(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnDisciplineReceived
struct UTBP_UI_Notifications_C_OnDisciplineReceived_Params
{
	class UTexture2D*                                  Icon;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name;                                                      // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.ItemReceived
struct UTBP_UI_Notifications_C_ItemReceived_Params
{
	struct FTigerItemNotification                      ItemNotification;                                          // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMosquitoActivated
struct UTBP_UI_Notifications_C_OnMosquitoActivated_Params
{
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnExperienceGained
struct UTBP_UI_Notifications_C_OnExperienceGained_Params
{
	class UTigerExperienceEvent*                       ExperienceEvent;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                GainedExperience;                                          // 0x0008(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMemberJoinedGroup
struct UTBP_UI_Notifications_C_OnMemberJoinedGroup_Params
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMemberLeftGroup
struct UTBP_UI_Notifications_C_OnMemberLeftGroup_Params
{
	struct FString                                     PlayerName;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnInGameTalentUnlocked
struct UTBP_UI_Notifications_C_OnInGameTalentUnlocked_Params
{
	class UTexture2D*                                  Icon;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Name;                                                      // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.HandleOnPersistentPlayerInitialisedEvent
struct UTBP_UI_Notifications_C_HandleOnPersistentPlayerInitialisedEvent_Params
{
	class ATigerPlayerController*                      PlayerController;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnHolyIncenseImminent
struct UTBP_UI_Notifications_C_OnHolyIncenseImminent_Params
{
	float                                              Time;                                                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnBloodTrackPassiveUnlocked
struct UTBP_UI_Notifications_C_OnBloodTrackPassiveUnlocked_Params
{
	class UTigerBloodTrackPassiveConfig*               Passive;                                                   // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnInitialized
struct UTBP_UI_Notifications_C_OnInitialized_Params
{
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPing
struct UTBP_UI_Notifications_C_OnGroupPing_Params
{
	struct FTigerPingNotificationNetData               PingData;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	class ATigerPlayerState*                           InSendingPlayerState;                                      // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPingResponse
struct UTBP_UI_Notifications_C_OnGroupPingResponse_Params
{
	class UTigerPingClientData*                        InPingData;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATigerPlayerState*                           InRespondingPlayer;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInIsInterested;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPingCanceled
struct UTBP_UI_Notifications_C_OnGroupPingCanceled_Params
{
	class UTigerPingClientData*                        InPingData;                                                // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnPlayerHealed
struct UTBP_UI_Notifications_C_OnPlayerHealed_Params
{
	struct FString                                     InPlayerName;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnOtherPlayerBrokeMasquerade
struct UTBP_UI_Notifications_C_OnOtherPlayerBrokeMasquerade_Params
{
	class ATigerPlayerState*                           InPlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnReceivedReward
struct UTBP_UI_Notifications_C_OnReceivedReward_Params
{
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendAdded
struct UTBP_UI_Notifications_C_OnFriendAdded_Params
{
	class UTigerFriend*                                InNewFriend;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteReceived
struct UTBP_UI_Notifications_C_OnFriendInviteReceived_Params
{
	class UTigerFriendInvite*                          InInvite;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteRejected
struct UTBP_UI_Notifications_C_OnFriendInviteRejected_Params
{
	class UTigerFriendInvite*                          InInvite;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendRemoved
struct UTBP_UI_Notifications_C_OnFriendRemoved_Params
{
	class UTigerFriend*                                InLostFriend;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGrimoireItemUnlocked
struct UTBP_UI_Notifications_C_OnGrimoireItemUnlocked_Params
{
	class UTigerGrimoireEntry*                         InGrimoireEntry;                                           // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteSent
struct UTBP_UI_Notifications_C_OnFriendInviteSent_Params
{
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnChallengeCompleted
struct UTBP_UI_Notifications_C_OnChallengeCompleted_Params
{
	class UTigerChallenge*                             InCompletedChallenge;                                      // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnAcceptGroupInviteFailed
struct UTBP_UI_Notifications_C_OnAcceptGroupInviteFailed_Params
{
	struct FTigerInviteId                              InInviteId;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnCollectibleFound
struct UTBP_UI_Notifications_C_OnCollectibleFound_Params
{
	class UTigerCollectibleData*                       InCollectible;                                             // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestCompleted
struct UTBP_UI_Notifications_C_OnQuestCompleted_Params
{
	class UTigerQuest*                                 InCompletedQuest;                                          // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupInviteReceived
struct UTBP_UI_Notifications_C_OnGroupInviteReceived_Params
{
	class UTigerPartyInvite*                           InInvite;                                                  // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestObjectiveCompleted
struct UTBP_UI_Notifications_C_OnQuestObjectiveCompleted_Params
{
	class UTigerQuestObjective*                        InCompleteObjective;                                       // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_Notifications.TBP_UI_Notifications_C.ExecuteUbergraph_TBP_UI_Notifications
struct UTBP_UI_Notifications_C_ExecuteUbergraph_TBP_UI_Notifications_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
