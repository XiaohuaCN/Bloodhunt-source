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

// WidgetBlueprintGeneratedClass TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C
// 0x0000 (FullSize[0x037C] - InheritedSize[0x037C])
class UTBP_UI_ResourceBar_Health_C : public UTBP_UI_ResourceBar_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ResourceBar_Health.TBP_UI_ResourceBar_Health_C");
		return ptr;
	}



	struct FLinearColor GetLockedColor();
	struct FLinearColor GetEmptyColor();
	void IsDowned(bool* Downed);
	struct FLinearColor GetFilledColor();
	float GetRecentResourcesLost();
	float GetMaxResources();
	float GetCurrentResources();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
