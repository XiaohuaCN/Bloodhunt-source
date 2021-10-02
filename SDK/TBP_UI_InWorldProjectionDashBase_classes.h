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

// WidgetBlueprintGeneratedClass TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C
// 0x000E (FullSize[0x032E] - InheritedSize[0x0320])
class UTBP_UI_InWorldProjectionDashBase_C : public UTBP_UI_InWorldIconBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                              DistanceToPlayer;                                          // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               bIsFadingOut;                                              // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bUpdateOnScreenOffset;                                     // 0x032D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_InWorldProjectionDashBase.TBP_UI_InWorldProjectionDashBase_C");
		return ptr;
	}



	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateOffScreenState(float InRotationDegrees);
	void OnScreenStateChanged(bool bInIsOnScreen);
	void Construct();
	void ExecuteUbergraph_TBP_UI_InWorldProjectionDashBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
