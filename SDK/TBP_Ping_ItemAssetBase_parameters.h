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

// Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetNotificationUIData
struct UTBP_Ping_ItemAssetBase_C_GetNotificationUIData_Params
{
	struct FTigerPingContext                           InContext;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FTigerPingNotificationUIData                ReturnValue;                                               // 0x0010(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetNotificationVoiceAudioEvent
struct UTBP_Ping_ItemAssetBase_C_GetNotificationVoiceAudioEvent_Params
{
	struct FTigerPingContext                           InContext;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UAkAudioEvent*                               OutAudioEvent;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetResponseText
struct UTBP_Ping_ItemAssetBase_C_GetResponseText_Params
{
	struct FTigerPingContext                           InContext;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bInIsInterested;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTigerPingNotificationUIData                ReturnValue;                                               // 0x0018(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetIconData
struct UTBP_Ping_ItemAssetBase_C_GetIconData_Params
{
	struct FTigerPingContext                           InContext;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FTigerPingIconData                          ReturnValue;                                               // 0x0010(0x0010)  (Parm, OutParm, ReturnParm, NoDestructor)
};

// Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetTooltipName
struct UTBP_Ping_ItemAssetBase_C_GetTooltipName_Params
{
	struct FTigerPingContext                           InContext;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FText                                       ReturnValue;                                               // 0x0010(0x0018)  (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
