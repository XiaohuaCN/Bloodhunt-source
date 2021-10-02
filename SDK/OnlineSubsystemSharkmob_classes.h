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
// Classes
//---------------------------------------------------------------------------

// Class OnlineSubsystemSharkmob.INTLLoginCallbackProxy
// 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
class UINTLLoginCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnSuccess;                                                 // 0x0030(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnFailure;                                                 // 0x0040(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JTA7[0x50];                                    // 0x0050(0x0050) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class OnlineSubsystemSharkmob.INTLLoginCallbackProxy");
		return ptr;
	}



	class UINTLLoginCallbackProxy* STATIC_ConnectToINTLServiceWithToken(class UObject* WorldContextObject, const struct FString& LoginToken);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
