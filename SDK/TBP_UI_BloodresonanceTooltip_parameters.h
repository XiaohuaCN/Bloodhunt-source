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

// Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.SetBloodType
struct UTBP_UI_BloodResonanceTooltip_C_SetBloodType_Params
{
	Tiger_ETigerBloodType                              InBloodType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.OnBloodResonanceAdded
struct UTBP_UI_BloodResonanceTooltip_C_OnBloodResonanceAdded_Params
{
	Tiger_ETigerBloodType                              InBloodType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.Construct
struct UTBP_UI_BloodResonanceTooltip_C_Construct_Params
{
};

// Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.OnBloodResonanceWasCappedAfterFeed
struct UTBP_UI_BloodResonanceTooltip_C_OnBloodResonanceWasCappedAfterFeed_Params
{
	Tiger_ETigerBloodType                              InBloodType;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerBloodResonanceBlockType                InBlockType;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BloodresonanceTooltip.TBP_UI_BloodResonanceTooltip_C.ExecuteUbergraph_TBP_UI_BloodResonanceTooltip
struct UTBP_UI_BloodResonanceTooltip_C_ExecuteUbergraph_TBP_UI_BloodResonanceTooltip_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
