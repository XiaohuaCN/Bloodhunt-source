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
//		Name   -> Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetNotificationUIData
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPingContext                           InContext                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FTigerPingNotificationUIData                ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FTigerPingNotificationUIData UTBP_Ping_ItemAssetBase_C::GetNotificationUIData(const struct FTigerPingContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetNotificationUIData");

	UTBP_Ping_ItemAssetBase_C_GetNotificationUIData_Params params;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetNotificationVoiceAudioEvent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		struct FTigerPingContext                           InContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		class UAkAudioEvent*                               OutAudioEvent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Ping_ItemAssetBase_C::GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetNotificationVoiceAudioEvent");

	UTBP_Ping_ItemAssetBase_C_GetNotificationVoiceAudioEvent_Params params;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAudioEvent != nullptr)
		*OutAudioEvent = params.OutAudioEvent;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetResponseText
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPingContext                           InContext                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		bool                                               bInIsInterested                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FTigerPingNotificationUIData                ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FTigerPingNotificationUIData UTBP_Ping_ItemAssetBase_C::GetResponseText(const struct FTigerPingContext& InContext, bool bInIsInterested)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetResponseText");

	UTBP_Ping_ItemAssetBase_C_GetResponseText_Params params;
	params.InContext = InContext;
	params.bInIsInterested = bInIsInterested;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetIconData
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerPingContext                           InContext                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FTigerPingIconData                          ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor)
struct FTigerPingIconData UTBP_Ping_ItemAssetBase_C::GetIconData(const struct FTigerPingContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetIconData");

	UTBP_Ping_ItemAssetBase_C_GetIconData_Params params;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetTooltipName
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FTigerPingContext                           InContext                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FText                                       ReturnValue                                                (Parm, OutParm, ReturnParm)
struct FText UTBP_Ping_ItemAssetBase_C::GetTooltipName(const struct FTigerPingContext& InContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Ping_ItemAssetBase.TBP_Ping_ItemAssetBase_C.GetTooltipName");

	UTBP_Ping_ItemAssetBase_C_GetTooltipName_Params params;
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
