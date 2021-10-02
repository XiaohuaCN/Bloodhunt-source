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

// Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.SetTigerCharacter
struct UTBP_UI_EnemyHealthBarDamageOnly_C_SetTigerCharacter_Params
{
	class ATigerCharacter*                             TigerCharacter;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Set Damage Amount
struct UTBP_UI_EnemyHealthBarDamageOnly_C_Set_Damage_Amount_Params
{
	struct FVector                                     InHitLocation;                                             // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                InDamageColor;                                             // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InTotalDamageAmount;                                       // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InHealthDamageAmount;                                      // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InHasExtraHealth;                                          // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               InHasShield;                                               // 0x0025(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                              InRangedDamageFalloffPercent;                              // 0x0028(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               InBelowLowHealthThreshold;                                 // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.UpdateCurrentDamageNumber
struct UTBP_UI_EnemyHealthBarDamageOnly_C_UpdateCurrentDamageNumber_Params
{
};

// Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Construct
struct UTBP_UI_EnemyHealthBarDamageOnly_C_Construct_Params
{
};

// Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.Tick
struct UTBP_UI_EnemyHealthBarDamageOnly_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_EnemyHealthBarDamageOnly.TBP_UI_EnemyHealthBarDamageOnly_C.ExecuteUbergraph_TBP_UI_EnemyHealthBarDamageOnly
struct UTBP_UI_EnemyHealthBarDamageOnly_C_ExecuteUbergraph_TBP_UI_EnemyHealthBarDamageOnly_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
