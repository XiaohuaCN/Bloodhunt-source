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
// Enums
//---------------------------------------------------------------------------

// Enum INTLPlugin.EINTLUpdateStep
enum class INTLPlugin_EINTLUpdateStep : uint8_t
{
	EINTLUpdateStep__kUnknown      = 0,
	EINTLUpdateStep__kFirstResourceAnalyze = 1,
	EINTLUpdateStep__kCheckUpdate  = 2,
	EINTLUpdateStep__kDownload     = 3,
	EINTLUpdateStep__EINTLUpdateStep_MAX = 4,

};

// Enum INTLPlugin.EINTLUpdateResourceCopyType
enum class INTLPlugin_EINTLUpdateResourceCopyType : uint8_t
{
	EINTLUpdateResourceCopyType__kUnknown = 0,
	EINTLUpdateResourceCopyType__kCopyAll = 1,
	EINTLUpdateResourceCopyType__kCopyOnDemand = 2,
	EINTLUpdateResourceCopyType__EINTLUpdateResourceCopyType_MAX = 3,

};

// Enum INTLPlugin.EINTLUpdateActionType
enum class INTLPlugin_EINTLUpdateActionType : uint8_t
{
	EINTLUpdateActionType__kUnknown = 0,
	EINTLUpdateActionType__kAppUpdate = 1,
	EINTLUpdateActionType__kResourceUpdate = 2,
	EINTLUpdateActionType__kResourceRepair = 3,
	EINTLUpdateActionType__EINTLUpdateActionType_MAX = 4,

};

// Enum INTLPlugin.EINTLUpdateNewVersionType
enum class INTLPlugin_EINTLUpdateNewVersionType : uint8_t
{
	EINTLUpdateNewVersionType__kUnknown = 0,
	EINTLUpdateNewVersionType__kNoNeedUpdate = 1,
	EINTLUpdateNewVersionType__kOptionalUpdate = 2,
	EINTLUpdateNewVersionType__kForcibleUpdate = 3,
	EINTLUpdateNewVersionType__EINTLUpdateNewVersionType_MAX = 4,

};

// Enum INTLPlugin.EINTLCrashLevel
enum class INTLPlugin_EINTLCrashLevel : uint8_t
{
	EINTLCrashLevel__LogLevelSilent = 0,
	EINTLCrashLevel__LogLevelError = 1,
	EINTLCrashLevel__LogLevelWarn  = 2,
	EINTLCrashLevel__LogLevelInfo  = 3,
	EINTLCrashLevel__LogLevelDebug = 4,
	EINTLCrashLevel__LogLevelVerbose = 5,
	EINTLCrashLevel__EINTLCrashLevel_MAX = 6,

};

// Enum INTLPlugin.EINTLWebViewOrientation
enum class INTLPlugin_EINTLWebViewOrientation : uint8_t
{
	EINTLWebViewOrientation__kAuto = 0,
	EINTLWebViewOrientation__kPortrait = 1,
	EINTLWebViewOrientation__kLandscape = 2,
	EINTLWebViewOrientation__EINTLWebViewOrientation_MAX = 3,

};

// Enum INTLPlugin.EINTLFriendReqType
enum class INTLPlugin_EINTLFriendReqType : uint8_t
{
	EINTLFriendReqType__kReqText   = 0,
	EINTLFriendReqType__kReqLink   = 1,
	EINTLFriendReqType__kReqImage  = 2,
	EINTLFriendReqType__kReqInvite = 3,
	EINTLFriendReqType__kReqVideo  = 4,
	EINTLFriendReqType__EINTLFriendReqType_MAX = 5,

};

// Enum INTLPlugin.EComplianceParentCertificateStatus
enum class INTLPlugin_EComplianceParentCertificateStatus : uint8_t
{
	EComplianceParentCertificateStatus__kDeny = 0,
	EComplianceParentCertificateStatus__kUnknown = 1,
	EComplianceParentCertificateStatus__kAgree = 2,
	EComplianceParentCertificateStatus__EComplianceParentCertificateStatus_MAX = 3,

};

// Enum INTLPlugin.EComplianceAgreeStatus
enum class INTLPlugin_EComplianceAgreeStatus : uint8_t
{
	EComplianceAgreeStatus__kDeny  = 0,
	EComplianceAgreeStatus__kUnknown = 1,
	EComplianceAgreeStatus__kAgree = 2,
	EComplianceAgreeStatus__EComplianceAgreeStatus_MAX = 3,

};

// Enum INTLPlugin.EComplianceAgeStatus
enum class INTLPlugin_EComplianceAgeStatus : uint8_t
{
	EComplianceAgeStatus__kMinor   = 0,
	EComplianceAgeStatus__kUnknown = 1,
	EComplianceAgeStatus__kAdult   = 2,
	EComplianceAgeStatus__EComplianceAgeStatus_MAX = 3,

};

