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

// Function TSS.TSSClientComponent.Server_RetrieveClientDataFromSDK
struct UTSSClientComponent_Server_RetrieveClientDataFromSDK_Params
{
	struct FTSSClientDataReport                        InClientData;                                              // 0x0000(0x0010)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function TSS.TSSClientComponent.Client_ReceiveServerData
struct UTSSClientComponent_Client_ReceiveServerData_Params
{
	struct FTSSClientDataReport                        InServerData;                                              // 0x0000(0x0010)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// Function TSS.TSSClientComponent.Client_OnDisconnectClient
struct UTSSClientComponent_Client_OnDisconnectClient_Params
{
	TSS_ETSSDeleteUserResult                           InResultFromServer;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// Function TSS.TSSClientComponent.Client_OnConnectClient
struct UTSSClientComponent_Client_OnConnectClient_Params
{
	TSS_ETSSAddUserResult                              InResultFromServer;                                        // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTSSAccountInfo                             InConfirmedLoginInfo;                                      // 0x0008(0x0030)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
