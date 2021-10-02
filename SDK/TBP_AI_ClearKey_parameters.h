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

// Function TBP_AI_ClearKey.TBP_AI_ClearKey_C.ReceiveExecute
struct UTBP_AI_ClearKey_C_ReceiveExecute_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_AI_ClearKey.TBP_AI_ClearKey_C.ReceiveTick
struct UTBP_AI_ClearKey_C_ReceiveTick_Params
{
	class AActor*                                      OwnerActor;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DeltaSeconds;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_AI_ClearKey.TBP_AI_ClearKey_C.ExecuteUbergraph_TBP_AI_ClearKey
struct UTBP_AI_ClearKey_C_ExecuteUbergraph_TBP_AI_ClearKey_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
