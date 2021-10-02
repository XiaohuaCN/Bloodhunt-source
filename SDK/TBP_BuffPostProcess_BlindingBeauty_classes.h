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

// BlueprintGeneratedClass TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C
// 0x0017 (FullSize[0x0278] - InheritedSize[0x0261])
class ATBP_BuffPostProcess_BlindingBeauty_C : public ATBP_BuffPostProcess_Master_C
{
public:
	unsigned char                                      UnknownData_X06E[0x7];                                     // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0268(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCurveFloat*                                 FlashCurve;                                                // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_BuffPostProcess_BlindingBeauty.TBP_BuffPostProcess_BlindingBeauty_C");
		return ptr;
	}



	void SetParameters(float NormalizedDuration);
	void ExecuteUbergraph_TBP_BuffPostProcess_BlindingBeauty(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
