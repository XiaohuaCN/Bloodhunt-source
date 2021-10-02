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

// Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.OnChangingCameraPreset
struct ATBP_TigerPlayerCameraManager_C_OnChangingCameraPreset_Params
{
	class UClass*                                      InCurrentCameraPresetClass;                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UClass*                                      InNewCameraPresetClass;                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.SelectPresetTransitionCurve
struct ATBP_TigerPlayerCameraManager_C_SelectPresetTransitionCurve_Params
{
	class UTigerCameraPreset*                          InPreviousPreset;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTigerCameraPreset*                          InNewPreset;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 ReturnValue;                                               // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C.EvaluateCameraPreset
struct ATBP_TigerPlayerCameraManager_C_EvaluateCameraPreset_Params
{
	class UClass*                                      ReturnValue;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
