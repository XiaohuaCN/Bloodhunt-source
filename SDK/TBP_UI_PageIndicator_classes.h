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

// WidgetBlueprintGeneratedClass TBP_UI_PageIndicator.TBP_UI_PageIndicator_C
// 0x002C (FullSize[0x028C] - InheritedSize[0x0260])
class UTBP_UI_PageIndicator_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                              Container;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int                                                NumPages;                                                  // 0x0270(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	unsigned char                                      UnknownData_06ZY[0x4];                                     // 0x0274(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnPageSelected;                                            // 0x0278(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                CurrentPageIndex;                                          // 0x0288(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_PageIndicator.TBP_UI_PageIndicator_C");
		return ptr;
	}



	void GetCurrentPageIndex(int* CurrentIndex);
	void SetNumPages(int NumPages);
	void PreConstruct(bool IsDesignTime);
	void SelectPage(int NewPageIndex);
	void Construct();
	void PageSelected(int PageIndex);
	void ExecuteUbergraph_TBP_UI_PageIndicator(int EntryPoint);
	void OnPageSelected__DelegateSignature(int PageIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
