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

// BlueprintGeneratedClass TBP_ContextualHelp_Tutorial_ArchetypePower.TBP_ContextualHelp_Tutorial_ArchetypePower_C
// 0x000C (FullSize[0x00D0] - InheritedSize[0x00C4])
class UTBP_ContextualHelp_Tutorial_ArchetypePower_C : public UTBP_ContextualHelpBase_C
{
public:
	float                                              RetriggerTime;                                             // 0x00C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                                DelayTimer;                                                // 0x00C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ContextualHelp_Tutorial_ArchetypePower.TBP_ContextualHelp_Tutorial_ArchetypePower_C");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
