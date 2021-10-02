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

// Enum TSS.ETSSAccountType
enum class TSS_ETSSAccountType : uint8_t
{
	ETSSAccountType__Common        = 0,
	ETSSAccountType__ETSSAccountType_MAX = 1,

};

// Enum TSS.ETSSAddUserResult
enum class TSS_ETSSAddUserResult : uint8_t
{
	ETSSAddUserResult__Success     = 0,
	ETSSAddUserResult__Error_NoServerInterface = 1,
	ETSSAddUserResult__Error_NotServer = 2,
	ETSSAddUserResult__Error_AccountInfoConversionFailure = 3,
	ETSSAddUserResult__Error_SdkReturnedError = 4,
	ETSSAddUserResult__Error_NoServerApiHandler = 5,
	ETSSAddUserResult__Error_OwnerNotPlayerController = 6,
	ETSSAddUserResult__Error_FailedToGetRemoteAddress = 7,
	ETSSAddUserResult__Error_AlreadyLoggedIn = 8,
	ETSSAddUserResult__ETSSAddUserResult_MAX = 9,

};

// Enum TSS.ETSSBroadcastedTextCategory
enum class TSS_ETSSBroadcastedTextCategory : uint8_t
{
	ETSSBroadcastedTextCategory__Unknown = 0,
	ETSSBroadcastedTextCategory__ProfileInformation = 1,
	ETSSBroadcastedTextCategory__InstantMessages = 2,
	ETSSBroadcastedTextCategory__SocialOperation = 3,
	ETSSBroadcastedTextCategory__ForumContent = 4,
	ETSSBroadcastedTextCategory__ETSSBroadcastedTextCategory_MAX = 5,

};

// Enum TSS.ETSSClientPlatformType
enum class TSS_ETSSClientPlatformType : uint8_t
{
	ETSSClientPlatformType__PcClient = 0,
	ETSSClientPlatformType__PS     = 1,
	ETSSClientPlatformType__ETSSClientPlatformType_MAX = 2,

};

// Enum TSS.ETSSDeleteUserResult
enum class TSS_ETSSDeleteUserResult : uint8_t
{
	ETSSDeleteUserResult__Success  = 0,
	ETSSDeleteUserResult__Error_NoServerInterface = 1,
	ETSSDeleteUserResult__Error_NotServer = 2,
	ETSSDeleteUserResult__Error_ClientNotFound = 3,
	ETSSDeleteUserResult__Error_AccountInfoConversionFailure = 4,
	ETSSDeleteUserResult__Error_SdkReturnedError = 5,
	ETSSDeleteUserResult__Error_NoServerApiHandler = 6,
	ETSSDeleteUserResult__Error_AlreadyLoggedOut = 7,
	ETSSDeleteUserResult__ETSSDeleteUserResult_MAX = 8,

};

// Enum TSS.ETSSProfanityFilterResult
enum class TSS_ETSSProfanityFilterResult : uint8_t
{
	ETSSProfanityFilterResult__NoProfanity = 0,
	ETSSProfanityFilterResult__SeverProfanity = 1,
	ETSSProfanityFilterResult__Profanity = 2,
	ETSSProfanityFilterResult__ETSSProfanityFilterResult_MAX = 3,

};

// Enum TSS.ETSSReceivedClientDataResult
enum class TSS_ETSSReceivedClientDataResult : uint8_t
{
	ETSSReceivedClientDataResult__Success = 0,
	ETSSReceivedClientDataResult__Error_ClientNotFound = 1,
	ETSSReceivedClientDataResult__Error_AntiCheatNotInitalized = 2,
	ETSSReceivedClientDataResult__Error_NoClientData = 3,
	ETSSReceivedClientDataResult__Error_NotServer = 4,
	ETSSReceivedClientDataResult__Error_AccountInfoConversionFailure = 5,
	ETSSReceivedClientDataResult__Error_SdkReturnedError = 6,
	ETSSReceivedClientDataResult__ETSSReceivedClientDataResult_MAX = 7,

};

// Enum TSS.ETSSAceLogoutResult
enum class TSS_ETSSAceLogoutResult : uint8_t
{
	ETSSAceLogoutResult__Success   = 0,
	ETSSAceLogoutResult__Error_LogoutClientMismatch = 1,
	ETSSAceLogoutResult__Error_NotLoggedIn = 2,
	ETSSAceLogoutResult__Error_NotClientApp = 3,
	ETSSAceLogoutResult__ETSSAceLogoutResult_MAX = 4,

};

