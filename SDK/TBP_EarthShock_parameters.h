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

// Function TBP_EarthShock.TBP_EarthShock_C.Set Indicator Location & Rotation
struct UTBP_EarthShock_C_Set_Indicator_Location___Rotation_Params
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_EarthShock.TBP_EarthShock_C.Set Indicator Visibility
struct UTBP_EarthShock_C_Set_Indicator_Visibility_Params
{
	bool                                               Has_Valid_Target_Location;                                 // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_EarthShock.TBP_EarthShock_C.Spawn Impact VFX Actor Check
struct UTBP_EarthShock_C_Spawn_Impact_VFX_Actor_Check_Params
{
};

// Function TBP_EarthShock.TBP_EarthShock_C.Set Variables
struct UTBP_EarthShock_C_Set_Variables_Params
{
	bool                                               Target_Is_Wall;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                                    Calculated_Rotation;                                       // 0x0004(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     Calculated_Position;                                       // 0x0010(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     Base_Position;                                             // 0x001C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_EarthShock.TBP_EarthShock_C.CalculateConeDirection
struct UTBP_EarthShock_C_CalculateConeDirection_Params
{
	struct FVector                                     ReturnValue;                                               // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_EarthShock.TBP_EarthShock_C.CalculateKnockbackForce
struct UTBP_EarthShock_C_CalculateKnockbackForce_Params
{
	class ATigerCharacter*                             InHitCharacter;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // 0x0008(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_EarthShock.TBP_EarthShock_C.EvaluateIsTargetLocationValid
struct UTBP_EarthShock_C_EvaluateIsTargetLocationValid_Params
{
	bool                                               bIsWall;                                                   // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                                  InHitSurface;                                              // 0x0004(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                               ReturnValue;                                               // 0x0090(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// Function TBP_EarthShock.TBP_EarthShock_C.GetLeapTime
struct UTBP_EarthShock_C_GetLeapTime_Params
{
	struct FVector                                     InLeapVector;                                              // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              ReturnValue;                                               // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_EarthShock.TBP_EarthShock_C.CalculateDecalLocationAndRotation
struct UTBP_EarthShock_C_CalculateDecalLocationAndRotation_Params
{
	struct FVector                                     TargetLocation;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     SurfaceNormal;                                             // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    Rotation;                                                  // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     DecalOffset;                                               // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_EarthShock.TBP_EarthShock_C.OnLanded
struct UTBP_EarthShock_C_OnLanded_Params
{
	struct FVector                                     InLocation;                                                // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InSurfaceNormal;                                           // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInTargetIsWall;                                           // 0x0018(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_EarthShock.TBP_EarthShock_C.OnRemoveTargetIndicator
struct UTBP_EarthShock_C_OnRemoveTargetIndicator_Params
{
};

// Function TBP_EarthShock.TBP_EarthShock_C.OnSpawnTargetIndicator
struct UTBP_EarthShock_C_OnSpawnTargetIndicator_Params
{
};

// Function TBP_EarthShock.TBP_EarthShock_C.OnTargetIndicatorUpdated
struct UTBP_EarthShock_C_OnTargetIndicatorUpdated_Params
{
	bool                                               bInHasTargetLocation;                                      // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                     InTargetLocation;                                          // 0x0004(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     InSurfaceNormal;                                           // 0x0010(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bInTargetIsWall;                                           // 0x001C(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_EarthShock.TBP_EarthShock_C.OnEnemyCharacterHit
struct UTBP_EarthShock_C_OnEnemyCharacterHit_Params
{
	class ATigerCharacter*                             InHitCharacter;                                            // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_EarthShock.TBP_EarthShock_C.ExecuteUbergraph_TBP_EarthShock
struct UTBP_EarthShock_C_ExecuteUbergraph_TBP_EarthShock_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
