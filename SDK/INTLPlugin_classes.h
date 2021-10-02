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

// Class INTLPlugin.INTLBaseUserWidget
// 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
class UINTLBaseUserWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData_PSII[0x8];                                     // 0x0260(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class INTLPlugin.INTLBaseUserWidget");
		return ptr;
	}



};

// Class INTLPlugin.INTLOutputUtility
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UINTLOutputUtility : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class INTLPlugin.INTLOutputUtility");
		return ptr;
	}



	void STATIC_FormatVerifyCodeStatusRet(const struct FINTLVerifyCodeStatusResult& Ret, bool* IsSuccess, struct FText* ErrorMsg);
	void STATIC_FormatNoticeRet(const struct FINTLNoticeResult& Ret, bool* IsSuccess, struct FText* ErrorMsg);
	void STATIC_FormatBaseRet(const struct FINTLBaseResult& Ret, bool* IsSuccess, struct FText* ErrorMsg);
	void STATIC_FormatAuthRet(const struct FINTLAuthResult& Ret, bool* IsSuccess, struct FText* ErrorMsg);
};

// Class INTLPlugin.INTLPluginObserver
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UINTLPluginObserver : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class INTLPlugin.INTLPluginObserver");
		return ptr;
	}



	void OnWebViewResult(const struct FINTLWebViewResult& Ret);
	void OnUpdateStartRepoNewVersionInfoResult(const struct FINTLUpdateStartRepoNewVersionInfo& Ret);
	void OnUpdateResult(const struct FINTLUpdateResult& Ret);
	void OnUpdateProgressResult(const struct FINTLUpdateProgress& Ret);
	void OnUpdateOptionalRepoInitResult(const struct FINTLUpdateOptionalRepoInitResult& Ret);
	void OnShowAccountPicker(const struct FINTLBaseResult& Ret);
	void OnResetPassword(const struct FINTLBaseResult& Ret);
	void OnRequestVerifyCode(const struct FINTLVerifyCodeStatusResult& Ret);
	void OnQueryVerifyCodeStatus(const struct FINTLVerifyCodeStatusResult& Ret);
	void OnQueryUserInfo(const struct FINTLAuthResult& Ret);
	void OnQueryRegisterStatus(const struct FINTLRegisterStatusResult& Ret);
	void OnQueryIsReceiveEmail(const struct FINTLIsReceiveEmailResult& Ret);
	void OnQueryActiveUser(const struct FINTLBaseResult& Ret);
	void OnPushResult(const struct FINTLPushResult& Ret);
	void OnPushBaseResult(const struct FINTLBaseResult& Ret);
	void OnNoticeRequestData(const struct FINTLNoticeResult& Ret);
	void OnNeedRefreshUser(const struct FINTLBaseResult& Ret);
	void OnModifyProfile(const struct FINTLBaseResult& Ret);
	void OnModifyAccount(const struct FINTLBaseResult& Ret);
	void OnLogout(const struct FINTLBaseResult& Ret);
	void OnLoginWithMappedChannel(const struct FINTLAuthResult& Ret);
	void OnLoginWithBoundChannel(const struct FINTLAuthResult& Ret);
	void OnLogin(const struct FINTLAuthResult& Ret);
	void OnIPInfoResult(const struct FINTLLBSIPInfoResult& Ret);
	void OnIDTokenResult(const struct FINTLIDTokenResult& Ret);
	void OnFriendResult(const struct FINTLFriendResult& Ret);
	void OnFriendBaseResult(const struct FINTLBaseResult& Ret);
	void OnExtendResult(const struct FINTLExtendResult& Ret);
	void OnDNSResult(const struct FINTLDNSResult& Ret);
	void OnDismissLoginUI(bool Canceled);
	void OnDirTreeResult(const struct FINTLDirTreeResult& Ret);
	void OnDeviceLevelResult(const struct FINTLDeviceLevelResult& Ret);
	void OnCutoutResult(const struct FCutoutInfoResult& Ret);
	void OnCustomerResult(const struct FINTLCustomerResult& Ret);
	void OnComplianceResult(const struct FINTLComplianceResult& Ret);
	void OnBuildMapWithLoggedinChannel(const struct FINTLAuthResult& Ret);
	void OnBindWithLoggedinChannel(const struct FINTLAuthResult& Ret);
	void OnBind(const struct FINTLAuthResult& Ret);
	void OnAutoLogin(const struct FINTLAuthResult& Ret);
	void OnAuthResult(const struct FINTLAuthResult& Ret);
	void OnAuthBaseResult(const struct FINTLBaseResult& Ret);
	void OnAccountResult(const struct FINTLAccountResult& Ret);
};

