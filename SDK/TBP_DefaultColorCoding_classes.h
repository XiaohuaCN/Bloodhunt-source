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

// BlueprintGeneratedClass TBP_DefaultColorCoding.TBP_DefaultColorCoding_C
// 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
class UTBP_DefaultColorCoding_C : public UTigerDisciplineParticleStrategy
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_DefaultColorCoding.TBP_DefaultColorCoding_C");
		return ptr;
	}



	void ExecutePostSpawnStrategy(class UParticleSystemComponent* InParticleToExecuteOn, class ATigerCharacter* InParticleInstigator);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
