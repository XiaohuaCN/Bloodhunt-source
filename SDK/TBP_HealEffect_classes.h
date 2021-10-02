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

// BlueprintGeneratedClass TBP_HealEffect.TBP_HealEffect_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTBP_HealEffect_C : public UTigerCharacterEffect
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_HealEffect.TBP_HealEffect_C");
		return ptr;
	}



	void Apply(class ATigerCharacter* Character);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
