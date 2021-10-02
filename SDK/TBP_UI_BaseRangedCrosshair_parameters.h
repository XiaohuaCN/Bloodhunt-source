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

// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetBrushAspect
struct UTBP_UI_BaseRangedCrosshair_C_GetBrushAspect_Params
{
	struct FSlateBrush                                 SlateBrush;                                                // 0x0000(0x0088)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	float                                              ReturnValue;                                               // 0x0088(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetFov
struct UTBP_UI_BaseRangedCrosshair_C_GetFov_Params
{
	float                                              OutFov;                                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupScalingCrosshairImage
struct UTBP_UI_BaseRangedCrosshair_C_SetupScalingCrosshairImage_Params
{
	struct FTigerWeaponScalingCrosshairSlot            ScalingCrosshairSlot;                                      // 0x0000(0x0090)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupCrosshairImage
struct UTBP_UI_BaseRangedCrosshair_C_SetupCrosshairImage_Params
{
	struct FTigerWeaponCrosshairSlot                   TigerWeaponCrosshairSlot;                                  // 0x0000(0x00B8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.SetupScopeVignette
struct UTBP_UI_BaseRangedCrosshair_C_SetupScopeVignette_Params
{
};

// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetAspectRatio
struct UTBP_UI_BaseRangedCrosshair_C_GetAspectRatio_Params
{
	float                                              ReturnValue;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.GetCrosshairScale
struct UTBP_UI_BaseRangedCrosshair_C_GetCrosshairScale_Params
{
	float                                              InScreenSpaceSpread;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InAspectRatio;                                             // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                                   Scale;                                                     // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.UpdateCrosshairPositions
struct UTBP_UI_BaseRangedCrosshair_C_UpdateCrosshairPositions_Params
{
};

// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.Tick
struct UTBP_UI_BaseRangedCrosshair_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.PreConstruct
struct UTBP_UI_BaseRangedCrosshair_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.OnInitialized
struct UTBP_UI_BaseRangedCrosshair_C_OnInitialized_Params
{
};

// Function TBP_UI_BaseRangedCrosshair.TBP_UI_BaseRangedCrosshair_C.ExecuteUbergraph_TBP_UI_BaseRangedCrosshair
struct UTBP_UI_BaseRangedCrosshair_C_ExecuteUbergraph_TBP_UI_BaseRangedCrosshair_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
