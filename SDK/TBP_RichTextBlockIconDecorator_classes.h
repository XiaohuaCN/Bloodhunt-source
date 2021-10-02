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

// BlueprintGeneratedClass TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C
// 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
class UTBP_RichTextBlockIconDecorator_C : public UTigerRichTextBlockIconDecorator
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_RichTextBlockIconDecorator.TBP_RichTextBlockIconDecorator_C");
		return ptr;
	}



	struct FSlateBrush GetBrushForKeyInternal(const struct FKey& InKey);
	struct FSlateBrush GetBrushForAxisInternal(const struct FName& InName);
	struct FSlateBrush GetBrushForActionInternal(const struct FName& InName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
