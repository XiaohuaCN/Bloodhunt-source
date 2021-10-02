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
//		Name   -> Function TBFL_Utilities.TBFL_Utilities_C.SortFloatArray
//		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<float>                                      InputFloatArray                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		bool                                               Descending                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<float>                                      OutputArray                                                (Parm, OutParm)
void UTBFL_Utilities_C::STATIC_SortFloatArray(TArray<float>* InputFloatArray, bool Descending, class UObject* __WorldContext, TArray<float>* OutputArray)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_Utilities.TBFL_Utilities_C.SortFloatArray");

	UTBFL_Utilities_C_SortFloatArray_Params params;
	params.Descending = Descending;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InputFloatArray != nullptr)
		*InputFloatArray = params.InputFloatArray;
	if (OutputArray != nullptr)
		*OutputArray = params.OutputArray;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_Utilities.TBFL_Utilities_C.DistanceToBox
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		struct FVector                                     Position                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Bounds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Distance                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_Utilities_C::STATIC_DistanceToBox(const struct FVector& Position, const struct FVector& Bounds, class UObject* __WorldContext, float* Distance)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_Utilities.TBFL_Utilities_C.DistanceToBox");

	UTBFL_Utilities_C_DistanceToBox_Params params;
	params.Position = Position;
	params.Bounds = Bounds;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Distance != nullptr)
		*Distance = params.Distance;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_Utilities.TBFL_Utilities_C.Compute2DCentroid
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TArray<struct FVector>                             Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     OutCentroid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_Utilities_C::STATIC_Compute2DCentroid(TArray<struct FVector>* Array, class UObject* __WorldContext, struct FVector* OutCentroid)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_Utilities.TBFL_Utilities_C.Compute2DCentroid");

	UTBFL_Utilities_C_Compute2DCentroid_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
	if (OutCentroid != nullptr)
		*OutCentroid = params.OutCentroid;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueVector
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UCurveVector*                                Curve                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_Utilities_C::STATIC_GetCurveValueVector(class UCurveVector* Curve, float Time, class UObject* __WorldContext, struct FVector* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueVector");

	UTBFL_Utilities_C_GetCurveValueVector_Params params;
	params.Curve = Curve;
	params.Time = Time;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueColor
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UCurveLinearColor*                           Curve                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_Utilities_C::STATIC_GetCurveValueColor(class UCurveLinearColor* Curve, float Time, class UObject* __WorldContext, struct FLinearColor* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueColor");

	UTBFL_Utilities_C_GetCurveValueColor_Params params;
	params.Curve = Curve;
	params.Time = Time;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueFloat
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class UCurveFloat*                                 Curve                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Time                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_Utilities_C::STATIC_GetCurveValueFloat(class UCurveFloat* Curve, float Time, class UObject* __WorldContext, float* Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_Utilities.TBFL_Utilities_C.GetCurveValueFloat");

	UTBFL_Utilities_C_GetCurveValueFloat_Params params;
	params.Curve = Curve;
	params.Time = Time;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_Utilities.TBFL_Utilities_C.ForceClampMax
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Variable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Max                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_Utilities_C::STATIC_ForceClampMax(int* Variable, int Max, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_Utilities.TBFL_Utilities_C.ForceClampMax");

	UTBFL_Utilities_C_ForceClampMax_Params params;
	params.Max = Max;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Variable != nullptr)
		*Variable = params.Variable;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_Utilities.TBFL_Utilities_C.ForceClamp
//		Flags  -> (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                Variable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		TArray<class UObject*>                             Array                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_Utilities_C::STATIC_ForceClamp(int* Variable, TArray<class UObject*>* Array, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_Utilities.TBFL_Utilities_C.ForceClamp");

	UTBFL_Utilities_C_ForceClamp_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Variable != nullptr)
		*Variable = params.Variable;
	if (Array != nullptr)
		*Array = params.Array;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
