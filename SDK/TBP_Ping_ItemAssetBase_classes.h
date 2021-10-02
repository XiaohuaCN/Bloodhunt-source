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

// BlueprintGeneratedClass TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C
// 0x0000 (FullSize[0x0121] - InheritedSize[0x0121])
class UTBP_Ping_ItemAssetBase_C : public UTBP_PingBase_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C");
		return ptr;
	}



	struct FTigerPingNotificationUIData GetNotificationUIData(const struct FTigerPingContext& InContext);
	void GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent);
	struct FTigerPingNotificationUIData GetResponseText(const struct FTigerPingContext& InContext, bool bInIsInterested);
	struct FTigerPingIconData GetIconData(const struct FTigerPingContext& InContext);
	struct FText GetTooltipName(const struct FTigerPingContext& InContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
