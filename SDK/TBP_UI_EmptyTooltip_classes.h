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

// WidgetBlueprintGeneratedClass TBP_UI_EmptyTooltip.TBP_UI_EmptyTooltip_C
// 0x0010 (FullSize[0x0298] - InheritedSize[0x0288])
class UTBP_UI_EmptyTooltip_C : public UTigerTooltipWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0288(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTBP_UI_TooltipActionsContainer_C*           TooltipActionsContainer;                                   // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_EmptyTooltip.TBP_UI_EmptyTooltip_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_TBP_UI_EmptyTooltip(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
