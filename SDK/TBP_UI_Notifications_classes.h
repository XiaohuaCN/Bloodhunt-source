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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_Notifications.TBP_UI_Notifications_C
// 0x0158 (FullSize[0x0410] - InheritedSize[0x02B8])
class UTBP_UI_Notifications_C : public UTigerNotificationsUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTBP_NotificationUIStacker_C*                ChallengeNotificationStacker;                              // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_NotificationUIStacker_C*                NotificationStacker;                                       // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerSafeZoneWidget*                        TigerSafeZoneWidget_1;                                     // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerItemAsset*                             BloodAsset;                                                // 0x02D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerItemAsset*                             DisciplineAsset;                                           // 0x02E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerChallenge*                             CachedMatchChallenge;                                      // 0x02E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UTigerChallenge*>                     CachedDailyChallenges;                                     // 0x02F0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UClass*, float>                         LastPingNotificationTimes;                                 // 0x0300(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<Tiger_ETigerWeaponAmmoType, struct FName>     AmmoTypeToAudioName;                                       // 0x0350(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<Tiger_ERangedWeaponModType, struct FName>     ModTypeToAudioName;                                        // 0x03A0(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkAudioEvent*                               FriendAddedAudioEvent;                                     // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               FriendRemovedAudioEvent;                                   // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               FriendInviteReceivedAudioEvent;                            // 0x0400(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               FriendInviteRejectedAudioEvent;                            // 0x0408(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Notifications.TBP_UI_Notifications_C");
		return ptr;
	}



	void Create_Challenge_Completed_Notification(class UTigerChallenge* InCompletedChallenge, class UTBP_UI_Challenge_Notification_Item_C** Challenge_UI_Notification);
	void AddFriendNotification(class UTexture2D* InIcon, struct FText* InMessage, class UAkAudioEvent* InAudioEvent);
	void FormatPlayerNameColored(const struct FText& InNotificationText, class ATigerPlayerState* InPlayerState, struct FText* OutNotificationText);
	void AddEnemyBrokeMasqueradeNotification(class ATigerPlayerState* EnemyPlayer);
	void PlayPingVOAudio(const struct FTigerPingNotificationNetData& InPingData, class ATigerPlayerState* InPlayerState);
	void PlayCancelPingAudio(class AActor* Actor, class UObject* Object);
	void PlayCorrespondingPingAudio(bool bIsInIntrested, class UObject* PingBase);
	void CreatePingNotification(const struct FText& InNotificationText, class UTexture2D* InTexture, float InIconScale, Tiger_ETigerUIColor InUIColor, class ATigerPlayerState* InPlayerState, bool bIsItem);
	void GetFormattedPingPingName(const struct FText& InNotificationText, Tiger_ETigerUIColor InTigerColor, struct FText* OutNotificationText);
	void FormatColoredGroupMemberName(const struct FText& InNotificationText, class ATigerPlayerState* InPlayerState, struct FText* OutNotificationText);
	void GetItemCountText(int Count, struct FText* Text);
	void AddExperienceGainNotification(const struct FText& Reason, int Amount, class UTexture2D* Icon);
	void AddMosquitoNotification();
	void AddItemNotification(struct FTigerItemNotification* TigerItemNotification);
	void AddDeathNotification(const struct FText& DeadPlayerName, const struct FText& InstigatorName, bool IsPlayerInSameGroup);
	void OnPlayerDeath(const struct FText& PlayerName, const struct FText& InstigatorName, bool bIsPlayerInSameGroup);
	void OnDisciplineReceived(class UTexture2D* Icon, const struct FText& Name);
	void ItemReceived(const struct FTigerItemNotification& ItemNotification);
	void OnMosquitoActivated();
	void OnExperienceGained(class UTigerExperienceEvent* ExperienceEvent, int GainedExperience);
	void OnMemberJoinedGroup(const struct FString& PlayerName);
	void OnMemberLeftGroup(const struct FString& PlayerName);
	void OnInGameTalentUnlocked(class UTexture2D* Icon, const struct FText& Name);
	void HandleOnPersistentPlayerInitialisedEvent(class ATigerPlayerController* PlayerController);
	void OnHolyIncenseImminent(float Time);
	void OnBloodTrackPassiveUnlocked(class UTigerBloodTrackPassiveConfig* Passive);
	void OnInitialized();
	void OnGroupPing(const struct FTigerPingNotificationNetData& PingData, class ATigerPlayerState* InSendingPlayerState);
	void OnGroupPingResponse(class UTigerPingClientData* InPingData, class ATigerPlayerState* InRespondingPlayer, bool bInIsInterested);
	void OnGroupPingCanceled(class UTigerPingClientData* InPingData);
	void OnPlayerHealed(const struct FString& InPlayerName);
	void OnOtherPlayerBrokeMasquerade(class ATigerPlayerState* InPlayerState);
	void OnReceivedReward();
	void OnFriendAdded(class UTigerFriend* InNewFriend);
	void OnFriendInviteReceived(class UTigerFriendInvite* InInvite);
	void OnFriendInviteRejected(class UTigerFriendInvite* InInvite);
	void OnFriendRemoved(class UTigerFriend* InLostFriend);
	void OnGrimoireItemUnlocked(class UTigerGrimoireEntry* InGrimoireEntry);
	void OnFriendInviteSent();
	void OnChallengeCompleted(class UTigerChallenge* InCompletedChallenge);
	void OnAcceptGroupInviteFailed(const struct FTigerInviteId& InInviteId);
	void OnCollectibleFound(class UTigerCollectibleData* InCollectible);
	void OnQuestCompleted(class UTigerQuest* InCompletedQuest);
	void OnGroupInviteReceived(class UTigerPartyInvite* InInvite);
	void OnQuestObjectiveCompleted(class UTigerQuestObjective* InCompleteObjective);
	void ExecuteUbergraph_TBP_UI_Notifications(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
