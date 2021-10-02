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
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.GetPingInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTS_PingableActorInfo                       OutInfo                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Vehicle_01_C::GetPingInfo(struct FTS_PingableActorInfo* OutInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.GetPingInfo");

	ATBP_Vehicle_01_C_GetPingInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInfo != nullptr)
		*OutInfo = params.OutInfo;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.GetPingCategory
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       OutCategory                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Vehicle_01_C::GetPingCategory(struct FName* OutCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.GetPingCategory");

	ATBP_Vehicle_01_C_GetPingCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCategory != nullptr)
		*OutCategory = params.OutCategory;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.IsPolice
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               IsPolice                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Vehicle_01_C::IsPolice(bool* IsPolice)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.IsPolice");

	ATBP_Vehicle_01_C_IsPolice_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsPolice != nullptr)
		*IsPolice = params.IsPolice;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.AUDIO_RandomizeCarAlarms
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Vehicle_01_C::AUDIO_RandomizeCarAlarms()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.AUDIO_RandomizeCarAlarms");

	ATBP_Vehicle_01_C_AUDIO_RandomizeCarAlarms_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.SpawnGlassShatterEffect
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Vehicle_01_C::SpawnGlassShatterEffect(const struct FVector& Location)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SpawnGlassShatterEffect");

	ATBP_Vehicle_01_C_SpawnGlassShatterEffect_Params params;
	params.Location = Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.DisableAlarm
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Vehicle_01_C::DisableAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.DisableAlarm");

	ATBP_Vehicle_01_C_DisableAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.Set Custom Primitive Vector
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UStaticMeshComponent*>                Static_Meshes                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		bool                                               Runtime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		Shark_ESharkCustomPrimitiveVector3DataName         NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Vehicle_01_C::Set_Custom_Primitive_Vector(TArray<class UStaticMeshComponent*>* Static_Meshes, bool Runtime, Shark_ESharkCustomPrimitiveVector3DataName NewParam, const struct FVector& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.Set Custom Primitive Vector");

	ATBP_Vehicle_01_C_Set_Custom_Primitive_Vector_Params params;
	params.Runtime = Runtime;
	params.NewParam = NewParam;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Static_Meshes != nullptr)
		*Static_Meshes = params.Static_Meshes;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.Set Custom Primitive Float
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UStaticMeshComponent*>                Static_Meshes                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
//		bool                                               Runtime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		Shark_ESharkCustomPrimitiveFloatDataName           NewParam                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Vehicle_01_C::Set_Custom_Primitive_Float(TArray<class UStaticMeshComponent*>* Static_Meshes, bool Runtime, Shark_ESharkCustomPrimitiveFloatDataName NewParam, float Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.Set Custom Primitive Float");

	ATBP_Vehicle_01_C_Set_Custom_Primitive_Float_Params params;
	params.Runtime = Runtime;
	params.NewParam = NewParam;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Static_Meshes != nullptr)
		*Static_Meshes = params.Static_Meshes;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.IsEntity
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool ATBP_Vehicle_01_C::IsEntity()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.IsEntity");

	ATBP_Vehicle_01_C_IsEntity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetFrontLightColor
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerSpotLightComponent*                    TigerSpotLight                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerSpotLightComponent*                    OutTigerSpotLight                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Vehicle_01_C::SetFrontLightColor(class UTigerSpotLightComponent* TigerSpotLight, class UTigerSpotLightComponent** OutTigerSpotLight)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetFrontLightColor");

	ATBP_Vehicle_01_C_SetFrontLightColor_Params params;
	params.TigerSpotLight = TigerSpotLight;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutTigerSpotLight != nullptr)
		*OutTigerSpotLight = params.OutTigerSpotLight;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetCustomPrimitiveData
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Vehicle_01_C::SetCustomPrimitiveData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetCustomPrimitiveData");

	ATBP_Vehicle_01_C_SetCustomPrimitiveData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetCollision
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Vehicle_01_C::SetCollision()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetCollision");

	ATBP_Vehicle_01_C_SetCollision_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetBranding
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Vehicle_01_C::SetBranding()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetBranding");

	ATBP_Vehicle_01_C_SetBranding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetUntintedColors
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UStaticMeshComponent*>                Meshes                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void ATBP_Vehicle_01_C::SetUntintedColors(TArray<class UStaticMeshComponent*>* Meshes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetUntintedColors");

	ATBP_Vehicle_01_C_SetUntintedColors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Meshes != nullptr)
		*Meshes = params.Meshes;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetColorTintPresets
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Vehicle_01_C::SetColorTintPresets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetColorTintPresets");

	ATBP_Vehicle_01_C_SetColorTintPresets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetMeshComponents
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Vehicle_01_C::SetMeshComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetMeshComponents");

	ATBP_Vehicle_01_C_SetMeshComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetParametersPerVehicle
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Vehicle_01_C::SetParametersPerVehicle()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.SetParametersPerVehicle");

	ATBP_Vehicle_01_C_SetParametersPerVehicle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.PlaceObjects
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Vehicle_01_C::PlaceObjects()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.PlaceObjects");

	ATBP_Vehicle_01_C_PlaceObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.CustomizableElements
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UStaticMeshComponent*>                Meshes                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void ATBP_Vehicle_01_C::CustomizableElements(TArray<class UStaticMeshComponent*>* Meshes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.CustomizableElements");

	ATBP_Vehicle_01_C_CustomizableElements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Meshes != nullptr)
		*Meshes = params.Meshes;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.Color
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TArray<class UStaticMeshComponent*>                Meshes                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
void ATBP_Vehicle_01_C::Color(TArray<class UStaticMeshComponent*>* Meshes)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.Color");

	ATBP_Vehicle_01_C_Color_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Meshes != nullptr)
		*Meshes = params.Meshes;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.TurnLightsOnOrOff
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               IsRuntime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Vehicle_01_C::TurnLightsOnOrOff(bool IsRuntime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.TurnLightsOnOrOff");

	ATBP_Vehicle_01_C_TurnLightsOnOrOff_Params params;
	params.IsRuntime = IsRuntime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_Vehicle_01_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.UserConstructionScript");

	ATBP_Vehicle_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.Timeline_0__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Vehicle_01_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.Timeline_0__FinishedFunc");

	ATBP_Vehicle_01_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.Timeline_0__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Vehicle_01_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.Timeline_0__UpdateFunc");

	ATBP_Vehicle_01_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.StaticMeshComponentHit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		struct FVector                                     ImpactVelocity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Vehicle_01_C::StaticMeshComponentHit(const struct FHitResult& HitResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.StaticMeshComponentHit");

	ATBP_Vehicle_01_C_StaticMeshComponentHit_Params params;
	params.HitResult = HitResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Vehicle_01_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.ReceiveBeginPlay");

	ATBP_Vehicle_01_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnBeginCharacterOverlap
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		class ATigerCharacter*                             OverlappingCharacter                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                TotalOverlapCount                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Vehicle_01_C::OnBeginCharacterOverlap(class ATigerCharacter* OverlappingCharacter, int TotalOverlapCount)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnBeginCharacterOverlap");

	ATBP_Vehicle_01_C_OnBeginCharacterOverlap_Params params;
	params.OverlappingCharacter = OverlappingCharacter;
	params.TotalOverlapCount = TotalOverlapCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnObjectActivated
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Vehicle_01_C::OnObjectActivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnObjectActivated");

	ATBP_Vehicle_01_C_OnObjectActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnObjectDeactivated
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Vehicle_01_C::OnObjectDeactivated()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnObjectDeactivated");

	ATBP_Vehicle_01_C_OnObjectDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnRebuild
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_Vehicle_01_C::OnRebuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.OnRebuild");

	ATBP_Vehicle_01_C_OnRebuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.ActivateAlarm
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_Vehicle_01_C::ActivateAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.ActivateAlarm");

	ATBP_Vehicle_01_C_ActivateAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.TriggerAlarm
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Vehicle_01_C::TriggerAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.TriggerAlarm");

	ATBP_Vehicle_01_C_TriggerAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Vehicle_01.TBP_Vehicle_01_C.ExecuteUbergraph_TBP_Vehicle_01
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Vehicle_01_C::ExecuteUbergraph_TBP_Vehicle_01(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Vehicle_01.TBP_Vehicle_01_C.ExecuteUbergraph_TBP_Vehicle_01");

	ATBP_Vehicle_01_C_ExecuteUbergraph_TBP_Vehicle_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
