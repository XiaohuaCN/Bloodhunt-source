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

// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnShieldBreakUI
struct UTBP_UI_DamageNumber_C_OnShieldBreakUI_Params
{
};

// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnExtraHelathBreakUI
struct UTBP_UI_DamageNumber_C_OnExtraHelathBreakUI_Params
{
};

// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdateFontSize
struct UTBP_UI_DamageNumber_C_UpdateFontSize_Params
{
};

// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.StartMoving
struct UTBP_UI_DamageNumber_C_StartMoving_Params
{
};

// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdatePosition
struct UTBP_UI_DamageNumber_C_UpdatePosition_Params
{
	float                                              InDeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.UpdateNumber
struct UTBP_UI_DamageNumber_C_UpdateNumber_Params
{
	struct FVector                                     InWorldSpawnPosition;                                      // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InDamageAmount;                                            // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                InDamageColor;                                             // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InHealthLeft;                                              // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InHasExtraHealth;                                          // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InHasShield;                                               // 0x0025(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InRangedDamageFalloffPercent;                              // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InBelowLowHealthThreshold;                                 // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.Tick
struct UTBP_UI_DamageNumber_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.OnAnimationFinished
struct UTBP_UI_DamageNumber_C_OnAnimationFinished_Params
{
	class UWidgetAnimation*                            Animation;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.Construct
struct UTBP_UI_DamageNumber_C_Construct_Params
{
};

// Function TBP_UI_DamageNumber.TBP_UI_DamageNumber_C.ExecuteUbergraph_TBP_UI_DamageNumber
struct UTBP_UI_DamageNumber_C_ExecuteUbergraph_TBP_UI_DamageNumber_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
