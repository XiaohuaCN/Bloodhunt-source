// Name: bbbbbbbbbbbbbbbbbbbbbbblod, Version: 1

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_Misc.TBFL_Misc_C.MoveWidgetsFromSideAngle
//		Flags  -> (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		float                                              InWidgetDistance                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InAngleDegrees                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     InTranslationWidget                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     InRotationWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UWidget*                                     InInverseTranslationWidget                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_Misc_C::STATIC_MoveWidgetsFromSideAngle(float InWidgetDistance, float InAngleDegrees, class UWidget* InTranslationWidget, class UWidget* InRotationWidget, class UWidget* InInverseTranslationWidget, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_Misc.TBFL_Misc_C.MoveWidgetsFromSideAngle");

	UTBFL_Misc_C_MoveWidgetsFromSideAngle_Params params;
	params.InWidgetDistance = InWidgetDistance;
	params.InAngleDegrees = InAngleDegrees;
	params.InTranslationWidget = InTranslationWidget;
	params.InRotationWidget = InRotationWidget;
	params.InInverseTranslationWidget = InInverseTranslationWidget;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_Misc.TBFL_Misc_C.ActivateClientAlarmAndReportAction
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UAkAudioEvent*                               Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     EventLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ActionRange                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerCharacter*                             Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerAIPlayerAction                         InAction                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_Misc_C::STATIC_ActivateClientAlarmAndReportAction(class UAkAudioEvent* Event, const struct FVector& EventLocation, float ActionRange, class ATigerCharacter* Character, Tiger_ETigerAIPlayerAction InAction, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_Misc.TBFL_Misc_C.ActivateClientAlarmAndReportAction");

	UTBFL_Misc_C_ActivateClientAlarmAndReportAction_Params params;
	params.Event = Event;
	params.EventLocation = EventLocation;
	params.ActionRange = ActionRange;
	params.Character = Character;
	params.InAction = InAction;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBFL_Misc.TBFL_Misc_C.ActivateAlarmAndReportAction
//		Flags  -> (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FVector                                     EventLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              ActionRange                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerCharacter*                             Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerAIPlayerAction                         InAction                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBFL_Misc_C::STATIC_ActivateAlarmAndReportAction(const struct FVector& EventLocation, float ActionRange, class ATigerCharacter* Character, Tiger_ETigerAIPlayerAction InAction, class UObject* __WorldContext)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBFL_Misc.TBFL_Misc_C.ActivateAlarmAndReportAction");

	UTBFL_Misc_C_ActivateAlarmAndReportAction_Params params;
	params.EventLocation = EventLocation;
	params.ActionRange = ActionRange;
	params.Character = Character;
	params.InAction = InAction;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
