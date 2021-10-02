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

// BlueprintGeneratedClass TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C
// 0x0038 (FullSize[0x0260] - InheritedSize[0x0228])
class ATBP_VFX_BloodDecal_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0228(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        StaticMesh;                                                // 0x0230(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x0238(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              FadeInTimeline_AlphaScaleTrack_588AF71A4B6DB400A9724382318A5E98; // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FadeInTimeline__Direction_588AF71A4B6DB400A9724382318A5E98; // 0x0244(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_GBYH[0x3];                                     // 0x0245(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeInTimeline;                                            // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              FadeOutTimeline_AlphaScaleTrack_FADD48494D9CA4FF7946218963114C70; // 0x0250(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TEnumAsByte<Engine_ETimelineDirection>             FadeOutTimeline__Direction_FADD48494D9CA4FF7946218963114C70; // 0x0254(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      UnknownData_8HE8[0x3];                                     // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTimelineComponent*                          FadeOutTimeline;                                           // 0x0258(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_VFX_BloodDecal.TBP_VFX_BloodDecal_C");
		return ptr;
	}



	void FadeOutTimeline__FinishedFunc();
	void FadeOutTimeline__UpdateFunc();
	void FadeInTimeline__FinishedFunc();
	void FadeInTimeline__UpdateFunc();
	void ReceiveBeginPlay();
	void BeginFadeOut();
	void ExecuteUbergraph_TBP_VFX_BloodDecal(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
