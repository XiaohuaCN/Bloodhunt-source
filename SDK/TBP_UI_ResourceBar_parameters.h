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

// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnSegmentAdded
struct UTBP_UI_ResourceBar_C_OnSegmentAdded_Params
{
	int                                                InIndex;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_ResourceBarSegment_C*                InSegment;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                          InHorizontalBoxSlot;                                       // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.ClearSegments
struct UTBP_UI_ResourceBar_C_ClearSegments_Params
{
};

// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.CreateFlashEffect
struct UTBP_UI_ResourceBar_C_CreateFlashEffect_Params
{
	class UTBP_UI_FlashEffect_C*                       Output_Get;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnHealthLost
struct UTBP_UI_ResourceBar_C_OnHealthLost_Params
{
};

// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.OnSegmentEmptied
struct UTBP_UI_ResourceBar_C_OnSegmentEmptied_Params
{
	float                                              HorizontalProgress;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.RecycleFlashEffect
struct UTBP_UI_ResourceBar_C_RecycleFlashEffect_Params
{
	class UTBP_UI_FlashEffect_C*                       Finished_Effect;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.PreConstruct
struct UTBP_UI_ResourceBar_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ResourceBar.TBP_UI_ResourceBar_C.ExecuteUbergraph_TBP_UI_ResourceBar
struct UTBP_UI_ResourceBar_C_ExecuteUbergraph_TBP_UI_ResourceBar_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
