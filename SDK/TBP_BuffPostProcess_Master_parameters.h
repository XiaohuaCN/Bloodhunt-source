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

// Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.SetParameters
struct ATBP_BuffPostProcess_Master_C_SetParameters_Params
{
	float                                              NormalizedDuration;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Refresh
struct ATBP_BuffPostProcess_Master_C_Refresh_Params
{
	float                                              NewDuration;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Remove
struct ATBP_BuffPostProcess_Master_C_Remove_Params
{
};

// Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.Initialize
struct ATBP_BuffPostProcess_Master_C_Initialize_Params
{
	int                                                BuffID;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TotalDuration;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.ReceiveTick
struct ATBP_BuffPostProcess_Master_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.UpdateDuration
struct ATBP_BuffPostProcess_Master_C_UpdateDuration_Params
{
};

// Function TBP_BuffPostProcess_Master.TBP_BuffPostProcess_Master_C.ExecuteUbergraph_TBP_BuffPostProcess_Master
struct ATBP_BuffPostProcess_Master_C_ExecuteUbergraph_TBP_BuffPostProcess_Master_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
