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
//		Name   -> Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddHealthStatusToWheel
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           inTigerPlayerState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FTigerPingWorldNetData>              OutPingWheelItems                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_PingControllerComponent_C::AddHealthStatusToWheel(class ATigerPlayerState* inTigerPlayerState, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddHealthStatusToWheel");

	UTBP_PingControllerComponent_C_AddHealthStatusToWheel_Params params;
	params.inTigerPlayerState = inTigerPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPingWheelItems != nullptr)
		*OutPingWheelItems = params.OutPingWheelItems;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddMasqueradeStatusToWheel
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerPlayerMasqueradeComponent*             InMasqueradeComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FTigerPingWorldNetData>              OutPingWheelItems                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_PingControllerComponent_C::AddMasqueradeStatusToWheel(class UTigerPlayerMasqueradeComponent* InMasqueradeComponent, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddMasqueradeStatusToWheel");

	UTBP_PingControllerComponent_C_AddMasqueradeStatusToWheel_Params params;
	params.InMasqueradeComponent = InMasqueradeComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPingWheelItems != nullptr)
		*OutPingWheelItems = params.OutPingWheelItems;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddAmmoRequestToWheel
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FTigerPingWorldNetData>              OutPingWheelItems                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_PingControllerComponent_C::AddAmmoRequestToWheel(TArray<struct FTigerPingWorldNetData>* OutPingWheelItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddAmmoRequestToWheel");

	UTBP_PingControllerComponent_C_AddAmmoRequestToWheel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPingWheelItems != nullptr)
		*OutPingWheelItems = params.OutPingWheelItems;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddPointsOfInterest
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<struct FTigerPingWorldNetData>              OutWheelItemPings                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_PingControllerComponent_C::AddPointsOfInterest(TArray<struct FTigerPingWorldNetData>* OutWheelItemPings)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddPointsOfInterest");

	UTBP_PingControllerComponent_C_AddPointsOfInterest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutWheelItemPings != nullptr)
		*OutWheelItemPings = params.OutWheelItemPings;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetDefaultLocation
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FHitResult>                          InHitResults                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		TArray<struct FTigerPingWorldNetData>              OutPingWheelItems                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FVector                                     OutLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bOutFoundLocation                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_PingControllerComponent_C::GetDefaultLocation(class ATigerPlayerState* InPlayerState, TArray<struct FHitResult>* InHitResults, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems, struct FVector* OutLocation, bool* bOutFoundLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetDefaultLocation");

	UTBP_PingControllerComponent_C_GetDefaultLocation_Params params;
	params.InPlayerState = InPlayerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InHitResults != nullptr)
		*InHitResults = params.InHitResults;
	if (OutPingWheelItems != nullptr)
		*OutPingWheelItems = params.OutPingWheelItems;
	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;
	if (bOutFoundLocation != nullptr)
		*bOutFoundLocation = params.bOutFoundLocation;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetAddPingTypes
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UClass*>                              InPingTypes                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		struct FVector                                     InLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FTigerPingWorldNetData>              InOutResults                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_PingControllerComponent_C::GetAddPingTypes(TArray<class UClass*>* InPingTypes, const struct FVector& InLocation, TArray<struct FTigerPingWorldNetData>* InOutResults)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetAddPingTypes");

	UTBP_PingControllerComponent_C_GetAddPingTypes_Params params;
	params.InLocation = InLocation;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InPingTypes != nullptr)
		*InPingTypes = params.InPingTypes;
	if (InOutResults != nullptr)
		*InOutResults = params.InOutResults;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetPingWheelItems
//		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerState*                           InPlayerState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<struct FHitResult>                          InHitResults                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		TArray<struct FTigerPingWorldNetData>              OutPingWheelItems                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_PingControllerComponent_C::GetPingWheelItems(class ATigerPlayerState* InPlayerState, TArray<struct FHitResult> InHitResults, TArray<struct FTigerPingWorldNetData>* OutPingWheelItems)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetPingWheelItems");

	UTBP_PingControllerComponent_C_GetPingWheelItems_Params params;
	params.InPlayerState = InPlayerState;
	params.InHitResults = InHitResults;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutPingWheelItems != nullptr)
		*OutPingWheelItems = params.OutPingWheelItems;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
