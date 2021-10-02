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
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass TBFL_Utilities.TBFL_Utilities_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTBFL_Utilities_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBFL_Utilities.TBFL_Utilities_C");
		return ptr;
	}



	void STATIC_SortFloatArray(TArray<float>* InputFloatArray, bool Descending, class UObject* __WorldContext, TArray<float>* OutputArray);
	void STATIC_DistanceToBox(const struct FVector& Position, const struct FVector& Bounds, class UObject* __WorldContext, float* Distance);
	void STATIC_Compute2DCentroid(TArray<struct FVector>* Array, class UObject* __WorldContext, struct FVector* OutCentroid);
	void STATIC_GetCurveValueVector(class UCurveVector* Curve, float Time, class UObject* __WorldContext, struct FVector* Value);
	void STATIC_GetCurveValueColor(class UCurveLinearColor* Curve, float Time, class UObject* __WorldContext, struct FLinearColor* Value);
	void STATIC_GetCurveValueFloat(class UCurveFloat* Curve, float Time, class UObject* __WorldContext, float* Value);
	void STATIC_ForceClampMax(int* Variable, int Max, class UObject* __WorldContext);
	void STATIC_ForceClamp(int* Variable, TArray<class UObject*>* Array, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
