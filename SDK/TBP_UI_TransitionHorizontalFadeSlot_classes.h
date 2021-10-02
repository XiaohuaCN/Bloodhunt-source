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

// WidgetBlueprintGeneratedClass TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C
// 0x002C (FullSize[0x028C] - InheritedSize[0x0260])
class UTBP_UI_TransitionHorizontalFadeSlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            InAnimation;                                               // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_HorizontalFadeSlot_C*                HorizontalFadeSlot;                                        // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_TransitionWidget_C*                  TransitionWidget;                                          // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                              AnimationDelay;                                            // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              LeftFadeWidth;                                             // 0x0284(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              RightFadeWidth;                                            // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_TransitionHorizontalFadeSlot.TBP_UI_TransitionHorizontalFadeSlot_C");
		return ptr;
	}



	void SetFadeWidth(float InLeftFadeWidth, float InRightFadeWidth);
	void SetAnimationDelay(float InAnimationDelay, bool bTriggerIntroAnimation);
	void SetColor(const struct FLinearColor& InColor);
	void OnInitialized();
	void Construct();
	void TriggerInAnimation();
	void PreConstruct(bool IsDesignTime);
	void OnTransitionStarted();
	void ExecuteUbergraph_TBP_UI_TransitionHorizontalFadeSlot(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
