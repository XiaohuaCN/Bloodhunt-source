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

// Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.RemoveSlotType
struct UTBP_UI_BloodResonanceSingular_C_RemoveSlotType_Params
{
	int                                                InSlotsLeft;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.InitializeBloodType
struct UTBP_UI_BloodResonanceSingular_C_InitializeBloodType_Params
{
	class UTigerBloodResonanceAsset*                   InDataAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerBloodType                              InBloodType;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.AddSlotType
struct UTBP_UI_BloodResonanceSingular_C_AddSlotType_Params
{
	int                                                InSlotsLeft;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.AddResonanceType
struct UTBP_UI_BloodResonanceSingular_C_AddResonanceType_Params
{
};

// Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.BlockedByMaxed
struct UTBP_UI_BloodResonanceSingular_C_BlockedByMaxed_Params
{
};

// Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.BlockedBySlot
struct UTBP_UI_BloodResonanceSingular_C_BlockedBySlot_Params
{
};

// Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.TooltipPotentialGain
struct UTBP_UI_BloodResonanceSingular_C_TooltipPotentialGain_Params
{
};

// Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.TooltipPotentialBlocked
struct UTBP_UI_BloodResonanceSingular_C_TooltipPotentialBlocked_Params
{
};

// Function TBP_UI_BloodResonanceSingular.TBP_UI_BloodResonanceSingular_C.ExecuteUbergraph_TBP_UI_BloodResonanceSingular
struct UTBP_UI_BloodResonanceSingular_C_ExecuteUbergraph_TBP_UI_BloodResonanceSingular_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
