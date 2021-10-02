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

// Class UObjectPlugin.MyPluginObject
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class UMyPluginObject : public UObject
{
public:
	struct FMyPluginStruct                             MyStruct;                                                  // 0x0028(0x0010) (NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class UObjectPlugin.MyPluginObject");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
