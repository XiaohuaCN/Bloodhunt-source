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

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdateBloodSplatter
struct UTBP_UI_LowHealth_C_UpdateBloodSplatter_Params
{
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.IsLowHealth
struct UTBP_UI_LowHealth_C_IsLowHealth_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.StopLowHealthAudio
struct UTBP_UI_LowHealth_C_StopLowHealthAudio_Params
{
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.GetHitDirection
struct UTBP_UI_LowHealth_C_GetHitDirection_Params
{
	class ATBP_Player_C*                               Player;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     DamageLocation;                                            // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Output;                                                    // 0x0014(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnDamage
struct UTBP_UI_LowHealth_C_OnDamage_Params
{
	struct FVector                                     DamageLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              DamageAmount;                                              // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              NewHealthAmount;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               IsHandled;                                                 // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdatePulse
struct UTBP_UI_LowHealth_C_UpdatePulse_Params
{
	float                                              Delta_Seconds;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.UpdateLowHealthOverlay
struct UTBP_UI_LowHealth_C_UpdateLowHealthOverlay_Params
{
	float                                              Delta_Seconds;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.Construct
struct UTBP_UI_LowHealth_C_Construct_Params
{
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.Tick
struct UTBP_UI_LowHealth_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnExtraHealthDepleted
struct UTBP_UI_LowHealth_C_OnExtraHealthDepleted_Params
{
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExtraHealthAnimationFinished
struct UTBP_UI_LowHealth_C_ExtraHealthAnimationFinished_Params
{
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExtraHealthAnimationStarted
struct UTBP_UI_LowHealth_C_ExtraHealthAnimationStarted_Params
{
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.TakeDamageAnimationFinished
struct UTBP_UI_LowHealth_C_TakeDamageAnimationFinished_Params
{
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.TakeDamageAnimationStarted
struct UTBP_UI_LowHealth_C_TakeDamageAnimationStarted_Params
{
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.OnShieldDepleted
struct UTBP_UI_LowHealth_C_OnShieldDepleted_Params
{
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ShieldDepletedAnimationFinished
struct UTBP_UI_LowHealth_C_ShieldDepletedAnimationFinished_Params
{
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ShieldDepletedAnimationStarted
struct UTBP_UI_LowHealth_C_ShieldDepletedAnimationStarted_Params
{
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.PlayLowHealthOneShot
struct UTBP_UI_LowHealth_C_PlayLowHealthOneShot_Params
{
	float                                              NewHealth;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_LowHealth.TBP_UI_LowHealth_C.ExecuteUbergraph_TBP_UI_LowHealth
struct UTBP_UI_LowHealth_C_ExecuteUbergraph_TBP_UI_LowHealth_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
