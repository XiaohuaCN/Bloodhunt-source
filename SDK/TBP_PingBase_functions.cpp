// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PingBase.TBP_PingBase_C.GetNotificationVoiceAudioEvent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		struct FTigerPingContext                           InContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		class UAkAudioEvent*                               OutAudioEvent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_PingBase_C::GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PingBase.TBP_PingBase_C.GetNotificationVoiceAudioEvent");

	UTBP_PingBase_C_GetNotificationVoiceAudioEvent_Params params;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAudioEvent != nullptr)
		*OutAudioEvent = params.OutAudioEvent;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PingBase.TBP_PingBase_C.GetCancelPingText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPingContext                           InPingContext                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		struct FText                                       Return_Value_Ping_Cancel_Text                              (Parm, OutParm)
//		struct FTigerPingIconData                          Return_Value_Ping_Icon                                     (Parm, OutParm, NoDestructor)
void UTBP_PingBase_C::GetCancelPingText(const struct FTigerPingContext& InPingContext, struct FText* Return_Value_Ping_Cancel_Text, struct FTigerPingIconData* Return_Value_Ping_Icon)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PingBase.TBP_PingBase_C.GetCancelPingText");

	UTBP_PingBase_C_GetCancelPingText_Params params;
	params.InPingContext = InPingContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Return_Value_Ping_Cancel_Text != nullptr)
		*Return_Value_Ping_Cancel_Text = params.Return_Value_Ping_Cancel_Text;
	if (Return_Value_Ping_Icon != nullptr)
		*Return_Value_Ping_Icon = params.Return_Value_Ping_Icon;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PingBase.TBP_PingBase_C.GetStandardResponseText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               bInIsInterested                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       InPingName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
//		struct FText                                       Result                                                     (Parm, OutParm)
void UTBP_PingBase_C::GetStandardResponseText(bool bInIsInterested, const struct FText& InPingName, struct FText* Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PingBase.TBP_PingBase_C.GetStandardResponseText");

	UTBP_PingBase_C_GetStandardResponseText_Params params;
	params.bInIsInterested = bInIsInterested;
	params.InPingName = InPingName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PingBase.TBP_PingBase_C.GetResponseText
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPingContext                           InContext                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		bool                                               bInIsInterested                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTigerPingNotificationUIData                ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FTigerPingNotificationUIData UTBP_PingBase_C::GetResponseText(const struct FTigerPingContext& InContext, bool bInIsInterested)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PingBase.TBP_PingBase_C.GetResponseText");

	UTBP_PingBase_C_GetResponseText_Params params;
	params.InContext = InContext;
	params.bInIsInterested = bInIsInterested;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PingBase.TBP_PingBase_C.GetNotificationUIData
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPingContext                           InContext                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FTigerPingNotificationUIData                ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FTigerPingNotificationUIData UTBP_PingBase_C::GetNotificationUIData(const struct FTigerPingContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PingBase.TBP_PingBase_C.GetNotificationUIData");

	UTBP_PingBase_C_GetNotificationUIData_Params params;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
