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

// Function TBP_Enraged.TBP_Enraged_C.PlayEnrageAudio
struct ATBP_Enraged_C_PlayEnrageAudio_Params
{
};

// Function TBP_Enraged.TBP_Enraged_C.StopEnrageAudio
struct ATBP_Enraged_C_StopEnrageAudio_Params
{
};

// Function TBP_Enraged.TBP_Enraged_C.OnRegenStarted
struct ATBP_Enraged_C_OnRegenStarted_Params
{
};

// Function TBP_Enraged.TBP_Enraged_C.OnRegenStopped
struct ATBP_Enraged_C_OnRegenStopped_Params
{
};

// Function TBP_Enraged.TBP_Enraged_C.ReceiveEndPlay
struct ATBP_Enraged_C_ReceiveEndPlay_Params
{
	TEnumAsByte<Engine_EEndPlayReason>                 EndPlayReason;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Enraged.TBP_Enraged_C.ExecuteUbergraph_TBP_Enraged
struct ATBP_Enraged_C_ExecuteUbergraph_TBP_Enraged_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
