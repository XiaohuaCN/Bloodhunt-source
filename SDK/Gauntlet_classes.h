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

// Class Gauntlet.GauntletTestController
// 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
class UGauntletTestController : public UObject
{
public:
	unsigned char                                      UnknownData_81R5[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Gauntlet.GauntletTestController");
		return ptr;
	}



};

// Class Gauntlet.GauntletTestControllerBootTest
// 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
class UGauntletTestControllerBootTest : public UGauntletTestController
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Gauntlet.GauntletTestControllerBootTest");
		return ptr;
	}



};

// Class Gauntlet.GauntletTestControllerErrorTest
// 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
class UGauntletTestControllerErrorTest : public UGauntletTestController
{
public:
	unsigned char                                      UnknownData_8I6X[0x20];                                    // 0x0030(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class Gauntlet.GauntletTestControllerErrorTest");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
