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

// BlueprintGeneratedClass TBP_PiercingSetCustomization_Master.TBP_PiercingSetCustomization_Master_C
// 0x0060 (FullSize[0x0170] - InheritedSize[0x0110])
class UTBP_PiercingSetCustomization_Master_C : public UTigerCharacterPiercingSetCustomization
{
public:
	TMap<TEnumAsByte<ENUM_PiercingNames_ENUM_PiercingNames>, class UStaticMesh*> Piercings;                                                 // 0x0110(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                              PoseablePiercings;                                         // 0x0160(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_PiercingSetCustomization_Master.TBP_PiercingSetCustomization_Master_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
