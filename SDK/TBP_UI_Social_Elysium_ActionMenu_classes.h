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

// WidgetBlueprintGeneratedClass TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C
// 0x0020 (FullSize[0x02A8] - InheritedSize[0x0288])
class UTBP_UI_Social_Elysium_ActionMenu_C : public UTBP_UI_Social_ActionMenuBase_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UTBP_UI_Social_ActionMenuItem_C*             AddFriendMenuItem;                                         // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      Image_99;                                                  // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Social_ActionMenuItem_C*             InviteToGroupMenuItem;                                     // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Social_Elysium_ActionMenu.TBP_UI_Social_Elysium_ActionMenu_C");
		return ptr;
	}



	void CouldAddAsFriend(bool* bCouldAdd);
	void CouldInviteToParty(bool* bCouldInvite);
	void GetElysiumPlayerCard(class UTBP_UI_Social_Elysium_PlayerCard_C** OutPlayerCard);
	void BndEvt__TBP_UI_Social_ActionMenuItem_K2Node_ComponentBoundEvent_2_MenuClicked__DelegateSignature();
	void BndEvt__AddFriendMenuItem_K2Node_ComponentBoundEvent_3_MenuClicked__DelegateSignature();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_TBP_UI_Social_Elysium_ActionMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
