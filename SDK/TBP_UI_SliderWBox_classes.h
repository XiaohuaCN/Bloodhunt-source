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

// WidgetBlueprintGeneratedClass TBP_UI_SliderWBox.TBP_UI_SliderWBox_C
// 0x0051 (FullSize[0x02D1] - InheritedSize[0x0280])
class UTBP_UI_SliderWBox_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                            Box;                                                       // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                                     Slider;                                                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      SliderBG;                                                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnValueChanged;                                            // 0x02A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                              MaxValue;                                                  // 0x02B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MinValue;                                                  // 0x02B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                                BG_Color_Override;                                         // 0x02B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TempSliderValue;                                           // 0x02C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              TempBoxValue;                                              // 0x02CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               AllowDecimals;                                             // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_SliderWBox.TBP_UI_SliderWBox_C");
		return ptr;
	}



	void SetMinValue(float MinValue);
	void GetValues(float* Box_Value, float* Slider_Value);
	void InitializeValues(float SliderValue, float MinValue, float MaxValue, bool AllowDecimals);
	void SetMaxValue(float InMaxValue);
	void SetBoxValue(float InValue);
	void BndEvt__Box_K2Node_ComponentBoundEvent_97_OnEditableTextBoxCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<SlateCore_ETextCommit> CommitMethod);
	void BndEvt__Slider_K2Node_ComponentBoundEvent_0_OnMouseCaptureBeginEvent__DelegateSignature();
	void BndEvt__Slider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__Slider_K2Node_ComponentBoundEvent_82_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ExecuteUbergraph_TBP_UI_SliderWBox(int EntryPoint);
	void OnValueChanged__DelegateSignature(float BoxValue, float SliderValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
