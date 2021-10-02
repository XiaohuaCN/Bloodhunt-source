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

// BlueprintGeneratedClass BP_DynamicLootSpawner.BP_DynamicLootSpawner_C
// 0x0068 (FullSize[0x0130] - InheritedSize[0x00C8])
class UBP_DynamicLootSpawner_C : public UTigerBlueprintLootComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	Tiger_ETigerTelemetryItemSourceID                  LootItemSource;                                            // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               SimulatePhysics;                                           // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               RandomizeLocations;                                        // 0x00D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_7ZQ4[0x1];                                     // 0x00D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumberOfRandomItemsToSpawn;                                // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                          LootSpawnLocations;                                        // 0x00D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTransform>                          RandomizedLocationsResult;                                 // 0x00E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FName                                       ComponentTagFilter;                                        // 0x00F8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_ItemWithProbability>              ItemProbabilities;                                         // 0x0100(0x0010) (Edit, BlueprintVisible)
	float                                              ProbabilitySum;                                            // 0x0110(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ProbabilitySubtracted;                                     // 0x0114(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               OverrideLootSpawnLocationArray;                            // 0x0118(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_BNZZ[0x7];                                     // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTransform>                          OverrideArray;                                             // 0x0120(0x0010) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DynamicLootSpawner.BP_DynamicLootSpawner_C");
		return ptr;
	}



	void On_Spawn_Loot();
	void ReceiveBeginPlay();
	void BreakLoop();
	void Chose_Random_Amount();
	void ExecuteUbergraph_BP_DynamicLootSpawner(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
