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
//		Offset -> 0x00BE6800
//		Name   -> Function TSS.TSSClientComponent.Server_RetrieveClientDataFromSDK
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetServer)
// Parameters:
//		struct FTSSClientDataReport                        InClientData                                               (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UTSSClientComponent::Server_RetrieveClientDataFromSDK(const struct FTSSClientDataReport& InClientData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TSS.TSSClientComponent.Server_RetrieveClientDataFromSDK");

	UTSSClientComponent_Server_RetrieveClientDataFromSDK_Params params;
	params.InClientData = InClientData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BE6760
//		Name   -> Function TSS.TSSClientComponent.Client_ReceiveServerData
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		struct FTSSClientDataReport                        InServerData                                               (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UTSSClientComponent::Client_ReceiveServerData(const struct FTSSClientDataReport& InServerData)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TSS.TSSClientComponent.Client_ReceiveServerData");

	UTSSClientComponent_Client_ReceiveServerData_Params params;
	params.InServerData = InServerData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BE66D0
//		Name   -> Function TSS.TSSClientComponent.Client_OnDisconnectClient
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		TSS_ETSSDeleteUserResult                           InResultFromServer                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UTSSClientComponent::Client_OnDisconnectClient(TSS_ETSSDeleteUserResult InResultFromServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TSS.TSSClientComponent.Client_OnDisconnectClient");

	UTSSClientComponent_Client_OnDisconnectClient_Params params;
	params.InResultFromServer = InResultFromServer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x00BE65D0
//		Name   -> Function TSS.TSSClientComponent.Client_OnConnectClient
//		Flags  -> (Net, NetReliable, Native, Event, Protected, NetClient)
// Parameters:
//		TSS_ETSSAddUserResult                              InResultFromServer                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTSSAccountInfo                             InConfirmedLoginInfo                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
void UTSSClientComponent::Client_OnConnectClient(TSS_ETSSAddUserResult InResultFromServer, const struct FTSSAccountInfo& InConfirmedLoginInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TSS.TSSClientComponent.Client_OnConnectClient");

	UTSSClientComponent_Client_OnConnectClient_Params params;
	params.InResultFromServer = InResultFromServer;
	params.InConfirmedLoginInfo = InConfirmedLoginInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
