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

// BlueprintGeneratedClass Explosion_Test.Explosion_Test_C
// 0x0010 (FullSize[0x04D0] - InheritedSize[0x04C0])
class AExplosion_Test_C : public ATigerAreaEffect
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                          // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass Explosion_Test.Explosion_Test_C");
		return ptr;
	}



	void OnTriggerClient();
	void ExecuteUbergraph_Explosion_Test(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
