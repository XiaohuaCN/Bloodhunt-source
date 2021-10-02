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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C
// 0x0008 (FullSize[0x2908] - InheritedSize[0x2900])
class ATBP_TigerPlayerCameraManager_C : public ATigerPlayerCameraManager
{
public:
	float                                              HighSpeedCameraTreshold;                                   // 0x2900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinMoveSpeedForMeleeCamera;                                // 0x2904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_TigerPlayerCameraManager.TBP_TigerPlayerCameraManager_C");
		return ptr;
	}



	void OnChangingCameraPreset(class UClass* InCurrentCameraPresetClass, class UClass* InNewCameraPresetClass);
	class UCurveFloat* SelectPresetTransitionCurve(class UTigerCameraPreset* InPreviousPreset, class UTigerCameraPreset* InNewPreset);
	class UClass* EvaluateCameraPreset();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
