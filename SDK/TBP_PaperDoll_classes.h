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

// BlueprintGeneratedClass TBP_PaperDoll.TBP_PaperDoll_C
// 0x0038 (FullSize[0x0658] - InheritedSize[0x0620])
class ATBP_PaperDoll_C : public ATigerPaperDoll
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0620(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneCaptureComponent2D*                    SceneCaptureComponent2D;                                   // 0x0628(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                            Camera;                                                    // 0x0630(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTBP_CharacterCustomizationComp_C*           TBP_CharacterCustomization;                                // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                      SkeletalMesh;                                              // 0x0640(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                               EnableOutlines;                                            // 0x0648(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_DFOA[0x3];                                     // 0x0649(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Player;                                                    // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    Particle;                                                  // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_PaperDoll.TBP_PaperDoll_C");
		return ptr;
	}



	void UpdateOutlines();
	void UserConstructionScript();
	void PostNewCharacterSelected();
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void SetPlayerOutlineMemberId(unsigned char InPlayerMemberId);
	void Particle_Destroy();
	void ExecuteUbergraph_TBP_PaperDoll(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
