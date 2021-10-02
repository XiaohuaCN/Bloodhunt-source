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

// BlueprintGeneratedClass TBP_FeralSenses_Component.TBP_FeralSenses_Component_C
// 0x0070 (FullSize[0x01B8] - InheritedSize[0x0148])
class UTBP_FeralSenses_Component_C : public UTigerUtilityPowerHSenseComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0148(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCurveFloat*                                 ActivatedOpacityCurve;                                     // 0x0150(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 DeactivatedOpacityCurve;                                   // 0x0158(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 ActivatedBurstCurve;                                       // 0x0160(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                TimerHandle;                                               // 0x0168(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 ActivatedDesaturationCurve;                                // 0x0170(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                                 DeactivatedDesaturationCurve;                              // 0x0178(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FogColor;                                                  // 0x0180(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                FogNearColor;                                              // 0x0190(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FogStartRange;                                             // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              FogEndRange;                                               // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TimeMultiplier;                                            // 0x01A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_1M1Q[0x4];                                     // 0x01AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATBP_Player_C*                               Player;                                                    // 0x01B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_FeralSenses_Component.TBP_FeralSenses_Component_C");
		return ptr;
	}



	void HandleBloodTrackUpgrades();
	float GetCurrentHeightenedSensesViewLength();
	void ContinueUpdatingBurst();
	void FadeoutSetup();
	void FadeInSetup2();
	void FadeInSetup1();
	void UpdateHeightenedSenses();
	void FinishHeightenedSenses();
	void GetOwnersBloodScanPostFX(class UPostProcessComponent** BloodScanPostFX);
	void GetOwnersHeartScan(class UParticleSystemComponent** Heart_Scan_Effect_Plane);
	void OnActivateHeightenedSenses();
	void OnDeactivateHeightenedSenses();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_TBP_FeralSenses_Component(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
