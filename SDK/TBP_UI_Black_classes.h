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

// WidgetBlueprintGeneratedClass TBP_UI_Black.TBP_UI_Black_C
// 0x0024 (FullSize[0x02BC] - InheritedSize[0x0298])
class UTBP_UI_Black_C : public UTigerLoadingScreenUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0298(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            FadeInThrobber;                                            // 0x02A0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            FadeOutAnim;                                               // 0x02A8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Loading_Throbber_C*                  TBP_UI_Loading_Throbber;                                   // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                ThrobberVisibilityReferenceTime;                           // 0x02B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Black.TBP_UI_Black_C");
		return ptr;
	}



	void StartFadeOut();
	void WidgetAnimationEvt_FadeOutAnim_K2Node_WidgetAnimationEvent_1();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_TBP_UI_Black(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
