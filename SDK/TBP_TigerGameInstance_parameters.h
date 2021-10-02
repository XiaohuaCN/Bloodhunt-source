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

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.AddBlackLoadingScreen
struct UTBP_TigerGameInstance_C_AddBlackLoadingScreen_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetIngameMenuUI
struct UTBP_TigerGameInstance_C_GetIngameMenuUI_Params
{
	class UTigerIngameMenuWidget*                      IngameMenuUI;                                              // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetUIColor
struct UTBP_TigerGameInstance_C_GetUIColor_Params
{
	Tiger_ETigerUIColor                                UIColor;                                                   // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerColourSpace                            ColorSpace;                                                // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                ReturnValue;                                               // 0x0004(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsAllowedToOpenMainMenu
struct UTBP_TigerGameInstance_C_IsAllowedToOpenMainMenu_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetJoinErrorText
struct UTBP_TigerGameInstance_C_GetJoinErrorText_Params
{
	struct FText                                       OutErrorText;                                              // 0x0000(0x0018)  (Parm, OutParm)
	bool                                               bHadError;                                                 // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetErrorStringTableId
struct UTBP_TigerGameInstance_C_GetErrorStringTableId_Params
{
	struct FName                                       TableId;                                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsInMatch
struct UTBP_TigerGameInstance_C_IsInMatch_Params
{
	bool                                               InMatch;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateLoadingScreenWidgetBP
struct UTBP_TigerGameInstance_C_CreateLoadingScreenWidgetBP_Params
{
	class UClass*                                      InWidgetClass;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InFadeInTime;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerLoadingScreenAsset*                    InLoadingScreenAsset;                                      // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerLoadingScreenUI*                       LoadingScreen;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsElysiumGameMenuOpen
struct UTBP_TigerGameInstance_C_IsElysiumGameMenuOpen_Params
{
	bool                                               bIsOpen;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateJoinGameMenu
struct UTBP_TigerGameInstance_C_CreateJoinGameMenu_Params
{
	class UTBP_UI_JoinGameMenu_C*                      Output_Get;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ValidateBloodTrackPresets
struct UTBP_TigerGameInstance_C_ValidateBloodTrackPresets_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseMenuWidget
struct UTBP_TigerGameInstance_C_CloseMenuWidget_Params
{
	class UTigerMenuWidget*                            Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenMenuWidget
struct UTBP_TigerGameInstance_C_OpenMenuWidget_Params
{
	class UTigerMenuWidget*                            Widget;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ZOrder;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TravelErrorToString
struct UTBP_TigerGameInstance_C_TravelErrorToString_Params
{
	TEnumAsByte<Engine_ETravelFailure>                 FailureType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     OutString;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.NetErrorToString
struct UTBP_TigerGameInstance_C_NetErrorToString_Params
{
	TEnumAsByte<Engine_ENetworkFailure>                FailureType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FString                                     OutString;                                                 // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnPreLoadingDone_CA1249C244C7069F7709069D760517F5
struct UTBP_TigerGameInstance_C_OnPreLoadingDone_CA1249C244C7069F7709069D760517F5_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnEnterElysium_CA1249C244C7069F7709069D760517F5
struct UTBP_TigerGameInstance_C_OnEnterElysium_CA1249C244C7069F7709069D760517F5_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5
struct UTBP_TigerGameInstance_C_OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLaunchTutorial_CA1249C244C7069F7709069D760517F5
struct UTBP_TigerGameInstance_C_OnLaunchTutorial_CA1249C244C7069F7709069D760517F5_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnFailed_3610B3364B95E4E2F5EC2286C6423010
struct UTBP_TigerGameInstance_C_OnFailed_3610B3364B95E4E2F5EC2286C6423010_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSuccess_3610B3364B95E4E2F5EC2286C6423010
struct UTBP_TigerGameInstance_C_OnSuccess_3610B3364B95E4E2F5EC2286C6423010_Params
{
	struct FTigerBpFindSessionResultList               Result;                                                    // 0x0000(0x0028)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowHostMenu
struct UTBP_TigerGameInstance_C_ShowHostMenu_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenLobbyMenu
struct UTBP_TigerGameInstance_C_OpenLobbyMenu_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoginSucceeded
struct UTBP_TigerGameInstance_C_OnLoginSucceeded_Params
{
	TArray<struct FTigerPersistentPlayerCharacter>     AvailableCharacters;                                       // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoginFailed
struct UTBP_TigerGameInstance_C_OnLoginFailed_Params
{
	struct FTigerLoginFailedInfo                       InLoginFailedInfo;                                         // 0x0000(0x0020)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.LaunchElysiumServer
struct UTBP_TigerGameInstance_C_LaunchElysiumServer_Params
{
	int                                                NumberOfPlayers;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               EnableLan_;                                                // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       ServerName;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCreateCharacterResult
struct UTBP_TigerGameInstance_C_OnCreateCharacterResult_Params
{
	struct FTigerPersistentCharacterID                 CharacterId;                                               // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                               bWasCharacterCreated;                                      // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCharacterSelected
struct UTBP_TigerGameInstance_C_OnCharacterSelected_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.HandleNetworkError
struct UTBP_TigerGameInstance_C_HandleNetworkError_Params
{
	TEnumAsByte<Engine_ENetworkFailure>                FailureType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsServer;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.HandleTravelError
struct UTBP_TigerGameInstance_C_HandleTravelError_Params
{
	TEnumAsByte<Engine_ETravelFailure>                 FailureType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.EnterBootFlow
struct UTBP_TigerGameInstance_C_EnterBootFlow_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleLobbyMeny
struct UTBP_TigerGameInstance_C_ToggleLobbyMeny_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseLobbyMenu
struct UTBP_TigerGameInstance_C_CloseLobbyMenu_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseFindGameFailedMenu
struct UTBP_TigerGameInstance_C_CloseFindGameFailedMenu_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenFindElysiumMenu
struct UTBP_TigerGameInstance_C_OpenFindElysiumMenu_Params
{
	bool                                               bStartSearch;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               bStartHidden;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseFindElysiumMenu
struct UTBP_TigerGameInstance_C_CloseFindElysiumMenu_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenMatchMenu
struct UTBP_TigerGameInstance_C_OpenMatchMenu_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenLoadingScreen
struct UTBP_TigerGameInstance_C_OpenLoadingScreen_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseLoadingScreen
struct UTBP_TigerGameInstance_C_CloseLoadingScreen_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToCharacterSelection
struct UTBP_TigerGameInstance_C_ReturnToCharacterSelection_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenJoinGameMenu
struct UTBP_TigerGameInstance_C_OpenJoinGameMenu_Params
{
	struct FTigerBpFindSessionSelectedSession          SessionToJoin;                                             // 0x0000(0x0110)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseJoinGameMenu
struct UTBP_TigerGameInstance_C_CloseJoinGameMenu_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReceiveInvitation
struct UTBP_TigerGameInstance_C_ReceiveInvitation_Params
{
	struct FTigerGroupInvitation                       Invitation;                                                // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	class ATigerPlayerState*                           Inviter;                                                   // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RemoveInvitationList
struct UTBP_TigerGameInstance_C_RemoveInvitationList_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenServerSelectionMenu
struct UTBP_TigerGameInstance_C_OpenServerSelectionMenu_Params
{
	struct FTigerBpFindSessionResultList               Sessions;                                                  // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseServerSelectionMenu
struct UTBP_TigerGameInstance_C_CloseServerSelectionMenu_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenFindGameFailedMenu
struct UTBP_TigerGameInstance_C_OpenFindGameFailedMenu_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSelected
struct UTBP_TigerGameInstance_C_OnSelected_Params
{
	struct FTigerBpFindSessionSelectedSession          Session;                                                   // 0x0000(0x0110)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FadeInLoadingScreen
struct UTBP_TigerGameInstance_C_FadeInLoadingScreen_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FadeOutLoadingScreen
struct UTBP_TigerGameInstance_C_FadeOutLoadingScreen_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnInitialLevelStreamingCompleted
struct UTBP_TigerGameInstance_C_OnInitialLevelStreamingCompleted_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnClosedJoinElysium
struct UTBP_TigerGameInstance_C_OnClosedJoinElysium_Params
{
	struct FString                                     ErrorString;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSuccessfulJoin
struct UTBP_TigerGameInstance_C_OnSuccessfulJoin_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToBootStartMapTransfer
struct UTBP_TigerGameInstance_C_ReturnToBootStartMapTransfer_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.PostLoadMapWithWorld
struct UTBP_TigerGameInstance_C_PostLoadMapWithWorld_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnGetValidGameVersionResult
struct UTBP_TigerGameInstance_C_OnGetValidGameVersionResult_Params
{
	Tiger_ETigerVersionIsValidResult                   Result;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnIgnored_Dispatch_Event_1
struct UTBP_TigerGameInstance_C_OnIgnored_Dispatch_Event_1_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FindMatch
struct UTBP_TigerGameInstance_C_FindMatch_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RetryPostLoadMap
struct UTBP_TigerGameInstance_C_RetryPostLoadMap_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CancelJoinGame
struct UTBP_TigerGameInstance_C_CancelJoinGame_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReceiveInit
struct UTBP_TigerGameInstance_C_ReceiveInit_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenTutorialMenu
struct UTBP_TigerGameInstance_C_OpenTutorialMenu_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseTutorialMenu
struct UTBP_TigerGameInstance_C_CloseTutorialMenu_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateLoadingScreenWidget
struct UTBP_TigerGameInstance_C_CreateLoadingScreenWidget_Params
{
	float                                              InFadeInTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerLoadingScreenAsset*                    InLoadingScreenAsset;                                      // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                      InWidgetClass;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTransferLoadingScreenOpaque
struct UTBP_TigerGameInstance_C_OnTransferLoadingScreenOpaque_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferToElysium
struct UTBP_TigerGameInstance_C_TransferToElysium_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferFromMatch
struct UTBP_TigerGameInstance_C_TransferFromMatch_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyElysiumFailed
struct UTBP_TigerGameInstance_C_OnJoinPartyElysiumFailed_Params
{
	struct FString                                     ErrorString;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseJoinPartyElysiumMenu
struct UTBP_TigerGameInstance_C_CloseJoinPartyElysiumMenu_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyElysiumSuccess
struct UTBP_TigerGameInstance_C_OnJoinPartyElysiumSuccess_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTransferToPartyElysiumFadeComplete
struct UTBP_TigerGameInstance_C_OnTransferToPartyElysiumFadeComplete_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenJoinPartyElysiumScreen
struct UTBP_TigerGameInstance_C_OpenJoinPartyElysiumScreen_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.KickToLoginScreen
struct UTBP_TigerGameInstance_C_KickToLoginScreen_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoadingScreenFullyOpaque_Event
struct UTBP_TigerGameInstance_C_OnLoadingScreenFullyOpaque_Event_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCreateGameSessionFailed
struct UTBP_TigerGameInstance_C_OnCreateGameSessionFailed_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.JoinSessionThroughUrl
struct UTBP_TigerGameInstance_C_JoinSessionThroughUrl_Params
{
	struct FString                                     SessionURL;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowTitleScreen
struct UTBP_TigerGameInstance_C_ShowTitleScreen_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.DispatchTitleScreenClosed
struct UTBP_TigerGameInstance_C_DispatchTitleScreenClosed_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowMoviesAndTitleScreen
struct UTBP_TigerGameInstance_C_ShowMoviesAndTitleScreen_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.Cheat_QuitTutorial
struct UTBP_TigerGameInstance_C_Cheat_QuitTutorial_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowWinScreen
struct UTBP_TigerGameInstance_C_ShowWinScreen_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.Transfer from Match
struct UTBP_TigerGameInstance_C_Transfer_from_Match_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseMatchMenu
struct UTBP_TigerGameInstance_C_CloseMatchMenu_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TitleScreenFadeOutStarted
struct UTBP_TigerGameInstance_C_TitleScreenFadeOutStarted_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleTutorialMenu
struct UTBP_TigerGameInstance_C_ToggleTutorialMenu_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToElysium
struct UTBP_TigerGameInstance_C_ReturnToElysium_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseWinScreen
struct UTBP_TigerGameInstance_C_CloseWinScreen_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowPostMatchScreen
struct UTBP_TigerGameInstance_C_ShowPostMatchScreen_Params
{
	bool                                               bInShouldLeaveParty;                                       // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleMatchMeny
struct UTBP_TigerGameInstance_C_ToggleMatchMeny_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToBootWithError
struct UTBP_TigerGameInstance_C_ReturnToBootWithError_Params
{
	struct FString                                     InError;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferToPartyElysium
struct UTBP_TigerGameInstance_C_TransferToPartyElysium_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ExecuteUbergraph_TBP_TigerGameInstance
struct UTBP_TigerGameInstance_C_ExecuteUbergraph_TBP_TigerGameInstance_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTitleScreenFadeOutStarted__DelegateSignature
struct UTBP_TigerGameInstance_C_OnTitleScreenFadeOutStarted__DelegateSignature_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinGameCountdownBegin__DelegateSignature
struct UTBP_TigerGameInstance_C_OnJoinGameCountdownBegin__DelegateSignature_Params
{
};

// Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoadingScreenFullyOpaque__DelegateSignature
struct UTBP_TigerGameInstance_C_OnLoadingScreenFullyOpaque__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