// Enum TSS.ETSSAceLoginResult
enum class TSS_ETSSAceLoginResult : uint8_t
{
	ETSSAceLoginResult__Success    = 0,
	ETSSAceLoginResult__Error_AlreadyLoggedIn = 1,
	ETSSAceLoginResult__Error_GhostLogin = 2,
	ETSSAceLoginResult__Error_AceNotInitialized = 3,
	ETSSAceLoginResult__Error_AccountInfoConversionFailure = 4,
	ETSSAceLoginResult__Error_InternalLoginError = 5,
	ETSSAceLoginResult__Error_NotClientApp = 6,
	ETSSAceLoginResult__ETSSAceLoginResult_MAX = 7,

};

// Enum TSS.ETSSSdkLoadState
enum class TSS_ETSSSdkLoadState : uint8_t
{
	ETSSSdkLoadState__NotLoaded    = 0,
	ETSSSdkLoadState__LoadFailed   = 1,
	ETSSSdkLoadState__LoadSuccessful = 2,
	ETSSSdkLoadState__Unloaded     = 3,
	ETSSSdkLoadState__ETSSSdkLoadState_MAX = 4,

};

// Enum TSS.ETSSSetAccountInfoResult
enum class TSS_ETSSSetAccountInfoResult : uint8_t
{
	ETSSSetAccountInfoResult__Success = 0,
	ETSSSetAccountInfoResult__Error_AntiBotNotInitialized = 1,
	ETSSSetAccountInfoResult__Error_NotClient = 2,
	ETSSSetAccountInfoResult__Error_AccountInfoConversionFailure = 3,
	ETSSSetAccountInfoResult__Error_UnhandledDataConversionResult = 4,
	ETSSSetAccountInfoResult__Error_AlreadyInitialized = 5,
	ETSSSetAccountInfoResult__ETSSSetAccountInfoResult_MAX = 6,

};

// Enum TSS.ETSSSubmitTextResult
enum class TSS_ETSSSubmitTextResult : uint8_t
{
	ETSSSubmitTextResult__Success  = 0,
	ETSSSubmitTextResult__Error_NotServer = 1,
	ETSSSubmitTextResult__Error_UICNotInitalized = 2,
	ETSSSubmitTextResult__Error_ClientNotFound = 3,
	ETSSSubmitTextResult__Error_MessageLengthExceeded = 4,
	ETSSSubmitTextResult__Error_TextCategoryMismatch = 5,
	ETSSSubmitTextResult__Error_SdkReturnedError = 6,
	ETSSSubmitTextResult__ETSSSubmitTextResult_MAX = 7,

};

// Enum TSS.ETSSPlatformTypeConversionResult
enum class TSS_ETSSPlatformTypeConversionResult : uint8_t
{
	ETSSPlatformTypeConversionResult__Success = 0,
	ETSSPlatformTypeConversionResult__Error_UnhandledType = 1,
	ETSSPlatformTypeConversionResult__ETSSPlatformTypeConversionResult_MAX = 2,

};

// Enum TSS.ETSSAccountTypeConversionResult
enum class TSS_ETSSAccountTypeConversionResult : uint8_t
{
	ETSSAccountTypeConversionResult__Success = 0,
	ETSSAccountTypeConversionResult__Error_UnhandledType = 1,
	ETSSAccountTypeConversionResult__ETSSAccountTypeConversionResult_MAX = 2,

};

// Enum TSS.ETSSAccountInfoConversionResult
enum class TSS_ETSSAccountInfoConversionResult : uint8_t
{
	ETSSAccountInfoConversionResult__Success = 0,
	ETSSAccountInfoConversionResult__Error_BadAccountId = 1,
	ETSSAccountInfoConversionResult__Error_UndefinedPlatform = 2,
	ETSSAccountInfoConversionResult__Error_UndefinedAccountType = 3,
	ETSSAccountInfoConversionResult__ETSSAccountInfoConversionResult_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TSS.TSSClientDataReport
// 0x0010
struct FTSSClientDataReport
{
	TArray<unsigned char>                              Data;                                                      // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct TSS.TSSAccountInfo
// 0x0030
struct FTSSAccountInfo
{
	struct FString                                     AccountId;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSS_ETSSAccountType                                AccountType;                                               // 0x0010(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X9RB[0x3];                                     // 0x0010(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TSS_ETSSClientPlatformType                         PlatformType;                                              // 0x0014(0x0001) ELEMENT_SIZE_MISMATCH (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YMKX[0x3];                                     // 0x0014(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	uint32_t                                           WorldId;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           ChannelID;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           RoleId;                                                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           GameID;                                                    // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AYBY[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
