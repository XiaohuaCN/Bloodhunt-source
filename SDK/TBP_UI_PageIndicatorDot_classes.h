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

// WidgetBlueprintGeneratedClass TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C
// 0x0024 (FullSize[0x0284] - InheritedSize[0x0260])
class UTBP_UI_PageIndicatorDot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                     Dot;                                                       // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnPressed;                                                 // 0x0270(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int                                                PageIndex;                                                 // 0x0280(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_PageIndicatorDot.TBP_UI_PageIndicatorDot_C");
		return ptr;
	}



	void UpdateSelectedState(bool bIsCurrentPage);
	void BndEvt__Button_65_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_PageIndicatorDot(int EntryPoint);
	void OnPressed__DelegateSignature(int PageIndex);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
