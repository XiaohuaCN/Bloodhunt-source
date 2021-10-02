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

// WidgetBlueprintGeneratedClass TBP_UI_TooltipActionsContainer.TBP_UI_TooltipActionsContainer_C
// 0x0060 (FullSize[0x02C0] - InheritedSize[0x0260])
class UTBP_UI_TooltipActionsContainer_C : public UUserWidget
{
public:
	class UHorizontalBox*                              ActionsContainer;                                          // 0x0260(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateFontInfo                              InFont;                                                    // 0x0268(0x0058) (Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_TooltipActionsContainer.TBP_UI_TooltipActionsContainer_C");
		return ptr;
	}



	void SetActions(TArray<struct FTigerTooltipAction>* InActions);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
