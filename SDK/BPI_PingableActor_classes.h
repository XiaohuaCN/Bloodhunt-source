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

// BlueprintGeneratedClass BPI_PingableActor.BPI_PingableActor_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_PingableActor_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PingableActor.BPI_PingableActor_C");
		return ptr;
	}



	void GetPingInfo(struct FTS_PingableActorInfo* OutInfo);
	void GetPingCategory(struct FName* OutCategory);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
