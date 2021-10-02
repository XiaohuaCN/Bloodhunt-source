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

// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.SwitchPersistentState
struct UTBP_UI_PlayerActionIndicator_C_SwitchPersistentState_Params
{
	TEnumAsByte<TBE_StatusBackground_ETBE_StatusBackground> InState;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.TriggerOneShotState
struct UTBP_UI_PlayerActionIndicator_C_TriggerOneShotState_Params
{
	class UTexture2D*                                  InTexture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            InAnimation;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.UpdateActiveStatus
struct UTBP_UI_PlayerActionIndicator_C_UpdateActiveStatus_Params
{
};

// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnBuffChanged
struct UTBP_UI_PlayerActionIndicator_C_OnBuffChanged_Params
{
	class UTigerBuff*                                  InBuff;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                InId;                                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InDuration;                                                // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnStoppedFeeding
struct UTBP_UI_PlayerActionIndicator_C_OnStoppedFeeding_Params
{
	bool                                               InWasAttacked;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class ATigerCharacter*                             InNPCFedOn;                                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnStartedFeeding
struct UTBP_UI_PlayerActionIndicator_C_OnStartedFeeding_Params
{
	float                                              InTravelTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnPlayerAction
struct UTBP_UI_PlayerActionIndicator_C_OnPlayerAction_Params
{
	Tiger_ETigerCharacterAction                        InPlayerAction;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.OnHealthChanged
struct UTBP_UI_PlayerActionIndicator_C_OnHealthChanged_Params
{
	class ATigerPlayer*                                InPlayer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InOldHealth;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              InNewHealth;                                               // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.SetPawn
struct UTBP_UI_PlayerActionIndicator_C_SetPawn_Params
{
	class APawn*                                       InPawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.Construct
struct UTBP_UI_PlayerActionIndicator_C_Construct_Params
{
};

// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.PreConstruct
struct UTBP_UI_PlayerActionIndicator_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_PlayerActionIndicator.TBP_UI_PlayerActionIndicator_C.ExecuteUbergraph_TBP_UI_PlayerActionIndicator
struct UTBP_UI_PlayerActionIndicator_C_ExecuteUbergraph_TBP_UI_PlayerActionIndicator_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
