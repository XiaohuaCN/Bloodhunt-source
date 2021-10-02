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

// BlueprintGeneratedClass TBP_LootContainerBase.TBP_LootContainerBase_C
// 0x0068 (FullSize[0x0300] - InheritedSize[0x0298])
class ATBP_LootContainerBase_C : public ATigerLootContainer
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAkComponent*                                ContainerOpenAudioEvent;                                   // 0x02A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                                HeigthenedSensesDetectLoopAudioEvent;                      // 0x02A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                            HeightenedSensesCollider;                                  // 0x02B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        OutlineMesh;                                               // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        LootMistGlow;                                              // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DynamicLootSpawner_C*                    BP_DynamicLootSpawner;                                     // 0x02C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        BaseMesh;                                                  // 0x02D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                        HeightenedSensesMesh;                                      // 0x02D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              HeightenedSensesTimeline_Item_Alpha_19091A904278DD250B11EC9B6FF28B50; // 0x02E0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             HeightenedSensesTimeline__Direction_19091A904278DD250B11EC9B6FF28B50; // 0x02E4(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_S0IU[0x3];                                     // 0x02E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          HeightenedSensesTimeline;                                  // 0x02E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                          ItemSpawnTransforms;                                       // 0x02F0(0x0010) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_LootContainerBase.TBP_LootContainerBase_C");
		return ptr;
	}



	void GetPingInfo(struct FTS_PingableActorInfo* OutInfo);
	void GetPingCategory(struct FName* OutCategory);
	void OnAnimateOpen();
	void OnSpawnLoot();
	void OnInteractFinished();
	void UserConstructionScript();
	void HeightenedSensesTimeline__FinishedFunc();
	void HeightenedSensesTimeline__UpdateFunc();
	void ReceiveTick(float DeltaSeconds);
	void OnLeaveHeightenedSenseArea();
	void OnEnterHeightenedSenseAreaInitial();
	void OnEnterHeightenedSenseArea();
	void OnInteract(Tiger_EInteractiveObjectState ActivatedTrigger);
	void OnBecameClosestLootContainerInHeightenedSenses();
	void OnStoppedBeingClosestLootContainerInHeightenedSenses();
	void OnJumpToFinalState();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_LootContainerBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
