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

// WidgetBlueprintGeneratedClass TBP_UI_HorizontalArchetypeSelector_Default.TBP_UI_HorizontalArchetypeSelector_Default_C
// 0x0000 (FullSize[0x02F9] - InheritedSize[0x02F9])
class UTBP_UI_HorizontalArchetypeSelector_Default_C : public UTBP_UI_HorizontalArchetypeSelector_C
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_HorizontalArchetypeSelector_Default.TBP_UI_HorizontalArchetypeSelector_Default_C");
		return ptr;
	}



	class UUserWidget* CreateWidgetForArchetype(Tiger_ETigerPowerKitType InArchetypeType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
