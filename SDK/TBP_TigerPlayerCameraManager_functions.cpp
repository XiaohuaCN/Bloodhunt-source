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
//		Name   -> Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.OnChangingCameraPreset
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      InCurrentCameraPresetClass                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
//		class UClass*                                      InNewCameraPresetClass                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void ATBP_TigerPlayerCameraManager_C::OnChangingCameraPreset(class UClass* InCurrentCameraPresetClass, class UClass* InNewCameraPresetClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.OnChangingCameraPreset");

	ATBP_TigerPlayerCameraManager_C_OnChangingCameraPreset_Params params;
	params.InCurrentCameraPresetClass = InCurrentCameraPresetClass;
	params.InNewCameraPresetClass = InNewCameraPresetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.SelectPresetTransitionCurve
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerCameraPreset*                          InPreviousPreset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerCameraPreset*                          InNewPreset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UCurveFloat*                                 ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
class UCurveFloat* ATBP_TigerPlayerCameraManager_C::SelectPresetTransitionCurve(class UTigerCameraPreset* InPreviousPreset, class UTigerCameraPreset* InNewPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.SelectPresetTransitionCurve");

	ATBP_TigerPlayerCameraManager_C_SelectPresetTransitionCurve_Params params;
	params.InPreviousPreset = InPreviousPreset;
	params.InNewPreset = InNewPreset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.EvaluateCameraPreset
//		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
class UClass* ATBP_TigerPlayerCameraManager_C::EvaluateCameraPreset()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.EvaluateCameraPreset");

	ATBP_TigerPlayerCameraManager_C_EvaluateCameraPreset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
