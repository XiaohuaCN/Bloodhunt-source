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

// BlueprintGeneratedClass TBP_MightyLeap.TBP_MightyLeap_C
// 0x0008 (FullSize[0x0160] - InheritedSize[0x0158])
class UTBP_MightyLeap_C : public UTigerDisciplineJump
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0158(0x0008) (ZeroConstructor, Transient, DuplicateTransient)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_MightyLeap.TBP_MightyLeap_C");
		return ptr;
	}



	struct FVector GetTargetPosition(const struct FVector& PlayerEyeLocation, const struct FRotator& CameraRotation, float JumpCheckDistance);
	void OnLeapEnded();
	void OnLeapStarted();
	void ExecuteUbergraph_TBP_MightyLeap(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
