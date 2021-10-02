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

// BlueprintGeneratedClass TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C
// 0x00F0 (FullSize[0x0350] - InheritedSize[0x0260])
class UTBP_HeadConfiguration_Master_C : public UTigerCharacterHeadConfiguration
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	TMap<TEnumAsByte<ENUM_PiercingNames_ENUM_PiercingNames>, struct FTigerCharacterHeadPiercingSocket> PiercingOffsets;                                           // 0x0268(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<TEnumAsByte<ENUM_PiercingNames_ENUM_PiercingNames>, struct FName> PiercingNameMappings;                                      // 0x02B8(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTigerCharacterHeadEyewearOffset            EyewearOffset_Nose;                                        // 0x0308(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTigerCharacterHeadEyewearOffset            EyewearOffset_EarLeft;                                     // 0x0320(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTigerCharacterHeadEyewearOffset            EyewearOffset_EarRight;                                    // 0x0338(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_HeadConfiguration_Master.TBP_HeadConfiguration_Master_C");
		return ptr;
	}



	void GetPiercingSlots(class UTigerCharacterMeshManager* InMeshManager, TMap<struct FName, struct FTigerCharacterHeadPiercingSocket>* OutSlots);
	void GatherPoseableMeshSetupData(class UClass* Mesh, TArray<struct FTigerCharacterPoseableMeshBoneSetupData>* Data);
	void SetPoseableBeard(class UTigerCharacterBeardCustomization* InBeard, class UTigerCharacterMeshManager* InMeshManager);
	void SetEyewearOffset(class UTigerCharacterMeshManager* MeshManager);
	void SetPiercings(class UTigerCharacterPiercingSetCustomization* InPiercingSet, class UTigerCharacterMeshManager* InMeshManager);
	void SetPiercingSlotLocationAndRotation(class UTigerCharacterMeshManager* InMeshManager, const struct FName& InName, const struct FVector& InLocation, const struct FRotator& InRotation);
	void ExecuteUbergraph_TBP_HeadConfiguration_Master(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
