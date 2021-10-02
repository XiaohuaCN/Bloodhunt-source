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

// Enum Shark.EShAccountChannel
enum class Shark_EShAccountChannel : uint8_t
{
	EShAccountChannel__DEV         = 0,
	EShAccountChannel__STEAM       = 1,
	EShAccountChannel__SHARKNET    = 2,
	EShAccountChannel__PS5         = 3,
	EShAccountChannel__UNKNOWN     = 4,
	EShAccountChannel__EShAccountChannel_MAX = 5,

};

// Enum Shark.EShMidasResultCode
enum class Shark_EShMidasResultCode : uint8_t
{
	NOT_SUPPORTED                  = 0,
	GENERAL_ERROR                  = 1,
	OK                             = 2,
	CANCEL                         = 3,
	LOGIN_EXPIRED                  = 4,
	DISCONNECTED                   = 5,
	CONNECTION_ERROR               = 6,
	EShMidasResultCode_MAX         = 7,

};

// Enum Shark.ESharkCustomPrimitiveFloatDataName
enum class Shark_ESharkCustomPrimitiveFloatDataName : uint8_t
{
	ESharkCustomPrimitiveFloatDataName__AlbedoHueShift = 0,
	ESharkCustomPrimitiveFloatDataName__Alpha = 1,
	ESharkCustomPrimitiveFloatDataName__AmbientOcclusion = 2,
	ESharkCustomPrimitiveFloatDataName__DiffuseDesaturation = 3,
	ESharkCustomPrimitiveFloatDataName__DirtAmount = 4,
	ESharkCustomPrimitiveFloatDataName__EmissiveMultiplier = 5,
	ESharkCustomPrimitiveFloatDataName__Height = 6,
	ESharkCustomPrimitiveFloatDataName__Metallic = 7,
	ESharkCustomPrimitiveFloatDataName__Roughness = 8,
	ESharkCustomPrimitiveFloatDataName__RoughnessOffset = 9,
	ESharkCustomPrimitiveFloatDataName__WindStrength = 10,
	ESharkCustomPrimitiveFloatDataName__GlassDestruction_Use = 11,
	ESharkCustomPrimitiveFloatDataName__GlassDestruction_UseUv = 12,
	ESharkCustomPrimitiveFloatDataName__Vehicle_Roughness = 13,
	ESharkCustomPrimitiveFloatDataName__Vehicle_Rustiness = 14,
	ESharkCustomPrimitiveFloatDataName__Vehicle_Dirtiness = 15,
	ESharkCustomPrimitiveFloatDataName__Vehicle_EmissiveStrength = 16,
	ESharkCustomPrimitiveFloatDataName__Vehicle_Metalness = 17,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushAllZones = 18,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone0 = 19,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone1 = 20,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone2 = 21,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone3 = 22,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CrushZone4 = 23,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CanBounce = 24,
	ESharkCustomPrimitiveFloatDataName__Vehicle_CanSquash = 25,
	ESharkCustomPrimitiveFloatDataName__Custom = 26,
	ESharkCustomPrimitiveFloatDataName__Custom01 = 27,
	ESharkCustomPrimitiveFloatDataName__Custom02 = 28,
	ESharkCustomPrimitiveFloatDataName__Custom03 = 29,
	ESharkCustomPrimitiveFloatDataName__Custom04 = 30,
	ESharkCustomPrimitiveFloatDataName__Custom05 = 31,
	ESharkCustomPrimitiveFloatDataName__Custom06 = 32,
	ESharkCustomPrimitiveFloatDataName__Custom07 = 33,
	ESharkCustomPrimitiveFloatDataName__Custom08 = 34,
	ESharkCustomPrimitiveFloatDataName__Custom09 = 35,
	ESharkCustomPrimitiveFloatDataName__Custom10 = 36,
	ESharkCustomPrimitiveFloatDataName__Custom11 = 37,
	ESharkCustomPrimitiveFloatDataName__Custom12 = 38,
	ESharkCustomPrimitiveFloatDataName__Custom13 = 39,
	ESharkCustomPrimitiveFloatDataName__Custom14 = 40,
	ESharkCustomPrimitiveFloatDataName__Custom15 = 41,
	ESharkCustomPrimitiveFloatDataName__Custom16 = 42,
	ESharkCustomPrimitiveFloatDataName__Custom17 = 43,
	ESharkCustomPrimitiveFloatDataName__Custom18 = 44,
	ESharkCustomPrimitiveFloatDataName__Custom19 = 45,
	ESharkCustomPrimitiveFloatDataName__Custom20 = 46,
	ESharkCustomPrimitiveFloatDataName__Custom21 = 47,
	ESharkCustomPrimitiveFloatDataName__Custom22 = 48,
	ESharkCustomPrimitiveFloatDataName__Custom23 = 49,
	ESharkCustomPrimitiveFloatDataName__Custom24 = 50,
	ESharkCustomPrimitiveFloatDataName__Custom25 = 51,
	ESharkCustomPrimitiveFloatDataName__Custom26 = 52,
	ESharkCustomPrimitiveFloatDataName__Custom27 = 53,
	ESharkCustomPrimitiveFloatDataName__Custom28 = 54,
	ESharkCustomPrimitiveFloatDataName__Custom29 = 55,
	ESharkCustomPrimitiveFloatDataName__Custom30 = 56,
	ESharkCustomPrimitiveFloatDataName__Custom31 = 57,
	ESharkCustomPrimitiveFloatDataName__Count = 58,
	ESharkCustomPrimitiveFloatDataName__ESharkCustomPrimitiveFloatDataName_MAX = 59,

};

