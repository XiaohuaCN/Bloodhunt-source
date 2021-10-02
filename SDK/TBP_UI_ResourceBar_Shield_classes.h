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

// WidgetBlueprintGeneratedClass TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C
// 0x000C (FullSize[0x0388] - InheritedSize[0x037C])
class UTBP_UI_ResourceBar_Shield_C : public UTBP_UI_ResourceBar_C
{
public:
	unsigned char                                      UnknownData_NPNT[0x4];                                     // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0380(0x0008) (ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ResourceBar_Shield.TBP_UI_ResourceBar_Shield_C");
		return ptr;
	}



	struct FLinearColor GetLockedColor();
	struct FLinearColor GetEmptyColor();
	struct FLinearColor GetFilledColor();
	float GetRecentResourcesLost();
	float GetMaxResources();
	float GetCurrentResources();
	void OnInitialized();
	void OnShieldChanged(float InNewHealth, float InNewHealthPercentage);
	void ExecuteUbergraph_TBP_UI_ResourceBar_Shield(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
