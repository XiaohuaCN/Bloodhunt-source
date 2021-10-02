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

// BlueprintGeneratedClass BP_LightMaster.BP_LightMaster_C
// 0x0040 (FullSize[0x0280] - InheritedSize[0x0240])
class ABP_LightMaster_C : public ATigerRebuildableActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0240(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UParticleSystemComponent*                    PS_Lamp_Rain;                                              // 0x0248(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<struct FLinearColor>                        MasterLightColors;                                         // 0x0250(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	int                                                LightColorSelector;                                        // 0x0260(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               RainOn;                                                    // 0x0264(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               ForceRainWhenUnderSomething;                               // 0x0265(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_EW8O[0x2];                                     // 0x0266(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FLinearColor>                        EmissiveColor;                                             // 0x0268(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_LightMasterDataInterface_C*              LightMasterCDO;                                            // 0x0278(0x0008) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightMaster.BP_LightMaster_C");
		return ptr;
	}



	void SetMaterialAndPrimitiveData(const struct FVector4& InColor, class UPrimitiveComponent* InMesh, int InIndex);
	void SetCDO();
	void LineTraceLogic();
	void SetRainParticles(bool RainOn);
	void LightColorSelection(class ULightComponent* Light, struct FLinearColor* NewLightColor, struct FVector4* NewEmissiveColor, int* LightColorInt);
	void UserConstructionScript();
	void UpdateWeatherComponents();
	void ReceiveBeginPlay();
	void OnRebuild();
	void ExecuteUbergraph_BP_LightMaster(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
