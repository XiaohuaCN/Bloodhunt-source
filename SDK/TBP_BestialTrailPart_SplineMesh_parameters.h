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

// Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.Setup
struct UTBP_BestialTrailPart_SplineMesh_C_Setup_Params
{
	struct FVector                                     Start_Location;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End_Location;                                              // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                     End_Tangent;                                               // 0x0018(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              New_Dissappear_Time_Stamp;                                 // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.ScheduleFade
struct UTBP_BestialTrailPart_SplineMesh_C_ScheduleFade_Params
{
	float                                              Dissappear_At;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.Fade Out
struct UTBP_BestialTrailPart_SplineMesh_C_Fade_Out_Params
{
};

// Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.ExecuteUbergraph_TBP_BestialTrailPart_SplineMesh
struct UTBP_BestialTrailPart_SplineMesh_C_ExecuteUbergraph_TBP_BestialTrailPart_SplineMesh_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
