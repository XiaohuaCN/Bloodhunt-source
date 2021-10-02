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

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.GetPingInfo
struct ATBP_Vehicle_01_C_GetPingInfo_Params
{
	struct FTS_PingableActorInfo                       OutInfo;                                                   // 0x0000(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.GetPingCategory
struct ATBP_Vehicle_01_C_GetPingCategory_Params
{
	struct FName                                       OutCategory;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.IsPolice
struct ATBP_Vehicle_01_C_IsPolice_Params
{
	bool                                               IsPolice;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.AUDIO_RandomizeCarAlarms
struct ATBP_Vehicle_01_C_AUDIO_RandomizeCarAlarms_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SpawnGlassShatterEffect
struct ATBP_Vehicle_01_C_SpawnGlassShatterEffect_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.DisableAlarm
struct ATBP_Vehicle_01_C_DisableAlarm_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.Set Custom Primitive Vector
struct ATBP_Vehicle_01_C_Set_Custom_Primitive_Vector_Params
{
	TArray<class UStaticMeshComponent*>                Static_Meshes;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Runtime;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	Shark_ESharkCustomPrimitiveVector3DataName         NewParam;                                                  // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Value;                                                     // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.Set Custom Primitive Float
struct ATBP_Vehicle_01_C_Set_Custom_Primitive_Float_Params
{
	TArray<class UStaticMeshComponent*>                Static_Meshes;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                               Runtime;                                                   // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	Shark_ESharkCustomPrimitiveFloatDataName           NewParam;                                                  // 0x0011(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Value;                                                     // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.IsEntity
struct ATBP_Vehicle_01_C_IsEntity_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetFrontLightColor
struct ATBP_Vehicle_01_C_SetFrontLightColor_Params
{
	class UTigerSpotLightComponent*                    TigerSpotLight;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerSpotLightComponent*                    OutTigerSpotLight;                                         // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetCustomPrimitiveData
struct ATBP_Vehicle_01_C_SetCustomPrimitiveData_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetCollision
struct ATBP_Vehicle_01_C_SetCollision_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetBranding
struct ATBP_Vehicle_01_C_SetBranding_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetUntintedColors
struct ATBP_Vehicle_01_C_SetUntintedColors_Params
{
	TArray<class UStaticMeshComponent*>                Meshes;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetColorTintPresets
struct ATBP_Vehicle_01_C_SetColorTintPresets_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetMeshComponents
struct ATBP_Vehicle_01_C_SetMeshComponents_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetParametersPerVehicle
struct ATBP_Vehicle_01_C_SetParametersPerVehicle_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.PlaceObjects
struct ATBP_Vehicle_01_C_PlaceObjects_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.CustomizableElements
struct ATBP_Vehicle_01_C_CustomizableElements_Params
{
	TArray<class UStaticMeshComponent*>                Meshes;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.Color
struct ATBP_Vehicle_01_C_Color_Params
{
	TArray<class UStaticMeshComponent*>                Meshes;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.TurnLightsOnOrOff
struct ATBP_Vehicle_01_C_TurnLightsOnOrOff_Params
{
	bool                                               IsRuntime;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.UserConstructionScript
struct ATBP_Vehicle_01_C_UserConstructionScript_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.Timeline_0__FinishedFunc
struct ATBP_Vehicle_01_C_Timeline_0__FinishedFunc_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.Timeline_0__UpdateFunc
struct ATBP_Vehicle_01_C_Timeline_0__UpdateFunc_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.StaticMeshComponentHit
struct ATBP_Vehicle_01_C_StaticMeshComponentHit_Params
{
	struct FHitResult                                  HitResult;                                                 // 0x0000(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                     ImpactVelocity;                                            // 0x008C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.ReceiveBeginPlay
struct ATBP_Vehicle_01_C_ReceiveBeginPlay_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnBeginCharacterOverlap
struct ATBP_Vehicle_01_C_OnBeginCharacterOverlap_Params
{
	class ATigerCharacter*                             OverlappingCharacter;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                TotalOverlapCount;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnObjectActivated
struct ATBP_Vehicle_01_C_OnObjectActivated_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnObjectDeactivated
struct ATBP_Vehicle_01_C_OnObjectDeactivated_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnRebuild
struct ATBP_Vehicle_01_C_OnRebuild_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.ActivateAlarm
struct ATBP_Vehicle_01_C_ActivateAlarm_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.TriggerAlarm
struct ATBP_Vehicle_01_C_TriggerAlarm_Params
{
};

// Function TBP_Vehicle_01.TBP_Vehicle_01_C.ExecuteUbergraph_TBP_Vehicle_01
struct ATBP_Vehicle_01_C_ExecuteUbergraph_TBP_Vehicle_01_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
