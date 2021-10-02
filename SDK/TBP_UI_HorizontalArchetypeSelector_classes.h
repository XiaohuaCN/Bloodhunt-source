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

// WidgetBlueprintGeneratedClass TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C
// 0x0071 (FullSize[0x02F9] - InheritedSize[0x0288])
class UTBP_UI_HorizontalArchetypeSelector_C : public UTigerHorizontalArchetypeSelectorUI
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UHorizontalBox*                              RootHorizontalBox;                                         // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FScriptMulticastDelegate                    OnArchetypeSelected;                                       // 0x0298(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	unsigned char                                      ArchetypeButtons[0x50];                                    // 0x02A8(0x0050) UNKNOWN PROPERTY: MapProperty
	bool                                               UsePragueVisuals;                                          // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_HorizontalArchetypeSelector.TBP_UI_HorizontalArchetypeSelector_C");
		return ptr;
	}



	void ChangeArchetypeButtonSelection(Tiger_ETigerPowerKitType InArchetypeType);
	class UUserWidget* CreateWidgetForArchetype(Tiger_ETigerPowerKitType InArchetypeType);
	void CreateArchetypeWidgetsForClan(class UTigerPlayerClanData* InClanData);
	void CreateDivider();
	void OnSelectionChanged(class UTigerPowerKit* InArchetypeData);
	void SelectArchetype(Tiger_ETigerPowerKitType InArchetypeType);
	void ExecuteUbergraph_TBP_UI_HorizontalArchetypeSelector(int EntryPoint);
	void OnArchetypeSelected__DelegateSignature(class UTigerPowerKit* InArchetypeData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
