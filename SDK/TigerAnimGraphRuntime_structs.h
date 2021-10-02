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
// Enums
//---------------------------------------------------------------------------

// Enum TigerAnimGraphRuntime.ETigerBoolSettleTriggerDirection
enum class TigerAnimGraphRuntime_ETigerBoolSettleTriggerDirection : uint8_t
{
	ETigerBoolSettleTriggerDirection__TriggerOnTrue = 0,
	ETigerBoolSettleTriggerDirection__TriggerOnFalse = 1,
	ETigerBoolSettleTriggerDirection__TriggerOnBoth = 2,
	ETigerBoolSettleTriggerDirection__ETigerBoolSettleTriggerDirection_MAX = 3,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct TigerAnimGraphRuntime.TigerAnimNode_AddMetaData
// 0x0020 (0x0030 - 0x0010)
struct FTigerAnimNode_AddMetaData : public FAnimNode_Base
{
	struct FPoseLink                                   Base;                                                      // 0x0010(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class UTigerAnimMetaDataAsset*                     AnimMetaDataAsset;                                         // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       AnimMetaDataName;                                          // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TigerAnimGraphRuntime.TigerAnimNode_ApplyAdditiveFiltered
// 0x0008 (0x00D0 - 0x00C8)
struct FTigerAnimNode_ApplyAdditiveFiltered : public FAnimNode_ApplyAdditive
{
	class UTigerAnimationFilter*                       FilterAsset;                                               // 0x00C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TigerAnimGraphRuntime.TigerAnimNode_BlendByBoolWSettle
// 0x0010 (0x00B0 - 0x00A0)
struct FTigerAnimNode_BlendByBoolWSettle : public FAnimNode_BlendListByBool
{
	TigerAnimGraphRuntime_ETigerBoolSettleTriggerDirection SettleTriggerDirection;                                    // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A3AU[0x3];                                     // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              SettleTriggerValue;                                        // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      SettleEventEnum;                                           // 0x00A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7FRH[0x7];                                     // 0x00A9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct TigerAnimGraphRuntime.TigerFilteredLayeredBlend
// 0x0008 (0x00C8 - 0x00C0)
struct FTigerFilteredLayeredBlend : public FAnimNode_LayeredBoneBlend
{
	class UTigerAnimationFilter*                       FilterAsset;                                               // 0x00C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct TigerAnimGraphRuntime.TigerAnimNode_RandomPlayer
// 0x0060 (0x0098 - 0x0038)
struct FTigerAnimNode_RandomPlayer : public FAnimNode_AssetPlayerBase
{
	bool                                               bShuffleMode;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_81VR[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerRandomSequenceList*                    SequenceList;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_US0R[0x48];                                    // 0x0048(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerRandomSequenceList*                    ActiveSequenceList;                                        // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
