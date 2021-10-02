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

// WidgetBlueprintGeneratedClass TBP_UI_ResourceBar.TBP_UI_ResourceBar_C
// 0x003C (FullSize[0x037C] - InheritedSize[0x0340])
class UTBP_UI_ResourceBar_C : public UTigerResourceBarUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            DamageBackgroundAnimation;                                 // 0x0348(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                                CanvasPanel_1;                                             // 0x0350(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      DamageBackground;                                          // 0x0358(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                              SegmentPanel;                                              // 0x0360(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTBP_UI_FlashEffect_C*>               Recycled_Flash_Effects;                                    // 0x0368(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                               Enable_Flash_Effect;                                       // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               Enable_Damaged_Background;                                 // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                               BaseBar;                                                   // 0x037A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                               EmptyBar;                                                  // 0x037B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ResourceBar.TBP_UI_ResourceBar_C");
		return ptr;
	}



	void OnSegmentAdded(int InIndex, class UTBP_UI_ResourceBarSegment_C* InSegment, class UHorizontalBoxSlot* InHorizontalBoxSlot);
	void ClearSegments();
	void CreateFlashEffect(class UTBP_UI_FlashEffect_C** Output_Get);
	void OnHealthLost();
	void OnSegmentEmptied(float HorizontalProgress);
	void RecycleFlashEffect(class UTBP_UI_FlashEffect_C* Finished_Effect);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_ResourceBar(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
