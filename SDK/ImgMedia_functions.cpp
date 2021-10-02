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
//		Offset -> 0x00DE0270
//		Name   -> Function ImgMedia.ImgMediaSource.SetSequencePath
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Path                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UImgMediaSource::SetSequencePath(const struct FString& Path)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.SetSequencePath");

	UImgMediaSource_SetSequencePath_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00DE01B0
//		Name   -> Function ImgMedia.ImgMediaSource.GetSequencePath
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FString                                     ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UImgMediaSource::GetSequencePath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetSequencePath");

	UImgMediaSource_GetSequencePath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00DE00E0
//		Name   -> Function ImgMedia.ImgMediaSource.GetProxies
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		TArray<struct FString>                             OutProxies                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
void UImgMediaSource::GetProxies(TArray<struct FString>* OutProxies)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ImgMedia.ImgMediaSource.GetProxies");

	UImgMediaSource_GetProxies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutProxies != nullptr)
		*OutProxies = params.OutProxies;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
