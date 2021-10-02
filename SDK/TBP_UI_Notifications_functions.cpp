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
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.Create Challenge Completed Notification
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerChallenge*                             InCompletedChallenge                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTBP_UI_Challenge_Notification_Item_C*       Challenge_UI_Notification                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::Create_Challenge_Completed_Notification(class UTigerChallenge* InCompletedChallenge, class UTBP_UI_Challenge_Notification_Item_C** Challenge_UI_Notification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.Create Challenge Completed Notification");

	UTBP_UI_Notifications_C_Create_Challenge_Completed_Notification_Params params;
	params.InCompletedChallenge = InCompletedChallenge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Challenge_UI_Notification != nullptr)
		*Challenge_UI_Notification = params.Challenge_UI_Notification;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddFriendNotification
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  InIcon                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       InMessage                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		class UAkAudioEvent*                               InAudioEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::AddFriendNotification(class UTexture2D* InIcon, struct FText* InMessage, class UAkAudioEvent* InAudioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddFriendNotification");

	UTBP_UI_Notifications_C_AddFriendNotification_Params params;
	params.InIcon = InIcon;
	params.InAudioEvent = InAudioEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InMessage != nullptr)
		*InMessage = params.InMessage;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.FormatPlayerNameColored
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       InNotificationText                                         (BlueprintVisible, BlueprintReadOnly, Parm)
//		class ATigerPlayerState*                           InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       OutNotificationText                                        (Parm, OutParm)
void UTBP_UI_Notifications_C::FormatPlayerNameColored(const struct FText& InNotificationText, class ATigerPlayerState* InPlayerState, struct FText* OutNotificationText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.FormatPlayerNameColored");

	UTBP_UI_Notifications_C_FormatPlayerNameColored_Params params;
	params.InNotificationText = InNotificationText;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNotificationText != nullptr)
		*OutNotificationText = params.OutNotificationText;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddEnemyBrokeMasqueradeNotification
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           EnemyPlayer                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::AddEnemyBrokeMasqueradeNotification(class ATigerPlayerState* EnemyPlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddEnemyBrokeMasqueradeNotification");

	UTBP_UI_Notifications_C_AddEnemyBrokeMasqueradeNotification_Params params;
	params.EnemyPlayer = EnemyPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayPingVOAudio
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPingNotificationNetData               InPingData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		class ATigerPlayerState*                           InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::PlayPingVOAudio(const struct FTigerPingNotificationNetData& InPingData, class ATigerPlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayPingVOAudio");

	UTBP_UI_Notifications_C_PlayPingVOAudio_Params params;
	params.InPingData = InPingData;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayCancelPingAudio
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::PlayCancelPingAudio(class AActor* Actor, class UObject* Object)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayCancelPingAudio");

	UTBP_UI_Notifications_C_PlayCancelPingAudio_Params params;
	params.Actor = Actor;
	params.Object = Object;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayCorrespondingPingAudio
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bIsInIntrested                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     PingBase                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::PlayCorrespondingPingAudio(bool bIsInIntrested, class UObject* PingBase)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.PlayCorrespondingPingAudio");

	UTBP_UI_Notifications_C_PlayCorrespondingPingAudio_Params params;
	params.bIsInIntrested = bIsInIntrested;
	params.PingBase = PingBase;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.CreatePingNotification
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       InNotificationText                                         (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UTexture2D*                                  InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InIconScale                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerUIColor                                InUIColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerPlayerState*                           InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Notifications_C::CreatePingNotification(const struct FText& InNotificationText, class UTexture2D* InTexture, float InIconScale, Tiger_ETigerUIColor InUIColor, class ATigerPlayerState* InPlayerState, bool bIsItem)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.CreatePingNotification");

	UTBP_UI_Notifications_C_CreatePingNotification_Params params;
	params.InNotificationText = InNotificationText;
	params.InTexture = InTexture;
	params.InIconScale = InIconScale;
	params.InUIColor = InUIColor;
	params.InPlayerState = InPlayerState;
	params.bIsItem = bIsItem;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetFormattedPingPingName
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       InNotificationText                                         (BlueprintVisible, BlueprintReadOnly, Parm)
//		Tiger_ETigerUIColor                                InTigerColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       OutNotificationText                                        (Parm, OutParm)
void UTBP_UI_Notifications_C::GetFormattedPingPingName(const struct FText& InNotificationText, Tiger_ETigerUIColor InTigerColor, struct FText* OutNotificationText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetFormattedPingPingName");

	UTBP_UI_Notifications_C_GetFormattedPingPingName_Params params;
	params.InNotificationText = InNotificationText;
	params.InTigerColor = InTigerColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNotificationText != nullptr)
		*OutNotificationText = params.OutNotificationText;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.FormatColoredGroupMemberName
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FText                                       InNotificationText                                         (BlueprintVisible, BlueprintReadOnly, Parm)
//		class ATigerPlayerState*                           InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       OutNotificationText                                        (Parm, OutParm)
void UTBP_UI_Notifications_C::FormatColoredGroupMemberName(const struct FText& InNotificationText, class ATigerPlayerState* InPlayerState, struct FText* OutNotificationText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.FormatColoredGroupMemberName");

	UTBP_UI_Notifications_C_FormatColoredGroupMemberName_Params params;
	params.InNotificationText = InNotificationText;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutNotificationText != nullptr)
		*OutNotificationText = params.OutNotificationText;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetItemCountText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		int                                                Count                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Text                                                       (Parm, OutParm)
void UTBP_UI_Notifications_C::GetItemCountText(int Count, struct FText* Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.GetItemCountText");

	UTBP_UI_Notifications_C_GetItemCountText_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Text != nullptr)
		*Text = params.Text;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddExperienceGainNotification
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
//		int                                                Amount                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::AddExperienceGainNotification(const struct FText& Reason, int Amount, class UTexture2D* Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddExperienceGainNotification");

	UTBP_UI_Notifications_C_AddExperienceGainNotification_Params params;
	params.Reason = Reason;
	params.Amount = Amount;
	params.Icon = Icon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddMosquitoNotification
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Notifications_C::AddMosquitoNotification()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddMosquitoNotification");

	UTBP_UI_Notifications_C_AddMosquitoNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddItemNotification
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerItemNotification                      TigerItemNotification                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Notifications_C::AddItemNotification(struct FTigerItemNotification* TigerItemNotification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddItemNotification");

	UTBP_UI_Notifications_C_AddItemNotification_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TigerItemNotification != nullptr)
		*TigerItemNotification = params.TigerItemNotification;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddDeathNotification
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       DeadPlayerName                                             (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       InstigatorName                                             (BlueprintVisible, BlueprintReadOnly, Parm)
//		bool                                               IsPlayerInSameGroup                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Notifications_C::AddDeathNotification(const struct FText& DeadPlayerName, const struct FText& InstigatorName, bool IsPlayerInSameGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.AddDeathNotification");

	UTBP_UI_Notifications_C_AddDeathNotification_Params params;
	params.DeadPlayerName = DeadPlayerName;
	params.InstigatorName = InstigatorName;
	params.IsPlayerInSameGroup = IsPlayerInSameGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnPlayerDeath
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FText                                       PlayerName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FText                                       InstigatorName                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               bIsPlayerInSameGroup                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Notifications_C::OnPlayerDeath(const struct FText& PlayerName, const struct FText& InstigatorName, bool bIsPlayerInSameGroup)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnPlayerDeath");

	UTBP_UI_Notifications_C_OnPlayerDeath_Params params;
	params.PlayerName = PlayerName;
	params.InstigatorName = InstigatorName;
	params.bIsPlayerInSameGroup = bIsPlayerInSameGroup;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnDisciplineReceived
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Name                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Notifications_C::OnDisciplineReceived(class UTexture2D* Icon, const struct FText& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnDisciplineReceived");

	UTBP_UI_Notifications_C_OnDisciplineReceived_Params params;
	params.Icon = Icon;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.ItemReceived
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTigerItemNotification                      ItemNotification                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Notifications_C::ItemReceived(const struct FTigerItemNotification& ItemNotification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.ItemReceived");

	UTBP_UI_Notifications_C_ItemReceived_Params params;
	params.ItemNotification = ItemNotification;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMosquitoActivated
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_Notifications_C::OnMosquitoActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMosquitoActivated");

	UTBP_UI_Notifications_C_OnMosquitoActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnExperienceGained
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerExperienceEvent*                       ExperienceEvent                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                GainedExperience                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnExperienceGained(class UTigerExperienceEvent* ExperienceEvent, int GainedExperience)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnExperienceGained");

	UTBP_UI_Notifications_C_OnExperienceGained_Params params;
	params.ExperienceEvent = ExperienceEvent;
	params.GainedExperience = GainedExperience;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMemberJoinedGroup
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnMemberJoinedGroup(const struct FString& PlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMemberJoinedGroup");

	UTBP_UI_Notifications_C_OnMemberJoinedGroup_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMemberLeftGroup
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     PlayerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnMemberLeftGroup(const struct FString& PlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnMemberLeftGroup");

	UTBP_UI_Notifications_C_OnMemberLeftGroup_Params params;
	params.PlayerName = PlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnInGameTalentUnlocked
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		class UTexture2D*                                  Icon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Name                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_UI_Notifications_C::OnInGameTalentUnlocked(class UTexture2D* Icon, const struct FText& Name)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnInGameTalentUnlocked");

	UTBP_UI_Notifications_C_OnInGameTalentUnlocked_Params params;
	params.Icon = Icon;
	params.Name = Name;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.HandleOnPersistentPlayerInitialisedEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerController*                      PlayerController                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::HandleOnPersistentPlayerInitialisedEvent(class ATigerPlayerController* PlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.HandleOnPersistentPlayerInitialisedEvent");

	UTBP_UI_Notifications_C_HandleOnPersistentPlayerInitialisedEvent_Params params;
	params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnHolyIncenseImminent
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnHolyIncenseImminent(float Time)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnHolyIncenseImminent");

	UTBP_UI_Notifications_C_OnHolyIncenseImminent_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnBloodTrackPassiveUnlocked
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerBloodTrackPassiveConfig*               Passive                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnBloodTrackPassiveUnlocked(class UTigerBloodTrackPassiveConfig* Passive)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnBloodTrackPassiveUnlocked");

	UTBP_UI_Notifications_C_OnBloodTrackPassiveUnlocked_Params params;
	params.Passive = Passive;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnInitialized
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Notifications_C::OnInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnInitialized");

	UTBP_UI_Notifications_C_OnInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPing
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTigerPingNotificationNetData               PingData                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		class ATigerPlayerState*                           InSendingPlayerState                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnGroupPing(const struct FTigerPingNotificationNetData& PingData, class ATigerPlayerState* InSendingPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPing");

	UTBP_UI_Notifications_C_OnGroupPing_Params params;
	params.PingData = PingData;
	params.InSendingPlayerState = InSendingPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPingResponse
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerPingClientData*                        InPingData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerPlayerState*                           InRespondingPlayer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInIsInterested                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_Notifications_C::OnGroupPingResponse(class UTigerPingClientData* InPingData, class ATigerPlayerState* InRespondingPlayer, bool bInIsInterested)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPingResponse");

	UTBP_UI_Notifications_C_OnGroupPingResponse_Params params;
	params.InPingData = InPingData;
	params.InRespondingPlayer = InRespondingPlayer;
	params.bInIsInterested = bInIsInterested;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPingCanceled
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerPingClientData*                        InPingData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnGroupPingCanceled(class UTigerPingClientData* InPingData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupPingCanceled");

	UTBP_UI_Notifications_C_OnGroupPingCanceled_Params params;
	params.InPingData = InPingData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnPlayerHealed
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     InPlayerName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnPlayerHealed(const struct FString& InPlayerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnPlayerHealed");

	UTBP_UI_Notifications_C_OnPlayerHealed_Params params;
	params.InPlayerName = InPlayerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnOtherPlayerBrokeMasquerade
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnOtherPlayerBrokeMasquerade(class ATigerPlayerState* InPlayerState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnOtherPlayerBrokeMasquerade");

	UTBP_UI_Notifications_C_OnOtherPlayerBrokeMasquerade_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnReceivedReward
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_Notifications_C::OnReceivedReward()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnReceivedReward");

	UTBP_UI_Notifications_C_OnReceivedReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendAdded
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerFriend*                                InNewFriend                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnFriendAdded(class UTigerFriend* InNewFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendAdded");

	UTBP_UI_Notifications_C_OnFriendAdded_Params params;
	params.InNewFriend = InNewFriend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteReceived
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerFriendInvite*                          InInvite                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnFriendInviteReceived(class UTigerFriendInvite* InInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteReceived");

	UTBP_UI_Notifications_C_OnFriendInviteReceived_Params params;
	params.InInvite = InInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteRejected
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerFriendInvite*                          InInvite                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnFriendInviteRejected(class UTigerFriendInvite* InInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteRejected");

	UTBP_UI_Notifications_C_OnFriendInviteRejected_Params params;
	params.InInvite = InInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendRemoved
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerFriend*                                InLostFriend                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnFriendRemoved(class UTigerFriend* InLostFriend)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendRemoved");

	UTBP_UI_Notifications_C_OnFriendRemoved_Params params;
	params.InLostFriend = InLostFriend;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGrimoireItemUnlocked
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireEntry*                         InGrimoireEntry                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnGrimoireItemUnlocked(class UTigerGrimoireEntry* InGrimoireEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGrimoireItemUnlocked");

	UTBP_UI_Notifications_C_OnGrimoireItemUnlocked_Params params;
	params.InGrimoireEntry = InGrimoireEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteSent
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_UI_Notifications_C::OnFriendInviteSent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnFriendInviteSent");

	UTBP_UI_Notifications_C_OnFriendInviteSent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnChallengeCompleted
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerChallenge*                             InCompletedChallenge                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnChallengeCompleted(class UTigerChallenge* InCompletedChallenge)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnChallengeCompleted");

	UTBP_UI_Notifications_C_OnChallengeCompleted_Params params;
	params.InCompletedChallenge = InCompletedChallenge;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnAcceptGroupInviteFailed
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTigerInviteId                              InInviteId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
void UTBP_UI_Notifications_C::OnAcceptGroupInviteFailed(const struct FTigerInviteId& InInviteId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnAcceptGroupInviteFailed");

	UTBP_UI_Notifications_C_OnAcceptGroupInviteFailed_Params params;
	params.InInviteId = InInviteId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnCollectibleFound
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerCollectibleData*                       InCollectible                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnCollectibleFound(class UTigerCollectibleData* InCollectible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnCollectibleFound");

	UTBP_UI_Notifications_C_OnCollectibleFound_Params params;
	params.InCollectible = InCollectible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestCompleted
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerQuest*                                 InCompletedQuest                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnQuestCompleted(class UTigerQuest* InCompletedQuest)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestCompleted");

	UTBP_UI_Notifications_C_OnQuestCompleted_Params params;
	params.InCompletedQuest = InCompletedQuest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupInviteReceived
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerPartyInvite*                           InInvite                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnGroupInviteReceived(class UTigerPartyInvite* InInvite)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnGroupInviteReceived");

	UTBP_UI_Notifications_C_OnGroupInviteReceived_Params params;
	params.InInvite = InInvite;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestObjectiveCompleted
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class UTigerQuestObjective*                        InCompleteObjective                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::OnQuestObjectiveCompleted(class UTigerQuestObjective* InCompleteObjective)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.OnQuestObjectiveCompleted");

	UTBP_UI_Notifications_C_OnQuestObjectiveCompleted_Params params;
	params.InCompleteObjective = InCompleteObjective;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notifications.TBP_UI_Notifications_C.ExecuteUbergraph_TBP_UI_Notifications
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notifications_C::ExecuteUbergraph_TBP_UI_Notifications(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notifications.TBP_UI_Notifications_C.ExecuteUbergraph_TBP_UI_Notifications");

	UTBP_UI_Notifications_C_ExecuteUbergraph_TBP_UI_Notifications_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
