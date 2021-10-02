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
//		Name   -> Function TBP_Trap.TBP_Trap_C.CreateWorldIcon
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerController*                      InPlayerController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTBP_UI_Discipline_Trap_WorldMarker_C*       OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Trap_C::CreateWorldIcon(class ATigerPlayerController* InPlayerController, class UTBP_UI_Discipline_Trap_WorldMarker_C** OutWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Trap.TBP_Trap_C.CreateWorldIcon");

	ATBP_Trap_C_CreateWorldIcon_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutWidget != nullptr)
		*OutWidget = params.OutWidget;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Trap.TBP_Trap_C.IsCharacterFriendlyWithDisciplineCaster
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		class ATigerCharacter*                             OtherCharacter                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               Is_Friendly                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Trap_C::IsCharacterFriendlyWithDisciplineCaster(class ATigerCharacter* OtherCharacter, bool* Is_Friendly)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Trap.TBP_Trap_C.IsCharacterFriendlyWithDisciplineCaster");

	ATBP_Trap_C_IsCharacterFriendlyWithDisciplineCaster_Params params;
	params.OtherCharacter = OtherCharacter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Is_Friendly != nullptr)
		*Is_Friendly = params.Is_Friendly;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Trap.TBP_Trap_C.GetWorldMarkerWidget
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_Discipline_Trap_WorldMarker_C*       AsTBP_UI_Discipline_Trap_World_Marker                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bSuccess                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Trap_C::GetWorldMarkerWidget(class UTBP_UI_Discipline_Trap_WorldMarker_C** AsTBP_UI_Discipline_Trap_World_Marker, bool* bSuccess)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Trap.TBP_Trap_C.GetWorldMarkerWidget");

	ATBP_Trap_C_GetWorldMarkerWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (AsTBP_UI_Discipline_Trap_World_Marker != nullptr)
		*AsTBP_UI_Discipline_Trap_World_Marker = params.AsTBP_UI_Discipline_Trap_World_Marker;
	if (bSuccess != nullptr)
		*bSuccess = params.bSuccess;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Trap.TBP_Trap_C.OnPlacedTrap
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Trap_C::OnPlacedTrap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Trap.TBP_Trap_C.OnPlacedTrap");

	ATBP_Trap_C_OnPlacedTrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Trap.TBP_Trap_C.OnActivatedTrap
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Trap_C::OnActivatedTrap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Trap.TBP_Trap_C.OnActivatedTrap");

	ATBP_Trap_C_OnActivatedTrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Trap.TBP_Trap_C.OnTriggeredTrap
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Trap_C::OnTriggeredTrap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Trap.TBP_Trap_C.OnTriggeredTrap");

	ATBP_Trap_C_OnTriggeredTrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Trap.TBP_Trap_C.TrapDestroy
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_Trap_C::TrapDestroy()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Trap.TBP_Trap_C.TrapDestroy");

	ATBP_Trap_C_TrapDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Trap.TBP_Trap_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Trap_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Trap.TBP_Trap_C.ReceiveTick");

	ATBP_Trap_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Trap.TBP_Trap_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Trap_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Trap.TBP_Trap_C.ReceiveBeginPlay");

	ATBP_Trap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Trap.TBP_Trap_C.ExecuteUbergraph_TBP_Trap
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Trap_C::ExecuteUbergraph_TBP_Trap(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Trap.TBP_Trap_C.ExecuteUbergraph_TBP_Trap");

	ATBP_Trap_C_ExecuteUbergraph_TBP_Trap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
