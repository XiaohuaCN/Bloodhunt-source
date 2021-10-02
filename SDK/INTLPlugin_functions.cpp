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
//		Offset -> 0x00BC5F00
//		Name   -> Function INTLPlugin.INTLOutputUtility.FormatVerifyCodeStatusRet
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FINTLVerifyCodeStatusResult                 Ret                                                        (ConstParm, Parm, NativeAccessSpecifierPublic)
//		bool                                               IsSuccess                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       ErrorMsg                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
void UINTLOutputUtility::STATIC_FormatVerifyCodeStatusRet(const struct FINTLVerifyCodeStatusResult& Ret, bool* IsSuccess, struct FText* ErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLOutputUtility.FormatVerifyCodeStatusRet");

	UINTLOutputUtility_FormatVerifyCodeStatusRet_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (ErrorMsg != nullptr)
		*ErrorMsg = params.ErrorMsg;

}


// Function:
//		Offset -> 0x00BC5B50
//		Name   -> Function INTLPlugin.INTLOutputUtility.FormatNoticeRet
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FINTLNoticeResult                           Ret                                                        (ConstParm, Parm, NativeAccessSpecifierPublic)
//		bool                                               IsSuccess                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       ErrorMsg                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
void UINTLOutputUtility::STATIC_FormatNoticeRet(const struct FINTLNoticeResult& Ret, bool* IsSuccess, struct FText* ErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLOutputUtility.FormatNoticeRet");

	UINTLOutputUtility_FormatNoticeRet_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (ErrorMsg != nullptr)
		*ErrorMsg = params.ErrorMsg;

}


// Function:
//		Offset -> 0x00BC58D0
//		Name   -> Function INTLPlugin.INTLOutputUtility.FormatBaseRet
//		Flags  -> (Final, BlueprintCosmetic, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FINTLBaseResult                             Ret                                                        (ConstParm, Parm, NativeAccessSpecifierPublic)
//		bool                                               IsSuccess                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       ErrorMsg                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
void UINTLOutputUtility::STATIC_FormatBaseRet(const struct FINTLBaseResult& Ret, bool* IsSuccess, struct FText* ErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLOutputUtility.FormatBaseRet");

	UINTLOutputUtility_FormatBaseRet_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (ErrorMsg != nullptr)
		*ErrorMsg = params.ErrorMsg;

}


// Function:
//		Offset -> 0x00BC51B0
//		Name   -> Function INTLPlugin.INTLOutputUtility.FormatAuthRet
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FINTLAuthResult                             Ret                                                        (ConstParm, Parm, NativeAccessSpecifierPublic)
//		bool                                               IsSuccess                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FText                                       ErrorMsg                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
void UINTLOutputUtility::STATIC_FormatAuthRet(const struct FINTLAuthResult& Ret, bool* IsSuccess, struct FText* ErrorMsg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLOutputUtility.FormatAuthRet");

	UINTLOutputUtility_FormatAuthRet_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IsSuccess != nullptr)
		*IsSuccess = params.IsSuccess;
	if (ErrorMsg != nullptr)
		*ErrorMsg = params.ErrorMsg;

}


