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

// Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.Update Passive Slot Opacity
struct UTBP_UI_BloodTrack_C_Update_Passive_Slot_Opacity_Params
{
	int                                                PlayerLevel;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.Init
struct UTBP_UI_BloodTrack_C_Init_Params
{
	int                                                PlayerLevelCap;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                PlayerLevelCurrent;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bIsInInventory;                                            // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.GetSlotAtIndex
struct UTBP_UI_BloodTrack_C_GetSlotAtIndex_Params
{
	int                                                Index;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_BloodTrackPassiveSlot_C*             Blood_Track_Slot;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodTrack.TBP_UI_BloodTrack_C.Populate
struct UTBP_UI_BloodTrack_C_Populate_Params
{
	TArray<class UTigerBloodTrackPassiveConfig*>       BloodTrack;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
