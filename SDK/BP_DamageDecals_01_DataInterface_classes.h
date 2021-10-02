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

// BlueprintGeneratedClass BP_DamageDecals_01_DataInterface.BP_DamageDecals_01_DataInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_DamageDecals_01_DataInterface_C : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_DamageDecals_01_DataInterface.BP_DamageDecals_01_DataInterface_C");
		return ptr;
	}



	void GetMesh(int InIndex, class UStaticMesh** OutMesh);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
