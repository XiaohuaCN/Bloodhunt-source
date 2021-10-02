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

// WidgetBlueprintGeneratedClass TBP_UI_BloodTrackPassive_DragAndDropVisual.TBP_UI_BloodTrackPassive_DragAndDropVisual_C
// 0x0018 (FullSize[0x0278] - InheritedSize[0x0260])
class UTBP_UI_BloodTrackPassive_DragAndDropVisual_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0260(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      IconImage;                                                 // 0x0268(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                                  Icon_Texture;                                              // 0x0270(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_BloodTrackPassive_DragAndDropVisual.TBP_UI_BloodTrackPassive_DragAndDropVisual_C");
		return ptr;
	}



	void Construct();
	void ExecuteUbergraph_TBP_UI_BloodTrackPassive_DragAndDropVisual(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
