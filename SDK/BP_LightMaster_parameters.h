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

// Function BP_LightMaster.BP_LightMaster_C.SetMaterialAndPrimitiveData
struct ABP_LightMaster_C_SetMaterialAndPrimitiveData_Params
{
	struct FVector4                                    InColor;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                         InMesh;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InIndex;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LightMaster.BP_LightMaster_C.SetCDO
struct ABP_LightMaster_C_SetCDO_Params
{
};

// Function BP_LightMaster.BP_LightMaster_C.LineTraceLogic
struct ABP_LightMaster_C_LineTraceLogic_Params
{
};

// Function BP_LightMaster.BP_LightMaster_C.SetRainParticles
struct ABP_LightMaster_C_SetRainParticles_Params
{
	bool                                               RainOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function BP_LightMaster.BP_LightMaster_C.LightColorSelection
struct ABP_LightMaster_C_LightColorSelection_Params
{
	class ULightComponent*                             Light;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                NewLightColor;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                                    NewEmissiveColor;                                          // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                LightColorInt;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_LightMaster.BP_LightMaster_C.UserConstructionScript
struct ABP_LightMaster_C_UserConstructionScript_Params
{
};

// Function BP_LightMaster.BP_LightMaster_C.UpdateWeatherComponents
struct ABP_LightMaster_C_UpdateWeatherComponents_Params
{
};

// Function BP_LightMaster.BP_LightMaster_C.ReceiveBeginPlay
struct ABP_LightMaster_C_ReceiveBeginPlay_Params
{
};

// Function BP_LightMaster.BP_LightMaster_C.OnRebuild
struct ABP_LightMaster_C_OnRebuild_Params
{
};

// Function BP_LightMaster.BP_LightMaster_C.ExecuteUbergraph_BP_LightMaster
struct ABP_LightMaster_C_ExecuteUbergraph_BP_LightMaster_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
