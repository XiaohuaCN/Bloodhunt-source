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

// BlueprintGeneratedClass TBP_Ping_InventoryHasItem.TBP_Ping_InventoryHasItem_C
// 0x0000 (FullSize[0x0121] - InheritedSize[0x0121])
class UTBP_Ping_InventoryHasItem_C : public UTBP_Ping_ItemAssetBase_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Ping_InventoryHasItem.TBP_Ping_InventoryHasItem_C");
		return ptr;
	}



	void GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent);
	void GetInventoryTooltipText(class UTigerItemAsset* InItemAsset, struct FText* OutText);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
