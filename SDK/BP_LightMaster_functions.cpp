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
//		Name   -> Function BP_LightMaster.BP_LightMaster_C.SetMaterialAndPrimitiveData
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector4                                    InColor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         InMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LightMaster_C::SetMaterialAndPrimitiveData(const struct FVector4& InColor, class UPrimitiveComponent* InMesh, int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMaster.BP_LightMaster_C.SetMaterialAndPrimitiveData");

	ABP_LightMaster_C_SetMaterialAndPrimitiveData_Params params;
	params.InColor = InColor;
	params.InMesh = InMesh;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMaster.BP_LightMaster_C.SetCDO
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_LightMaster_C::SetCDO()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMaster.BP_LightMaster_C.SetCDO");

	ABP_LightMaster_C_SetCDO_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMaster.BP_LightMaster_C.LineTraceLogic
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ABP_LightMaster_C::LineTraceLogic()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMaster.BP_LightMaster_C.LineTraceLogic");

	ABP_LightMaster_C_LineTraceLogic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMaster.BP_LightMaster_C.SetRainParticles
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               RainOn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ABP_LightMaster_C::SetRainParticles(bool RainOn)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMaster.BP_LightMaster_C.SetRainParticles");

	ABP_LightMaster_C_SetRainParticles_Params params;
	params.RainOn = RainOn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMaster.BP_LightMaster_C.LightColorSelection
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ULightComponent*                             Light                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                NewLightColor                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector4                                    NewEmissiveColor                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                LightColorInt                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LightMaster_C::LightColorSelection(class ULightComponent* Light, struct FLinearColor* NewLightColor, struct FVector4* NewEmissiveColor, int* LightColorInt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMaster.BP_LightMaster_C.LightColorSelection");

	ABP_LightMaster_C_LightColorSelection_Params params;
	params.Light = Light;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (NewLightColor != nullptr)
		*NewLightColor = params.NewLightColor;
	if (NewEmissiveColor != nullptr)
		*NewEmissiveColor = params.NewEmissiveColor;
	if (LightColorInt != nullptr)
		*LightColorInt = params.LightColorInt;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMaster.BP_LightMaster_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ABP_LightMaster_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMaster.BP_LightMaster_C.UserConstructionScript");

	ABP_LightMaster_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMaster.BP_LightMaster_C.UpdateWeatherComponents
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ABP_LightMaster_C::UpdateWeatherComponents()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMaster.BP_LightMaster_C.UpdateWeatherComponents");

	ABP_LightMaster_C_UpdateWeatherComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMaster.BP_LightMaster_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ABP_LightMaster_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMaster.BP_LightMaster_C.ReceiveBeginPlay");

	ABP_LightMaster_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMaster.BP_LightMaster_C.OnRebuild
//		Flags  -> (Event, Public, BlueprintEvent)
void ABP_LightMaster_C::OnRebuild()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMaster.BP_LightMaster_C.OnRebuild");

	ABP_LightMaster_C_OnRebuild_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function BP_LightMaster.BP_LightMaster_C.ExecuteUbergraph_BP_LightMaster
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ABP_LightMaster_C::ExecuteUbergraph_BP_LightMaster(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function BP_LightMaster.BP_LightMaster_C.ExecuteUbergraph_BP_LightMaster");

	ABP_LightMaster_C_ExecuteUbergraph_BP_LightMaster_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
