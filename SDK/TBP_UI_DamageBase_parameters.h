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

// Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.HasExtraHealth
struct UTBP_UI_DamageBase_C_HasExtraHealth_Params
{
	class ATigerPlayer*                                Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               HasExtraHealth;                                            // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.GetWidgetColor
struct UTBP_UI_DamageBase_C_GetWidgetColor_Params
{
	class ATBP_Player_C*                               Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                Color;                                                     // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.CanHandleDirection
struct UTBP_UI_DamageBase_C_CanHandleDirection_Params
{
	struct FVector                                     DamageLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHandled;                                                 // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.OnDamage
struct UTBP_UI_DamageBase_C_OnDamage_Params
{
	struct FVector                                     DamageLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageAmount;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewHealthAmount;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHandled;                                                 // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_DamageBase.TBP_UI_DamageBase_C.IsAlive
struct UTBP_UI_DamageBase_C_IsAlive_Params
{
	bool                                               IsAlive;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