// Enum INTLPlugin.EINTLLoginChannel
enum class INTLPlugin_EINTLLoginChannel : uint8_t
{
	EINTLLoginChannel__kChannelDefault = 0,
	EINTLLoginChannel__kChannelGuest = 1,
	EINTLLoginChannel__kChannelFacebook = 2,
	EINTLLoginChannel__kChannelGoogle = 3,
	EINTLLoginChannel__kChannelIEGPassport = 4,
	EINTLLoginChannel__kChannelTwitter = 5,
	EINTLLoginChannel__kChannelGarena = 6,
	EINTLLoginChannel__kChannelCustomAccount = 7,
	EINTLLoginChannel__kChannelEGame = 8,
	EINTLLoginChannel__kChannelSwitch = 9,
	EINTLLoginChannel__kChannelLine = 10,
	EINTLLoginChannel__kChannelApple = 11,
	EINTLLoginChannel__kChannelXboxOne = 12,
	EINTLLoginChannel__kChannelSteam = 13,
	EINTLLoginChannel__kChannelPS4 = 14,
	EINTLLoginChannel__kChannelEpic = 15,
	EINTLLoginChannel__kChannelSharkmob = 16,
	EINTLLoginChannel__kChannelPS5 = 17,
	EINTLLoginChannel__EINTLLoginChannel_MAX = 18,

};

// Enum INTLPlugin.EVerifyCodeType
enum class INTLPlugin_EVerifyCodeType : uint8_t
{
	EVerifyCodeType__kVerifyCodeTypeRegister = 0,
	EVerifyCodeType__kVerifyCodeTypeResetPassword = 1,
	EVerifyCodeType__kVerifyCodeTypeRegisterThenLogin = 2,
	EVerifyCodeType__kVerifyCodeTypeModifyAccount = 3,
	EVerifyCodeType__EVerifyCodeType_MAX = 4,

};