// Enum Shark.ESharkCustomPrimitiveVector2DataName
enum class Shark_ESharkCustomPrimitiveVector2DataName : uint8_t
{
	ESharkCustomPrimitiveVector2DataName__UvOffset = 0,
	ESharkCustomPrimitiveVector2DataName__UvScale = 1,
	ESharkCustomPrimitiveVector2DataName__GlassDestruction_Tiling = 2,
	ESharkCustomPrimitiveVector2DataName__Custom_0 = 3,
	ESharkCustomPrimitiveVector2DataName__Custom_2 = 4,
	ESharkCustomPrimitiveVector2DataName__Custom_4 = 5,
	ESharkCustomPrimitiveVector2DataName__Custom_6 = 6,
	ESharkCustomPrimitiveVector2DataName__Custom_8 = 7,
	ESharkCustomPrimitiveVector2DataName__Custom_10 = 8,
	ESharkCustomPrimitiveVector2DataName__Custom_12 = 9,
	ESharkCustomPrimitiveVector2DataName__Custom_14 = 10,
	ESharkCustomPrimitiveVector2DataName__Custom_16 = 11,
	ESharkCustomPrimitiveVector2DataName__Custom_18 = 12,
	ESharkCustomPrimitiveVector2DataName__Custom_20 = 13,
	ESharkCustomPrimitiveVector2DataName__Custom_22 = 14,
	ESharkCustomPrimitiveVector2DataName__Custom_24 = 15,
	ESharkCustomPrimitiveVector2DataName__Custom_26 = 16,
	ESharkCustomPrimitiveVector2DataName__Custom_28 = 17,
	ESharkCustomPrimitiveVector2DataName__Custom_30 = 18,
	ESharkCustomPrimitiveVector2DataName__Count = 19,
	ESharkCustomPrimitiveVector2DataName__ESharkCustomPrimitiveVector2DataName_MAX = 20,

};

// Enum Shark.ESharkCustomPrimitiveVector3DataName
enum class Shark_ESharkCustomPrimitiveVector3DataName : uint8_t
{
	ESharkCustomPrimitiveVector3DataName__Color1_Rgb = 0,
	ESharkCustomPrimitiveVector3DataName__Color2_Rgb = 1,
	ESharkCustomPrimitiveVector3DataName__EmissiveColor_Rgb = 2,
	ESharkCustomPrimitiveVector3DataName__GlassDestruction_Pos = 3,
	ESharkCustomPrimitiveVector3DataName__GlassDestruction_ProjX = 4,
	ESharkCustomPrimitiveVector3DataName__GlassDestruction_ProjY = 5,
	ESharkCustomPrimitiveVector3DataName__Vehicle_ColorTintRgb = 6,
	ESharkCustomPrimitiveVector3DataName__Vehicle_InteriorColorTintRgb = 7,
	ESharkCustomPrimitiveVector3DataName__Vehicle_BounceXyz = 8,
	ESharkCustomPrimitiveVector3DataName__Custom_0 = 9,
	ESharkCustomPrimitiveVector3DataName__Custom_1 = 10,
	ESharkCustomPrimitiveVector3DataName__Custom_4 = 11,
	ESharkCustomPrimitiveVector3DataName__Custom_5 = 12,
	ESharkCustomPrimitiveVector3DataName__Custom_8 = 13,
	ESharkCustomPrimitiveVector3DataName__Custom_9 = 14,
	ESharkCustomPrimitiveVector3DataName__Custom_12 = 15,
	ESharkCustomPrimitiveVector3DataName__Custom_13 = 16,
	ESharkCustomPrimitiveVector3DataName__Custom_16 = 17,
	ESharkCustomPrimitiveVector3DataName__Custom_17 = 18,
	ESharkCustomPrimitiveVector3DataName__Custom_20 = 19,
	ESharkCustomPrimitiveVector3DataName__Custom_21 = 20,
	ESharkCustomPrimitiveVector3DataName__Custom_24 = 21,
	ESharkCustomPrimitiveVector3DataName__Custom_25 = 22,
	ESharkCustomPrimitiveVector3DataName__Custom_28 = 23,
	ESharkCustomPrimitiveVector3DataName__Custom_29 = 24,
	ESharkCustomPrimitiveVector3DataName__Count = 25,
	ESharkCustomPrimitiveVector3DataName__ESharkCustomPrimitiveVector3DataName_MAX = 26,

};

