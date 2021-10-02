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
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TigerCore.TigerPersistentPlayerID
// 0x0010
struct FTigerPersistentPlayerID
{
	struct FString                                     UniqueID;                                                  // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TigerCore.TigerAnimInstanceProxy
// 0x0030 (0x0790 - 0x0760)
struct FTigerAnimInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData_J6C0[0x10];                                    // 0x0760(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UAnimMetaData*>                       MetaData;                                                  // 0x0770(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OB2H[0x10];                                    // 0x0780(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct TigerCore.TigerSettleEvent
// 0x0001
struct FTigerSettleEvent
{
	unsigned char                                      SettleEventEnum;                                           // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
