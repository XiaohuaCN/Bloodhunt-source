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

// Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.IsShown
struct UTBP_UI_HitMarker_C_IsShown_Params
{
	bool                                               bOutIsShown;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.ShowHitMarker
struct UTBP_UI_HitMarker_C_ShowHitMarker_Params
{
	struct FLinearColor                                In_Hit_Marker_Color;                                       // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPlayerWasDownedOrKilled;                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.Tick
struct UTBP_UI_HitMarker_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.Construct
struct UTBP_UI_HitMarker_C_Construct_Params
{
};

// Function TBP_UI_HitMarker.TBP_UI_HitMarker_C.ExecuteUbergraph_TBP_UI_HitMarker
struct UTBP_UI_HitMarker_C_ExecuteUbergraph_TBP_UI_HitMarker_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
