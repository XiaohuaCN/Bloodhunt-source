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

// Class OnlineSubsystemTiger.TigerOnlineSubsystemSettings
// 0x0078 (FullSize[0x00B0] - InheritedSize[0x0038])
class UTigerOnlineSubsystemSettings : public UDeveloperSettings
{
public:
	struct FString                                     OnlineServicesEnv;                                         // 0x0038(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OnlineServicesBaseUrlDev;                                  // 0x0048(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OnlineServicesBaseUrlUat;                                  // 0x0058(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OnlineServicesBaseUrlProd;                                 // 0x0068(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OnlineServicesBaseUrlLocal;                                // 0x0078(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionServiceUri;                                         // 0x0088(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxRequestRetries;                                         // 0x0098(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MatchmakingTimeoutSeconds;                                 // 0x009C(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DsVersion;                                                 // 0x00A0(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemTiger.TigerOnlineSubsystemSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