// Enum Shark.ESharkCustomPrimitiveVector4DataName
enum class Shark_ESharkCustomPrimitiveVector4DataName : uint8_t
{
	ESharkCustomPrimitiveVector4DataName__ColorRgba = 0,
	ESharkCustomPrimitiveVector4DataName__Custom_0 = 1,
	ESharkCustomPrimitiveVector4DataName__Custom_4 = 2,
	ESharkCustomPrimitiveVector4DataName__Custom_8 = 3,
	ESharkCustomPrimitiveVector4DataName__Custom_12 = 4,
	ESharkCustomPrimitiveVector4DataName__Custom_16 = 5,
	ESharkCustomPrimitiveVector4DataName__Custom_20 = 6,
	ESharkCustomPrimitiveVector4DataName__Custom_24 = 7,
	ESharkCustomPrimitiveVector4DataName__Custom_28 = 8,
	ESharkCustomPrimitiveVector4DataName__Count = 9,
	ESharkCustomPrimitiveVector4DataName__ESharkCustomPrimitiveVector4DataName_MAX = 10,

};

// Enum Shark.ESharkFourWayDirection
enum class Shark_ESharkFourWayDirection : uint8_t
{
	ESharkFourWayDirection__Forward = 0,
	ESharkFourWayDirection__Right  = 1,
	ESharkFourWayDirection__Back   = 2,
	ESharkFourWayDirection__Left   = 3,
	ESharkFourWayDirection__Count  = 4,
	ESharkFourWayDirection__ESharkFourWayDirection_MAX = 5,

};

