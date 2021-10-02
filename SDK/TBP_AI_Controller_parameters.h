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

// Function TBP_AI_Controller.TBP_AI_Controller_C.DebugStimulus
struct ATBP_AI_Controller_C_DebugStimulus_Params
{
	struct FAIStimulus                                 Stimulus;                                                  // 0x0000(0x003C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function TBP_AI_Controller.TBP_AI_Controller_C.HandleNonVampireStimulus
struct ATBP_AI_Controller_C_HandleNonVampireStimulus_Params
{
	struct FAIStimulus                                 Stimulus;                                                  // 0x0000(0x003C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function TBP_AI_Controller.TBP_AI_Controller_C.SyncKeysFromBlackboard
struct ATBP_AI_Controller_C_SyncKeysFromBlackboard_Params
{
};

// Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Police
struct ATBP_AI_Controller_C_InitBlackBoardBB_Police_Params
{
};

// Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Civilian
struct ATBP_AI_Controller_C_InitBlackBoardBB_Civilian_Params
{
};

// Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardBB_Entity
struct ATBP_AI_Controller_C_InitBlackBoardBB_Entity_Params
{
};

// Function TBP_AI_Controller.TBP_AI_Controller_C.InitBlackBoardValues
struct ATBP_AI_Controller_C_InitBlackBoardValues_Params
{
	Tiger_ETigerNPCType                                NPC_Type;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_AI_Controller.TBP_AI_Controller_C.ReceiveBeginPlay
struct ATBP_AI_Controller_C_ReceiveBeginPlay_Params
{
};

// Function TBP_AI_Controller.TBP_AI_Controller_C.BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature
struct ATBP_AI_Controller_C_BndEvt__AIPerception_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature_Params
{
	class AActor*                                      Actor;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAIStimulus                                 Stimulus;                                                  // 0x0008(0x003C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function TBP_AI_Controller.TBP_AI_Controller_C.ReceiveAnyDamage
struct ATBP_AI_Controller_C_ReceiveAnyDamage_Params
{
	float                                              Damage;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDamageType*                                 DamageType;                                                // 0x0008(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                                 InstigatedBy;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                      DamageCauser;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_AI_Controller.TBP_AI_Controller_C.SetupData
struct ATBP_AI_Controller_C_SetupData_Params
{
	Tiger_ETigerNPCType                                InNPCType;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_AI_Controller.TBP_AI_Controller_C.ExecuteUbergraph_TBP_AI_Controller
struct ATBP_AI_Controller_C_ExecuteUbergraph_TBP_AI_Controller_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
