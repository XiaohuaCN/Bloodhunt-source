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
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateAllActors
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Weather_Controller_C::UpdateAllActors()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateAllActors");

	ABP_Weather_Controller_C_UpdateAllActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherScenarioParameters
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UDA_WeatherScenario_C*                       WeatherScenario                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Weather_Controller_C::SetWeatherScenarioParameters(class UDA_WeatherScenario_C* WeatherScenario)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherScenarioParameters");

	ABP_Weather_Controller_C_SetWeatherScenarioParameters_Params params;
	params.WeatherScenario = WeatherScenario;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherScenario
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerWeatherScenarioData*                   WeatherScenario                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Weather_Controller_C::SetWeatherScenario(class UTigerWeatherScenarioData* WeatherScenario)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherScenario");

	ABP_Weather_Controller_C_SetWeatherScenario_Params params;
	params.WeatherScenario = WeatherScenario;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.SetServerWeather
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                WeatherOverride                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Weather_Controller_C::SetServerWeather(int WeatherOverride)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.SetServerWeather");

	ABP_Weather_Controller_C_SetServerWeather_Params params;
	params.WeatherOverride = WeatherOverride;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.MoveNiagaraCamera
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     CameraPos                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Weather_Controller_C::MoveNiagaraCamera(const struct FVector& CameraPos)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.MoveNiagaraCamera");

	ABP_Weather_Controller_C_MoveNiagaraCamera_Params params;
	params.CameraPos = CameraPos;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraWeatherParameters
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Weather_Controller_C::UpdateNiagaraWeatherParameters(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraWeatherParameters");

	ABP_Weather_Controller_C_UpdateNiagaraWeatherParameters_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraCameraAndNiagaraParticles
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Delta                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Weather_Controller_C::UpdateNiagaraCameraAndNiagaraParticles(float Delta)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.UpdateNiagaraCameraAndNiagaraParticles");

	ABP_Weather_Controller_C_UpdateNiagaraCameraAndNiagaraParticles_Params params;
	params.Delta = Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.SetNPCSightModifier
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Modifier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Weather_Controller_C::SetNPCSightModifier(float Modifier)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.SetNPCSightModifier");

	ABP_Weather_Controller_C_SetNPCSightModifier_Params params;
	params.Modifier = Modifier;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherParameters
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UDA_WeatherScenario_C*                       WeatherScenario                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Weather_Controller_C::SetWeatherParameters(class UDA_WeatherScenario_C* WeatherScenario)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.SetWeatherParameters");

	ABP_Weather_Controller_C_SetWeatherParameters_Params params;
	params.WeatherScenario = WeatherScenario;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.UserConstructionScript
//		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_Weather_Controller_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.UserConstructionScript");

	ABP_Weather_Controller_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_76949F3E485234FD5D11ADBB3F91FB95
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Weather_Controller_C::OnLoaded_76949F3E485234FD5D11ADBB3F91FB95(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.OnLoaded_76949F3E485234FD5D11ADBB3F91FB95");

	ABP_Weather_Controller_C_OnLoaded_76949F3E485234FD5D11ADBB3F91FB95_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_Weather_Controller_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.ReceiveBeginPlay");

	ABP_Weather_Controller_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Weather_Controller_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.ReceiveTick");

	ABP_Weather_Controller_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.HandleOnWeatherSenarioChangedEvent
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerWeatherScenarioData*                   WeatherScenarioData                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Weather_Controller_C::HandleOnWeatherSenarioChangedEvent(class UTigerWeatherScenarioData* WeatherScenarioData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.HandleOnWeatherSenarioChangedEvent");

	ABP_Weather_Controller_C_HandleOnWeatherSenarioChangedEvent_Params params;
	params.WeatherScenarioData = WeatherScenarioData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.TigerSetFogDensity
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              FogDensity                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Weather_Controller_C::TigerSetFogDensity(float FogDensity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.TigerSetFogDensity");

	ABP_Weather_Controller_C_TigerSetFogDensity_Params params;
	params.FogDensity = FogDensity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_Weather_Controller.BP_Weather_Controller_C.ExecuteUbergraph_BP_Weather_Controller
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_Weather_Controller_C::ExecuteUbergraph_BP_Weather_Controller(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_Weather_Controller.BP_Weather_Controller_C.ExecuteUbergraph_BP_Weather_Controller");

	ABP_Weather_Controller_C_ExecuteUbergraph_BP_Weather_Controller_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
