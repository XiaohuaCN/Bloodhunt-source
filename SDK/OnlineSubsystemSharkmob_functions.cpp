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
//		Offset -> 0x03467970
//		Name   -> Function OnlineSubsystemSharkmob.INTLLoginCallbackProxy.ConnectToINTLServiceWithToken
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     LoginToken                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UINTLLoginCallbackProxy*                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UINTLLoginCallbackProxy* UINTLLoginCallbackProxy::STATIC_ConnectToINTLServiceWithToken(class UObject* WorldContextObject, const struct FString& LoginToken)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function OnlineSubsystemSharkmob.INTLLoginCallbackProxy.ConnectToINTLServiceWithToken");

	UINTLLoginCallbackProxy_ConnectToINTLServiceWithToken_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LoginToken = LoginToken;

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
