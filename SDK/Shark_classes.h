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

// Class Shark.SharkLocalDeveloperSettings
// 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
class USharkLocalDeveloperSettings : public UDeveloperSettings
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.SharkLocalDeveloperSettings");
		return ptr;
	}



};

// Class Shark.SharkA2SProtocolHandler
// 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
class USharkA2SProtocolHandler : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_UWAF[0x98];                                    // 0x0030(0x0098) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.SharkA2SProtocolHandler");
		return ptr;
	}



};

// Class Shark.SharkAccounts
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class USharkAccounts : public UObject
{
public:
	unsigned char                                      UnknownData_ACJ3[0x68];                                    // 0x0028(0x0068) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UShAccountSettings*                          Settings;                                                  // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.SharkAccounts");
		return ptr;
	}



	void SharkUsernameRegisteredQueryCallback__DelegateSignature(bool bInSuccess, bool bIsAvailable, bool bIsProfanity, const struct FString& InUsername);
	void SharkLoginCallback__DelegateSignature(const struct FSharkLoginResult& InResult);
	void SharkEmailRegisteredQueryCallback__DelegateSignature(bool bInSuccess, bool bInRegistered, const struct FString& InEmail);
	void SharkAccountActionCallback__DelegateSignature(const struct FSharkAccountActionResult& InResult);
	void SendRegistrationVerificationCode(const struct FString& InEmail, const struct FScriptDelegate& InCallback);
	void RegisterAndLogin(const struct FSharkAccountRegistrationData& InRegistrationData, const struct FScriptDelegate& InCallback);
	void QueryUsernameRegisterStatus(const struct FString& InUsername, const struct FScriptDelegate& InCallback);
	void QueryEmailRegisterStatus(const struct FString& InEmail, const struct FScriptDelegate& InCallback);
	void PlatformLogin(const struct FScriptDelegate& InCallback);
	void Login(const struct FString& InEmail, const struct FString& InPassword, const struct FScriptDelegate& InCallback);
};

// Class Shark.ShAccountSettings
// 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
class UShAccountSettings : public UDeveloperSettings
{
public:
	Shark_EShAccountChannel                            AccountChannel;                                            // 0x0038(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Shark_EShAccountChannel                            PlatformChannel;                                           // 0x0039(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               LogEnabled;                                                // 0x003A(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_62IE[0x5];                                     // 0x003B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SandboxUrl;                                                // 0x0040(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProductionUrl;                                             // 0x0050(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.ShAccountSettings");
		return ptr;
	}



};

// Class Shark.SharkBlueprintFunctionLibrary
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class USharkBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.SharkBlueprintFunctionLibrary");
		return ptr;
	}



	void STATIC_SetCustomPrimitiveDataVector4(class UPrimitiveComponent* PrimitiveComponent, Shark_ESharkCustomPrimitiveVector4DataName CustomDataName, const struct FVector4& Value, bool bDoRuntimeUpdate);
	void STATIC_SetCustomPrimitiveDataVector3(class UPrimitiveComponent* PrimitiveComponent, Shark_ESharkCustomPrimitiveVector3DataName CustomDataName, const struct FVector& Value, bool bDoRuntimeUpdate);
	void STATIC_SetCustomPrimitiveDataVector2(class UPrimitiveComponent* PrimitiveComponent, Shark_ESharkCustomPrimitiveVector2DataName CustomDataName, const struct FVector2D& Value, bool bDoRuntimeUpdate);
	void STATIC_SetCustomPrimitiveDataFloat(class UPrimitiveComponent* PrimitiveComponent, Shark_ESharkCustomPrimitiveFloatDataName CustomDataName, float Value, bool bDoRuntimeUpdate);
	void STATIC_SetCastDynamicShadows(class UPrimitiveComponent* InPrimitiveComponent, bool InValue);
	void OnAssetsLoaded__DelegateSignature(TArray<class UObject*> InLoadedObjects);
	void STATIC_LoadMultipleObjectsAsync(const struct FScriptDelegate& OnLoaded);
};

// Class Shark.ShMidasAdapter
// 0x0070 (FullSize[0x0098] - InheritedSize[0x0028])
class UShMidasAdapter : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnMidasPremiumCurrencyPacksChanged;                        // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GF4T[0x58];                                    // 0x0038(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UShMidasPaymentSettings*                     Settings;                                                  // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.ShMidasAdapter");
		return ptr;
	}



	void Logout();
	bool IsInitialized();
	TArray<struct FShMidasPremiumCurrencyPack> GetPremiumCurrecyPacks();
	bool Buy(const struct FString& InItemId, const struct FString& InCurrencyType, int InNumItems, const struct FScriptDelegate& InDelegate);
};

