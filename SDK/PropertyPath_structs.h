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

// ScriptStruct PropertyPath.PropertyPathSegment
// 0x0028
struct FPropertyPathSegment
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArrayIndex;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MLXT[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStruct*                                     Struct;                                                    // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_F7QO[0x10];                                    // 0x0018(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct PropertyPath.CachedPropertyPath
// 0x0028
struct FCachedPropertyPath
{
	TArray<struct FPropertyPathSegment>                Segments;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0KUE[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UFunction*                                   CachedFunction;                                            // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_FA8T[0x8];                                     // 0x0020(0x0008) MISSED OFFSET (PADDING)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
