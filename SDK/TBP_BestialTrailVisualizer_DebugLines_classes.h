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

// BlueprintGeneratedClass TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C
// 0x0090 (FullSize[0x02D0] - InheritedSize[0x0240])
class ATBP_BestialTrailVisualizer_DebugLines_C : public ATigerBestialTrailVisualizer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FTigerPlayerSavedLocation                   PreviousPoint;                                             // 0x0250(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTigerPlayerSavedLocation                   SecondLocation;                                            // 0x0260(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UTigerNosferatuPassiveBestialConfig*         Config;                                                    // 0x0270(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_BestialTrailPart_SplineMesh_C*          Latest_Part;                                               // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Number_of_Received_Points;                                 // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_2VB5[0x4];                                     // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNiagaraComponent*                           NewVar_1;                                                  // 0x0288(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     _3rdPos;                                                   // 0x0290(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_I5NP[0x4];                                     // 0x029C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UNiagaraComponent*                           PreviousNiagaraBeam;                                       // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviousSpawnTime;                                         // 0x02A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              PreviousPointNumber;                                       // 0x02AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                             NiagaraPath;                                               // 0x02B0(0x0018) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UTBP_AnAcquiredTaste_C*                      Passive_Component;                                         // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_BestialTrailVisualizer_DebugLines.TBP_BestialTrailVisualizer_DebugLines_C");
		return ptr;
	}



	void Decide_LifeTime(float ExtraLifeTimePerStack, float* FinalLifeTime);
	void AddPoint(const struct FTigerPlayerSavedLocation& New_Location);
	void BeginEndTracking();
	void ReceiveBeginPlay();
	void ReceiveInitialTrackingPoints(TArray<struct FTigerPlayerSavedLocation> Locations, class ATigerPlayer* TrackedPlayer);
	void ReceiveNewTrackingPoint(const struct FTigerPlayerSavedLocation& NewLocation);
	void ExecuteUbergraph_TBP_BestialTrailVisualizer_DebugLines(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
