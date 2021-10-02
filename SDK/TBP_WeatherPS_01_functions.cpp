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
//		Name   -> Function TBP_WeatherPS_01.TBP_WeatherPS_01_C.UpdateWeatherParentFunc
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_WeatherPS_01_C::UpdateWeatherParentFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_WeatherPS_01.TBP_WeatherPS_01_C.UpdateWeatherParentFunc");

	ATBP_WeatherPS_01_C_UpdateWeatherParentFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_WeatherPS_01.TBP_WeatherPS_01_C.UpdateWeatherComponents
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_WeatherPS_01_C::UpdateWeatherComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_WeatherPS_01.TBP_WeatherPS_01_C.UpdateWeatherComponents");

	ATBP_WeatherPS_01_C_UpdateWeatherComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_WeatherPS_01.TBP_WeatherPS_01_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_WeatherPS_01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_WeatherPS_01.TBP_WeatherPS_01_C.ReceiveBeginPlay");

	ATBP_WeatherPS_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_WeatherPS_01.TBP_WeatherPS_01_C.ExecuteUbergraph_TBP_WeatherPS_01
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_WeatherPS_01_C::ExecuteUbergraph_TBP_WeatherPS_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_WeatherPS_01.TBP_WeatherPS_01_C.ExecuteUbergraph_TBP_WeatherPS_01");

	ATBP_WeatherPS_01_C_ExecuteUbergraph_TBP_WeatherPS_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
