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

// WidgetBlueprintGeneratedClass TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C
// 0x0090 (FullSize[0x03B0] - InheritedSize[0x0320])
class UTBP_UI_Discipline_Trap_WorldMarker_C : public UTBP_UI_InWorldIconBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0320(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                            OffScreenState;                                            // 0x0328(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            DownArrow_FadeOut;                                         // 0x0330(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            DetectedText_FadeOut;                                      // 0x0338(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            DownArrow_Movement;                                        // 0x0340(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Composite_DetectedAnimationOut;                            // 0x0348(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            Composite_DetectedAnimationIn;                             // 0x0350(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            DefaultBat_OutAnimation;                                   // 0x0358(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            DefaultBat_InAnimation;                                    // 0x0360(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_TransitionHeader_C*                  AnimatedDetectedText;                                      // 0x0368(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      DownArrowImage;                                            // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                RootCanvas;                                                // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      TrapDefaultImage;                                          // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      TrapDetectedImage;                                         // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                               bShouldDetectionWidgetsPlayHide;                           // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_HIUI[0x3];                                     // 0x0391(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FWidgetTransform                            OnScreenRootTransform;                                     // 0x0394(0x001C) (Edit, BlueprintVisible, Transient, DisableEditOnInstance, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Discipline_Trap_WorldMarker.TBP_UI_Discipline_Trap_WorldMarker_C");
		return ptr;
	}



	void Fade_Out_Default_Widgets();
	void Fade_In_Default_Widgets();
	void AreDetectionWidgetsHiddenOrAnimatingToHidden(bool* AreHiding);
	void Toggle_Detected_Widgets(float Effect_Size_Multiplier, const struct FText& Text);
	void Play_Detected_Animations(float Effect_Size_Multiplier, const struct FText& Text, bool Should_Hide_Text);
	void Construct();
	void Hide_Detected_Relevant_Widgets();
	void Show_Detected_Relevant_Widgets();
	void Fade_Out_Detected_Text();
	void UpdateOffScreenState(float InRotationDegrees);
	void UpdateVisuals(bool bInIsOnScreen);
	void ExecuteUbergraph_TBP_UI_Discipline_Trap_WorldMarker(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
