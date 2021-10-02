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

// Enum OnlineSubsystemTiger.ETigerMatchResult
enum class OnlineSubsystemTiger_ETigerMatchResult : uint8_t
{
	ETigerMatchResult__Success     = 0,
	ETigerMatchResult__Failure     = 1,
	ETigerMatchResult__Count       = 2,
	ETigerMatchResult__ETigerMatchResult_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemTiger.MutePush
// 0x0028
struct FMutePush
{
	struct FString                                     PlayerId;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsMuted;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MutedReason;                                               // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0TTO[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MutedEndsAt;                                               // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystemTiger.PresencePush
// 0x0028
struct FPresencePush
{
	struct FString                                     PlayerId;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Location;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOnline;                                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V64U[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystemTiger.OnlinePresencePush
// 0x0018
struct FOnlinePresencePush
{
	struct FString                                     PlayerId;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOnline;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1540[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystemTiger.LocationPresencePush
// 0x0020
struct FLocationPresencePush
{
	struct FString                                     PlayerId;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Location;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystemTiger.TigerPartyPokePush
// 0x0010
struct FTigerPartyPokePush
{
	struct FString                                     PartyId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystemTiger.TigerPartyTravelPush
// 0x0048
struct FTigerPartyTravelPush
{
	struct FString                                     SESSIONTYPE;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PartyId;                                                   // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameSessionToken;                                          // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Host;                                                      // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           StateUpdateId;                                             // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystemTiger.TigerHeartbeatPush
// 0x0001
struct FTigerHeartbeatPush
{
	unsigned char                                      UnknownData_1LE4[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystemTiger.TigerRemovedFromPartyPush
// 0x0010
struct FTigerRemovedFromPartyPush
{
	struct FString                                     PartyId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystemTiger.TigerMemberLeftPush
// 0x0030
struct FTigerMemberLeftPush
{
	struct FString                                     PartyId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DepartingPlayerId;                                         // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewLeaderPlayerId;                                         // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystemTiger.TigerMemberJoinedPush
// 0x0020
struct FTigerMemberJoinedPush
{
	struct FString                                     PartyId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     JoiningPlayerId;                                           // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystemTiger.TigerInviteResponsePush
// 0x0050
struct FTigerInviteResponsePush
{
	struct FString                                     InviteId;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Accepted;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XH3Z[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PartyId;                                                   // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GuestPlayerId;                                             // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PlayerIds;                                                 // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                LeaderIndex;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LLJ4[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystemTiger.TigerInvitePush
// 0x0040
struct FTigerInvitePush
{
	struct FString                                     InviteId;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HostPlayerId;                                              // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HostPlayerName;                                            // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PartyInviteToken;                                          // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystemTiger.TigerMatchmakingPush
// 0x0048
struct FTigerMatchmakingPush
{
	OnlineSubsystemTiger_ETigerMatchResult             Result;                                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E45S[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Host;                                                      // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T6D2[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSessionId;                                             // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameSessionToken;                                          // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           MatchRequestId;                                            // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OSGA[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystemTiger.Request_CancelMatchmaking
// 0x0028
struct FRequest_CancelMatchmaking
{
	struct FString                                     SESSIONTYPE;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DsVersion;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           MatchRequestId;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WHXQ[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystemTiger.Response_StartMatchmaking
// 0x0018
struct FResponse_StartMatchmaking
{
	bool                                               OK;                                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CNXL[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Error;                                                     // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct OnlineSubsystemTiger.Request_StartMatchmaking
// 0x0060
struct FRequest_StartMatchmaking
{
	struct FString                                     SESSIONTYPE;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DsVersion;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MATCHMAKINGTOKEN;                                          // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     REGIONPINGS;                                               // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GROUPINGMODE;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O1R5[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GroupID;                                                   // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           MatchRequestId;                                            // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PN9X[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct OnlineSubsystemTiger.ResponseEnvelope
// 0x0018
struct FResponseEnvelope
{
	bool                                               OK;                                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QN6W[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Error;                                                     // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
