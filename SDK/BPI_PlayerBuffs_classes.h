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

// BlueprintGeneratedClass BPI_PlayerBuffs.BPI_PlayerBuffs_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_PlayerBuffs_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_PlayerBuffs.BPI_PlayerBuffs_C");
		return ptr;
	}



	void IncrementFeedingBloodIndex();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
