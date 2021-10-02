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

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// 0x00D0 (FullSize[0x03E0] - InheritedSize[0x0310])
class AMagicLeapSharedWorldGameMode : public AGameMode
{
public:
	struct FMagicLeapSharedWorldSharedData             SharedWorldData;                                           // 0x0310(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnNewLocalDataFromClients;                                 // 0x0320(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              PinSelectionConfidenceThreshold;                           // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1BCS[0xA4];                                    // 0x0334(0x00A4) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class AMagicLeapSharedWorldPlayerController*       ChosenOne;                                                 // 0x03D8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode");
		return ptr;
	}



	bool SendSharedWorldDataToClients();
	void SelectChosenOne();
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature();
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData* NewSharedWorldData);
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// 0x0040 (FullSize[0x02D8] - InheritedSize[0x0298])
class AMagicLeapSharedWorldGameState : public AGameState
{
public:
	struct FMagicLeapSharedWorldSharedData             SharedWorldData;                                           // 0x0298(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FMagicLeapSharedWorldAlignmentTransforms    AlignmentTransforms;                                       // 0x02A8(0x0010) (BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnSharedWorldDataUpdated;                                  // 0x02B8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnAlignmentTransformsUpdated;                              // 0x02C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState");
		return ptr;
	}



	void OnReplicate_SharedWorldData();
	void OnReplicate_AlignmentTransforms();
	void MagicLeapSharedWorldEvent__DelegateSignature();
	struct FTransform CalculateXRCameraRootTransform();
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// 0x0018 (FullSize[0x0590] - InheritedSize[0x0578])
class AMagicLeapSharedWorldPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData_0CHC[0x18];                                    // 0x0578(0x0018) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController");
		return ptr;
	}



	void ServerSetLocalWorldData(const struct FMagicLeapSharedWorldLocalData& LocalWorldReplicationData);
	void ServerSetAlignmentTransforms(const struct FMagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms);
	bool IsChosenOne();
	void ClientSetChosenOne(bool bChosenOne);
	void ClientMarkReadyForSendingLocalData();
	bool CanSendLocalDataToServer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
