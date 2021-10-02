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

// Class TSS.TSSSdkTicker
// 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
class UTSSSdkTicker : public UObject
{
public:
	unsigned char                                      UnknownData_WEDS[0x18];                                    // 0x0028(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TSS.TSSSdkTicker");
		return ptr;
	}



};

// Class TSS.TSSClientComponent
// 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
class UTSSClientComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_B796[0x58];                                    // 0x00B0(0x0058) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TSS.TSSClientComponent");
		return ptr;
	}



	void Server_RetrieveClientDataFromSDK(const struct FTSSClientDataReport& InClientData);
	void Client_ReceiveServerData(const struct FTSSClientDataReport& InServerData);
	void Client_OnDisconnectClient(TSS_ETSSDeleteUserResult InResultFromServer);
	void Client_OnConnectClient(TSS_ETSSAddUserResult InResultFromServer, const struct FTSSAccountInfo& InConfirmedLoginInfo);
};

// Class TSS.TssSDKSettings
// 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
class UTssSDKSettings : public UDeveloperSettings
{
public:
	uint32_t                                           GameID;                                                    // 0x0038(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PTA3[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     AuthToken;                                                 // 0x0040(0x0010) (Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TSS.TssSDKSettings");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
