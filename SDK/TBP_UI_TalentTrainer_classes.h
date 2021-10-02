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

// WidgetBlueprintGeneratedClass TBP_UI_TalentTrainer.TBP_UI_TalentTrainer_C
// 0x0030 (FullSize[0x02E8] - InheritedSize[0x02B8])
class UTBP_UI_TalentTrainer_C : public UTigerVendorUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x02B8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                BloodTrackBox;                                             // 0x02C0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                             MenuSwitcher;                                              // 0x02C8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                                ShopCanvas;                                                // 0x02D0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_BloodTrackCustomizer_C*              TBP_UI_BloodTrackCustomizer;                               // 0x02D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_VendorShared_C*                      TBP_UI_VendorShared;                                       // 0x02E0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_TalentTrainer.TBP_UI_TalentTrainer_C");
		return ptr;
	}



	void BndEvt__TalentsButton_K2Node_ComponentBoundEvent_71_OnButtonPressed__DelegateSignature();
	void OnOpen();
	void OnClose();
	void Construct();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_TalentTrainer(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