// Enum Shark.ESharkTelemtryResponseCodes
enum class Shark_ESharkTelemtryResponseCodes : uint8_t
{
	ESharkTelemtryResponseCodes__UNKNOWN_CODE = 0,
	ESharkTelemtryResponseCodes__Success = 1,
	ESharkTelemtryResponseCodes__StandardHTTPCode = 2,
	ESharkTelemtryResponseCodes__InvalidMessage = 3,
	ESharkTelemtryResponseCodes__IllegalTitleInput = 4,
	ESharkTelemtryResponseCodes__IllegalDataInput = 5,
	ESharkTelemtryResponseCodes__IllegalMessage = 6,
	ESharkTelemtryResponseCodes__ServerException = 7,
	ESharkTelemtryResponseCodes__InvalidURL = 8,
	ESharkTelemtryResponseCodes__InvalidVerbOrContentType = 9,
	ESharkTelemtryResponseCodes__ESharkTelemtryResponseCodes_MAX = 10,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Shark.SharkRoundRobinClassSettings
// 0x0030
struct FSharkRoundRobinClassSettings
{
	unsigned char                                      Class[0x28];                                               // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	TEnumAsByte<Engine_ETickingGroup>                  TickingGroup;                                              // 0x0028(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8UEV[0x3];                                     // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           FramesBetweenUpdates;                                      // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.SharkTelemetrySettings
// 0x0050
struct FSharkTelemetrySettings
{
	struct FString                                     DomainURL;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SecretKey;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ApplicationName;                                           // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ApplicationID;                                             // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DefaultRequestRetryCount;                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChunkDispatchMaxBodySizeBytes;                             // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChunkDispatchAmountThreshold;                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ChunkDispatchTimeSecondsThreshold;                         // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.SharkTelemtryEventData
// 0x0028
struct FSharkTelemtryEventData
{
	unsigned char                                      UnknownData_R5KE[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStruct*                                     StaticPropertyStruct;                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4KMJ[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Shark.SharkAccountActionResult
// 0x0030
struct FSharkAccountActionResult
{
	bool                                               Success;                                                   // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M7WQ[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     InternalErrorMessage;                                      // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InternalThirdPartyErrorMessage;                            // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ErrorCode;                                                 // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ThirdPartyErrorCode;                                       // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.SharkLoginResult
// 0x0068 (0x0098 - 0x0030)
struct FSharkLoginResult : public FSharkAccountActionResult
{
	struct FString                                     UserName;                                                  // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OpenId;                                                    // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Token;                                                     // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PfKey;                                                     // 0x0060(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Pf;                                                        // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SharkmobToken;                                             // 0x0080(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Shark_EShAccountChannel                            AuthenticationChannelId;                                   // 0x0090(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X2E2[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Shark.SharkAccountRegistrationData
// 0x0050
struct FSharkAccountRegistrationData
{
	struct FString                                     Email;                                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Password;                                                  // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RegionId;                                                  // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XMOK[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UserName;                                                  // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VerificationCode;                                          // 0x0038(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RecieveEmail;                                              // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NIA6[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Shark.ShMidasPremiumCurrencyPack
// 0x0058
struct FShMidasPremiumCurrencyPack
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N9GX[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Currency;                                                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ImagePath;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            Bonus;                                                     // 0x0038(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BHA9[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             Price;                                                     // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CurrencyType;                                              // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.SharkUserId
// 0x0010
struct FSharkUserId
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Shark.SharkRandomDeviation
// 0x0008
struct FSharkRandomDeviation
{
	float                                              Min;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Max;                                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.SharkInt8Vector
// 0x0003
struct FSharkInt8Vector
{
	int8_t                                             X;                                                         // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             Y;                                                         // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             Z;                                                         // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.SharkRandomDeviationInt
// 0x0008
struct FSharkRandomDeviationInt
{
	int                                                Min;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Max;                                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.SharkTelemetryEventBase
// 0x0008
struct FSharkTelemetryEventBase
{
	unsigned char                                      UnknownData_18FA[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Shark.SharkTelemetryDateTime
// 0x0001
struct FSharkTelemetryDateTime
{
	unsigned char                                      UnknownData_LTNB[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Shark.ShMapInfo
// 0x0010
struct FShMapInfo
{
	struct FString                                     sacc_token;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.ShChannelInfo
// 0x0010
struct FShChannelInfo
{
	struct FShMapInfo                                  map_info;                                                  // 0x0000(0x0010) (NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.SharkGameInstanceId
// 0x0010
struct FSharkGameInstanceId
{
	unsigned char                                      UnknownData_R8EQ[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Shark.SharkServerMetricsConfig
// 0x0028
struct FSharkServerMetricsConfig
{
	float                                              UploadIntervalSeconds;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_564I[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     UploadURI;                                                 // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Database;                                                  // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.SharkTelemetryHTTPSRequestHeader
// 0x0080
struct FSharkTelemetryHTTPSRequestHeader
{
	struct FString                                     app_id;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     app_name;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Timestamp;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     seq_id;                                                    // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     retry_times;                                               // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     key_x;                                                     // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     key_y;                                                     // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     key_z;                                                     // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.SharkTelemetryHTTPSResponseDataChunk
// 0x0018
struct FSharkTelemetryHTTPSResponseDataChunk
{
	int                                                code;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RVCH[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Msg;                                                       // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.SharkTelemetryHTTPSResponse
// 0x0098
struct FSharkTelemetryHTTPSResponse
{
	struct FSharkTelemetryHTTPSRequestHeader           Title;                                                     // 0x0000(0x0080) (NativeAccessSpecifierPublic)
	struct FSharkTelemetryHTTPSResponseDataChunk       Data;                                                      // 0x0080(0x0018) (NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.SharkTelemetryHTTPSRequestDataChunk
// 0x0020
struct FSharkTelemetryHTTPSRequestDataChunk
{
	struct FString                                     log_name;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     log_fields;                                                // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.SharkTelemetryHTTPSRequest
// 0x0090
struct FSharkTelemetryHTTPSRequest
{
	struct FSharkTelemetryHTTPSRequestHeader           Title;                                                     // 0x0000(0x0080) (NativeAccessSpecifierPublic)
	TArray<struct FSharkTelemetryHTTPSRequestDataChunk> Data;                                                      // 0x0080(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Shark.SharkTokenBucket
// 0x000C
struct FSharkTokenBucket
{
	unsigned char                                      UnknownData_RBFQ[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Capacity;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              TokenFillRatePerSecond;                                    // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
