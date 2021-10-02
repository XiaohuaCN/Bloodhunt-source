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
//		Name   -> Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_M_Awnings_Master
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         PrimitiveComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     AlbedoMultiplier                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              EmissiveIntensity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              EmissiveLightTextureInfluence                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              EmissiveBGTexture                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SetPrimitiveData_C::STATIC_SetPrimitiveData_M_Awnings_Master(class UPrimitiveComponent* PrimitiveComponent, const struct FVector& AlbedoMultiplier, float EmissiveIntensity, float EmissiveLightTextureInfluence, float EmissiveBGTexture, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_M_Awnings_Master");

	UTBFL_SetPrimitiveData_C_SetPrimitiveData_M_Awnings_Master_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.AlbedoMultiplier = AlbedoMultiplier;
	params.EmissiveIntensity = EmissiveIntensity;
	params.EmissiveLightTextureInfluence = EmissiveLightTextureInfluence;
	params.EmissiveBGTexture = EmissiveBGTexture;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_M_Decal_Master
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         PrimitiveComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              FakeIntensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SetPrimitiveData_C::STATIC_SetPrimitiveData_M_Decal_Master(class UPrimitiveComponent* PrimitiveComponent, const struct FVector& Color, float Alpha, float FakeIntensity, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_M_Decal_Master");

	UTBFL_SetPrimitiveData_C_SetPrimitiveData_M_Decal_Master_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.Color = Color;
	params.Alpha = Alpha;
	params.FakeIntensity = FakeIntensity;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_MI_ShopWindGlass_01
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         PrimitiveComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Color1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Color2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Emissive_Color                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Emissive_Multiplier                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SetPrimitiveData_C::STATIC_SetPrimitiveData_MI_ShopWindGlass_01(class UPrimitiveComponent* PrimitiveComponent, const struct FVector& Color1, const struct FVector& Color2, const struct FVector& Emissive_Color, float Emissive_Multiplier, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_MI_ShopWindGlass_01");

	UTBFL_SetPrimitiveData_C_SetPrimitiveData_MI_ShopWindGlass_01_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.Color1 = Color1;
	params.Color2 = Color2;
	params.Emissive_Color = Emissive_Color;
	params.Emissive_Multiplier = Emissive_Multiplier;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_M_Basic_Master
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         PrimitiveComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Color1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Color2                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector2D                                   UV_Scale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Emissive_Color                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Roughness_Offset                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Albedo_Hue_Shift                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Deffuse_Desaturation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_SetPrimitiveData_C::STATIC_SetPrimitiveData_M_Basic_Master(class UPrimitiveComponent* PrimitiveComponent, const struct FVector& Color1, const struct FVector& Color2, const struct FVector2D& UV_Scale, const struct FVector& Emissive_Color, float Roughness_Offset, float Albedo_Hue_Shift, float Deffuse_Desaturation, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_SetPrimitiveData.TBFL_SetPrimitiveData_C.SetPrimitiveData_M_Basic_Master");

	UTBFL_SetPrimitiveData_C_SetPrimitiveData_M_Basic_Master_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.Color1 = Color1;
	params.Color2 = Color2;
	params.UV_Scale = UV_Scale;
	params.Emissive_Color = Emissive_Color;
	params.Roughness_Offset = Roughness_Offset;
	params.Albedo_Hue_Shift = Albedo_Hue_Shift;
	params.Deffuse_Desaturation = Deffuse_Desaturation;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
