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

// WidgetBlueprintGeneratedClass TBP_UI_FullScreen_PopUp_Base.TBP_UI_FullScreen_PopUp_Base_C
// 0x0070 (FullSize[0x02D0] - InheritedSize[0x0260])
class UTBP_UI_FullScreen_PopUp_Base_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            FadeOutAnimation;                                          // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                            InAnimation;                                               // 0x0270(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Box_C*                               InformationWidgetBorder;                                   // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                                  InformationWidgetSlot;                                     // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                RootCanvas;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Text_C*                              TitleText;                                                 // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Title;                                                     // 0x0298(0x0018) (Edit, BlueprintVisible, ExposeOnSpawn)
	struct FScriptMulticastDelegate                    OnClose;                                                   // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FScriptMulticastDelegate                    OnFadeOutFinished;                                         // 0x02C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_FullScreen_PopUp_Base.TBP_UI_FullScreen_PopUp_Base_C");
		return ptr;
	}



	void PreConstruct(bool IsDesignTime);
	void Construct();
	void StartInAnimation();
	void FadeOut();
	void WidgetAnimationEvt_FadeOutAnimation_K2Node_WidgetAnimationEvent_1();
	void Hide();
	void Show();
	void Close();
	void ExecuteUbergraph_TBP_UI_FullScreen_PopUp_Base(int EntryPoint);
	void OnFadeOutFinished__DelegateSignature();
	void OnClose__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
