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
//		Offset -> 0x00E4FD50
//		Name   -> Function AudioCapture.AudioCapture.StopCapturingAudio
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAudioCapture::StopCapturingAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StopCapturingAudio");

	UAudioCapture_StopCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00E4FD30
//		Name   -> Function AudioCapture.AudioCapture.StartCapturingAudio
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UAudioCapture::StartCapturingAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.StartCapturingAudio");

	UAudioCapture_StartCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00E4FD00
//		Name   -> Function AudioCapture.AudioCapture.IsCapturingAudio
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAudioCapture::IsCapturingAudio()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.IsCapturingAudio");

	UAudioCapture_IsCapturingAudio_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00E4FC60
//		Name   -> Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FAudioCaptureDeviceInfo                     OutInfo                                                    (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UAudioCapture::GetAudioCaptureDeviceInfo(struct FAudioCaptureDeviceInfo* OutInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCapture.GetAudioCaptureDeviceInfo");

	UAudioCapture_GetAudioCaptureDeviceInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInfo != nullptr)
		*OutInfo = params.OutInfo;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00E4FC30
//		Name   -> Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UAudioCapture*                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UAudioCapture* UAudioCaptureFunctionLibrary::STATIC_CreateAudioCapture()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function AudioCapture.AudioCaptureFunctionLibrary.CreateAudioCapture");

	UAudioCaptureFunctionLibrary_CreateAudioCapture_Params params;

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
