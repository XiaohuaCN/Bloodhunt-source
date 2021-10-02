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

// Function TBP_MightyLeap.TBP_MightyLeap_C.GetTargetPosition
struct UTBP_MightyLeap_C_GetTargetPosition_Params
{
	struct FVector                                     PlayerEyeLocation;                                         // 0x0000(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                                    CameraRotation;                                            // 0x000C(0x000C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	float                                              JumpCheckDistance;                                         // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     ReturnValue;                                               // 0x001C(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_MightyLeap.TBP_MightyLeap_C.OnLeapEnded
struct UTBP_MightyLeap_C_OnLeapEnded_Params
{
};

// Function TBP_MightyLeap.TBP_MightyLeap_C.OnLeapStarted
struct UTBP_MightyLeap_C_OnLeapStarted_Params
{
};

// Function TBP_MightyLeap.TBP_MightyLeap_C.ExecuteUbergraph_TBP_MightyLeap
struct UTBP_MightyLeap_C_ExecuteUbergraph_TBP_MightyLeap_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
