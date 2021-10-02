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

// BlueprintGeneratedClass TBP_WeatherActivatedObject_01.TBP_WeatherActivatedObject_01_C
// 0x0010 (FullSize[0x0288] - InheritedSize[0x0278])
class ATBP_WeatherActivatedObject_01_C : public ATigerActivatedObject
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0278(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                         EditorOnlyVisualizer;                                      // 0x0280(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_WeatherActivatedObject_01.TBP_WeatherActivatedObject_01_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void UpdateWeatherComponents();
	void ExecuteUbergraph_TBP_WeatherActivatedObject_01(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
