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

// Function TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C.Fill
struct UTBP_UI_BloodTrackCategory_C_Fill_Params
{
	TArray<class UTigerBloodTrackPassiveConfig*>       Passives;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UTigerBloodTrackPassiveConfig*>       Passives_To_Exclude;                                       // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UTBP_UI_BloodTrack_C*                        In_Blood_Track;                                            // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C.Construct
struct UTBP_UI_BloodTrackCategory_C_Construct_Params
{
};

// Function TBP_UI_BloodTrackCategory.TBP_UI_BloodTrackCategory_C.ExecuteUbergraph_TBP_UI_BloodTrackCategory
struct UTBP_UI_BloodTrackCategory_C_ExecuteUbergraph_TBP_UI_BloodTrackCategory_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
