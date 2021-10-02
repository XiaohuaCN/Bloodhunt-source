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

// Class TigerCore.TigerAuthenticationManagerBase
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UTigerAuthenticationManagerBase : public UObject
{
public:
	unsigned char                                      UnknownData_UQ0O[0x10];                                    // 0x0028(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TigerCore.TigerAuthenticationManagerBase");
		return ptr;
	}



};

// Class TigerCore.TigerAnimationFilter
// 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
class UTigerAnimationFilter : public UDataAsset
{
public:
	TArray<struct FName>                               BonesToFilter;                                             // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               BlendShapesToFilter;                                       // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class USkeleton*                                   Skeleton;                                                  // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        CurveIdsToFilter;                                          // 0x0058(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<bool>                                       BoneIdsToFilter;                                           // 0x0068(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TigerCore.TigerAnimationFilter");
		return ptr;
	}



	void UpdateFilter();
};

// Class TigerCore.TigerAnimMetaDataAsset
// 0x0050 (FullSize[0x0080] - InheritedSize[0x0030])
class UTigerAnimMetaDataAsset : public UDataAsset
{
public:
	TMap<struct FName, class UAnimMetaData*>           AnimMetaData;                                              // 0x0030(0x0050) (Edit, BlueprintVisible, ExportObject, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TigerCore.TigerAnimMetaDataAsset");
		return ptr;
	}



	class UAnimMetaData* GetMetaData(const struct FName& InName);
};

// Class TigerCore.TigerRandomSequenceList
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UTigerRandomSequenceList : public UObject
{
public:
	TArray<struct FRandomPlayerSequenceEntry>          RandomSequenceList;                                        // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class TigerCore.TigerRandomSequenceList");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
