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

// WidgetBlueprintGeneratedClass TBP_UI_FindGameFailedMenu.TBP_UI_FindGameFailedMenu_C
// 0x0153 (FullSize[0x03E3] - InheritedSize[0x0290])
class UTBP_UI_FindGameFailedMenu_C : public UTigerMenuWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0290(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_BasicMenu_C*                         TBP_UI_BasicMenu;                                          // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        TBP_UI_MenuButton;                                         // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MenuButton_C*                        TBP_UI_MenuButton_C_1;                                     // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UThrobber*                                   Throbber_1;                                                // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_TigerGameInstance_C*                    GameInstanceRef;                                           // 0x02B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FBlueprintSessionResult>             FoundSessions;                                             // 0x02C0(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SessionFound_;                                             // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_JO3T[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FBlueprintSessionResult                     AvailableSession;                                          // 0x02D8(0x0108) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               SearchButtonEnabled_;                                      // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	UMG_ESlateVisibility                               ThrobberVisibility;                                        // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMG_ESlateVisibility                               ButtonVisibility;                                          // 0x03E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_FindGameFailedMenu.TBP_UI_FindGameFailedMenu_C");
		return ptr;
	}



	void HandleFailure();
	void BndEvt__TBP_UI_MenuButton_K2Node_ComponentBoundEvent_35_OnClicked__DelegateSignature();
	void BndEvt__TBP_UI_MenuButton_C_0_K2Node_ComponentBoundEvent_38_OnClicked__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_TBP_UI_FindGameFailedMenu(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
