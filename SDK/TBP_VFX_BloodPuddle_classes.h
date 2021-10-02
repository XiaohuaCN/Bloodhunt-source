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

// BlueprintGeneratedClass TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C
// 0x0030 (FullSize[0x0258] - InheritedSize[0x0228])
class ATBP_VFX_BloodPuddle_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Timeline_0_NewTrack_2_6AA50CA342AD366CED304ABD16EA7169;    // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_0_NewTrack_1_6AA50CA342AD366CED304ABD16EA7169;    // 0x0244(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              Timeline_0_NewTrack_0_6AA50CA342AD366CED304ABD16EA7169;    // 0x0248(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             Timeline_0__Direction_6AA50CA342AD366CED304ABD16EA7169;    // 0x024C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_R17U[0x3];                                     // 0x024D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          Timeline_1;                                                // 0x0250(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_VFX_BloodPuddle.TBP_VFX_BloodPuddle_C");
		return ptr;
	}



	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_TBP_VFX_BloodPuddle(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