// Class Shark.ShMidasPaymentSettings
// 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
class UShMidasPaymentSettings : public UDeveloperSettings
{
public:
	struct FString                                     IdcInfo;                                                   // 0x0038(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OfferId;                                                   // 0x0048(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ZoneId;                                                    // 0x0058(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GoodsZoneId;                                               // 0x0068(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PaymentChannel;                                            // 0x0078(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ProvideType;                                               // 0x0088(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               MidasLogEnabled;                                           // 0x0098(0x0001) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_COSK[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.ShMidasPaymentSettings");
		return ptr;
	}



};

// Class Shark.ShOnlineServerSettings
// 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
class UShOnlineServerSettings : public UDeveloperSettings
{
public:
	struct FString                                     ServerSecretDev;                                           // 0x0038(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ServerSecretUat;                                           // 0x0048(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ServerSecretProd;                                          // 0x0058(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FString                                     ServerSecretLocal;                                         // 0x0068(0x0010) (ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.ShOnlineServerSettings");
		return ptr;
	}



};

// Class Shark.SharkOnlineSettings
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class USharkOnlineSettings : public UDeveloperSettings
{
public:
	struct FString                                     OnlineServicesEnv;                                         // 0x0038(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                              MaximumRetryDelaySeconds;                                  // 0x0048(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_BRQE[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AccountRecoverUriProd;                                     // 0x0050(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     AccountRecoverUriUat;                                      // 0x0060(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FString                                     AccountRecoverUriDev;                                      // 0x0070(0x0010) (ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                MinimumAccountCreationAge;                                 // 0x0080(0x0004) (ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_UPLC[0x4];                                     // 0x0084(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.SharkOnlineSettings");
		return ptr;
	}



};

// Class Shark.SharkRenderingSettings
// 0x01C0 (FullSize[0x01F8] - InheritedSize[0x0038])
class USharkRenderingSettings : public UDeveloperSettings
{
public:
	int                                                CustomPrimitiveFloatDataNameMapping[0x3A];                 // 0x0038(0x00E8) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CustomPrimitiveVector2DataNameMapping[0x13];               // 0x0120(0x004C) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CustomPrimitiveVector3DataNameMapping[0x19];               // 0x016C(0x0064) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CustomPrimitiveVector4DataNameMapping[0x9];                // 0x01D0(0x0024) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T3MY[0x4];                                     // 0x01F4(0x0004) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.SharkRenderingSettings");
		return ptr;
	}



};

// Class Shark.SharkRoundRobinSettings
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class USharkRoundRobinSettings : public UDeveloperSettings
{
public:
	bool                                               bEnabled;                                                  // 0x0038(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LJCR[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSharkRoundRobinClassSettings>       GroupSettings;                                             // 0x0040(0x0010) (Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.SharkRoundRobinSettings");
		return ptr;
	}



};

// Class Shark.SharkRoundRobinSubsystem
// 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
class USharkRoundRobinSubsystem : public UWorldSubsystem
{
public:
	unsigned char                                      UnknownData_T9UE[0x90];                                    // 0x0030(0x0090) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.SharkRoundRobinSubsystem");
		return ptr;
	}



};

// Class Shark.SharkServerMetrics
// 0x00A8 (FullSize[0x00D8] - InheritedSize[0x0030])
class USharkServerMetrics : public UGameInstanceSubsystem
{
public:
	unsigned char                                      UnknownData_9349[0xA8];                                    // 0x0030(0x00A8) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.SharkServerMetrics");
		return ptr;
	}



};

// Class Shark.SharkTelemetry
// 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
class USharkTelemetry : public UObject
{
public:
	struct FSharkTelemetrySettings                     TelemetryApplicationSettings;                              // 0x0028(0x0050) (Config, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_C250[0x18];                                    // 0x0078(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FSharkTelemtryEventData>             BufferedEvents;                                            // 0x0090(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_NJZR[0x50];                                    // 0x00A0(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGameInstance*                               GameInstance;                                              // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PYIJ[0x8];                                     // 0x00F8(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.SharkTelemetry");
		return ptr;
	}



};

// Class Shark.ShUserSecrets
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UShUserSecrets : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Shark.ShUserSecrets");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
