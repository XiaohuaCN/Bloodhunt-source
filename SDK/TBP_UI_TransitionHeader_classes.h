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

// WidgetBlueprintGeneratedClass TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C
// 0x0062 (FullSize[0x02C2] - InheritedSize[0x0260])
class UTBP_UI_TransitionHeader_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            InAnimation;                                               // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      BackgroundImage;                                           // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              TextEffectWidget;                                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                              TextWidget;                                                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0288(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	float                                              AnimationDelay;                                            // 0x02A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              EffectSizeMultiplier;                                      // 0x02A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               bHasInitializedEffect;                                     // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	TEnumAsByte<ETigerHeaderType_ETigerHeaderType>     HeaderType;                                                // 0x02A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_3C0S[0x6];                                     // 0x02AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnInAnimationFinished;                                     // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TEnumAsByte<ENUM_TextStyleColor_ENUM_TextStyleColor> StyleColor;                                                // 0x02C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HorizontalAlignment;                                       // 0x02C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_TransitionHeader.TBP_UI_TransitionHeader_C");
		return ptr;
	}



	void SetText(const struct FText& InText, const struct FText& InSubText);
	void TriggerAnimation();
	void SetTextWithHeaderType(const struct FText& InText, const struct FText& InSubText, TEnumAsByte<ETigerHeaderType_ETigerHeaderType> InHeaderType);
	void InitializeEffect();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Construct();
	void TriggerAnimationWithDelay();
	void PreConstruct(bool IsDesignTime);
	void WidgetAnimationEvt_InAnimation_K2Node_WidgetAnimationEvent_1();
	void Play_Header_Animation(bool IsReversed);
	void ExecuteUbergraph_TBP_UI_TransitionHeader(int EntryPoint);
	void OnInAnimationFinished__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
