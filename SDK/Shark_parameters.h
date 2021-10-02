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

// DelegateFunction Shark.SharkAccounts.SharkUsernameRegisteredQueryCallback__DelegateSignature
struct USharkAccounts_SharkUsernameRegisteredQueryCallback__DelegateSignature_Params
{
	bool                                               bInSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsAvailable;                                              // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsProfanity;                                              // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InUsername;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Shark.SharkAccounts.SharkLoginCallback__DelegateSignature
struct USharkAccounts_SharkLoginCallback__DelegateSignature_Params
{
	struct FSharkLoginResult                           InResult;                                                  // 0x0000(0x0098)  (Parm, NativeAccessSpecifierPublic)
};

// DelegateFunction Shark.SharkAccounts.SharkEmailRegisteredQueryCallback__DelegateSignature
struct USharkAccounts_SharkEmailRegisteredQueryCallback__DelegateSignature_Params
{
	bool                                               bInSuccess;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bInRegistered;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InEmail;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Shark.SharkAccounts.SharkAccountActionCallback__DelegateSignature
struct USharkAccounts_SharkAccountActionCallback__DelegateSignature_Params
{
	struct FSharkAccountActionResult                   InResult;                                                  // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
};

// Function Shark.SharkAccounts.SendRegistrationVerificationCode
struct USharkAccounts_SendRegistrationVerificationCode_Params
{
	struct FString                                     InEmail;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             InCallback;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Shark.SharkAccounts.RegisterAndLogin
struct USharkAccounts_RegisterAndLogin_Params
{
	struct FSharkAccountRegistrationData               InRegistrationData;                                        // 0x0000(0x0050)  (Parm, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             InCallback;                                                // 0x0050(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Shark.SharkAccounts.QueryUsernameRegisterStatus
struct USharkAccounts_QueryUsernameRegisterStatus_Params
{
	struct FString                                     InUsername;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             InCallback;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Shark.SharkAccounts.QueryEmailRegisterStatus
struct USharkAccounts_QueryEmailRegisterStatus_Params
{
	struct FString                                     InEmail;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             InCallback;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Shark.SharkAccounts.PlatformLogin
struct USharkAccounts_PlatformLogin_Params
{
	struct FScriptDelegate                             InCallback;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Shark.SharkAccounts.Login
struct USharkAccounts_Login_Params
{
	struct FString                                     InEmail;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InPassword;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             InCallback;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector4
struct USharkBlueprintFunctionLibrary_SetCustomPrimitiveDataVector4_Params
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Shark_ESharkCustomPrimitiveVector4DataName         CustomDataName;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4                                    Value;                                                     // 0x0010(0x0010)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoRuntimeUpdate;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector3
struct USharkBlueprintFunctionLibrary_SetCustomPrimitiveDataVector3_Params
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Shark_ESharkCustomPrimitiveVector3DataName         CustomDataName;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Value;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoRuntimeUpdate;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataVector2
struct USharkBlueprintFunctionLibrary_SetCustomPrimitiveDataVector2_Params
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Shark_ESharkCustomPrimitiveVector2DataName         CustomDataName;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Value;                                                     // 0x000C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoRuntimeUpdate;                                          // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Shark.SharkBlueprintFunctionLibrary.SetCustomPrimitiveDataFloat
struct USharkBlueprintFunctionLibrary_SetCustomPrimitiveDataFloat_Params
{
	class UPrimitiveComponent*                         PrimitiveComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Shark_ESharkCustomPrimitiveFloatDataName           CustomDataName;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDoRuntimeUpdate;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Shark.SharkBlueprintFunctionLibrary.SetCastDynamicShadows
struct USharkBlueprintFunctionLibrary_SetCastDynamicShadows_Params
{
	class UPrimitiveComponent*                         InPrimitiveComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               InValue;                                                   // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// DelegateFunction Shark.SharkBlueprintFunctionLibrary.OnAssetsLoaded__DelegateSignature
struct USharkBlueprintFunctionLibrary_OnAssetsLoaded__DelegateSignature_Params
{
	TArray<class UObject*>                             InLoadedObjects;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Shark.SharkBlueprintFunctionLibrary.LoadMultipleObjectsAsync
struct USharkBlueprintFunctionLibrary_LoadMultipleObjectsAsync_Params
{
	struct FScriptDelegate                             OnLoaded;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// Function Shark.ShMidasAdapter.Logout
struct UShMidasAdapter_Logout_Params
{
};

// Function Shark.ShMidasAdapter.IsInitialized
struct UShMidasAdapter_IsInitialized_Params
{
	bool                                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function Shark.ShMidasAdapter.GetPremiumCurrecyPacks
struct UShMidasAdapter_GetPremiumCurrecyPacks_Params
{
	TArray<struct FShMidasPremiumCurrencyPack>         ReturnValue;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function Shark.ShMidasAdapter.Buy
struct UShMidasAdapter_Buy_Params
{
	struct FString                                     InItemId;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     InCurrencyType;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InNumItems;                                                // 0x0020(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             InDelegate;                                                // 0x0024(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               ReturnValue;                                               // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
