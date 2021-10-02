// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.Setup
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Start_Location                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     End_Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     End_Tangent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              New_Dissappear_Time_Stamp                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BestialTrailPart_SplineMesh_C::Setup(const struct FVector& Start_Location, const struct FVector& End_Location, const struct FVector& End_Tangent, float New_Dissappear_Time_Stamp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.Setup");

	UTBP_BestialTrailPart_SplineMesh_C_Setup_Params params;
	params.Start_Location = Start_Location;
	params.End_Location = End_Location;
	params.End_Tangent = End_Tangent;
	params.New_Dissappear_Time_Stamp = New_Dissappear_Time_Stamp;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.ScheduleFade
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              Dissappear_At                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BestialTrailPart_SplineMesh_C::ScheduleFade(float Dissappear_At)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.ScheduleFade");

	UTBP_BestialTrailPart_SplineMesh_C_ScheduleFade_Params params;
	params.Dissappear_At = Dissappear_At;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.Fade Out
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_BestialTrailPart_SplineMesh_C::Fade_Out()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.Fade Out");

	UTBP_BestialTrailPart_SplineMesh_C_Fade_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.ExecuteUbergraph_TBP_BestialTrailPart_SplineMesh
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_BestialTrailPart_SplineMesh_C::ExecuteUbergraph_TBP_BestialTrailPart_SplineMesh(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_BestialTrailPart_SplineMesh.TBP_BestialTrailPart_SplineMesh_C.ExecuteUbergraph_TBP_BestialTrailPart_SplineMesh");

	UTBP_BestialTrailPart_SplineMesh_C_ExecuteUbergraph_TBP_BestialTrailPart_SplineMesh_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
