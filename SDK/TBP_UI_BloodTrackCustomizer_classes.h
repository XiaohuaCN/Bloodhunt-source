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

// WidgetBlueprintGeneratedClass TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C
// 0x0070 (FullSize[0x02D0] - InheritedSize[0x0260])
class UTBP_UI_BloodTrackCustomizer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            AnimatedBloodTrackFadeIn;                                  // 0x0268(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_BloodTrackCategory_C*                ArchetypeCategory;                                         // 0x0270(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   ArchetypeNameText;                                         // 0x0278(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BloodTrackCategory_C*                GeneralCategory;                                           // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BloodTrack_C*                        TBP_UI_BloodTrack;                                         // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_FullscreenImage_C*                   TBP_UI_FullscreenImage;                                    // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TigerStyledRichTextBlock;                                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TigerStyledRichTextBlock_2;                                // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   TigerStyledRichTextBlock_150;                              // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UTigerBloodTrackPassiveConfig*>       CurrentBloodTrack;                                         // 0x02B0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UTigerBloodTrackPassiveConfig*>       InitialBloodTrack;                                         // 0x02C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_BloodTrackCustomizer.TBP_UI_BloodTrackCustomizer_C");
		return ptr;
	}



	void PopulateMenus();
	void SwitchSelectedPassive(int Index, class UTigerBloodTrackPassiveConfig* New_Passive);
	void MenuClosing();
	void PreviewMove(TArray<int>* Movement_Data);
	void ModifyBloodTrack(TArray<int>* Movement_Data);
	void MenuOpening();
	void UpdateBackgroundVisibility();
	void OnInitialized();
	void Destruct();
	void OnBloodTrackUpdatedEvent_Event_1(class ATigerPlayer* InPlayer);
	void ExecuteUbergraph_TBP_UI_BloodTrackCustomizer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
