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

// BlueprintGeneratedClass TBP_PingBase.TBP_PingBase_C
// 0x0031 (FullSize[0x0121] - InheritedSize[0x00F0])
class UTBP_PingBase_C : public UTigerPingBase
{
public:
	struct FText                                       PingCancelText;                                            // 0x00F0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkAudioEvent*                               PingVoiceInterested;                                       // 0x0108(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               PingVoiceNotInterested;                                    // 0x0110(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                               PingVoiceCancel;                                           // 0x0118(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bShouldDisplayCancelNotification;                          // 0x0120(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_PingBase.TBP_PingBase_C");
		return ptr;
	}



	void GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent);
	void GetCancelPingText(const struct FTigerPingContext& InPingContext, struct FText* Return_Value_Ping_Cancel_Text, struct FTigerPingIconData* Return_Value_Ping_Icon);
	void GetStandardResponseText(bool bInIsInterested, const struct FText& InPingName, struct FText* Result);
	struct FTigerPingNotificationUIData GetResponseText(const struct FTigerPingContext& InContext, bool bInIsInterested);
	struct FTigerPingNotificationUIData GetNotificationUIData(const struct FTigerPingContext& InContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
