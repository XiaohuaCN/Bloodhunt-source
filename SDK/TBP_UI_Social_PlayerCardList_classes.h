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

// WidgetBlueprintGeneratedClass TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class UTBP_UI_Social_PlayerCardList_C : public UTigerWidget
{
public:
	class UUniformGridPanel*                           PlayerGrid;                                                // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                                     SpacerToReserveColumn;                                     // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C");
		return ptr;
	}



	void FixLayout();
	void ClearList();
	void AddPlayerWidget(class UUserWidget* InPlayerWidget, int InIndex);
	void RowColumnFromIndex(int InIndex, int* Row, int* Column);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
