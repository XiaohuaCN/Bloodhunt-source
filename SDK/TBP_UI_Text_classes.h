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

// WidgetBlueprintGeneratedClass TBP_UI_Text.TBP_UI_Text_C
// 0x002C (FullSize[0x02AC] - InheritedSize[0x0280])
class UTBP_UI_Text_C : public UTigerTextWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                                  TextWidget;                                                // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FText                                       Text;                                                      // 0x0290(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ExposeOnSpawn)
	int                                                Size;                                                      // 0x02A8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Text.TBP_UI_Text_C");
		return ptr;
	}



	void SetText(const struct FText& InText);
	class UTextBlock* GetText();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_TBP_UI_Text(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
