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

// WidgetBlueprintGeneratedClass TBP_UI_IMage.TBP_UI_Image_C
// 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
class UTBP_UI_Image_C : public UTigerImageUI
{
public:
	class UImage*                                      WrappedImage;                                              // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_IMage.TBP_UI_Image_C");
		return ptr;
	}



	class UImage* GetImage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
