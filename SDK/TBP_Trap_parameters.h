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

// Function TBP_Trap.TBP_Trap_C.CreateWorldIcon
struct ATBP_Trap_C_CreateWorldIcon_Params
{
	class ATigerPlayerController*                      InPlayerController;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Discipline_Trap_WorldMarker_C*       OutWidget;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Trap.TBP_Trap_C.IsCharacterFriendlyWithDisciplineCaster
struct ATBP_Trap_C_IsCharacterFriendlyWithDisciplineCaster_Params
{
	class ATigerCharacter*                             OtherCharacter;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               Is_Friendly;                                               // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_Trap.TBP_Trap_C.GetWorldMarkerWidget
struct ATBP_Trap_C_GetWorldMarkerWidget_Params
{
	class UTBP_UI_Discipline_Trap_WorldMarker_C*       AsTBP_UI_Discipline_Trap_World_Marker;                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bSuccess;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_Trap.TBP_Trap_C.OnPlacedTrap
struct ATBP_Trap_C_OnPlacedTrap_Params
{
};

// Function TBP_Trap.TBP_Trap_C.OnActivatedTrap
struct ATBP_Trap_C_OnActivatedTrap_Params
{
};

// Function TBP_Trap.TBP_Trap_C.OnTriggeredTrap
struct ATBP_Trap_C_OnTriggeredTrap_Params
{
};

// Function TBP_Trap.TBP_Trap_C.TrapDestroy
struct ATBP_Trap_C_TrapDestroy_Params
{
};

// Function TBP_Trap.TBP_Trap_C.ReceiveTick
struct ATBP_Trap_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Trap.TBP_Trap_C.ReceiveBeginPlay
struct ATBP_Trap_C_ReceiveBeginPlay_Params
{
};

// Function TBP_Trap.TBP_Trap_C.ExecuteUbergraph_TBP_Trap
struct ATBP_Trap_C_ExecuteUbergraph_TBP_Trap_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
