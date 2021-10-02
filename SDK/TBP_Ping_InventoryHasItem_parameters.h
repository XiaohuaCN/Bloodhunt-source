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
// Parameters
//---------------------------------------------------------------------------

// Function TBP_Ping_InventoryHasItem.TBP_Ping_InventoryHasItem_C.GetNotificationVoiceAudioEvent
struct UTBP_Ping_InventoryHasItem_C_GetNotificationVoiceAudioEvent_Params
{
	struct FTigerPingContext                           InContext;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UAkAudioEvent*                               OutAudioEvent;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Ping_InventoryHasItem.TBP_Ping_InventoryHasItem_C.GetInventoryTooltipText
struct UTBP_Ping_InventoryHasItem_C_GetInventoryTooltipText_Params
{
	class UTigerItemAsset*                             InItemAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       OutText;                                                   // 0x0008(0x0018)  (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