// Class INTLPlugin.INTLSDKAPI
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UINTLSDKAPI : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class INTLPlugin.INTLSDKAPI");
		return ptr;
	}



	bool STATIC_UpdateStop(int RepoID, int TaskID);
	bool STATIC_UpdateStart(const struct FINTLUpdateInitInfo& Info);
	bool STATIC_UpdateContinue(int RepoID);
	bool STATIC_UpdateConfig(TMap<struct FString, struct FString> Cfg, const struct FString& Project);
	void STATIC_UnregisterPush(const struct FString& Channel);
	bool STATIC_Unbind(INTLPlugin_EINTLLoginChannel Channel, const struct FString& UID, const struct FString& ExtraJson);
	bool STATIC_ShowAccountPicker();
	bool STATIC_Share(const struct FINTLFriendReqInfo& Info, const struct FString& Channel);
	void STATIC_SetTag(const struct FString& Channel, const struct FString& Tag);
	void STATIC_SetSessionExtraParam(const struct FString& extra_json);
	void STATIC_SetDeviceLevel(int Level);
	void STATIC_SetCrashUserValue(const struct FString& Key, const struct FString& Value);
	void STATIC_SetCrashUserId(const struct FString& UserId);
	void STATIC_SetAccountInfo(INTLPlugin_EINTLLoginChannel Channel, int ChannelID, const struct FString& LangType, int AccountPlatType);
	void STATIC_SetAccount(const struct FString& Channel, const struct FString& Account);
	bool STATIC_SendMessage(const struct FINTLFriendReqInfo& Info, const struct FString& Channel);
	bool STATIC_ResetPasswordWithVerifyCode(const struct FString& Account, const struct FString& VerifyCode, const struct FString& PhoneAreaCode, const struct FString& NewPassword, const struct FString& ExtraJson);
	bool STATIC_ResetPasswordWithOldPassword(const struct FString& Account, const struct FString& OldPassword, const struct FString& PhoneAreaCode, const struct FString& NewPassword, const struct FString& ExtraJson);
	bool STATIC_ResetGuest();
	bool STATIC_RequestVerifyCode(const struct FString& Account, INTLPlugin_EVerifyCodeType CodeType, const struct FString& PhoneAreaCode, const struct FString& ExtraJson);
	void STATIC_RequestTrackingAuthorization();
	void STATIC_RequestIPInfo();
	void STATIC_ReportPayStep(int Step, const struct FString& StepName, bool Result, int ErrorCode, TMap<struct FString, struct FString> ParamsMap);
	void STATIC_ReportLoginStep(int Step, const struct FString& StepName, bool Result, int ErrorCode, TMap<struct FString, struct FString> ParamsMap);
	void STATIC_ReportException(int Type, const struct FString& ExceptionName, const struct FString& ExceptionMsg, const struct FString& ExceptionStack, TMap<struct FString, struct FString> ExtInfo);
	void STATIC_ReportEvent(const struct FString& EventName, TMap<struct FString, struct FString> ParamsMap, const struct FString& SpecificChannel, const struct FString& ExtraJson);
	void STATIC_ReportCustomEventStep(const struct FString& EventName, int Step, const struct FString& StepName, bool Result, int ErrorCode, TMap<struct FString, struct FString> ParamsMap);
	void STATIC_ReportBinary(const struct FString& EventName, const struct FString& Data, int Length, const struct FString& SpecificChannel);
	void STATIC_RemoveObserver();
	void STATIC_RegisterPush(const struct FString& Channel, const struct FString& Account);
	bool STATIC_Register(const struct FString& Account, const struct FString& Password, const struct FString& VerifyCode, const struct FString& PhoneAreaCode, const struct FINTLAccountProfile& userProfile);
	bool STATIC_QueryVerifyCodeStatus(const struct FString& Account, const struct FString& VerifyCode, INTLPlugin_EVerifyCodeType CodeType, const struct FString& PhoneAreaCode, const struct FString& ExtraJson);
	void STATIC_QueryUserNameStatus(const struct FString& UserName);
	bool STATIC_QueryUserInfo();
	bool STATIC_QueryRegisterStatus(const struct FString& Account, const struct FString& PhoneAreaCode, const struct FString& ExtraJson);
	bool STATIC_QueryIsReceiveEmail(const struct FString& Account, const struct FString& PhoneAreaCode, const struct FString& ExtraJson);
	void STATIC_QueryIsEEA(const struct FString& Region);
	void STATIC_QueryIpByHost(const struct FString& Host);
	void STATIC_QueryIDToken();
	bool STATIC_QueryFriends(INTLPlugin_EINTLLoginChannel Channel, int Page, int Count, bool IsInGame, const struct FString& ExtraJson);
	void STATIC_QueryDirTree(int TreeId);
	void STATIC_QueryDirNode(int TreeId, int NodeId);
	void STATIC_QueryDeviceLevel();
	void STATIC_QueryDataProtectionAcceptance();
	bool STATIC_QueryCanBind(int ChannelID, int AccountPlatType, const struct FString& Account, const struct FString& PhoneAreaCode, const struct FString& ExtraJson);
	bool STATIC_QueryActiveUser();
	void STATIC_PostNetworkLatencyInSession(int LatencyMs);
	void STATIC_PostFrameTimeInSession(float DeltaSeconds);
	void STATIC_OpenUrl(const struct FString& URL, INTLPlugin_EINTLWebViewOrientation ScreenOrientation, bool FullScreenEnable, bool EncryptEnable, bool SystemBrowserEnable, const struct FString& ExtraJson);
	bool STATIC_OnTickEvent();
	struct FString STATIC_NoticeRequestData(const struct FString& Region, const struct FString& LangType, const struct FString& ExtraJson);
	bool STATIC_ModifyProfile(const struct FINTLAccountProfile& userProfile);
	void STATIC_ModifyDataProtectionAcceptance(const struct FString& PPVersion, const struct FString& TOSVersion);
	bool STATIC_ModifyAccountWithVerifyCode(const struct FString& OldAccount, const struct FString& OldAccountVerifyCode, const struct FString& OldPhoneAreaCode, const struct FString& NewAccount, const struct FString& NewAccountVerifyCode, const struct FString& NewPhoneAreaCode, const struct FString& ExtraJson);
	bool STATIC_ModifyAccountWithPassword(const struct FString& OldAccount, const struct FString& OldPhoneAreaCode, const struct FString& Password, const struct FString& NewAccount, const struct FString& NewAccountVerifyCode, const struct FString& NewPhoneAreaCode, const struct FString& ExtraJson);
	bool STATIC_ModifyAccountWithLoginState(const struct FString& OldPhoneAreaCode, const struct FString& NewAccount, const struct FString& NewAccountVerifyCode, const struct FString& NewPhoneAreaCode, const struct FString& ExtraJson);
	void STATIC_MarkSessionLoad(const struct FString& SessionName, const struct FString& extra_json);
	void STATIC_MarkSessionClosed();
	bool STATIC_Logout(INTLPlugin_EINTLLoginChannel Channel);
	bool STATIC_LoginWithVerifyCode(INTLPlugin_EINTLLoginChannel Channel, const struct FString& Account, const struct FString& Password, const struct FString& VerifyCode, const struct FString& PhoneAreaCode, const struct FString& PermissionList);
	bool STATIC_LoginWithPassword(INTLPlugin_EINTLLoginChannel Channel, const struct FString& Account, const struct FString& Password, const struct FString& PhoneAreaCode, const struct FString& PermissionList);
	bool STATIC_LoginWithMappedChannel(INTLPlugin_EINTLLoginChannel Channel, const struct FString& LoginMode, const struct FString& Permissions);
	bool STATIC_LoginWithChannel(INTLPlugin_EINTLLoginChannel Channel, const struct FString& LoginMode);
	bool STATIC_LoginWithBoundChannel(INTLPlugin_EINTLLoginChannel Channel, const struct FString& LoginMode);
	bool STATIC_Login(INTLPlugin_EINTLLoginChannel Channel, const struct FString& Permissions, const struct FString& ExtraJson);
	void STATIC_LogCrashInfo(INTLPlugin_EINTLCrashLevel Level, const struct FString& Tag, const struct FString& Log);
	void STATIC_LoadCutoutData();
	void STATIC_LaunchLoginUI();
	bool STATIC_LaunchCustomerUI(const struct FINTLCustomerUserProfile& userProfile);
	bool STATIC_IsAppInstalled(const struct FString& Channel, const struct FString& ExtraJson);
	void STATIC_Init();
	struct FString STATIC_GetSDKVersion();
	struct FString STATIC_GetIpByHost(const struct FString& Host);
	struct FString STATIC_GetInstanceID(const struct FString& Channel);
	bool STATIC_GetIDTokenResult(struct FINTLIDTokenResult* jwtRet);
	struct FString STATIC_GetEncryptUrl(const struct FString& URL);
	int STATIC_GetDeviceLevel();
	struct FString STATIC_GetCurrentResourceVersion();
	struct FString STATIC_GetCurrentAppVersion();
	struct FString STATIC_GetConfig(const struct FString& Key, const struct FString& DefaultVal, const struct FString& Project);
	bool STATIC_GetAuthResult(struct FINTLAuthResult* LoginRet);
	struct FString STATIC_ExtendInvoke(INTLPlugin_EINTLLoginChannel Channel, const struct FString& ExtendMethodName, const struct FString& ParamsJson);
	int STATIC_DownloadOptionalRepoFiles(int RepoID, TArray<struct FString> FilesPath);
	void STATIC_DismissLoginUI(bool Canceled);
	void STATIC_DeleteTag(const struct FString& Channel, const struct FString& Tag);
	void STATIC_DeleteLocalNotifications(const struct FString& Key);
	void STATIC_DeleteAccount(const struct FString& Channel, const struct FString& Account);
	bool STATIC_ComplianceSetUserProfile(const struct FString& GameID, const struct FString& OpenId, const struct FString& Token, int ChannelID, const struct FString& Region);
	void STATIC_ComplianceSetParentCertificateStatus(INTLPlugin_EComplianceParentCertificateStatus Status);
	void STATIC_ComplianceSetEUAgreeStatus(INTLPlugin_EComplianceAgreeStatus Status);
	void STATIC_ComplianceSetAdulthood(INTLPlugin_EComplianceAgeStatus Status);
	void STATIC_ComplianceSendEmail(const struct FString& Email, const struct FString& UserName);
	void STATIC_ComplianceQueryUserStatus();
	void STATIC_ComplianceCommitBirthday(int BirthdayYear, int BirthdayMonth, int BirthdayDay);
	void STATIC_ClearLocalNotifications(const struct FString& Channel);
	TArray<struct FINTLUpdateOptionalRepoFilesStatus> STATIC_CheckOptionalRepoFiles(int RepoID, TArray<struct FString> FilesPath);
	bool STATIC_CheckActiveUser();
	void STATIC_CallJS(const struct FString& JsonJsParam);
	bool STATIC_BuildMapWithLoggedinChannel();
	bool STATIC_BindWithLoggedinChannel();
	bool STATIC_Bind(INTLPlugin_EINTLLoginChannel Channel, const struct FString& Permissions, const struct FString& ExtraJson);
	bool STATIC_AutoLogin();
	void STATIC_AddObserver();
	void STATIC_AddLocalNotificationIOS(const struct FString& Channel, const struct FINTLLocalNotificationIOS& LocalNotification);
	void STATIC_AddLocalNotification(const struct FString& Channel, const struct FINTLLocalNotification& LocalNotification);
};

// Class INTLPlugin.INTLUtility
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UINTLUtility : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class INTLPlugin.INTLUtility");
		return ptr;
	}



	bool STATIC_Regular(const struct FString& Str, const struct FString& Reg);
	int STATIC_RefreshCurToastCnt(int ChangeCnt);
	int STATIC_GetNewToastOrder();
	void STATIC_ForceCrash();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
