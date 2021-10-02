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

// BlueprintGeneratedClass TBP_AI_IsBloodDrainedDeco.TBP_AI_IsBloodDrainedDeco_C
// 0x0028 (FullSize[0x00C8] - InheritedSize[0x00A0])
class UTBP_AI_IsBloodDrainedDeco_C : public UBTDecorator_BlueprintBase
{
public:
	struct FBlackboardKeySelector                      Self_Actor;                                                // 0x00A0(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_AI_IsBloodDrainedDeco.TBP_AI_IsBloodDrainedDeco_C");
		return ptr;
	}



	bool PerformConditionCheck(class AActor* OwnerActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
