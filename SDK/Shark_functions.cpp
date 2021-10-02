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
//		Name   -> DelegateFunction Shark.SharkAccounts.SharkUsernameRegisteredQueryCallback__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               bInSuccess                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIsAvailable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bIsProfanity                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     InUsername                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USharkAccounts::SharkUsernameRegisteredQueryCallback__DelegateSignature(bool bInSuccess, bool bIsAvailable, bool bIsProfanity, const struct FString& InUsername)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction Shark.SharkAccounts.SharkUsernameRegisteredQueryCallback__DelegateSignature");

	USharkAccounts_SharkUsernameRegisteredQueryCallback__DelegateSignature_Params params;
	params.bInSuccess = bInSuccess;
	params.bIsAvailable = bIsAvailable;
	params.bIsProfanity = bIsProfanity;
	params.InUsername = InUsername;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> DelegateFunction Shark.SharkAccounts.SharkLoginCallback__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FSharkLoginResult                           InResult                                                   (Parm, NativeAccessSpecifierPublic)
void USharkAccounts::SharkLoginCallback__DelegateSignature(const struct FSharkLoginResult& InResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction Shark.SharkAccounts.SharkLoginCallback__DelegateSignature");

	USharkAccounts_SharkLoginCallback__DelegateSignature_Params params;
	params.InResult = InResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> DelegateFunction Shark.SharkAccounts.SharkEmailRegisteredQueryCallback__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		bool                                               bInSuccess                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bInRegistered                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     InEmail                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USharkAccounts::SharkEmailRegisteredQueryCallback__DelegateSignature(bool bInSuccess, bool bInRegistered, const struct FString& InEmail)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction Shark.SharkAccounts.SharkEmailRegisteredQueryCallback__DelegateSignature");

	USharkAccounts_SharkEmailRegisteredQueryCallback__DelegateSignature_Params params;
	params.bInSuccess = bInSuccess;
	params.bInRegistered = bInRegistered;
	params.InEmail = InEmail;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> DelegateFunction Shark.SharkAccounts.SharkAccountActionCallback__DelegateSignature
//		Flags  -> (Public, Delegate)
// Parameters:
//		struct FSharkAccountActionResult                   InResult                                                   (Parm, NativeAccessSpecifierPublic)
void USharkAccounts::SharkAccountActionCallback__DelegateSignature(const struct FSharkAccountActionResult& InResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction Shark.SharkAccounts.SharkAccountActionCallback__DelegateSignature");

	USharkAccounts_SharkAccountActionCallback__DelegateSignature_Params params;
	params.InResult = InResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0345C590
//		Name   -> Function Shark.SharkAccounts.SendRegistrationVerificationCode
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InEmail                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             InCallback                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void USharkAccounts::SendRegistrationVerificationCode(const struct FString& InEmail, const struct FScriptDelegate& InCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.SharkAccounts.SendRegistrationVerificationCode");

	USharkAccounts_SendRegistrationVerificationCode_Params params;
	params.InEmail = InEmail;
	params.InCallback = InCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0345C350
//		Name   -> Function Shark.SharkAccounts.RegisterAndLogin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FSharkAccountRegistrationData               InRegistrationData                                         (Parm, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             InCallback                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void USharkAccounts::RegisterAndLogin(const struct FSharkAccountRegistrationData& InRegistrationData, const struct FScriptDelegate& InCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.SharkAccounts.RegisterAndLogin");

	USharkAccounts_RegisterAndLogin_Params params;
	params.InRegistrationData = InRegistrationData;
	params.InCallback = InCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0345C200
//		Name   -> Function Shark.SharkAccounts.QueryUsernameRegisterStatus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InUsername                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             InCallback                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void USharkAccounts::QueryUsernameRegisterStatus(const struct FString& InUsername, const struct FScriptDelegate& InCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.SharkAccounts.QueryUsernameRegisterStatus");

	USharkAccounts_QueryUsernameRegisterStatus_Params params;
	params.InUsername = InUsername;
	params.InCallback = InCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0345C0B0
//		Name   -> Function Shark.SharkAccounts.QueryEmailRegisterStatus
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InEmail                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             InCallback                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void USharkAccounts::QueryEmailRegisterStatus(const struct FString& InEmail, const struct FScriptDelegate& InCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.SharkAccounts.QueryEmailRegisterStatus");

	USharkAccounts_QueryEmailRegisterStatus_Params params;
	params.InEmail = InEmail;
	params.InCallback = InCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0345C010
//		Name   -> Function Shark.SharkAccounts.PlatformLogin
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             InCallback                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void USharkAccounts::PlatformLogin(const struct FScriptDelegate& InCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.SharkAccounts.PlatformLogin");

	USharkAccounts_PlatformLogin_Params params;
	params.InCallback = InCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0345BE40
//		Name   -> Function Shark.SharkAccounts.Login
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InEmail                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     InPassword                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             InCallback                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void USharkAccounts::Login(const struct FString& InEmail, const struct FString& InPassword, const struct FScriptDelegate& InCallback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.SharkAccounts.Login");

	USharkAccounts_Login_Params params;
	params.InEmail = InEmail;
	params.InPassword = InPassword;
	params.InCallback = InCallback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0345D060
//		Name   -> Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector4
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Shark_ESharkCustomPrimitiveVector4DataName         CustomDataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector4                                    Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDoRuntimeUpdate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USharkBlueprintFunctionLibrary::STATIC_SetCustomPrimitiveDataVector4(class UPrimitiveComponent* PrimitiveComponent, Shark_ESharkCustomPrimitiveVector4DataName CustomDataName, const struct FVector4& Value, bool bDoRuntimeUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector4");

	USharkBlueprintFunctionLibrary_SetCustomPrimitiveDataVector4_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.CustomDataName = CustomDataName;
	params.Value = Value;
	params.bDoRuntimeUpdate = bDoRuntimeUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0345CF00
//		Name   -> Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector3
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Shark_ESharkCustomPrimitiveVector3DataName         CustomDataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDoRuntimeUpdate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USharkBlueprintFunctionLibrary::STATIC_SetCustomPrimitiveDataVector3(class UPrimitiveComponent* PrimitiveComponent, Shark_ESharkCustomPrimitiveVector3DataName CustomDataName, const struct FVector& Value, bool bDoRuntimeUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector3");

	USharkBlueprintFunctionLibrary_SetCustomPrimitiveDataVector3_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.CustomDataName = CustomDataName;
	params.Value = Value;
	params.bDoRuntimeUpdate = bDoRuntimeUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0345CDC0
//		Name   -> Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector2
//		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Shark_ESharkCustomPrimitiveVector2DataName         CustomDataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector2D                                   Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDoRuntimeUpdate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USharkBlueprintFunctionLibrary::STATIC_SetCustomPrimitiveDataVector2(class UPrimitiveComponent* PrimitiveComponent, Shark_ESharkCustomPrimitiveVector2DataName CustomDataName, const struct FVector2D& Value, bool bDoRuntimeUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector2");

	USharkBlueprintFunctionLibrary_SetCustomPrimitiveDataVector2_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.CustomDataName = CustomDataName;
	params.Value = Value;
	params.bDoRuntimeUpdate = bDoRuntimeUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0345CC70
//		Name   -> Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataFloat
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		Shark_ESharkCustomPrimitiveFloatDataName           CustomDataName                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bDoRuntimeUpdate                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USharkBlueprintFunctionLibrary::STATIC_SetCustomPrimitiveDataFloat(class UPrimitiveComponent* PrimitiveComponent, Shark_ESharkCustomPrimitiveFloatDataName CustomDataName, float Value, bool bDoRuntimeUpdate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataFloat");

	USharkBlueprintFunctionLibrary_SetCustomPrimitiveDataFloat_Params params;
	params.PrimitiveComponent = PrimitiveComponent;
	params.CustomDataName = CustomDataName;
	params.Value = Value;
	params.bDoRuntimeUpdate = bDoRuntimeUpdate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0345CBB0
//		Name   -> Function Shark.SharkBlueprintFunctionLibrary.SetCastDynamicShadows
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UPrimitiveComponent*                         InPrimitiveComponent                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               InValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void USharkBlueprintFunctionLibrary::STATIC_SetCastDynamicShadows(class UPrimitiveComponent* InPrimitiveComponent, bool InValue)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.SharkBlueprintFunctionLibrary.SetCastDynamicShadows");

	USharkBlueprintFunctionLibrary_SetCastDynamicShadows_Params params;
	params.InPrimitiveComponent = InPrimitiveComponent;
	params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> DelegateFunction Shark.SharkBlueprintFunctionLibrary.OnAssetsLoaded__DelegateSignature
//		Flags  -> (Public, Delegate, HasOutParms)
// Parameters:
//		TArray<class UObject*>                             InLoadedObjects                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
void USharkBlueprintFunctionLibrary::OnAssetsLoaded__DelegateSignature(TArray<class UObject*> InLoadedObjects)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction Shark.SharkBlueprintFunctionLibrary.OnAssetsLoaded__DelegateSignature");

	USharkBlueprintFunctionLibrary_OnAssetsLoaded__DelegateSignature_Params params;
	params.InLoadedObjects = InLoadedObjects;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0345CA80
//		Name   -> Function Shark.SharkBlueprintFunctionLibrary.LoadMultipleObjectsAsync
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FScriptDelegate                             OnLoaded                                                   (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
void USharkBlueprintFunctionLibrary::STATIC_LoadMultipleObjectsAsync(const struct FScriptDelegate& OnLoaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.SharkBlueprintFunctionLibrary.LoadMultipleObjectsAsync");

	USharkBlueprintFunctionLibrary_LoadMultipleObjectsAsync_Params params;
	params.OnLoaded = OnLoaded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0345D8F0
//		Name   -> Function Shark.ShMidasAdapter.Logout
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UShMidasAdapter::Logout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.ShMidasAdapter.Logout");

	UShMidasAdapter_Logout_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0345D8C0
//		Name   -> Function Shark.ShMidasAdapter.IsInitialized
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UShMidasAdapter::IsInitialized()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.ShMidasAdapter.IsInitialized");

	UShMidasAdapter_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0345D880
//		Name   -> Function Shark.ShMidasAdapter.GetPremiumCurrecyPacks
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FShMidasPremiumCurrencyPack>         ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
TArray<struct FShMidasPremiumCurrencyPack> UShMidasAdapter::GetPremiumCurrecyPacks()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.ShMidasAdapter.GetPremiumCurrecyPacks");

	UShMidasAdapter_GetPremiumCurrecyPacks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0345D6F0
//		Name   -> Function Shark.ShMidasAdapter.Buy
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     InItemId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     InCurrencyType                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                InNumItems                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FScriptDelegate                             InDelegate                                                 (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UShMidasAdapter::Buy(const struct FString& InItemId, const struct FString& InCurrencyType, int InNumItems, const struct FScriptDelegate& InDelegate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Shark.ShMidasAdapter.Buy");

	UShMidasAdapter_Buy_Params params;
	params.InItemId = InItemId;
	params.InCurrencyType = InCurrencyType;
	params.InNumItems = InNumItems;
	params.InDelegate = InDelegate;

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
