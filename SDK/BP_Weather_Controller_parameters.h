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

// Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateAllActors
struct ABP_Weather_Controller_C_UpdateAllActors_Params
{
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherScenarioParameters
struct ABP_Weather_Controller_C_SetWeatherScenarioParameters_Params
{
	class UDA_WeatherScenario_C*                       WeatherScenario;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherScenario
struct ABP_Weather_Controller_C_SetWeatherScenario_Params
{
	class UTigerWeatherScenarioData*                   WeatherScenario;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.SetServerWeather
struct ABP_Weather_Controller_C_SetServerWeather_Params
{
	int                                                WeatherOverride;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.MoveNiagaraCamera
struct ABP_Weather_Controller_C_MoveNiagaraCamera_Params
{
	struct FVector                                     CameraPos;                                                 // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraWeatherParameters
struct ABP_Weather_Controller_C_UpdateNiagaraWeatherParameters_Params
{
	float                                              Delta;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraCameraAndNiagaraParticles
struct ABP_Weather_Controller_C_UpdateNiagaraCameraAndNiagaraParticles_Params
{
	float                                              Delta;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.SetNPCSightModifier
struct ABP_Weather_Controller_C_SetNPCSightModifier_Params
{
	float                                              Modifier;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherParameters
struct ABP_Weather_Controller_C_SetWeatherParameters_Params
{
	class UDA_WeatherScenario_C*                       WeatherScenario;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.UserConstructionScript
struct ABP_Weather_Controller_C_UserConstructionScript_Params
{
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_76949F3E485234FD5D11ADBB3F91FB95
struct ABP_Weather_Controller_C_OnLoaded_76949F3E485234FD5D11ADBB3F91FB95_Params
{
	class UObject*                                     Loaded;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.ReceiveBeginPlay
struct ABP_Weather_Controller_C_ReceiveBeginPlay_Params
{
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.ReceiveTick
struct ABP_Weather_Controller_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.HandleOnWeatherSenarioChangedEvent
struct ABP_Weather_Controller_C_HandleOnWeatherSenarioChangedEvent_Params
{
	class UTigerWeatherScenarioData*                   WeatherScenarioData;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.TigerSetFogDensity
struct ABP_Weather_Controller_C_TigerSetFogDensity_Params
{
	float                                              FogDensity;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function BP_Weather_Controller.BP_Weather_Controller_C.ExecuteUbergraph_BP_Weather_Controller
struct ABP_Weather_Controller_C_ExecuteUbergraph_BP_Weather_Controller_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
