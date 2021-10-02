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

// BlueprintGeneratedClass TBP_PingControllerComponent.TBP_PingControllerComponent_C
// 0x0000 (FullSize[0x0210] - InheritedSize[0x0210])
class UTBP_PingControllerComponent_C : public UTigerPingControllerComponent
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_PingControllerComponent.TBP_PingControllerComponent_C");
		return ptr;
	}



	void AddHealthStatusToWheel(class ATigerPlayerState* inTigerPlayerState, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems);
	void AddMasqueradeStatusToWheel(class UTigerPlayerMasqueradeComponent* InMasqueradeComponent, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems);
	void AddAmmoRequestToWheel(TArray<struct FTigerPingWorldNetData>* OutPingWheelItems);
	void AddPointsOfInterest(TArray<struct FTigerPingWorldNetData>* OutWheelItemPings);
	void GetDefaultLocation(class ATigerPlayerState* InPlayerState, TArray<struct FHitResult>* InHitResults, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems, struct FVector* OutLocation, bool* bOutFoundLocation);
	void GetAddPingTypes(TArray<class UClass*>* InPingTypes, const struct FVector& InLocation, TArray<struct FTigerPingWorldNetData>* InOutResults);
	void GetPingWheelItems(class ATigerPlayerState* InPlayerState, TArray<struct FHitResult> InHitResults, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
