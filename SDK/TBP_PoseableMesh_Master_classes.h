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

// BlueprintGeneratedClass TBP_PoseableMesh_Master.TBP_PoseableMesh_Master_C
// 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
class UTBP_PoseableMesh_Master_C : public UTigerCharacterPoseableMesh
{
public:
	TMap<struct FName, TEnumAsByte<ENUM_PiercingNames_ENUM_PiercingNames>> BoneMappings;                                              // 0x0038(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_PoseableMesh_Master.TBP_PoseableMesh_Master_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