// Function:
//		Offset -> 0x00BD5840
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnWebViewResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLWebViewResult                          Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnWebViewResult(const struct FINTLWebViewResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnWebViewResult");

	UINTLPluginObserver_OnWebViewResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD56C0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnUpdateStartRepoNewVersionInfoResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLUpdateStartRepoNewVersionInfo          Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnUpdateStartRepoNewVersionInfoResult(const struct FINTLUpdateStartRepoNewVersionInfo& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnUpdateStartRepoNewVersionInfoResult");

	UINTLPluginObserver_OnUpdateStartRepoNewVersionInfoResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD54F0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnUpdateResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLUpdateResult                           Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnUpdateResult(const struct FINTLUpdateResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnUpdateResult");

	UINTLPluginObserver_OnUpdateResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD5380
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnUpdateProgressResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLUpdateProgress                         Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnUpdateProgressResult(const struct FINTLUpdateProgress& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnUpdateProgressResult");

	UINTLPluginObserver_OnUpdateProgressResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD51B0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnUpdateOptionalRepoInitResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLUpdateOptionalRepoInitResult           Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnUpdateOptionalRepoInitResult(const struct FINTLUpdateOptionalRepoInitResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnUpdateOptionalRepoInitResult");

	UINTLPluginObserver_OnUpdateOptionalRepoInitResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD4FC0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnShowAccountPicker
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLBaseResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnShowAccountPicker(const struct FINTLBaseResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnShowAccountPicker");

	UINTLPluginObserver_OnShowAccountPicker_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD4E00
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnResetPassword
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLBaseResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnResetPassword(const struct FINTLBaseResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnResetPassword");

	UINTLPluginObserver_OnResetPassword_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD4C40
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnRequestVerifyCode
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLVerifyCodeStatusResult                 Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnRequestVerifyCode(const struct FINTLVerifyCodeStatusResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnRequestVerifyCode");

	UINTLPluginObserver_OnRequestVerifyCode_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD4A80
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnQueryVerifyCodeStatus
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLVerifyCodeStatusResult                 Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnQueryVerifyCodeStatus(const struct FINTLVerifyCodeStatusResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnQueryVerifyCodeStatus");

	UINTLPluginObserver_OnQueryVerifyCodeStatus_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD4870
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnQueryUserInfo
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLAuthResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnQueryUserInfo(const struct FINTLAuthResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnQueryUserInfo");

	UINTLPluginObserver_OnQueryUserInfo_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD46A0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnQueryRegisterStatus
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLRegisterStatusResult                   Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnQueryRegisterStatus(const struct FINTLRegisterStatusResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnQueryRegisterStatus");

	UINTLPluginObserver_OnQueryRegisterStatus_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD44E0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnQueryIsReceiveEmail
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLIsReceiveEmailResult                   Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnQueryIsReceiveEmail(const struct FINTLIsReceiveEmailResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnQueryIsReceiveEmail");

	UINTLPluginObserver_OnQueryIsReceiveEmail_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD4320
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnQueryActiveUser
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLBaseResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnQueryActiveUser(const struct FINTLBaseResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnQueryActiveUser");

	UINTLPluginObserver_OnQueryActiveUser_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD4110
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnPushResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLPushResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnPushResult(const struct FINTLPushResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnPushResult");

	UINTLPluginObserver_OnPushResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD3F50
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnPushBaseResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLBaseResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnPushBaseResult(const struct FINTLBaseResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnPushBaseResult");

	UINTLPluginObserver_OnPushBaseResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD3C90
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnNoticeRequestData
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLNoticeResult                           Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnNoticeRequestData(const struct FINTLNoticeResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnNoticeRequestData");

	UINTLPluginObserver_OnNoticeRequestData_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD3AD0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnNeedRefreshUser
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLBaseResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnNeedRefreshUser(const struct FINTLBaseResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnNeedRefreshUser");

	UINTLPluginObserver_OnNeedRefreshUser_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD3910
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnModifyProfile
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLBaseResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnModifyProfile(const struct FINTLBaseResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnModifyProfile");

	UINTLPluginObserver_OnModifyProfile_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD3750
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnModifyAccount
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLBaseResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnModifyAccount(const struct FINTLBaseResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnModifyAccount");

	UINTLPluginObserver_OnModifyAccount_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD3590
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnLogout
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLBaseResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnLogout(const struct FINTLBaseResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnLogout");

	UINTLPluginObserver_OnLogout_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD3370
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnLoginWithMappedChannel
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLAuthResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnLoginWithMappedChannel(const struct FINTLAuthResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnLoginWithMappedChannel");

	UINTLPluginObserver_OnLoginWithMappedChannel_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD3150
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnLoginWithBoundChannel
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLAuthResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnLoginWithBoundChannel(const struct FINTLAuthResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnLoginWithBoundChannel");

	UINTLPluginObserver_OnLoginWithBoundChannel_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD2F40
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnLogin
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLAuthResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnLogin(const struct FINTLAuthResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnLogin");

	UINTLPluginObserver_OnLogin_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD2CD0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnIPInfoResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLLBSIPInfoResult                        Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnIPInfoResult(const struct FINTLLBSIPInfoResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnIPInfoResult");

	UINTLPluginObserver_OnIPInfoResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD2AC0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnIDTokenResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLIDTokenResult                          Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnIDTokenResult(const struct FINTLIDTokenResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnIDTokenResult");

	UINTLPluginObserver_OnIDTokenResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD2840
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnFriendResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLFriendResult                           Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnFriendResult(const struct FINTLFriendResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnFriendResult");

	UINTLPluginObserver_OnFriendResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD2680
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnFriendBaseResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLBaseResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnFriendBaseResult(const struct FINTLBaseResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnFriendBaseResult");

	UINTLPluginObserver_OnFriendBaseResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD2470
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnExtendResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLExtendResult                           Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnExtendResult(const struct FINTLExtendResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnExtendResult");

	UINTLPluginObserver_OnExtendResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD1CF0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnDNSResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLDNSResult                              Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnDNSResult(const struct FINTLDNSResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnDNSResult");

	UINTLPluginObserver_OnDNSResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD23E0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnDismissLoginUI
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               Canceled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnDismissLoginUI(bool Canceled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnDismissLoginUI");

	UINTLPluginObserver_OnDismissLoginUI_Params params;
	params.Canceled = Canceled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD2160
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnDirTreeResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLDirTreeResult                          Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnDirTreeResult(const struct FINTLDirTreeResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnDirTreeResult");

	UINTLPluginObserver_OnDirTreeResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD1FA0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnDeviceLevelResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLDeviceLevelResult                      Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnDeviceLevelResult(const struct FINTLDeviceLevelResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnDeviceLevelResult");

	UINTLPluginObserver_OnDeviceLevelResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD1AA0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnCutoutResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FCutoutInfoResult                           Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnCutoutResult(const struct FCutoutInfoResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnCutoutResult");

	UINTLPluginObserver_OnCutoutResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD18D0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnCustomerResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLCustomerResult                         Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnCustomerResult(const struct FINTLCustomerResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnCustomerResult");

	UINTLPluginObserver_OnCustomerResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD1760
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnComplianceResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLComplianceResult                       Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnComplianceResult(const struct FINTLComplianceResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnComplianceResult");

	UINTLPluginObserver_OnComplianceResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD1540
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnBuildMapWithLoggedinChannel
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLAuthResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnBuildMapWithLoggedinChannel(const struct FINTLAuthResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnBuildMapWithLoggedinChannel");

	UINTLPluginObserver_OnBuildMapWithLoggedinChannel_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD1320
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnBindWithLoggedinChannel
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLAuthResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnBindWithLoggedinChannel(const struct FINTLAuthResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnBindWithLoggedinChannel");

	UINTLPluginObserver_OnBindWithLoggedinChannel_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD1110
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnBind
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLAuthResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnBind(const struct FINTLAuthResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnBind");

	UINTLPluginObserver_OnBind_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD0F00
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnAutoLogin
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLAuthResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnAutoLogin(const struct FINTLAuthResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnAutoLogin");

	UINTLPluginObserver_OnAutoLogin_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD0CE0
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnAuthResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLAuthResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnAuthResult(const struct FINTLAuthResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnAuthResult");

	UINTLPluginObserver_OnAuthResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD0B20
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnAuthBaseResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLBaseResult                             Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnAuthBaseResult(const struct FINTLBaseResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnAuthBaseResult");

	UINTLPluginObserver_OnAuthBaseResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD0940
//		Name   -> Function INTLPlugin.INTLPluginObserver.OnAccountResult
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FINTLAccountResult                          Ret                                                        (Parm, NativeAccessSpecifierPublic)
void UINTLPluginObserver::OnAccountResult(const struct FINTLAccountResult& Ret)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLPluginObserver.OnAccountResult");

	UINTLPluginObserver_OnAccountResult_Params params;
	params.Ret = Ret;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BDA130
//		Name   -> Function INTLPlugin.INTLSDKAPI.UpdateStop
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                RepoID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                TaskID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_UpdateStop(int RepoID, int TaskID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.UpdateStop");

	UINTLSDKAPI_UpdateStop_Params params;
	params.RepoID = RepoID;
	params.TaskID = TaskID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD9FD0
//		Name   -> Function INTLPlugin.INTLSDKAPI.UpdateStart
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FINTLUpdateInitInfo                         Info                                                       (Parm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_UpdateStart(const struct FINTLUpdateInitInfo& Info)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.UpdateStart");

	UINTLSDKAPI_UpdateStart_Params params;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD9F40
//		Name   -> Function INTLPlugin.INTLSDKAPI.UpdateContinue
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                RepoID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_UpdateContinue(int RepoID)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.UpdateContinue");

	UINTLSDKAPI_UpdateContinue_Params params;
	params.RepoID = RepoID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD9D70
//		Name   -> Function INTLPlugin.INTLSDKAPI.UpdateConfig
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		TMap<struct FString, struct FString>               Cfg                                                        (Parm, NativeAccessSpecifierPublic)
//		struct FString                                     Project                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_UpdateConfig(TMap<struct FString, struct FString> Cfg, const struct FString& Project)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.UpdateConfig");

	UINTLSDKAPI_UpdateConfig_Params params;
	params.Cfg = Cfg;
	params.Project = Project;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD9C90
//		Name   -> Function INTLPlugin.INTLSDKAPI.UnregisterPush
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Channel                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_UnregisterPush(const struct FString& Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.UnregisterPush");

	UINTLSDKAPI_UnregisterPush_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD9AE0
//		Name   -> Function INTLPlugin.INTLSDKAPI.Unbind
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EINTLLoginChannel                       Channel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     UID                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_Unbind(INTLPlugin_EINTLLoginChannel Channel, const struct FString& UID, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.Unbind");

	UINTLSDKAPI_Unbind_Params params;
	params.Channel = Channel;
	params.UID = UID;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD9AB0
//		Name   -> Function INTLPlugin.INTLSDKAPI.ShowAccountPicker
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_ShowAccountPicker()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ShowAccountPicker");

	UINTLSDKAPI_ShowAccountPicker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD8EC0
//		Name   -> Function INTLPlugin.INTLSDKAPI.Share
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FINTLFriendReqInfo                          Info                                                       (ConstParm, Parm, NativeAccessSpecifierPublic)
//		struct FString                                     Channel                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_Share(const struct FINTLFriendReqInfo& Info, const struct FString& Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.Share");

	UINTLSDKAPI_Share_Params params;
	params.Info = Info;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD9940
//		Name   -> Function INTLPlugin.INTLSDKAPI.SetTag
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Channel                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Tag                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_SetTag(const struct FString& Channel, const struct FString& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.SetTag");

	UINTLSDKAPI_SetTag_Params params;
	params.Channel = Channel;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD9860
//		Name   -> Function INTLPlugin.INTLSDKAPI.SetSessionExtraParam
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     extra_json                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_SetSessionExtraParam(const struct FString& extra_json)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.SetSessionExtraParam");

	UINTLSDKAPI_SetSessionExtraParam_Params params;
	params.extra_json = extra_json;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD97E0
//		Name   -> Function INTLPlugin.INTLSDKAPI.SetDeviceLevel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_SetDeviceLevel(int Level)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.SetDeviceLevel");

	UINTLSDKAPI_SetDeviceLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD9670
//		Name   -> Function INTLPlugin.INTLSDKAPI.SetCrashUserValue
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Value                                                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_SetCrashUserValue(const struct FString& Key, const struct FString& Value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.SetCrashUserValue");

	UINTLSDKAPI_SetCrashUserValue_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD9590
//		Name   -> Function INTLPlugin.INTLSDKAPI.SetCrashUserId
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     UserId                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_SetCrashUserId(const struct FString& UserId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.SetCrashUserId");

	UINTLSDKAPI_SetCrashUserId_Params params;
	params.UserId = UserId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD9400
//		Name   -> Function INTLPlugin.INTLSDKAPI.SetAccountInfo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EINTLLoginChannel                       Channel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ChannelID                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     LangType                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                AccountPlatType                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_SetAccountInfo(INTLPlugin_EINTLLoginChannel Channel, int ChannelID, const struct FString& LangType, int AccountPlatType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.SetAccountInfo");

	UINTLSDKAPI_SetAccountInfo_Params params;
	params.Channel = Channel;
	params.ChannelID = ChannelID;
	params.LangType = LangType;
	params.AccountPlatType = AccountPlatType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD9290
//		Name   -> Function INTLPlugin.INTLSDKAPI.SetAccount
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Channel                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Account                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_SetAccount(const struct FString& Channel, const struct FString& Account)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.SetAccount");

	UINTLSDKAPI_SetAccount_Params params;
	params.Channel = Channel;
	params.Account = Account;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD8EC0
//		Name   -> Function INTLPlugin.INTLSDKAPI.SendMessage
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FINTLFriendReqInfo                          Info                                                       (ConstParm, Parm, NativeAccessSpecifierPublic)
//		struct FString                                     Channel                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_SendMessage(const struct FINTLFriendReqInfo& Info, const struct FString& Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.SendMessage");

	UINTLSDKAPI_SendMessage_Params params;
	params.Info = Info;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD8BA0
//		Name   -> Function INTLPlugin.INTLSDKAPI.ResetPasswordWithVerifyCode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Account                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     VerifyCode                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PhoneAreaCode                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NewPassword                                                (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_ResetPasswordWithVerifyCode(const struct FString& Account, const struct FString& VerifyCode, const struct FString& PhoneAreaCode, const struct FString& NewPassword, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ResetPasswordWithVerifyCode");

	UINTLSDKAPI_ResetPasswordWithVerifyCode_Params params;
	params.Account = Account;
	params.VerifyCode = VerifyCode;
	params.PhoneAreaCode = PhoneAreaCode;
	params.NewPassword = NewPassword;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD8880
//		Name   -> Function INTLPlugin.INTLSDKAPI.ResetPasswordWithOldPassword
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Account                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OldPassword                                                (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PhoneAreaCode                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NewPassword                                                (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_ResetPasswordWithOldPassword(const struct FString& Account, const struct FString& OldPassword, const struct FString& PhoneAreaCode, const struct FString& NewPassword, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ResetPasswordWithOldPassword");

	UINTLSDKAPI_ResetPasswordWithOldPassword_Params params;
	params.Account = Account;
	params.OldPassword = OldPassword;
	params.PhoneAreaCode = PhoneAreaCode;
	params.NewPassword = NewPassword;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD8850
//		Name   -> Function INTLPlugin.INTLSDKAPI.ResetGuest
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_ResetGuest()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ResetGuest");

	UINTLSDKAPI_ResetGuest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD8610
//		Name   -> Function INTLPlugin.INTLSDKAPI.RequestVerifyCode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Account                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		INTLPlugin_EVerifyCodeType                         CodeType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PhoneAreaCode                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_RequestVerifyCode(const struct FString& Account, INTLPlugin_EVerifyCodeType CodeType, const struct FString& PhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.RequestVerifyCode");

	UINTLSDKAPI_RequestVerifyCode_Params params;
	params.Account = Account;
	params.CodeType = CodeType;
	params.PhoneAreaCode = PhoneAreaCode;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD85F0
//		Name   -> Function INTLPlugin.INTLSDKAPI.RequestTrackingAuthorization
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UINTLSDKAPI::STATIC_RequestTrackingAuthorization()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.RequestTrackingAuthorization");

	UINTLSDKAPI_RequestTrackingAuthorization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD85D0
//		Name   -> Function INTLPlugin.INTLSDKAPI.RequestIPInfo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UINTLSDKAPI::STATIC_RequestIPInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.RequestIPInfo");

	UINTLSDKAPI_RequestIPInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD8320
//		Name   -> Function INTLPlugin.INTLSDKAPI.ReportPayStep
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                Step                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     StepName                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TMap<struct FString, struct FString>               ParamsMap                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_ReportPayStep(int Step, const struct FString& StepName, bool Result, int ErrorCode, TMap<struct FString, struct FString> ParamsMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ReportPayStep");

	UINTLSDKAPI_ReportPayStep_Params params;
	params.Step = Step;
	params.StepName = StepName;
	params.Result = Result;
	params.ErrorCode = ErrorCode;
	params.ParamsMap = ParamsMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD8070
//		Name   -> Function INTLPlugin.INTLSDKAPI.ReportLoginStep
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                Step                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     StepName                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TMap<struct FString, struct FString>               ParamsMap                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_ReportLoginStep(int Step, const struct FString& StepName, bool Result, int ErrorCode, TMap<struct FString, struct FString> ParamsMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ReportLoginStep");

	UINTLSDKAPI_ReportLoginStep_Params params;
	params.Step = Step;
	params.StepName = StepName;
	params.Result = Result;
	params.ErrorCode = ErrorCode;
	params.ParamsMap = ParamsMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD7D30
//		Name   -> Function INTLPlugin.INTLSDKAPI.ReportException
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExceptionName                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExceptionMsg                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExceptionStack                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TMap<struct FString, struct FString>               ExtInfo                                                    (Parm, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_ReportException(int Type, const struct FString& ExceptionName, const struct FString& ExceptionMsg, const struct FString& ExceptionStack, TMap<struct FString, struct FString> ExtInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ReportException");

	UINTLSDKAPI_ReportException_Params params;
	params.Type = Type;
	params.ExceptionName = ExceptionName;
	params.ExceptionMsg = ExceptionMsg;
	params.ExceptionStack = ExceptionStack;
	params.ExtInfo = ExtInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD7A30
//		Name   -> Function INTLPlugin.INTLSDKAPI.ReportEvent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     EventName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TMap<struct FString, struct FString>               ParamsMap                                                  (Parm, NativeAccessSpecifierPublic)
//		struct FString                                     SpecificChannel                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_ReportEvent(const struct FString& EventName, TMap<struct FString, struct FString> ParamsMap, const struct FString& SpecificChannel, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ReportEvent");

	UINTLSDKAPI_ReportEvent_Params params;
	params.EventName = EventName;
	params.ParamsMap = ParamsMap;
	params.SpecificChannel = SpecificChannel;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD76E0
//		Name   -> Function INTLPlugin.INTLSDKAPI.ReportCustomEventStep
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     EventName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Step                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     StepName                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ErrorCode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TMap<struct FString, struct FString>               ParamsMap                                                  (ConstParm, Parm, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_ReportCustomEventStep(const struct FString& EventName, int Step, const struct FString& StepName, bool Result, int ErrorCode, TMap<struct FString, struct FString> ParamsMap)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ReportCustomEventStep");

	UINTLSDKAPI_ReportCustomEventStep_Params params;
	params.EventName = EventName;
	params.Step = Step;
	params.StepName = StepName;
	params.Result = Result;
	params.ErrorCode = ErrorCode;
	params.ParamsMap = ParamsMap;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD74B0
//		Name   -> Function INTLPlugin.INTLSDKAPI.ReportBinary
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     EventName                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Data                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Length                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     SpecificChannel                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_ReportBinary(const struct FString& EventName, const struct FString& Data, int Length, const struct FString& SpecificChannel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ReportBinary");

	UINTLSDKAPI_ReportBinary_Params params;
	params.EventName = EventName;
	params.Data = Data;
	params.Length = Length;
	params.SpecificChannel = SpecificChannel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD7420
//		Name   -> Function INTLPlugin.INTLSDKAPI.RemoveObserver
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UINTLSDKAPI::STATIC_RemoveObserver()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.RemoveObserver");

	UINTLSDKAPI_RemoveObserver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD72B0
//		Name   -> Function INTLPlugin.INTLSDKAPI.RegisterPush
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Channel                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Account                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_RegisterPush(const struct FString& Channel, const struct FString& Account)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.RegisterPush");

	UINTLSDKAPI_RegisterPush_Params params;
	params.Channel = Channel;
	params.Account = Account;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD6E00
//		Name   -> Function INTLPlugin.INTLSDKAPI.Register
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Account                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Password                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     VerifyCode                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PhoneAreaCode                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FINTLAccountProfile                         userProfile                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_Register(const struct FString& Account, const struct FString& Password, const struct FString& VerifyCode, const struct FString& PhoneAreaCode, const struct FINTLAccountProfile& userProfile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.Register");

	UINTLSDKAPI_Register_Params params;
	params.Account = Account;
	params.Password = Password;
	params.VerifyCode = VerifyCode;
	params.PhoneAreaCode = PhoneAreaCode;
	params.userProfile = userProfile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD6B30
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryVerifyCodeStatus
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Account                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     VerifyCode                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		INTLPlugin_EVerifyCodeType                         CodeType                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PhoneAreaCode                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_QueryVerifyCodeStatus(const struct FString& Account, const struct FString& VerifyCode, INTLPlugin_EVerifyCodeType CodeType, const struct FString& PhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryVerifyCodeStatus");

	UINTLSDKAPI_QueryVerifyCodeStatus_Params params;
	params.Account = Account;
	params.VerifyCode = VerifyCode;
	params.CodeType = CodeType;
	params.PhoneAreaCode = PhoneAreaCode;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD6AA0
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryUserNameStatus
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     UserName                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_QueryUserNameStatus(const struct FString& UserName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryUserNameStatus");

	UINTLSDKAPI_QueryUserNameStatus_Params params;
	params.UserName = UserName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD6A70
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryUserInfo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_QueryUserInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryUserInfo");

	UINTLSDKAPI_QueryUserInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD6860
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryRegisterStatus
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Account                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PhoneAreaCode                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_QueryRegisterStatus(const struct FString& Account, const struct FString& PhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryRegisterStatus");

	UINTLSDKAPI_QueryRegisterStatus_Params params;
	params.Account = Account;
	params.PhoneAreaCode = PhoneAreaCode;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD6650
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryIsReceiveEmail
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Account                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PhoneAreaCode                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_QueryIsReceiveEmail(const struct FString& Account, const struct FString& PhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryIsReceiveEmail");

	UINTLSDKAPI_QueryIsReceiveEmail_Params params;
	params.Account = Account;
	params.PhoneAreaCode = PhoneAreaCode;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD6570
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryIsEEA
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Region                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_QueryIsEEA(const struct FString& Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryIsEEA");

	UINTLSDKAPI_QueryIsEEA_Params params;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD6490
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryIpByHost
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Host                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_QueryIpByHost(const struct FString& Host)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryIpByHost");

	UINTLSDKAPI_QueryIpByHost_Params params;
	params.Host = Host;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD6470
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryIDToken
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UINTLSDKAPI::STATIC_QueryIDToken()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryIDToken");

	UINTLSDKAPI_QueryIDToken_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD6280
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryFriends
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EINTLLoginChannel                       Channel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Page                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Count                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               IsInGame                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_QueryFriends(INTLPlugin_EINTLLoginChannel Channel, int Page, int Count, bool IsInGame, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryFriends");

	UINTLSDKAPI_QueryFriends_Params params;
	params.Channel = Channel;
	params.Page = Page;
	params.Count = Count;
	params.IsInGame = IsInGame;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD6200
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryDirTree
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                TreeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_QueryDirTree(int TreeId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryDirTree");

	UINTLSDKAPI_QueryDirTree_Params params;
	params.TreeId = TreeId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD6140
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryDirNode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                TreeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                NodeId                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_QueryDirNode(int TreeId, int NodeId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryDirNode");

	UINTLSDKAPI_QueryDirNode_Params params;
	params.TreeId = TreeId;
	params.NodeId = NodeId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD6120
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryDeviceLevel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UINTLSDKAPI::STATIC_QueryDeviceLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryDeviceLevel");

	UINTLSDKAPI_QueryDeviceLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD6100
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryDataProtectionAcceptance
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UINTLSDKAPI::STATIC_QueryDataProtectionAcceptance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryDataProtectionAcceptance");

	UINTLSDKAPI_QueryDataProtectionAcceptance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD5E80
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryCanBind
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                ChannelID                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                AccountPlatType                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Account                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PhoneAreaCode                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_QueryCanBind(int ChannelID, int AccountPlatType, const struct FString& Account, const struct FString& PhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryCanBind");

	UINTLSDKAPI_QueryCanBind_Params params;
	params.ChannelID = ChannelID;
	params.AccountPlatType = AccountPlatType;
	params.Account = Account;
	params.PhoneAreaCode = PhoneAreaCode;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD5E50
//		Name   -> Function INTLPlugin.INTLSDKAPI.QueryActiveUser
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_QueryActiveUser()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.QueryActiveUser");

	UINTLSDKAPI_QueryActiveUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD5DD0
//		Name   -> Function INTLPlugin.INTLSDKAPI.PostNetworkLatencyInSession
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                LatencyMs                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_PostNetworkLatencyInSession(int LatencyMs)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.PostNetworkLatencyInSession");

	UINTLSDKAPI_PostNetworkLatencyInSession_Params params;
	params.LatencyMs = LatencyMs;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD5D50
//		Name   -> Function INTLPlugin.INTLSDKAPI.PostFrameTimeInSession
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		float                                              DeltaSeconds                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_PostFrameTimeInSession(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.PostFrameTimeInSession");

	UINTLSDKAPI_PostFrameTimeInSession_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD5AC0
//		Name   -> Function INTLPlugin.INTLSDKAPI.OpenUrl
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     URL                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		INTLPlugin_EINTLWebViewOrientation                 ScreenOrientation                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               FullScreenEnable                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               EncryptEnable                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               SystemBrowserEnable                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_OpenUrl(const struct FString& URL, INTLPlugin_EINTLWebViewOrientation ScreenOrientation, bool FullScreenEnable, bool EncryptEnable, bool SystemBrowserEnable, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.OpenUrl");

	UINTLSDKAPI_OpenUrl_Params params;
	params.URL = URL;
	params.ScreenOrientation = ScreenOrientation;
	params.FullScreenEnable = FullScreenEnable;
	params.EncryptEnable = EncryptEnable;
	params.SystemBrowserEnable = SystemBrowserEnable;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BD5180
//		Name   -> Function INTLPlugin.INTLSDKAPI.OnTickEvent
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_OnTickEvent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.OnTickEvent");

	UINTLSDKAPI_OnTickEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD06F0
//		Name   -> Function INTLPlugin.INTLSDKAPI.NoticeRequestData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Region                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     LangType                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UINTLSDKAPI::STATIC_NoticeRequestData(const struct FString& Region, const struct FString& LangType, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.NoticeRequestData");

	UINTLSDKAPI_NoticeRequestData_Params params;
	params.Region = Region;
	params.LangType = LangType;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD04A0
//		Name   -> Function INTLPlugin.INTLSDKAPI.ModifyProfile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FINTLAccountProfile                         userProfile                                                (ConstParm, Parm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_ModifyProfile(const struct FINTLAccountProfile& userProfile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ModifyProfile");

	UINTLSDKAPI_ModifyProfile_Params params;
	params.userProfile = userProfile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BD0330
//		Name   -> Function INTLPlugin.INTLSDKAPI.ModifyDataProtectionAcceptance
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     PPVersion                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     TOSVersion                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_ModifyDataProtectionAcceptance(const struct FString& PPVersion, const struct FString& TOSVersion)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ModifyDataProtectionAcceptance");

	UINTLSDKAPI_ModifyDataProtectionAcceptance_Params params;
	params.PPVersion = PPVersion;
	params.TOSVersion = TOSVersion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCFED0
//		Name   -> Function INTLPlugin.INTLSDKAPI.ModifyAccountWithVerifyCode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     OldAccount                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OldAccountVerifyCode                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OldPhoneAreaCode                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NewAccount                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NewAccountVerifyCode                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NewPhoneAreaCode                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_ModifyAccountWithVerifyCode(const struct FString& OldAccount, const struct FString& OldAccountVerifyCode, const struct FString& OldPhoneAreaCode, const struct FString& NewAccount, const struct FString& NewAccountVerifyCode, const struct FString& NewPhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ModifyAccountWithVerifyCode");

	UINTLSDKAPI_ModifyAccountWithVerifyCode_Params params;
	params.OldAccount = OldAccount;
	params.OldAccountVerifyCode = OldAccountVerifyCode;
	params.OldPhoneAreaCode = OldPhoneAreaCode;
	params.NewAccount = NewAccount;
	params.NewAccountVerifyCode = NewAccountVerifyCode;
	params.NewPhoneAreaCode = NewPhoneAreaCode;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCFA70
//		Name   -> Function INTLPlugin.INTLSDKAPI.ModifyAccountWithPassword
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     OldAccount                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OldPhoneAreaCode                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Password                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NewAccount                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NewAccountVerifyCode                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NewPhoneAreaCode                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_ModifyAccountWithPassword(const struct FString& OldAccount, const struct FString& OldPhoneAreaCode, const struct FString& Password, const struct FString& NewAccount, const struct FString& NewAccountVerifyCode, const struct FString& NewPhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ModifyAccountWithPassword");

	UINTLSDKAPI_ModifyAccountWithPassword_Params params;
	params.OldAccount = OldAccount;
	params.OldPhoneAreaCode = OldPhoneAreaCode;
	params.Password = Password;
	params.NewAccount = NewAccount;
	params.NewAccountVerifyCode = NewAccountVerifyCode;
	params.NewPhoneAreaCode = NewPhoneAreaCode;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCF750
//		Name   -> Function INTLPlugin.INTLSDKAPI.ModifyAccountWithLoginState
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     OldPhoneAreaCode                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NewAccount                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NewAccountVerifyCode                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     NewPhoneAreaCode                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_ModifyAccountWithLoginState(const struct FString& OldPhoneAreaCode, const struct FString& NewAccount, const struct FString& NewAccountVerifyCode, const struct FString& NewPhoneAreaCode, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ModifyAccountWithLoginState");

	UINTLSDKAPI_ModifyAccountWithLoginState_Params params;
	params.OldPhoneAreaCode = OldPhoneAreaCode;
	params.NewAccount = NewAccount;
	params.NewAccountVerifyCode = NewAccountVerifyCode;
	params.NewPhoneAreaCode = NewPhoneAreaCode;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCF5E0
//		Name   -> Function INTLPlugin.INTLSDKAPI.MarkSessionLoad
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     SessionName                                                (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     extra_json                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_MarkSessionLoad(const struct FString& SessionName, const struct FString& extra_json)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.MarkSessionLoad");

	UINTLSDKAPI_MarkSessionLoad_Params params;
	params.SessionName = SessionName;
	params.extra_json = extra_json;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCF5C0
//		Name   -> Function INTLPlugin.INTLSDKAPI.MarkSessionClosed
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UINTLSDKAPI::STATIC_MarkSessionClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.MarkSessionClosed");

	UINTLSDKAPI_MarkSessionClosed_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCF540
//		Name   -> Function INTLPlugin.INTLSDKAPI.Logout
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EINTLLoginChannel                       Channel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_Logout(INTLPlugin_EINTLLoginChannel Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.Logout");

	UINTLSDKAPI_Logout_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCF1E0
//		Name   -> Function INTLPlugin.INTLSDKAPI.LoginWithVerifyCode
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EINTLLoginChannel                       Channel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Account                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Password                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     VerifyCode                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PhoneAreaCode                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PermissionList                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_LoginWithVerifyCode(INTLPlugin_EINTLLoginChannel Channel, const struct FString& Account, const struct FString& Password, const struct FString& VerifyCode, const struct FString& PhoneAreaCode, const struct FString& PermissionList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.LoginWithVerifyCode");

	UINTLSDKAPI_LoginWithVerifyCode_Params params;
	params.Channel = Channel;
	params.Account = Account;
	params.Password = Password;
	params.VerifyCode = VerifyCode;
	params.PhoneAreaCode = PhoneAreaCode;
	params.PermissionList = PermissionList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCEF10
//		Name   -> Function INTLPlugin.INTLSDKAPI.LoginWithPassword
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EINTLLoginChannel                       Channel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Account                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Password                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PhoneAreaCode                                              (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     PermissionList                                             (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_LoginWithPassword(INTLPlugin_EINTLLoginChannel Channel, const struct FString& Account, const struct FString& Password, const struct FString& PhoneAreaCode, const struct FString& PermissionList)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.LoginWithPassword");

	UINTLSDKAPI_LoginWithPassword_Params params;
	params.Channel = Channel;
	params.Account = Account;
	params.Password = Password;
	params.PhoneAreaCode = PhoneAreaCode;
	params.PermissionList = PermissionList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCED60
//		Name   -> Function INTLPlugin.INTLSDKAPI.LoginWithMappedChannel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EINTLLoginChannel                       Channel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     LoginMode                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Permissions                                                (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_LoginWithMappedChannel(INTLPlugin_EINTLLoginChannel Channel, const struct FString& LoginMode, const struct FString& Permissions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.LoginWithMappedChannel");

	UINTLSDKAPI_LoginWithMappedChannel_Params params;
	params.Channel = Channel;
	params.LoginMode = LoginMode;
	params.Permissions = Permissions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCEC30
//		Name   -> Function INTLPlugin.INTLSDKAPI.LoginWithChannel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EINTLLoginChannel                       Channel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     LoginMode                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_LoginWithChannel(INTLPlugin_EINTLLoginChannel Channel, const struct FString& LoginMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.LoginWithChannel");

	UINTLSDKAPI_LoginWithChannel_Params params;
	params.Channel = Channel;
	params.LoginMode = LoginMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCEB00
//		Name   -> Function INTLPlugin.INTLSDKAPI.LoginWithBoundChannel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EINTLLoginChannel                       Channel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     LoginMode                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_LoginWithBoundChannel(INTLPlugin_EINTLLoginChannel Channel, const struct FString& LoginMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.LoginWithBoundChannel");

	UINTLSDKAPI_LoginWithBoundChannel_Params params;
	params.Channel = Channel;
	params.LoginMode = LoginMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCE950
//		Name   -> Function INTLPlugin.INTLSDKAPI.Login
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EINTLLoginChannel                       Channel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Permissions                                                (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_Login(INTLPlugin_EINTLLoginChannel Channel, const struct FString& Permissions, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.Login");

	UINTLSDKAPI_Login_Params params;
	params.Channel = Channel;
	params.Permissions = Permissions;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCE7B0
//		Name   -> Function INTLPlugin.INTLSDKAPI.LogCrashInfo
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EINTLCrashLevel                         Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Tag                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Log                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_LogCrashInfo(INTLPlugin_EINTLCrashLevel Level, const struct FString& Tag, const struct FString& Log)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.LogCrashInfo");

	UINTLSDKAPI_LogCrashInfo_Params params;
	params.Level = Level;
	params.Tag = Tag;
	params.Log = Log;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCE790
//		Name   -> Function INTLPlugin.INTLSDKAPI.LoadCutoutData
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UINTLSDKAPI::STATIC_LoadCutoutData()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.LoadCutoutData");

	UINTLSDKAPI_LoadCutoutData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCE770
//		Name   -> Function INTLPlugin.INTLSDKAPI.LaunchLoginUI
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UINTLSDKAPI::STATIC_LaunchLoginUI()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.LaunchLoginUI");

	UINTLSDKAPI_LaunchLoginUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCE120
//		Name   -> Function INTLPlugin.INTLSDKAPI.LaunchCustomerUI
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FINTLCustomerUserProfile                    userProfile                                                (Parm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_LaunchCustomerUI(const struct FINTLCustomerUserProfile& userProfile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.LaunchCustomerUI");

	UINTLSDKAPI_LaunchCustomerUI_Params params;
	params.userProfile = userProfile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCDFB0
//		Name   -> Function INTLPlugin.INTLSDKAPI.IsAppInstalled
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Channel                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_IsAppInstalled(const struct FString& Channel, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.IsAppInstalled");

	UINTLSDKAPI_IsAppInstalled_Params params;
	params.Channel = Channel;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCDF90
//		Name   -> Function INTLPlugin.INTLSDKAPI.Init
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UINTLSDKAPI::STATIC_Init()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.Init");

	UINTLSDKAPI_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCDF10
//		Name   -> Function INTLPlugin.INTLSDKAPI.GetSDKVersion
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UINTLSDKAPI::STATIC_GetSDKVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.GetSDKVersion");

	UINTLSDKAPI_GetSDKVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCDDE0
//		Name   -> Function INTLPlugin.INTLSDKAPI.GetIpByHost
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Host                                                       (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UINTLSDKAPI::STATIC_GetIpByHost(const struct FString& Host)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.GetIpByHost");

	UINTLSDKAPI_GetIpByHost_Params params;
	params.Host = Host;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCDCB0
//		Name   -> Function INTLPlugin.INTLSDKAPI.GetInstanceID
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Channel                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UINTLSDKAPI::STATIC_GetInstanceID(const struct FString& Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.GetInstanceID");

	UINTLSDKAPI_GetInstanceID_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCDBB0
//		Name   -> Function INTLPlugin.INTLSDKAPI.GetIDTokenResult
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FINTLIDTokenResult                          jwtRet                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_GetIDTokenResult(struct FINTLIDTokenResult* jwtRet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.GetIDTokenResult");

	UINTLSDKAPI_GetIDTokenResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (jwtRet != nullptr)
		*jwtRet = params.jwtRet;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCDA80
//		Name   -> Function INTLPlugin.INTLSDKAPI.GetEncryptUrl
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     URL                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UINTLSDKAPI::STATIC_GetEncryptUrl(const struct FString& URL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.GetEncryptUrl");

	UINTLSDKAPI_GetEncryptUrl_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCDA50
//		Name   -> Function INTLPlugin.INTLSDKAPI.GetDeviceLevel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UINTLSDKAPI::STATIC_GetDeviceLevel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.GetDeviceLevel");

	UINTLSDKAPI_GetDeviceLevel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCD9D0
//		Name   -> Function INTLPlugin.INTLSDKAPI.GetCurrentResourceVersion
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UINTLSDKAPI::STATIC_GetCurrentResourceVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.GetCurrentResourceVersion");

	UINTLSDKAPI_GetCurrentResourceVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCD950
//		Name   -> Function INTLPlugin.INTLSDKAPI.GetCurrentAppVersion
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UINTLSDKAPI::STATIC_GetCurrentAppVersion()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.GetCurrentAppVersion");

	UINTLSDKAPI_GetCurrentAppVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCD700
//		Name   -> Function INTLPlugin.INTLSDKAPI.GetConfig
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     DefaultVal                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Project                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UINTLSDKAPI::STATIC_GetConfig(const struct FString& Key, const struct FString& DefaultVal, const struct FString& Project)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.GetConfig");

	UINTLSDKAPI_GetConfig_Params params;
	params.Key = Key;
	params.DefaultVal = DefaultVal;
	params.Project = Project;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCD4F0
//		Name   -> Function INTLPlugin.INTLSDKAPI.GetAuthResult
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FINTLAuthResult                             LoginRet                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_GetAuthResult(struct FINTLAuthResult* LoginRet)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.GetAuthResult");

	UINTLSDKAPI_GetAuthResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LoginRet != nullptr)
		*LoginRet = params.LoginRet;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCD300
//		Name   -> Function INTLPlugin.INTLSDKAPI.ExtendInvoke
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EINTLLoginChannel                       Channel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtendMethodName                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ParamsJson                                                 (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FString UINTLSDKAPI::STATIC_ExtendInvoke(INTLPlugin_EINTLLoginChannel Channel, const struct FString& ExtendMethodName, const struct FString& ParamsJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ExtendInvoke");

	UINTLSDKAPI_ExtendInvoke_Params params;
	params.Channel = Channel;
	params.ExtendMethodName = ExtendMethodName;
	params.ParamsJson = ParamsJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCD1F0
//		Name   -> Function INTLPlugin.INTLSDKAPI.DownloadOptionalRepoFiles
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                RepoID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             FilesPath                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UINTLSDKAPI::STATIC_DownloadOptionalRepoFiles(int RepoID, TArray<struct FString> FilesPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.DownloadOptionalRepoFiles");

	UINTLSDKAPI_DownloadOptionalRepoFiles_Params params;
	params.RepoID = RepoID;
	params.FilesPath = FilesPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCD170
//		Name   -> Function INTLPlugin.INTLSDKAPI.DismissLoginUI
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               Canceled                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_DismissLoginUI(bool Canceled)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.DismissLoginUI");

	UINTLSDKAPI_DismissLoginUI_Params params;
	params.Canceled = Canceled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCD000
//		Name   -> Function INTLPlugin.INTLSDKAPI.DeleteTag
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Channel                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Tag                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_DeleteTag(const struct FString& Channel, const struct FString& Tag)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.DeleteTag");

	UINTLSDKAPI_DeleteTag_Params params;
	params.Channel = Channel;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCCF20
//		Name   -> Function INTLPlugin.INTLSDKAPI.DeleteLocalNotifications
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Key                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_DeleteLocalNotifications(const struct FString& Key)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.DeleteLocalNotifications");

	UINTLSDKAPI_DeleteLocalNotifications_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCCDB0
//		Name   -> Function INTLPlugin.INTLSDKAPI.DeleteAccount
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Channel                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Account                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_DeleteAccount(const struct FString& Channel, const struct FString& Account)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.DeleteAccount");

	UINTLSDKAPI_DeleteAccount_Params params;
	params.Channel = Channel;
	params.Account = Account;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCCAE0
//		Name   -> Function INTLPlugin.INTLSDKAPI.ComplianceSetUserProfile
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     GameID                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     OpenId                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Token                                                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ChannelID                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Region                                                     (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_ComplianceSetUserProfile(const struct FString& GameID, const struct FString& OpenId, const struct FString& Token, int ChannelID, const struct FString& Region)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ComplianceSetUserProfile");

	UINTLSDKAPI_ComplianceSetUserProfile_Params params;
	params.GameID = GameID;
	params.OpenId = OpenId;
	params.Token = Token;
	params.ChannelID = ChannelID;
	params.Region = Region;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCCA70
//		Name   -> Function INTLPlugin.INTLSDKAPI.ComplianceSetParentCertificateStatus
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EComplianceParentCertificateStatus      Status                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_ComplianceSetParentCertificateStatus(INTLPlugin_EComplianceParentCertificateStatus Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ComplianceSetParentCertificateStatus");

	UINTLSDKAPI_ComplianceSetParentCertificateStatus_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCCA00
//		Name   -> Function INTLPlugin.INTLSDKAPI.ComplianceSetEUAgreeStatus
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EComplianceAgreeStatus                  Status                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_ComplianceSetEUAgreeStatus(INTLPlugin_EComplianceAgreeStatus Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ComplianceSetEUAgreeStatus");

	UINTLSDKAPI_ComplianceSetEUAgreeStatus_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCC990
//		Name   -> Function INTLPlugin.INTLSDKAPI.ComplianceSetAdulthood
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EComplianceAgeStatus                    Status                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_ComplianceSetAdulthood(INTLPlugin_EComplianceAgeStatus Status)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ComplianceSetAdulthood");

	UINTLSDKAPI_ComplianceSetAdulthood_Params params;
	params.Status = Status;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCC820
//		Name   -> Function INTLPlugin.INTLSDKAPI.ComplianceSendEmail
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Email                                                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     UserName                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_ComplianceSendEmail(const struct FString& Email, const struct FString& UserName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ComplianceSendEmail");

	UINTLSDKAPI_ComplianceSendEmail_Params params;
	params.Email = Email;
	params.UserName = UserName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCC800
//		Name   -> Function INTLPlugin.INTLSDKAPI.ComplianceQueryUserStatus
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UINTLSDKAPI::STATIC_ComplianceQueryUserStatus()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ComplianceQueryUserStatus");

	UINTLSDKAPI_ComplianceQueryUserStatus_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCC700
//		Name   -> Function INTLPlugin.INTLSDKAPI.ComplianceCommitBirthday
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                BirthdayYear                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BirthdayMonth                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                BirthdayDay                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_ComplianceCommitBirthday(int BirthdayYear, int BirthdayMonth, int BirthdayDay)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ComplianceCommitBirthday");

	UINTLSDKAPI_ComplianceCommitBirthday_Params params;
	params.BirthdayYear = BirthdayYear;
	params.BirthdayMonth = BirthdayMonth;
	params.BirthdayDay = BirthdayDay;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCC620
//		Name   -> Function INTLPlugin.INTLSDKAPI.ClearLocalNotifications
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Channel                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_ClearLocalNotifications(const struct FString& Channel)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.ClearLocalNotifications");

	UINTLSDKAPI_ClearLocalNotifications_Params params;
	params.Channel = Channel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCC480
//		Name   -> Function INTLPlugin.INTLSDKAPI.CheckOptionalRepoFiles
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		int                                                RepoID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FString>                             FilesPath                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
//		TArray<struct FINTLUpdateOptionalRepoFilesStatus>  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
TArray<struct FINTLUpdateOptionalRepoFilesStatus> UINTLSDKAPI::STATIC_CheckOptionalRepoFiles(int RepoID, TArray<struct FString> FilesPath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.CheckOptionalRepoFiles");

	UINTLSDKAPI_CheckOptionalRepoFiles_Params params;
	params.RepoID = RepoID;
	params.FilesPath = FilesPath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCC450
//		Name   -> Function INTLPlugin.INTLSDKAPI.CheckActiveUser
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_CheckActiveUser()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.CheckActiveUser");

	UINTLSDKAPI_CheckActiveUser_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCC370
//		Name   -> Function INTLPlugin.INTLSDKAPI.CallJS
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     JsonJsParam                                                (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_CallJS(const struct FString& JsonJsParam)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.CallJS");

	UINTLSDKAPI_CallJS_Params params;
	params.JsonJsParam = JsonJsParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCC340
//		Name   -> Function INTLPlugin.INTLSDKAPI.BuildMapWithLoggedinChannel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_BuildMapWithLoggedinChannel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.BuildMapWithLoggedinChannel");

	UINTLSDKAPI_BuildMapWithLoggedinChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCC310
//		Name   -> Function INTLPlugin.INTLSDKAPI.BindWithLoggedinChannel
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_BindWithLoggedinChannel()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.BindWithLoggedinChannel");

	UINTLSDKAPI_BindWithLoggedinChannel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCC160
//		Name   -> Function INTLPlugin.INTLSDKAPI.Bind
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		INTLPlugin_EINTLLoginChannel                       Channel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Permissions                                                (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     ExtraJson                                                  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_Bind(INTLPlugin_EINTLLoginChannel Channel, const struct FString& Permissions, const struct FString& ExtraJson)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.Bind");

	UINTLSDKAPI_Bind_Params params;
	params.Channel = Channel;
	params.Permissions = Permissions;
	params.ExtraJson = ExtraJson;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCC130
//		Name   -> Function INTLPlugin.INTLSDKAPI.AutoLogin
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLSDKAPI::STATIC_AutoLogin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.AutoLogin");

	UINTLSDKAPI_AutoLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BCC0A0
//		Name   -> Function INTLPlugin.INTLSDKAPI.AddObserver
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UINTLSDKAPI::STATIC_AddObserver()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.AddObserver");

	UINTLSDKAPI_AddObserver_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCBE00
//		Name   -> Function INTLPlugin.INTLSDKAPI.AddLocalNotificationIOS
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Channel                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FINTLLocalNotificationIOS                   LocalNotification                                          (ConstParm, Parm, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_AddLocalNotificationIOS(const struct FString& Channel, const struct FINTLLocalNotificationIOS& LocalNotification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.AddLocalNotificationIOS");

	UINTLSDKAPI_AddLocalNotificationIOS_Params params;
	params.Channel = Channel;
	params.LocalNotification = LocalNotification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BCBAB0
//		Name   -> Function INTLPlugin.INTLSDKAPI.AddLocalNotification
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Channel                                                    (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FINTLLocalNotification                      LocalNotification                                          (ConstParm, Parm, NativeAccessSpecifierPublic)
void UINTLSDKAPI::STATIC_AddLocalNotification(const struct FString& Channel, const struct FINTLLocalNotification& LocalNotification)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLSDKAPI.AddLocalNotification");

	UINTLSDKAPI_AddLocalNotification_Params params;
	params.Channel = Channel;
	params.LocalNotification = LocalNotification;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BDA4D0
//		Name   -> Function INTLPlugin.INTLUtility.Regular
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Str                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Reg                                                        (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UINTLUtility::STATIC_Regular(const struct FString& Str, const struct FString& Reg)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLUtility.Regular");

	UINTLUtility_Regular_Params params;
	params.Str = Str;
	params.Reg = Reg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BDA440
//		Name   -> Function INTLPlugin.INTLUtility.RefreshCurToastCnt
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                ChangeCnt                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UINTLUtility::STATIC_RefreshCurToastCnt(int ChangeCnt)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLUtility.RefreshCurToastCnt");

	UINTLUtility_RefreshCurToastCnt_Params params;
	params.ChangeCnt = ChangeCnt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BDA410
//		Name   -> Function INTLPlugin.INTLUtility.GetNewToastOrder
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UINTLUtility::STATIC_GetNewToastOrder()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLUtility.GetNewToastOrder");

	UINTLUtility_GetNewToastOrder_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x00BDA3F0
//		Name   -> Function INTLPlugin.INTLUtility.ForceCrash
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
void UINTLUtility::STATIC_ForceCrash()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function INTLPlugin.INTLUtility.ForceCrash");

	UINTLUtility_ForceCrash_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
