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

// BlueprintGeneratedClass TBP_EyewearCustomization_Master.TBP_EyewearCustomization_Master_C
// 0x0050 (FullSize[0x01C0] - InheritedSize[0x0170])
class UTBP_EyewearCustomization_Master_C : public UTigerCharacterEyewearCustomization
{
public:
	TMap<TEnumAsByte<ENUM_PiercingNames_ENUM_PiercingNames>, bool> VisiblePiercingsFilter;                                    // 0x0170(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_EyewearCustomization_Master.TBP_EyewearCustomization_Master_C");
		return ptr;
	}



	void GatherPiercingFilter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
