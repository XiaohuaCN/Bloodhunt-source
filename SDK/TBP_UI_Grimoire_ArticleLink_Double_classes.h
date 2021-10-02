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

// WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ArticleLink_Double.TBP_UI_Grimoire_ArticleLink_Double_C
// 0x0010 (FullSize[0x0290] - InheritedSize[0x0280])
class UTBP_UI_Grimoire_ArticleLink_Double_C : public UTigerWidget
{
public:
	class UTBP_UI_Grimoire_ArticleLink_C*              ArticleLink1;                                              // 0x0280(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_Grimoire_ArticleLink_C*              ArticleLink2;                                              // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_Grimoire_ArticleLink_Double.TBP_UI_Grimoire_ArticleLink_Double_C");
		return ptr;
	}



	void HideArticleLink2();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
