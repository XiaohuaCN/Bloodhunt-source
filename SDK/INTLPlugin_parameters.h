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

// Function INTLPlugin.INTLOutputUtility.FormatVerifyCodeStatusRet
struct UINTLOutputUtility_FormatVerifyCodeStatusRet_Params
{
	struct FINTLVerifyCodeStatusResult                 Ret;                                                       // 0x0000(0x0048)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                               IsSuccess;                                                 // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ErrorMsg;                                                  // 0x0050(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLOutputUtility.FormatNoticeRet
struct UINTLOutputUtility_FormatNoticeRet_Params
{
	struct FINTLNoticeResult                           Ret;                                                       // 0x0000(0x0060)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                               IsSuccess;                                                 // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ErrorMsg;                                                  // 0x0068(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLOutputUtility.FormatBaseRet
struct UINTLOutputUtility_FormatBaseRet_Params
{
	struct FINTLBaseResult                             Ret;                                                       // 0x0000(0x0040)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                               IsSuccess;                                                 // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ErrorMsg;                                                  // 0x0048(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLOutputUtility.FormatAuthRet
struct UINTLOutputUtility_FormatAuthRet_Params
{
	struct FINTLAuthResult                             Ret;                                                       // 0x0000(0x0118)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                               IsSuccess;                                                 // 0x0118(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       ErrorMsg;                                                  // 0x0120(0x0018)  (Parm, OutParm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnWebViewResult
struct UINTLPluginObserver_OnWebViewResult_Params
{
	struct FINTLWebViewResult                          Ret;                                                       // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnUpdateStartRepoNewVersionInfoResult
struct UINTLPluginObserver_OnUpdateStartRepoNewVersionInfoResult_Params
{
	struct FINTLUpdateStartRepoNewVersionInfo          Ret;                                                       // 0x0000(0x0038)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnUpdateResult
struct UINTLPluginObserver_OnUpdateResult_Params
{
	struct FINTLUpdateResult                           Ret;                                                       // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnUpdateProgressResult
struct UINTLPluginObserver_OnUpdateProgressResult_Params
{
	struct FINTLUpdateProgress                         Ret;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnUpdateOptionalRepoInitResult
struct UINTLPluginObserver_OnUpdateOptionalRepoInitResult_Params
{
	struct FINTLUpdateOptionalRepoInitResult           Ret;                                                       // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnShowAccountPicker
struct UINTLPluginObserver_OnShowAccountPicker_Params
{
	struct FINTLBaseResult                             Ret;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnResetPassword
struct UINTLPluginObserver_OnResetPassword_Params
{
	struct FINTLBaseResult                             Ret;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnRequestVerifyCode
struct UINTLPluginObserver_OnRequestVerifyCode_Params
{
	struct FINTLVerifyCodeStatusResult                 Ret;                                                       // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnQueryVerifyCodeStatus
struct UINTLPluginObserver_OnQueryVerifyCodeStatus_Params
{
	struct FINTLVerifyCodeStatusResult                 Ret;                                                       // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnQueryUserInfo
struct UINTLPluginObserver_OnQueryUserInfo_Params
{
	struct FINTLAuthResult                             Ret;                                                       // 0x0000(0x0118)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnQueryRegisterStatus
struct UINTLPluginObserver_OnQueryRegisterStatus_Params
{
	struct FINTLRegisterStatusResult                   Ret;                                                       // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnQueryIsReceiveEmail
struct UINTLPluginObserver_OnQueryIsReceiveEmail_Params
{
	struct FINTLIsReceiveEmailResult                   Ret;                                                       // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnQueryActiveUser
struct UINTLPluginObserver_OnQueryActiveUser_Params
{
	struct FINTLBaseResult                             Ret;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnPushResult
struct UINTLPluginObserver_OnPushResult_Params
{
	struct FINTLPushResult                             Ret;                                                       // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnPushBaseResult
struct UINTLPluginObserver_OnPushBaseResult_Params
{
	struct FINTLBaseResult                             Ret;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnNoticeRequestData
struct UINTLPluginObserver_OnNoticeRequestData_Params
{
	struct FINTLNoticeResult                           Ret;                                                       // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnNeedRefreshUser
struct UINTLPluginObserver_OnNeedRefreshUser_Params
{
	struct FINTLBaseResult                             Ret;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnModifyProfile
struct UINTLPluginObserver_OnModifyProfile_Params
{
	struct FINTLBaseResult                             Ret;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnModifyAccount
struct UINTLPluginObserver_OnModifyAccount_Params
{
	struct FINTLBaseResult                             Ret;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnLogout
struct UINTLPluginObserver_OnLogout_Params
{
	struct FINTLBaseResult                             Ret;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnLoginWithMappedChannel
struct UINTLPluginObserver_OnLoginWithMappedChannel_Params
{
	struct FINTLAuthResult                             Ret;                                                       // 0x0000(0x0118)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnLoginWithBoundChannel
struct UINTLPluginObserver_OnLoginWithBoundChannel_Params
{
	struct FINTLAuthResult                             Ret;                                                       // 0x0000(0x0118)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnLogin
struct UINTLPluginObserver_OnLogin_Params
{
	struct FINTLAuthResult                             Ret;                                                       // 0x0000(0x0118)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnIPInfoResult
struct UINTLPluginObserver_OnIPInfoResult_Params
{
	struct FINTLLBSIPInfoResult                        Ret;                                                       // 0x0000(0x0068)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnIDTokenResult
struct UINTLPluginObserver_OnIDTokenResult_Params
{
	struct FINTLIDTokenResult                          Ret;                                                       // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnFriendResult
struct UINTLPluginObserver_OnFriendResult_Params
{
	struct FINTLFriendResult                           Ret;                                                       // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnFriendBaseResult
struct UINTLPluginObserver_OnFriendBaseResult_Params
{
	struct FINTLBaseResult                             Ret;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnExtendResult
struct UINTLPluginObserver_OnExtendResult_Params
{
	struct FINTLExtendResult                           Ret;                                                       // 0x0000(0x0058)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnDNSResult
struct UINTLPluginObserver_OnDNSResult_Params
{
	struct FINTLDNSResult                              Ret;                                                       // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnDismissLoginUI
struct UINTLPluginObserver_OnDismissLoginUI_Params
{
	bool                                               Canceled;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnDirTreeResult
struct UINTLPluginObserver_OnDirTreeResult_Params
{
	struct FINTLDirTreeResult                          Ret;                                                       // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnDeviceLevelResult
struct UINTLPluginObserver_OnDeviceLevelResult_Params
{
	struct FINTLDeviceLevelResult                      Ret;                                                       // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnCutoutResult
struct UINTLPluginObserver_OnCutoutResult_Params
{
	struct FCutoutInfoResult                           Ret;                                                       // 0x0000(0x0070)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnCustomerResult
struct UINTLPluginObserver_OnCustomerResult_Params
{
	struct FINTLCustomerResult                         Ret;                                                       // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnComplianceResult
struct UINTLPluginObserver_OnComplianceResult_Params
{
	struct FINTLComplianceResult                       Ret;                                                       // 0x0000(0x00A8)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnBuildMapWithLoggedinChannel
struct UINTLPluginObserver_OnBuildMapWithLoggedinChannel_Params
{
	struct FINTLAuthResult                             Ret;                                                       // 0x0000(0x0118)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnBindWithLoggedinChannel
struct UINTLPluginObserver_OnBindWithLoggedinChannel_Params
{
	struct FINTLAuthResult                             Ret;                                                       // 0x0000(0x0118)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnBind
struct UINTLPluginObserver_OnBind_Params
{
	struct FINTLAuthResult                             Ret;                                                       // 0x0000(0x0118)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnAutoLogin
struct UINTLPluginObserver_OnAutoLogin_Params
{
	struct FINTLAuthResult                             Ret;                                                       // 0x0000(0x0118)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnAuthResult
struct UINTLPluginObserver_OnAuthResult_Params
{
	struct FINTLAuthResult                             Ret;                                                       // 0x0000(0x0118)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnAuthBaseResult
struct UINTLPluginObserver_OnAuthBaseResult_Params
{
	struct FINTLBaseResult                             Ret;                                                       // 0x0000(0x0040)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLPluginObserver.OnAccountResult
struct UINTLPluginObserver_OnAccountResult_Params
{
	struct FINTLAccountResult                          Ret;                                                       // 0x0000(0x00F8)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.UpdateStop
struct UINTLSDKAPI_UpdateStop_Params
{
	int                                                RepoID;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TaskID;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.UpdateStart
struct UINTLSDKAPI_UpdateStart_Params
{
	struct FINTLUpdateInitInfo                         Info;                                                      // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.UpdateContinue
struct UINTLSDKAPI_UpdateContinue_Params
{
	int                                                RepoID;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.UpdateConfig
struct UINTLSDKAPI_UpdateConfig_Params
{
	TMap<struct FString, struct FString>               Cfg;                                                       // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	struct FString                                     Project;                                                   // 0x0050(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.UnregisterPush
struct UINTLSDKAPI_UnregisterPush_Params
{
	struct FString                                     Channel;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.Unbind
struct UINTLSDKAPI_Unbind_Params
{
	INTLPlugin_EINTLLoginChannel                       Channel;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UID;                                                       // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ShowAccountPicker
struct UINTLSDKAPI_ShowAccountPicker_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.Share
struct UINTLSDKAPI_Share_Params
{
	struct FINTLFriendReqInfo                          Info;                                                      // 0x0000(0x0088)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FString                                     Channel;                                                   // 0x0088(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.SetTag
struct UINTLSDKAPI_SetTag_Params
{
	struct FString                                     Channel;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Tag;                                                       // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.SetSessionExtraParam
struct UINTLSDKAPI_SetSessionExtraParam_Params
{
	struct FString                                     extra_json;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.SetDeviceLevel
struct UINTLSDKAPI_SetDeviceLevel_Params
{
	int                                                Level;                                                     // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.SetCrashUserValue
struct UINTLSDKAPI_SetCrashUserValue_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.SetCrashUserId
struct UINTLSDKAPI_SetCrashUserId_Params
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.SetAccountInfo
struct UINTLSDKAPI_SetAccountInfo_Params
{
	INTLPlugin_EINTLLoginChannel                       Channel;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChannelID;                                                 // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LangType;                                                  // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AccountPlatType;                                           // 0x0018(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.SetAccount
struct UINTLSDKAPI_SetAccount_Params
{
	struct FString                                     Channel;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Account;                                                   // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.SendMessage
struct UINTLSDKAPI_SendMessage_Params
{
	struct FINTLFriendReqInfo                          Info;                                                      // 0x0000(0x0088)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	struct FString                                     Channel;                                                   // 0x0088(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0098(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ResetPasswordWithVerifyCode
struct UINTLSDKAPI_ResetPasswordWithVerifyCode_Params
{
	struct FString                                     Account;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VerifyCode;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PhoneAreaCode;                                             // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewPassword;                                               // 0x0030(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0040(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ResetPasswordWithOldPassword
struct UINTLSDKAPI_ResetPasswordWithOldPassword_Params
{
	struct FString                                     Account;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OldPassword;                                               // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PhoneAreaCode;                                             // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewPassword;                                               // 0x0030(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0040(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ResetGuest
struct UINTLSDKAPI_ResetGuest_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.RequestVerifyCode
struct UINTLSDKAPI_RequestVerifyCode_Params
{
	struct FString                                     Account;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	INTLPlugin_EVerifyCodeType                         CodeType;                                                  // 0x0010(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PhoneAreaCode;                                             // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0028(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.RequestTrackingAuthorization
struct UINTLSDKAPI_RequestTrackingAuthorization_Params
{
};

// Function INTLPlugin.INTLSDKAPI.RequestIPInfo
struct UINTLSDKAPI_RequestIPInfo_Params
{
};

// Function INTLPlugin.INTLSDKAPI.ReportPayStep
struct UINTLSDKAPI_ReportPayStep_Params
{
	int                                                Step;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StepName;                                                  // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Result;                                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ErrorCode;                                                 // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               ParamsMap;                                                 // 0x0020(0x0050)  (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ReportLoginStep
struct UINTLSDKAPI_ReportLoginStep_Params
{
	int                                                Step;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StepName;                                                  // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Result;                                                    // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ErrorCode;                                                 // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               ParamsMap;                                                 // 0x0020(0x0050)  (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ReportException
struct UINTLSDKAPI_ReportException_Params
{
	int                                                Type;                                                      // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExceptionName;                                             // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExceptionMsg;                                              // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExceptionStack;                                            // 0x0028(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               ExtInfo;                                                   // 0x0038(0x0050)  (Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ReportEvent
struct UINTLSDKAPI_ReportEvent_Params
{
	struct FString                                     EventName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               ParamsMap;                                                 // 0x0010(0x0050)  (Parm, NativeAccessSpecifierPublic)
	struct FString                                     SpecificChannel;                                           // 0x0060(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0070(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ReportCustomEventStep
struct UINTLSDKAPI_ReportCustomEventStep_Params
{
	struct FString                                     EventName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Step;                                                      // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StepName;                                                  // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Result;                                                    // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ErrorCode;                                                 // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               ParamsMap;                                                 // 0x0030(0x0050)  (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ReportBinary
struct UINTLSDKAPI_ReportBinary_Params
{
	struct FString                                     EventName;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Data;                                                      // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Length;                                                    // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SpecificChannel;                                           // 0x0028(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.RemoveObserver
struct UINTLSDKAPI_RemoveObserver_Params
{
};

// Function INTLPlugin.INTLSDKAPI.RegisterPush
struct UINTLSDKAPI_RegisterPush_Params
{
	struct FString                                     Channel;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Account;                                                   // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.Register
struct UINTLSDKAPI_Register_Params
{
	struct FString                                     Account;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VerifyCode;                                                // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PhoneAreaCode;                                             // 0x0030(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FINTLAccountProfile                         userProfile;                                               // 0x0040(0x0060)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x00A0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.QueryVerifyCodeStatus
struct UINTLSDKAPI_QueryVerifyCodeStatus_Params
{
	struct FString                                     Account;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VerifyCode;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	INTLPlugin_EVerifyCodeType                         CodeType;                                                  // 0x0020(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PhoneAreaCode;                                             // 0x0028(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0038(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.QueryUserNameStatus
struct UINTLSDKAPI_QueryUserNameStatus_Params
{
	struct FString                                     UserName;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.QueryUserInfo
struct UINTLSDKAPI_QueryUserInfo_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.QueryRegisterStatus
struct UINTLSDKAPI_QueryRegisterStatus_Params
{
	struct FString                                     Account;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PhoneAreaCode;                                             // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.QueryIsReceiveEmail
struct UINTLSDKAPI_QueryIsReceiveEmail_Params
{
	struct FString                                     Account;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PhoneAreaCode;                                             // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.QueryIsEEA
struct UINTLSDKAPI_QueryIsEEA_Params
{
	struct FString                                     Region;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.QueryIpByHost
struct UINTLSDKAPI_QueryIpByHost_Params
{
	struct FString                                     Host;                                                      // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.QueryIDToken
struct UINTLSDKAPI_QueryIDToken_Params
{
};

// Function INTLPlugin.INTLSDKAPI.QueryFriends
struct UINTLSDKAPI_QueryFriends_Params
{
	INTLPlugin_EINTLLoginChannel                       Channel;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Page;                                                      // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsInGame;                                                  // 0x000C(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.QueryDirTree
struct UINTLSDKAPI_QueryDirTree_Params
{
	int                                                TreeId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.QueryDirNode
struct UINTLSDKAPI_QueryDirNode_Params
{
	int                                                TreeId;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NodeId;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.QueryDeviceLevel
struct UINTLSDKAPI_QueryDeviceLevel_Params
{
};

// Function INTLPlugin.INTLSDKAPI.QueryDataProtectionAcceptance
struct UINTLSDKAPI_QueryDataProtectionAcceptance_Params
{
};

// Function INTLPlugin.INTLSDKAPI.QueryCanBind
struct UINTLSDKAPI_QueryCanBind_Params
{
	int                                                ChannelID;                                                 // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AccountPlatType;                                           // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Account;                                                   // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PhoneAreaCode;                                             // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0028(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.QueryActiveUser
struct UINTLSDKAPI_QueryActiveUser_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.PostNetworkLatencyInSession
struct UINTLSDKAPI_PostNetworkLatencyInSession_Params
{
	int                                                LatencyMs;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.PostFrameTimeInSession
struct UINTLSDKAPI_PostFrameTimeInSession_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.OpenUrl
struct UINTLSDKAPI_OpenUrl_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	INTLPlugin_EINTLWebViewOrientation                 ScreenOrientation;                                         // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               FullScreenEnable;                                          // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EncryptEnable;                                             // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               SystemBrowserEnable;                                       // 0x0013(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.OnTickEvent
struct UINTLSDKAPI_OnTickEvent_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.NoticeRequestData
struct UINTLSDKAPI_NoticeRequestData_Params
{
	struct FString                                     Region;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LangType;                                                  // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ModifyProfile
struct UINTLSDKAPI_ModifyProfile_Params
{
	struct FINTLAccountProfile                         userProfile;                                               // 0x0000(0x0060)  (ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ModifyDataProtectionAcceptance
struct UINTLSDKAPI_ModifyDataProtectionAcceptance_Params
{
	struct FString                                     PPVersion;                                                 // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TOSVersion;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ModifyAccountWithVerifyCode
struct UINTLSDKAPI_ModifyAccountWithVerifyCode_Params
{
	struct FString                                     OldAccount;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OldAccountVerifyCode;                                      // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OldPhoneAreaCode;                                          // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewAccount;                                                // 0x0030(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewAccountVerifyCode;                                      // 0x0040(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewPhoneAreaCode;                                          // 0x0050(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0060(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ModifyAccountWithPassword
struct UINTLSDKAPI_ModifyAccountWithPassword_Params
{
	struct FString                                     OldAccount;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OldPhoneAreaCode;                                          // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewAccount;                                                // 0x0030(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewAccountVerifyCode;                                      // 0x0040(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewPhoneAreaCode;                                          // 0x0050(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0060(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0070(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ModifyAccountWithLoginState
struct UINTLSDKAPI_ModifyAccountWithLoginState_Params
{
	struct FString                                     OldPhoneAreaCode;                                          // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewAccount;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewAccountVerifyCode;                                      // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewPhoneAreaCode;                                          // 0x0030(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0040(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.MarkSessionLoad
struct UINTLSDKAPI_MarkSessionLoad_Params
{
	struct FString                                     SessionName;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     extra_json;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.MarkSessionClosed
struct UINTLSDKAPI_MarkSessionClosed_Params
{
};

// Function INTLPlugin.INTLSDKAPI.Logout
struct UINTLSDKAPI_Logout_Params
{
	INTLPlugin_EINTLLoginChannel                       Channel;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.LoginWithVerifyCode
struct UINTLSDKAPI_LoginWithVerifyCode_Params
{
	INTLPlugin_EINTLLoginChannel                       Channel;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Account;                                                   // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VerifyCode;                                                // 0x0028(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PhoneAreaCode;                                             // 0x0038(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PermissionList;                                            // 0x0048(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.LoginWithPassword
struct UINTLSDKAPI_LoginWithPassword_Params
{
	INTLPlugin_EINTLLoginChannel                       Channel;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Account;                                                   // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PhoneAreaCode;                                             // 0x0028(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PermissionList;                                            // 0x0038(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.LoginWithMappedChannel
struct UINTLSDKAPI_LoginWithMappedChannel_Params
{
	INTLPlugin_EINTLLoginChannel                       Channel;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoginMode;                                                 // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Permissions;                                               // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.LoginWithChannel
struct UINTLSDKAPI_LoginWithChannel_Params
{
	INTLPlugin_EINTLLoginChannel                       Channel;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoginMode;                                                 // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.LoginWithBoundChannel
struct UINTLSDKAPI_LoginWithBoundChannel_Params
{
	INTLPlugin_EINTLLoginChannel                       Channel;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LoginMode;                                                 // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.Login
struct UINTLSDKAPI_Login_Params
{
	INTLPlugin_EINTLLoginChannel                       Channel;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Permissions;                                               // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.LogCrashInfo
struct UINTLSDKAPI_LogCrashInfo_Params
{
	INTLPlugin_EINTLCrashLevel                         Level;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Tag;                                                       // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Log;                                                       // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.LoadCutoutData
struct UINTLSDKAPI_LoadCutoutData_Params
{
};

// Function INTLPlugin.INTLSDKAPI.LaunchLoginUI
struct UINTLSDKAPI_LaunchLoginUI_Params
{
};

// Function INTLPlugin.INTLSDKAPI.LaunchCustomerUI
struct UINTLSDKAPI_LaunchCustomerUI_Params
{
	struct FINTLCustomerUserProfile                    userProfile;                                               // 0x0000(0x0100)  (Parm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0100(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.IsAppInstalled
struct UINTLSDKAPI_IsAppInstalled_Params
{
	struct FString                                     Channel;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.Init
struct UINTLSDKAPI_Init_Params
{
};

// Function INTLPlugin.INTLSDKAPI.GetSDKVersion
struct UINTLSDKAPI_GetSDKVersion_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.GetIpByHost
struct UINTLSDKAPI_GetIpByHost_Params
{
	struct FString                                     Host;                                                      // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.GetInstanceID
struct UINTLSDKAPI_GetInstanceID_Params
{
	struct FString                                     Channel;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.GetIDTokenResult
struct UINTLSDKAPI_GetIDTokenResult_Params
{
	struct FINTLIDTokenResult                          jwtRet;                                                    // 0x0000(0x0050)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.GetEncryptUrl
struct UINTLSDKAPI_GetEncryptUrl_Params
{
	struct FString                                     URL;                                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.GetDeviceLevel
struct UINTLSDKAPI_GetDeviceLevel_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.GetCurrentResourceVersion
struct UINTLSDKAPI_GetCurrentResourceVersion_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.GetCurrentAppVersion
struct UINTLSDKAPI_GetCurrentAppVersion_Params
{
	struct FString                                     ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.GetConfig
struct UINTLSDKAPI_GetConfig_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DefaultVal;                                                // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Project;                                                   // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.GetAuthResult
struct UINTLSDKAPI_GetAuthResult_Params
{
	struct FINTLAuthResult                             LoginRet;                                                  // 0x0000(0x0118)  (Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0118(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ExtendInvoke
struct UINTLSDKAPI_ExtendInvoke_Params
{
	INTLPlugin_EINTLLoginChannel                       Channel;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtendMethodName;                                          // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ParamsJson;                                                // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ReturnValue;                                               // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.DownloadOptionalRepoFiles
struct UINTLSDKAPI_DownloadOptionalRepoFiles_Params
{
	int                                                RepoID;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             FilesPath;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.DismissLoginUI
struct UINTLSDKAPI_DismissLoginUI_Params
{
	bool                                               Canceled;                                                  // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.DeleteTag
struct UINTLSDKAPI_DeleteTag_Params
{
	struct FString                                     Channel;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Tag;                                                       // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.DeleteLocalNotifications
struct UINTLSDKAPI_DeleteLocalNotifications_Params
{
	struct FString                                     Key;                                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.DeleteAccount
struct UINTLSDKAPI_DeleteAccount_Params
{
	struct FString                                     Channel;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Account;                                                   // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ComplianceSetUserProfile
struct UINTLSDKAPI_ComplianceSetUserProfile_Params
{
	struct FString                                     GameID;                                                    // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OpenId;                                                    // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                     // 0x0020(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChannelID;                                                 // 0x0030(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0038(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ComplianceSetParentCertificateStatus
struct UINTLSDKAPI_ComplianceSetParentCertificateStatus_Params
{
	INTLPlugin_EComplianceParentCertificateStatus      Status;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ComplianceSetEUAgreeStatus
struct UINTLSDKAPI_ComplianceSetEUAgreeStatus_Params
{
	INTLPlugin_EComplianceAgreeStatus                  Status;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ComplianceSetAdulthood
struct UINTLSDKAPI_ComplianceSetAdulthood_Params
{
	INTLPlugin_EComplianceAgeStatus                    Status;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ComplianceSendEmail
struct UINTLSDKAPI_ComplianceSendEmail_Params
{
	struct FString                                     Email;                                                     // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserName;                                                  // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ComplianceQueryUserStatus
struct UINTLSDKAPI_ComplianceQueryUserStatus_Params
{
};

// Function INTLPlugin.INTLSDKAPI.ComplianceCommitBirthday
struct UINTLSDKAPI_ComplianceCommitBirthday_Params
{
	int                                                BirthdayYear;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BirthdayMonth;                                             // 0x0004(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BirthdayDay;                                               // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.ClearLocalNotifications
struct UINTLSDKAPI_ClearLocalNotifications_Params
{
	struct FString                                     Channel;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.CheckOptionalRepoFiles
struct UINTLSDKAPI_CheckOptionalRepoFiles_Params
{
	int                                                RepoID;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             FilesPath;                                                 // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FINTLUpdateOptionalRepoFilesStatus>  ReturnValue;                                               // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.CheckActiveUser
struct UINTLSDKAPI_CheckActiveUser_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.CallJS
struct UINTLSDKAPI_CallJS_Params
{
	struct FString                                     JsonJsParam;                                               // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.BuildMapWithLoggedinChannel
struct UINTLSDKAPI_BuildMapWithLoggedinChannel_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.BindWithLoggedinChannel
struct UINTLSDKAPI_BindWithLoggedinChannel_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.Bind
struct UINTLSDKAPI_Bind_Params
{
	INTLPlugin_EINTLLoginChannel                       Channel;                                                   // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Permissions;                                               // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.AutoLogin
struct UINTLSDKAPI_AutoLogin_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.AddObserver
struct UINTLSDKAPI_AddObserver_Params
{
};

// Function INTLPlugin.INTLSDKAPI.AddLocalNotificationIOS
struct UINTLSDKAPI_AddLocalNotificationIOS_Params
{
	struct FString                                     Channel;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FINTLLocalNotificationIOS                   LocalNotification;                                         // 0x0010(0x0080)  (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLSDKAPI.AddLocalNotification
struct UINTLSDKAPI_AddLocalNotification_Params
{
	struct FString                                     Channel;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FINTLLocalNotification                      LocalNotification;                                         // 0x0010(0x0078)  (ConstParm, Parm, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLUtility.Regular
struct UINTLUtility_Regular_Params
{
	struct FString                                     Str;                                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Reg;                                                       // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLUtility.RefreshCurToastCnt
struct UINTLUtility_RefreshCurToastCnt_Params
{
	int                                                ChangeCnt;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ReturnValue;                                               // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLUtility.GetNewToastOrder
struct UINTLUtility_GetNewToastOrder_Params
{
	int                                                ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function INTLPlugin.INTLUtility.ForceCrash
struct UINTLUtility_ForceCrash_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
