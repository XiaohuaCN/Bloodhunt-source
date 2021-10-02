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

// Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddHealthStatusToWheel
struct UTBP_PingControllerComponent_C_AddHealthStatusToWheel_Params
{
	class ATigerPlayerState*                           inTigerPlayerState;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTigerPingWorldNetData>              OutPingWheelItems;                                         // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddMasqueradeStatusToWheel
struct UTBP_PingControllerComponent_C_AddMasqueradeStatusToWheel_Params
{
	class UTigerPlayerMasqueradeComponent*             InMasqueradeComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTigerPingWorldNetData>              OutPingWheelItems;                                         // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddAmmoRequestToWheel
struct UTBP_PingControllerComponent_C_AddAmmoRequestToWheel_Params
{
	TArray<struct FTigerPingWorldNetData>              OutPingWheelItems;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.AddPointsOfInterest
struct UTBP_PingControllerComponent_C_AddPointsOfInterest_Params
{
	TArray<struct FTigerPingWorldNetData>              OutWheelItemPings;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetDefaultLocation
struct UTBP_PingControllerComponent_C_GetDefaultLocation_Params
{
	class ATigerPlayerState*                           InPlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                          InHitResults;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FTigerPingWorldNetData>              OutPingWheelItems;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     OutLocation;                                               // 0x0028(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bOutFoundLocation;                                         // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetAddPingTypes
struct UTBP_PingControllerComponent_C_GetAddPingTypes_Params
{
	TArray<class UClass*>                              InPingTypes;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                                     InLocation;                                                // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTigerPingWorldNetData>              InOutResults;                                              // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_PingControllerComponent.TBP_PingControllerComponent_C.GetPingWheelItems
struct UTBP_PingControllerComponent_C_GetPingWheelItems_Params
{
	class ATigerPlayerState*                           InPlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FHitResult>                          InHitResults;                                              // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<struct FTigerPingWorldNetData>              OutPingWheelItems;                                         // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
