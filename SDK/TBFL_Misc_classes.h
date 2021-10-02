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

// BlueprintGeneratedClass TBFL_Misc.TBFL_Misc_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UTBFL_Misc_C : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBFL_Misc.TBFL_Misc_C");
		return ptr;
	}



	void STATIC_MoveWidgetsFromSideAngle(float InWidgetDistance, float InAngleDegrees, class UWidget* InTranslationWidget, class UWidget* InRotationWidget, class UWidget* InInverseTranslationWidget, class UObject* __WorldContext);
	void STATIC_ActivateClientAlarmAndReportAction(class UAkAudioEvent* Event, const struct FVector& EventLocation, float ActionRange, class ATigerCharacter* Character, Tiger_ETigerAIPlayerAction InAction, class UObject* __WorldContext);
	void STATIC_ActivateAlarmAndReportAction(const struct FVector& EventLocation, float ActionRange, class ATigerCharacter* Character, Tiger_ETigerAIPlayerAction InAction, class UObject* __WorldContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
