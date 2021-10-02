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

// BlueprintGeneratedClass TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C
// 0x0054 (FullSize[0x0304] - InheritedSize[0x02B0])
class ATBP_ExaminableProp_Template_C : public ATigerInteractiveGrimoireProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            OutlineUpdateVolume;                                       // 0x02B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                        OutlineBillboard;                                          // 0x02C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                              OutlineMeshExtraWidth;                                     // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutlineStrength;                                           // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutlineDrawDistance;                                       // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutlineScaleMultiplier;                                    // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     OutlineColorShiftRange;                                    // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                OutlineColor1;                                             // 0x02E4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                OutlineColor2;                                             // 0x02F4(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ExaminableProp_Template.TBP_ExaminableProp_Template_C");
		return ptr;
	}



	void SetToolTipText();
	void SetDrawDistance();
	void SetCustomPrimitiveData();
	void ValidateEntryId(const struct FString& EntryId, bool* IsValid);
	void ShowGrimoireEntryInfo(const struct FString& Entry_Id);
	void UpdateOutlineEffect();
	void SetOutlineColor(const struct FLinearColor& Color);
	void SetOutlineBillboardScale();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DisableHighlight();
	void ReceiveTick(float DeltaSeconds);
	void OpenGrimoire();
	void OnInteract(Tiger_EInteractiveObjectState ActivatedTrigger);
	void BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void BndEvt__OutlineUpdateVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex);
	void OnLanguageChanged();
	void ExecuteUbergraph_TBP_ExaminableProp_Template(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
