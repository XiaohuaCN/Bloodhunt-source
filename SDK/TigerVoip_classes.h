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

// Class TigerVoip.TigerVoipTencentBackendSettings
// 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
class UTigerVoipTencentBackendSettings : public UDeveloperSettings
{
public:
	struct FString                                     GMEAppId;                                                  // 0x0038(0x0010) (Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GMEAppKey;                                                 // 0x0048(0x0010) (Edit, ZeroConstructor, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TigerVoip.TigerVoipTencentBackendSettings");
		return ptr;
	}



};

// Class TigerVoip.TigerVoipTalkerState
// 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
class UTigerVoipTalkerState : public UObject
{
public:
	unsigned char                                      UnknownData_DSIM[0x28];                                    // 0x0028(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTalkingState>                       PlayerTalkingStates;                                       // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TigerVoip.TigerVoipTalkerState");
		return ptr;
	}



	bool IsPlayerTalking(const struct FTigerPersistentPlayerID& InPlayerId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
