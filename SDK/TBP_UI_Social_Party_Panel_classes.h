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

// WidgetBlueprintGeneratedClass TBP_UI_Social_Party_Panel.TBP_UI_Social_Party_Panel_C
// 0x0028 (FullSize[0x02A8] - InheritedSize[0x0280])
class UTBP_UI_Social_Party_Panel_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UListView*                                   MemberList;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Button_CTA_C*                        TBP_UI_Button_CTA;                                         // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Divider_C*                           TBP_UI_Divider;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                                VerticalBox_1;                                             // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Social_Party_Panel.TBP_UI_Social_Party_Panel_C");
		return ptr;
	}



	void UpdateMemberList();
	void OnOpen();
	void OnClose();
	void OnPartyUpdated();
	void BndEvt__TBP_UI_Button_CTA_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_TBP_UI_Social_Party_Panel(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
