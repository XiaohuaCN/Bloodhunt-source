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

// Function TBP_PingBase.TBP_PingBase_C.GetNotificationVoiceAudioEvent
struct UTBP_PingBase_C_GetNotificationVoiceAudioEvent_Params
{
	struct FTigerPingContext                           InContext;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UAkAudioEvent*                               OutAudioEvent;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_PingBase.TBP_PingBase_C.GetCancelPingText
struct UTBP_PingBase_C_GetCancelPingText_Params
{
	struct FTigerPingContext                           InPingContext;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FText                                       Return_Value_Ping_Cancel_Text;                             // 0x0010(0x0018)  (Parm, OutParm)
	struct FTigerPingIconData                          Return_Value_Ping_Icon;                                    // 0x0028(0x0010)  (Parm, OutParm, NoDestructor)
};

// Function TBP_PingBase.TBP_PingBase_C.GetStandardResponseText
struct UTBP_PingBase_C_GetStandardResponseText_Params
{
	bool                                               bInIsInterested;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FText                                       InPingName;                                                // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Result;                                                    // 0x0020(0x0018)  (Parm, OutParm)
};

// Function TBP_PingBase.TBP_PingBase_C.GetResponseText
struct UTBP_PingBase_C_GetResponseText_Params
{
	struct FTigerPingContext                           InContext;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                               bInIsInterested;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTigerPingNotificationUIData                ReturnValue;                                               // 0x0018(0x0028)  (Parm, OutParm, ReturnParm)
};

// Function TBP_PingBase.TBP_PingBase_C.GetNotificationUIData
struct UTBP_PingBase_C_GetNotificationUIData_Params
{
	struct FTigerPingContext                           InContext;                                                 // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	struct FTigerPingNotificationUIData                ReturnValue;                                               // 0x0010(0x0028)  (Parm, OutParm, ReturnParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
