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

// Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.UpdateInfo
struct UTBP_UI_ArchetypeSelect_BloodTrack_Slot_C_UpdateInfo_Params
{
	struct FText                                       Name;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	struct FText                                       Description;                                               // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Icon;                                                      // 0x0030(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                Index;                                                     // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.Construct
struct UTBP_UI_ArchetypeSelect_BloodTrack_Slot_C_Construct_Params
{
};

// Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.Tick
struct UTBP_UI_ArchetypeSelect_BloodTrack_Slot_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ArchetypeSelect_BloodTrack_Slot.TBP_UI_ArchetypeSelect_BloodTrack_Slot_C.ExecuteUbergraph_TBP_UI_ArchetypeSelect_BloodTrack_Slot
struct UTBP_UI_ArchetypeSelect_BloodTrack_Slot_C_ExecuteUbergraph_TBP_UI_ArchetypeSelect_BloodTrack_Slot_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
