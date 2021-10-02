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

// WidgetBlueprintGeneratedClass TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C
// 0x0058 (FullSize[0x0320] - InheritedSize[0x02C8])
class UTBP_UI_InWorldIconBase_C : public UTigerInWorldWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            OffscreenAnimation;                                        // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                                ContentCanvas;                                             // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      OffScreenDirectionIndicator;                               // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                OffscreenDirectionParent;                                  // 0x02E8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                                  OffScreenMeterText;                                        // 0x02F0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                OnScreen;                                                  // 0x02F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              CONFIG_OffscreenIconOffset;                                // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTS_InWorldIconDistanceScaling              CONFIG_DistanceScaling;                                    // 0x0304(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_InWorldIconBase.TBP_UI_InWorldIconBase_C");
		return ptr;
	}



	void UpdatePlayerDistanceForTextWidget(class UTextBlock* InTextWidget);
	void MoveWidgetsToOffscreenPositions(float InAngle, class UWidget* InTranslationWidget, class UWidget* InRotationWidget, class UWidget* InInverseTranslationWidget);
	void UpdateDistanceWidgetScaling(TArray<class UWidget*>* InWidgets, struct FTS_InWorldIconDistanceScaling* InDistanceScalingParams);
	void UpdateOffScreenWidgets(float InAngle);
	void GetVerticalIconOffset(float* OutIconOffset);
	void GetHorizontalIconOffset(float* OutIconOffset);
	void UpdateVisuals(bool bInIsOnScreen);
	void UpdatePlayerDistance();
	void UpdateOffScreenState(float InRotationDegrees);
	void OnScreenStateChanged(bool bInIsOnScreen);
	void OnInnerWidgetChanged();
	void Construct();
	void UpdatePlayerDistanceScalingWidgets();
	void ExecuteUbergraph_TBP_UI_InWorldIconBase(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
