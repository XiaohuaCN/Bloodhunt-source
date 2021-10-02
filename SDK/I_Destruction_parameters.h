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
// Parameters
//---------------------------------------------------------------------------

// Function I_Destruction.I_Destruction_C.TriggerAlarm
struct UI_Destruction_C_TriggerAlarm_Params
{
};

// Function I_Destruction.I_Destruction_C.StaticMeshComponentHit
struct UI_Destruction_C_StaticMeshComponentHit_Params
{
	struct FHitResult                                  HitResult;                                                 // 0x0000(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                                     ImpactVelocity;                                            // 0x008C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
