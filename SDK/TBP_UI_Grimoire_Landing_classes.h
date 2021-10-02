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

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C
// 0x0020 (FullSize[0x02E8] - InheritedSize[0x02C8])
class UTBP_UI_Grimoire_Landing_C : public UTigerGrimoireLandingUi
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            FadeOnExit;                                                // 0x02D0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_ArticleBox_C*               ArticleBox;                                                // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   UnlockedText;                                              // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_Landing.TBP_UI_Grimoire_Landing_C");
		return ptr;
	}



	void Hide();
	void Show(class UTBP_UI_Grimoire_C* GrimoireUI, bool* IsShown);
	void UpdateUnlockedStatus();
	void Construct();
	void ExecuteUbergraph_TBP_UI_Grimoire_Landing(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
