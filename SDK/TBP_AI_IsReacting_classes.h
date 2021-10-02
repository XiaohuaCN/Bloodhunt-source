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

// BlueprintGeneratedClass TBP_AI_IsReacting.TBP_AI_IsReacting_C
// 0x0028 (FullSize[0x0090] - InheritedSize[0x0068])
class UTBP_AI_IsReacting_C : public UTigerAIIsReactingDecorator
{
public:
	struct FBlackboardKeySelector                      Self_Actor;                                                // 0x0068(0x0028) (Edit, BlueprintVisible)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_AI_IsReacting.TBP_AI_IsReacting_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
