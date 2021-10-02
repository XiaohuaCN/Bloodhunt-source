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

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class UTBP_UI_Grimoire_InfoLocked_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UTigerStyledRichTextBlock*                   UnlockInfoText;                                            // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_InfoLocked.TBP_UI_Grimoire_InfoLocked_C");
		return ptr;
	}



	void SetUnlockInfo(const struct FText& UnlockInfo);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_TBP_UI_Grimoire_InfoLocked(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
