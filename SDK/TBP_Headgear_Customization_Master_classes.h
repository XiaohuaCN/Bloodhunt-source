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

// BlueprintGeneratedClass TBP_Headgear_Customization_Master.TBP_Headgear_Customization_Master_C
// 0x0050 (FullSize[0x01D0] - InheritedSize[0x0180])
class UTBP_Headgear_Customization_Master_C : public UTigerCharacterHeadgearCustomization
{
public:
	TMap<TEnumAsByte<ENUM_PiercingNames_ENUM_PiercingNames>, bool> VisiblePiercingsFilter;                                    // 0x0180(0x0050) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_Headgear_Customization_Master.TBP_Headgear_Customization_Master_C");
		return ptr;
	}



	void GatherPiercingFilter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
