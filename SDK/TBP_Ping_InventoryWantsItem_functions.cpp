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
//		Name   -> Function TBP_Ping_InventoryWantsItem.TBP_Ping_InventoryWantsItem_C.GetNotificationVoiceAudioEvent
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		struct FTigerPingContext                           InContext                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
//		class UAkAudioEvent*                               OutAudioEvent                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_Ping_InventoryWantsItem_C::GetNotificationVoiceAudioEvent(const struct FTigerPingContext& InContext, class UAkAudioEvent** OutAudioEvent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Ping_InventoryWantsItem.TBP_Ping_InventoryWantsItem_C.GetNotificationVoiceAudioEvent");

	UTBP_Ping_InventoryWantsItem_C_GetNotificationVoiceAudioEvent_Params params;
	params.InContext = InContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutAudioEvent != nullptr)
		*OutAudioEvent = params.OutAudioEvent;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Ping_InventoryWantsItem.TBP_Ping_InventoryWantsItem_C.GetInventoryTooltipText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UTigerItemAsset*                             InModAsset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       OutText                                                    (Parm, OutParm)
void UTBP_Ping_InventoryWantsItem_C::GetInventoryTooltipText(class UTigerItemAsset* InModAsset, struct FText* OutText)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Ping_InventoryWantsItem.TBP_Ping_InventoryWantsItem_C.GetInventoryTooltipText");

	UTBP_Ping_InventoryWantsItem_C_GetInventoryTooltipText_Params params;
	params.InModAsset = InModAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutText != nullptr)
		*OutText = params.OutText;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
