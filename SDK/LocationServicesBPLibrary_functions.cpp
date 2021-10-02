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
//		Offset -> 0x00E5F6C0
//		Name   -> Function LocationServicesBPLibrary.LocationServices.StopLocationServices
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULocationServices::STATIC_StopLocationServices()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.StopLocationServices");

	ULocationServices_StopLocationServices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00E5F690
//		Name   -> Function LocationServicesBPLibrary.LocationServices.StartLocationServices
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULocationServices::STATIC_StartLocationServices()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.StartLocationServices");

	ULocationServices_StartLocationServices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00E5F610
//		Name   -> Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		LocationServicesBPLibrary_ELocationAccuracy        Accuracy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULocationServices::STATIC_IsLocationAccuracyAvailable(LocationServicesBPLibrary_ELocationAccuracy Accuracy)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable");

	ULocationServices_IsLocationAccuracyAvailable_Params params;
	params.Accuracy = Accuracy;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00E5F500
//		Name   -> Function LocationServicesBPLibrary.LocationServices.InitLocationServices
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		LocationServicesBPLibrary_ELocationAccuracy        Accuracy                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              UpdateFrequency                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              MinDistanceFilter                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULocationServices::STATIC_InitLocationServices(LocationServicesBPLibrary_ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.InitLocationServices");

	ULocationServices_InitLocationServices_Params params;
	params.Accuracy = Accuracy;
	params.UpdateFrequency = UpdateFrequency;
	params.MinDistanceFilter = MinDistanceFilter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00E5F4E0
//		Name   -> Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class ULocationServicesImpl*                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ULocationServicesImpl* ULocationServices::STATIC_GetLocationServicesImpl()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl");

	ULocationServices_GetLocationServicesImpl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00E5F4A0
//		Name   -> Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FLocationServicesData                       ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FLocationServicesData ULocationServices::STATIC_GetLastKnownLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.GetLastKnownLocation");

	ULocationServices_GetLastKnownLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00E5F470
//		Name   -> Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ULocationServices::STATIC_AreLocationServicesEnabled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled");

	ULocationServices_AreLocationServicesEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
