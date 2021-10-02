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

// WidgetBlueprintGeneratedClass TBP_UI_FlashEffect.TBP_UI_FlashEffect_C
// 0x0028 (FullSize[0x0288] - InheritedSize[0x0260])
class UTBP_UI_FlashEffect_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            flash;                                                     // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                      FlashImage;                                                // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    Flash_Finished;                                            // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_FlashEffect.TBP_UI_FlashEffect_C");
		return ptr;
	}



	void PlayFlashEffect();
	void Construct();
	void WidgetAnimationEvt_Flash_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_TBP_UI_FlashEffect(int EntryPoint);
	void Flash_Finished__DelegateSignature(class UTBP_UI_FlashEffect_C* Finished_Effect);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
