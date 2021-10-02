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

// BlueprintGeneratedClass TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C
// 0x0060 (FullSize[0x0680] - InheritedSize[0x0620])
class ATBP_PaperDoll_Legacy_C : public ATigerPaperDoll
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                             LightingSpawnLocation;                                     // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                   // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTBP_CharacterCustomizationComp_C*           TBP_CharacterCustomization;                                // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      SceneLighting;                                             // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	unsigned char                                      SceneLightingSoftClass[0x28];                              // 0x0658(0x0028) UNKNOWN PROPERTY: SoftClassProperty


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_PaperDoll_Legacy.TBP_PaperDoll_Legacy_C");
		return ptr;
	}



	void UserConstructionScript();
	void OnLoaded_066C9A124476C48220EE15B4551280B2(class UClass* Loaded);
	void PostNewCharacterSelected();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void ExecuteUbergraph_TBP_PaperDoll_Legacy(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
