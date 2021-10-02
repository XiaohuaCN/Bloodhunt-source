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

// BlueprintGeneratedClass TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C
// 0x0019 (FullSize[0x0101] - InheritedSize[0x00E8])
class UTBP_ScoutingFamiliarPassive_C : public UTigerFamiliarScoutPassive
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ATigerFamiliarScout*                         Scout;                                                     // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Replicated_Passive_Activated;                              // 0x00F8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	unsigned char                                      UnknownData_76CP[0x3];                                     // 0x00F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TimeStart;                                                 // 0x00FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bParticleVisibility;                                       // 0x0100(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ScoutingFamiliarPassive.TBP_ScoutingFamiliarPassive_C");
		return ptr;
	}



	void OnRep_Replicated_Passive_Activated();
	class UParticleSystemComponent* CreateOrbitingParticles();
	void ScoutSpawned(class ATigerFamiliarScout* SpawnedScout);
	void Scout_Destroyed(class AActor* DestroyedActor);
	void Begin_Fade_Out();
	void Begin_Fade_In();
	void EvaluateVisibility();
	void ExecuteUbergraph_TBP_ScoutingFamiliarPassive(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
