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

// Class LocationServicesBPLibrary.LocationServices
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class ULocationServices : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LocationServicesBPLibrary.LocationServices");
		return ptr;
	}



	bool STATIC_StopLocationServices();
	bool STATIC_StartLocationServices();
	bool STATIC_IsLocationAccuracyAvailable(LocationServicesBPLibrary_ELocationAccuracy Accuracy);
	bool STATIC_InitLocationServices(LocationServicesBPLibrary_ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);
	class ULocationServicesImpl* STATIC_GetLocationServicesImpl();
	struct FLocationServicesData STATIC_GetLastKnownLocation();
	bool STATIC_AreLocationServicesEnabled();
};

// Class LocationServicesBPLibrary.LocationServicesImpl
// 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
class ULocationServicesImpl : public UObject
{
public:
	struct FScriptMulticastDelegate                    OnLocationChanged;                                         // 0x0028(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class LocationServicesBPLibrary.LocationServicesImpl");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
