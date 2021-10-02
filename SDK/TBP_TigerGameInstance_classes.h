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

// BlueprintGeneratedClass TBP_TigerGameInstance.TBP_TigerGameInstance_C
// 0x0230 (FullSize[0x0990] - InheritedSize[0x0760])
class UTBP_TigerGameInstance_C : public UTigerGameInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0760(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_JoinElysiumScreen_C*                 JoinElysiumScreenWB;                                       // 0x0768(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_LobbyMenu_C*                         LobbyMenuWB;                                               // 0x0770(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_HostMenu_C*                          HostMenuWB;                                                // 0x0778(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_FindGameFailedMenu_C*                FindGameFailedMenuWB;                                      // 0x0780(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                MaxPlayers;                                                // 0x0788(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_FV86[0x4];                                     // 0x078C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ServerName;                                                // 0x0790(0x0018) (Edit, BlueprintVisible, Net, DisableEditOnInstance)
	class UTBP_UI_MatchMenu_C*                         MatchMenuWB;                                               // 0x07A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     PlayerSettingsSave;                                        // 0x07B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                               bMainMenuIsOpen;                                           // 0x07C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_WMIO[0x7];                                     // 0x07C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTBP_UI_JoinGameMenu_C*                      JoinGameMenuWB;                                            // 0x07C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_GroupInvitationList_C*               InvitationListWB;                                          // 0x07D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_WinScreen_C*                         WinScreenWB;                                               // 0x07D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_ServerSelection_C*                   ServerSelectionMenuWB;                                     // 0x07E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnLoadingScreenFullyOpaque;                                // 0x07E8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FString                                     JoinErrorString;                                           // 0x07F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnJoinGameCountdownBegin;                                  // 0x0808(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UTBP_UI_TutorialMenu_C*                      TutorialMenuWB;                                            // 0x0818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_JoinPartyElysiumScreen_C*            JoinPartyElysiumScreenWB;                                  // 0x0820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      ErrorStringTable[0x28];                                    // 0x0828(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FString                                     TraveledFrom;                                              // 0x0850(0x0010) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTigerBpFindSessionSelectedSession          SelectedSession;                                           // 0x0860(0x0110) (Edit, BlueprintVisible, Transient, DisableEditOnInstance)
	class UAkAudioEvent*                               MenuMusicEvent;                                            // 0x0970(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Tutorial_IntroText_C*                TutorialIntroWB;                                           // 0x0978(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnTitleScreenFadeOutStarted;                               // 0x0980(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_TigerGameInstance.TBP_TigerGameInstance_C");
		return ptr;
	}



	void AddBlackLoadingScreen();
	void GetIngameMenuUI(class UTigerIngameMenuWidget** IngameMenuUI);
	struct FLinearColor GetUIColor(Tiger_ETigerUIColor UIColor, Tiger_ETigerColourSpace ColorSpace);
	bool IsAllowedToOpenMainMenu();
	void GetJoinErrorText(struct FText* OutErrorText, bool* bHadError);
	void GetErrorStringTableId(struct FName* TableId);
	void IsInMatch(bool* InMatch);
	void CreateLoadingScreenWidgetBP(class UClass* InWidgetClass, float InFadeInTime, class UTigerLoadingScreenAsset* InLoadingScreenAsset, class UTigerLoadingScreenUI** LoadingScreen);
	void IsElysiumGameMenuOpen(bool* bIsOpen);
	void CreateJoinGameMenu(class UTBP_UI_JoinGameMenu_C** Output_Get);
	void ValidateBloodTrackPresets();
	void CloseMenuWidget(class UTigerMenuWidget* Widget);
	void OpenMenuWidget(class UTigerMenuWidget* Widget, int ZOrder);
	void TravelErrorToString(TEnumAsByte<Engine_ETravelFailure> FailureType, struct FString* OutString);
	void NetErrorToString(TEnumAsByte<Engine_ENetworkFailure> FailureType, struct FString* OutString);
	void OnPreLoadingDone_CA1249C244C7069F7709069D760517F5();
	void OnEnterElysium_CA1249C244C7069F7709069D760517F5();
	void OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5();
	void OnLaunchTutorial_CA1249C244C7069F7709069D760517F5();
	void OnFailed_3610B3364B95E4E2F5EC2286C6423010();
	void OnSuccess_3610B3364B95E4E2F5EC2286C6423010(const struct FTigerBpFindSessionResultList& Result);
	void ShowHostMenu();
	void OpenLobbyMenu();
	void OnLoginSucceeded(TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters);
	void OnLoginFailed(const struct FTigerLoginFailedInfo& InLoginFailedInfo);
	void LaunchElysiumServer(int NumberOfPlayers, bool EnableLan_, const struct FText& ServerName);
	void OnCreateCharacterResult(const struct FTigerPersistentCharacterID& CharacterId, bool bWasCharacterCreated);
	void OnCharacterSelected();
	void HandleNetworkError(TEnumAsByte<Engine_ENetworkFailure> FailureType, bool bIsServer);
	void HandleTravelError(TEnumAsByte<Engine_ETravelFailure> FailureType);
	void EnterBootFlow();
	void ToggleLobbyMeny();
	void CloseLobbyMenu();
	void CloseFindGameFailedMenu();
	void OpenFindElysiumMenu(bool bStartSearch, bool bStartHidden);
	void CloseFindElysiumMenu();
	void OpenMatchMenu();
	void OpenLoadingScreen();
	void CloseLoadingScreen();
	void ReturnToCharacterSelection();
	void OpenJoinGameMenu(const struct FTigerBpFindSessionSelectedSession& SessionToJoin);
	void CloseJoinGameMenu();
	void ReceiveInvitation(const struct FTigerGroupInvitation& Invitation, class ATigerPlayerState* Inviter);
	void RemoveInvitationList();
	void OpenServerSelectionMenu(const struct FTigerBpFindSessionResultList& Sessions);
	void CloseServerSelectionMenu();
	void OpenFindGameFailedMenu();
	void OnSelected(const struct FTigerBpFindSessionSelectedSession& Session);
	void FadeInLoadingScreen();
	void FadeOutLoadingScreen();
	void OnInitialLevelStreamingCompleted();
	void OnClosedJoinElysium(const struct FString& ErrorString);
	void OnSuccessfulJoin();
	void ReturnToBootStartMapTransfer();
	void PostLoadMapWithWorld();
	void OnGetValidGameVersionResult(Tiger_ETigerVersionIsValidResult Result);
	void OnIgnored_Dispatch_Event_1();
	void FindMatch();
	void RetryPostLoadMap();
	void CancelJoinGame();
	void ReceiveInit();
	void OpenTutorialMenu();
	void CloseTutorialMenu();
	void CreateLoadingScreenWidget(float InFadeInTime, class UTigerLoadingScreenAsset* InLoadingScreenAsset, class UClass* InWidgetClass);
	void OnTransferLoadingScreenOpaque();
	void TransferToElysium();
	void TransferFromMatch();
	void OnJoinPartyElysiumFailed(const struct FString& ErrorString);
	void CloseJoinPartyElysiumMenu();
	void OnJoinPartyElysiumSuccess();
	void OnTransferToPartyElysiumFadeComplete();
	void OpenJoinPartyElysiumScreen();
	void KickToLoginScreen();
	void OnLoadingScreenFullyOpaque_Event();
	void OnCreateGameSessionFailed();
	void JoinSessionThroughUrl(const struct FString& SessionURL);
	void ShowTitleScreen();
	void DispatchTitleScreenClosed();
	void ShowMoviesAndTitleScreen();
	void Cheat_QuitTutorial();
	void ShowWinScreen();
	void Transfer_from_Match();
	void CloseMatchMenu();
	void TitleScreenFadeOutStarted();
	void ToggleTutorialMenu();
	void ReturnToElysium();
	void CloseWinScreen();
	void ShowPostMatchScreen(bool bInShouldLeaveParty);
	void ToggleMatchMeny();
	void ReturnToBootWithError(const struct FString& InError);
	void TransferToPartyElysium();
	void ExecuteUbergraph_TBP_TigerGameInstance(int EntryPoint);
	void OnTitleScreenFadeOutStarted__DelegateSignature();
	void OnJoinGameCountdownBegin__DelegateSignature();
	void OnLoadingScreenFullyOpaque__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
