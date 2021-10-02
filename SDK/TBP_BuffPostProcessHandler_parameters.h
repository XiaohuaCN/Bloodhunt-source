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

// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.GetConsumableBuffDuration
struct UTBP_BuffPostProcessHandler_C_GetConsumableBuffDuration_Params
{
	class UTigerConsumableAsset*                       InConsumable;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              OutDuration;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.GetConsumableID
struct UTBP_BuffPostProcessHandler_C_GetConsumableID_Params
{
	class UTigerConsumableAsset*                       InConsumable;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                OutID;                                                     // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.AddPostProcess
struct UTBP_BuffPostProcessHandler_C_AddPostProcess_Params
{
	class UClass*                                      PostProcess;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID;                                                        // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATBP_BuffPostProcess_Master_C*               PostProcessActor;                                          // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.ReceiveBeginPlay
struct UTBP_BuffPostProcessHandler_C_ReceiveBeginPlay_Params
{
};

// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffAdded
struct UTBP_BuffPostProcessHandler_C_OnBuffAdded_Params
{
	class UTigerBuff*                                  Buff;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID;                                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffRefreshed
struct UTBP_BuffPostProcessHandler_C_OnBuffRefreshed_Params
{
	class UTigerBuff*                                  Buff;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID;                                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnBuffRemoved
struct UTBP_BuffPostProcessHandler_C_OnBuffRemoved_Params
{
	class UTigerBuff*                                  Buff;                                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                ID;                                                        // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                  // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnClientBuffIdUpdated
struct UTBP_BuffPostProcessHandler_C_OnClientBuffIdUpdated_Params
{
	int                                                OldId;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int                                                NewId;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableStarted
struct UTBP_BuffPostProcessHandler_C_OnUseConsumableStarted_Params
{
	class UTigerConsumableAsset*                       Consumable;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableFinished
struct UTBP_BuffPostProcessHandler_C_OnUseConsumableFinished_Params
{
	class UTigerConsumableAsset*                       Consumable;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.OnUseConsumableCancelled
struct UTBP_BuffPostProcessHandler_C_OnUseConsumableCancelled_Params
{
	class UTigerConsumableAsset*                       Consumable;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BuffPostProcessHandler.TBP_BuffPostProcessHandler_C.ExecuteUbergraph_TBP_BuffPostProcessHandler
struct UTBP_BuffPostProcessHandler_C_ExecuteUbergraph_TBP_BuffPostProcessHandler_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
