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
//		Offset -> 0x00E4A450
//		Name   -> Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UTexture*                                    SourceImage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWantColor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUseGpu                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AppleImageUtils_ETextureRotationDirection          Rotate                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForConvertToTIFF(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, AppleImageUtils_ETextureRotationDirection Rotate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF");

	UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToTIFF_Params params;
	params.SourceImage = SourceImage;
	params.bWantColor = bWantColor;
	params.bUseGpu = bUseGpu;
	params.Scale = Scale;
	params.Rotate = Rotate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00E4A290
//		Name   -> Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UTexture*                                    SourceImage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWantColor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUseGpu                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AppleImageUtils_ETextureRotationDirection          Rotate                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForConvertToPNG(class UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, AppleImageUtils_ETextureRotationDirection Rotate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG");

	UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToPNG_Params params;
	params.SourceImage = SourceImage;
	params.bWantColor = bWantColor;
	params.bUseGpu = bUseGpu;
	params.Scale = Scale;
	params.Rotate = Rotate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00E4A0B0
//		Name   -> Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UTexture*                                    SourceImage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Quality                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWantColor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUseGpu                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AppleImageUtils_ETextureRotationDirection          Rotate                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForConvertToJPEG(class UTexture* SourceImage, int Quality, bool bWantColor, bool bUseGpu, float Scale, AppleImageUtils_ETextureRotationDirection Rotate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG");

	UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToJPEG_Params params;
	params.SourceImage = SourceImage;
	params.Quality = Quality;
	params.bWantColor = bWantColor;
	params.bUseGpu = bUseGpu;
	params.Scale = Scale;
	params.Rotate = Rotate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00E49ED0
//		Name   -> Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UTexture*                                    SourceImage                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Quality                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bWantColor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bUseGpu                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		AppleImageUtils_ETextureRotationDirection          Rotate                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAppleImageUtilsBaseAsyncTaskBlueprintProxy* UAppleImageUtilsBaseAsyncTaskBlueprintProxy::STATIC_CreateProxyObjectForConvertToHEIF(class UTexture* SourceImage, int Quality, bool bWantColor, bool bUseGpu, float Scale, AppleImageUtils_ETextureRotationDirection Rotate)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF");

	UAppleImageUtilsBaseAsyncTaskBlueprintProxy_CreateProxyObjectForConvertToHEIF_Params params;
	params.SourceImage = SourceImage;
	params.Quality = Quality;
	params.bWantColor = bWantColor;
	params.bUseGpu = bUseGpu;
	params.Scale = Scale;
	params.Rotate = Rotate;

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
