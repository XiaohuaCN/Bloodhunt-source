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

// BlueprintGeneratedClass BP_LightningRod_01DataInterface.BP_LightningRod_01DataInterface_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBP_LightningRod_01DataInterface_C : public UObject
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BP_LightningRod_01DataInterface.BP_LightningRod_01DataInterface_C");
		return ptr;
	}



	void GetMetalBottom(class UStaticMesh** OutMesh);
	void GetMetalTop(class UStaticMesh** OutMesh);
	void GetMetalMiddle(int InIndex, class UStaticMesh** OutMesh);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
