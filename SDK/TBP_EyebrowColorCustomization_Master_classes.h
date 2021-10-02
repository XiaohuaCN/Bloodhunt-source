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

// BlueprintGeneratedClass TBP_EyebrowColorCustomization_Master.TBP_EyebrowColorCustomization_Master_C
// 0x0008 (FullSize[0x0150] - InheritedSize[0x0148])
class UTBP_EyebrowColorCustomization_Master_C : public UTigerCharacterEyebrowColorCustomization
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0148(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_EyebrowColorCustomization_Master.TBP_EyebrowColorCustomization_Master_C");
		return ptr;
	}



	class UMaterialInterface* GetUiMaterialOverride();
	void SetUIMaterialParameters(class UMaterialInstanceDynamic* InMaterial);
	void ExecuteUbergraph_TBP_EyebrowColorCustomization_Master(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
