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

// BlueprintGeneratedClass TBP_MasqueradeActionResponseNone.TBP_MasqueradeActionResponseNone_C
// 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
class UTBP_MasqueradeActionResponseNone_C : public UTigerMasqueradeActionResponse
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_MasqueradeActionResponseNone.TBP_MasqueradeActionResponseNone_C");
		return ptr;
	}



	void OnReactToMasqueradeBreakingAction();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
