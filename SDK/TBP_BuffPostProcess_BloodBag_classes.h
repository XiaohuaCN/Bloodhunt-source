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

// BlueprintGeneratedClass TBP_BuffPostProcess_BloodBag.TBP_BuffPostProcess_BloodBag_C
// 0x0000 (FullSize[0x0261] - InheritedSize[0x0261])
class ATBP_BuffPostProcess_BloodBag_C : public ATBP_BuffPostProcess_Master_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_BuffPostProcess_BloodBag.TBP_BuffPostProcess_BloodBag_C");
		return ptr;
	}



	void SetParameters(float NormalizedDuration);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