// Enum INTLPlugin.EAccountType
enum class INTLPlugin_EAccountType : uint8_t
{
	EAccountType__kAccountTypeNone = 0,
	EAccountType__kAccountTypeEmail = 1,
	EAccountType__kAccountTypeMobilePhone = 2,
	EAccountType__EAccountType_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct INTLPlugin.INTLBaseResult
// 0x0040
struct FINTLBaseResult
{
	int                                                MethodId;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RetCode;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RetMsg;                                                    // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ThirdCode;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B72J[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ThirdMsg;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.CutoutRect
// 0x0010
struct FCutoutRect
{
	int                                                Top;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Bottom;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Left;                                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Right;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.CutoutInfoResult
// 0x0030 (0x0070 - 0x0040)
struct FCutoutInfoResult : public FINTLBaseResult
{
	bool                                               HasCutout;                                                 // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsCutoutHidden;                                            // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2R83[0x2];                                     // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ScreenHeight;                                              // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ScreenWidth;                                               // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StatusBarHeight;                                           // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCutoutRect>                         CutoutRects;                                               // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCutoutRect                                 SafeArea;                                                  // 0x0060(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLExtendResult
// 0x0018 (0x0058 - 0x0040)
struct FINTLExtendResult : public FINTLBaseResult
{
	INTLPlugin_EINTLLoginChannel                       Channel;                                                   // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5Y2X[0x7];                                     // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ExtendMethodName;                                          // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLDNSResult
// 0x0030 (0x0070 - 0x0040)
struct FINTLDNSResult : public FINTLBaseResult
{
	struct FString                                     V4;                                                        // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     V6;                                                        // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Host;                                                      // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLLBSIPInfoResult
// 0x0028 (0x0068 - 0x0040)
struct FINTLLBSIPInfoResult : public FINTLBaseResult
{
	struct FString                                     Region;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Alpha2;                                                    // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Timestamp;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_89LP[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct INTLPlugin.INTLDirTreeResult
// 0x0030 (0x0070 - 0x0040)
struct FINTLDirTreeResult : public FINTLBaseResult
{
	int                                                TreeId;                                                    // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NodeId;                                                    // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TreeInfo;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleInfo;                                                  // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ExpireTime;                                                // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7U0W[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct INTLPlugin.INTLUpdateOptionalRepoFilesStatus
// 0x0020
struct FINTLUpdateOptionalRepoFilesStatus
{
	struct FString                                     FilePath;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalFileNum;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ValidFileNum;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NeedDownloadSize;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FXCJ[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct INTLPlugin.INTLUpdateInitInfo
// 0x0030
struct FINTLUpdateInitInfo
{
	INTLPlugin_EINTLUpdateActionType                   ActionType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YR93[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RepoID;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ResourceCopyType;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I9B8[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ResourceSavePath;                                          // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FirstResourceDirPath;                                      // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLUpdateOptionalRepoInitResult
// 0x0008 (0x0048 - 0x0040)
struct FINTLUpdateOptionalRepoInitResult : public FINTLBaseResult
{
	INTLPlugin_EINTLUpdateActionType                   ActionType;                                                // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X8VY[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RepoID;                                                    // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLUpdateResult
// 0x0010 (0x0050 - 0x0040)
struct FINTLUpdateResult : public FINTLBaseResult
{
	INTLPlugin_EINTLUpdateActionType                   ActionType;                                                // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NN3D[0x3];                                     // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                RepoID;                                                    // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TaskID;                                                    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4W4K[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct INTLPlugin.INTLUpdateProgress
// 0x0040
struct FINTLUpdateProgress
{
	int                                                MethodId;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	INTLPlugin_EINTLUpdateActionType                   ActionType;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RNHD[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                UpdateStep;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RepoID;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TaskID;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FinishedSize;                                              // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalSize;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Speed;                                                     // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RemainTime;                                                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StepProgress;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalProgress;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DJRJ[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ErrorMsg;                                                  // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLUpdateStartRepoNewVersionInfo
// 0x0038
struct FINTLUpdateStartRepoNewVersionInfo
{
	int                                                MethodId;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	INTLPlugin_EINTLUpdateActionType                   ActionType;                                                // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R8MC[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NewVersionType;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3TTS[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Version;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NeedDownloadSize;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EIY9[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameDefinedStr;                                            // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLCustomerUserProfile
// 0x0100
struct FINTLCustomerUserProfile
{
	struct FString                                     LangType;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Sign;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OpenId;                                                    // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameLevel;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NickName;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RoleId;                                                    // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AreaId;                                                    // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ZoneId;                                                    // 0x0070(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameSvrId;                                                 // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PictureUrl;                                                // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CustomParam1;                                              // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CustomParam2;                                              // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CustomParam3;                                              // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CustomParam4;                                              // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CustomParam5;                                              // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLCustomerResult
// 0x0008 (0x0048 - 0x0040)
struct FINTLCustomerResult : public FINTLBaseResult
{
	int                                                MsgType;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N9LA[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct INTLPlugin.INTLComplianceResult
// 0x0068 (0x00A8 - 0x0040)
struct FINTLComplianceResult : public FINTLBaseResult
{
	int                                                AdultStatus;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ParentCertificateStatus;                                   // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ParentCertificateStatusExpiration;                         // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EUUserAgreeStatus;                                         // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NUXV[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CountryCode;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AdultAge;                                                  // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameGrade;                                                 // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CertificateType;                                           // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K15E[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AdultStatusExpiration;                                     // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TS;                                                        // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsEEA;                                                     // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RY1N[0x7];                                     // 0x00A1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct INTLPlugin.INTLWebViewResult
// 0x0030 (0x0070 - 0x0040)
struct FINTLWebViewResult : public FINTLBaseResult
{
	int                                                MsgType;                                                   // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HBHZ[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MsgJsonData;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EmbedProgress;                                             // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1ZKH[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EmbedUrl;                                                  // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLPushResult
// 0x0018 (0x0058 - 0x0040)
struct FINTLPushResult : public FINTLBaseResult
{
	int                                                Type;                                                      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N8Y2[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Notification;                                              // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLLocalNotificationIOS
// 0x0080
struct FINTLLocalNotificationIOS
{
	int                                                RepeatType;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTime;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Badge;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ARBM[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AlertBody;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AlertAction;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               UserInfo;                                                  // 0x0030(0x0050) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLLocalNotification
// 0x0078
struct FINTLLocalNotification
{
	int                                                NotificationID;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ActionType;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SoundEnabled;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Lights;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Vibrate;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FireTime;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Title;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TickerText;                                                // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ActionParameter;                                           // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RingUri;                                                   // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SmallIcon;                                                 // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLFriendReqInfo
// 0x0088
struct FINTLFriendReqInfo
{
	int                                                Type;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QCB6[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     User;                                                      // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Title;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Description;                                               // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ImagePath;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ThumbPath;                                                 // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MediaPath;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Link;                                                      // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLPersonInfo
// 0x0088
struct FINTLPersonInfo
{
	struct FString                                     OpenId;                                                    // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserName;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Gender;                                                    // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6OKJ[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PictureUrl;                                                // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                   // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Province;                                                  // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     City;                                                      // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Language;                                                  // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLFriendResult
// 0x0010 (0x0050 - 0x0040)
struct FINTLFriendResult : public FINTLBaseResult
{
	TArray<struct FINTLPersonInfo>                     FriendInfoList;                                            // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLNoticePicture
// 0x0040
struct FINTLNoticePicture
{
	struct FString                                     URL;                                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Hash;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RedirectUrl;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraData;                                                 // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLNoticeContent
// 0x0070
struct FINTLNoticeContent
{
	int                                                ContentId;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CIW8[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AppContentId;                                              // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Title;                                                     // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Content;                                                   // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LangType;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UpdateTime;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_URZU[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ExtraData;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FINTLNoticePicture>                  PictureList;                                               // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLNoticeInfo
// 0x0078
struct FINTLNoticeInfo
{
	int                                                NoticeId;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VHPL[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AppId;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AppNoticeId;                                               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Status;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartTime;                                                 // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EndTime;                                                   // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UpdateTime;                                                // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AreaList;                                                  // 0x0038(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FINTLNoticePicture>                  PictureList;                                               // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     ExtraData;                                                 // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FINTLNoticeContent>                  ContentList;                                               // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLNoticeResult
// 0x0020 (0x0060 - 0x0040)
struct FINTLNoticeResult : public FINTLBaseResult
{
	struct FString                                     SeqId;                                                     // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FINTLNoticeInfo>                     NoticeInfoList;                                            // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLVerifyCodeStatusResult
// 0x0008 (0x0048 - 0x0040)
struct FINTLVerifyCodeStatusResult : public FINTLBaseResult
{
	int                                                VerifyCodeExpireTime;                                      // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MZOH[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct INTLPlugin.INTLIsReceiveEmailResult
// 0x0008 (0x0048 - 0x0040)
struct FINTLIsReceiveEmailResult : public FINTLBaseResult
{
	int                                                IsReceiveEmail;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GLPW[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct INTLPlugin.INTLRegisterStatusResult
// 0x0010 (0x0050 - 0x0040)
struct FINTLRegisterStatusResult : public FINTLBaseResult
{
	int                                                IsRegistered;                                              // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IsSetPassword;                                             // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IsReceiveEmail;                                            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J3PT[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct INTLPlugin.INTLAccountResult
// 0x00B8 (0x00F8 - 0x0040)
struct FINTLAccountResult : public FINTLBaseResult
{
	int                                                ChannelID;                                                 // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_818M[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Channel;                                                   // 0x0048(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SeqId;                                                     // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserName;                                                  // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UID;                                                       // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                     // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExpireTime;                                                // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IsRegister;                                                // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IsSetPassword;                                             // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IsReceiveEmail;                                            // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VerifyCodeExpireTime;                                      // 0x00B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CanBind;                                                   // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O140[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PpAcceptanceVersion;                                       // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TosAcceptanceVersion;                                      // 0x00D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   PpAcceptanceTime;                                          // 0x00E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   TosAcceptanceTime;                                         // 0x00E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IsUserNameAvailable;                                       // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VN4O[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct INTLPlugin.INTLAccountProfile
// 0x0060
struct FINTLAccountProfile
{
	struct FString                                     UserName;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Birthday;                                                  // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BirthdayYear;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BirthdayMonth;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BirthdayDay;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IsReceiveEmail;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Region;                                                    // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LangType;                                                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ExtraJson;                                                 // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLDeviceLevelResult
// 0x0008 (0x0048 - 0x0040)
struct FINTLDeviceLevelResult : public FINTLBaseResult
{
	int                                                DeviceLevel;                                               // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D1MZ[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct INTLPlugin.INTLIDTokenResult
// 0x0010 (0x0050 - 0x0040)
struct FINTLIDTokenResult : public FINTLBaseResult
{
	struct FString                                     IdToken;                                                   // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct INTLPlugin.INTLAuthResult
// 0x00D8 (0x0118 - 0x0040)
struct FINTLAuthResult : public FINTLBaseResult
{
	struct FString                                     OpenId;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                     // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TokenExpireTime;                                           // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FirstLogin;                                                // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RegChannelDis;                                             // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UserName;                                                  // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Gender;                                                    // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XPZT[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Birthday;                                                  // 0x0090(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PicUrl;                                                    // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Pf;                                                        // 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PfKey;                                                     // 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               NeedRealNameAuth;                                          // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BI9D[0x3];                                     // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ChannelID;                                                 // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	INTLPlugin_EINTLLoginChannel                       ChannelName;                                               // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JLXC[0x7];                                     // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ChannelInfo;                                               // 0x00E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ConfirmCode;                                               // 0x00F0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ConfirmCodeExpireTime;                                     // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M3RU[0x4];                                     // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BindList;                                                  // 0x0108(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
