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
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.GetPingInfo
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTS_PingableActorInfo                       OutInfo                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_LootVanBase_C::GetPingInfo(struct FTS_PingableActorInfo* OutInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.GetPingInfo");

	ATBP_LootVanBase_C_GetPingInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutInfo != nullptr)
		*OutInfo = params.OutInfo;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.GetPingCategory
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FName                                       OutCategory                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_LootVanBase_C::GetPingCategory(struct FName* OutCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.GetPingCategory");

	ATBP_LootVanBase_C_GetPingCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutCategory != nullptr)
		*OutCategory = params.OutCategory;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.OnAnimateOpen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_LootVanBase_C::OnAnimateOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.OnAnimateOpen");

	ATBP_LootVanBase_C_OnAnimateOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_LootVanBase_C::Timeline_0__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__FinishedFunc");

	ATBP_LootVanBase_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_LootVanBase_C::Timeline_0__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__UpdateFunc");

	ATBP_LootVanBase_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__PushPlayers__EventFunc
//		Flags  -> (BlueprintEvent)
void ATBP_LootVanBase_C::Timeline_0__PushPlayers__EventFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.Timeline_0__PushPlayers__EventFunc");

	ATBP_LootVanBase_C_Timeline_0__PushPlayers__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.StaticMeshComponentHit
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FHitResult                                  HitResult                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
//		struct FVector                                     ImpactVelocity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_LootVanBase_C::StaticMeshComponentHit(const struct FHitResult& HitResult, const struct FVector& ImpactVelocity)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.StaticMeshComponentHit");

	ATBP_LootVanBase_C_StaticMeshComponentHit_Params params;
	params.HitResult = HitResult;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.OnOpenTrunk
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_LootVanBase_C::OnOpenTrunk()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.OnOpenTrunk");

	ATBP_LootVanBase_C_OnOpenTrunk_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.ReceiveTick
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_LootVanBase_C::ReceiveTick(float DeltaSeconds)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.ReceiveTick");

	ATBP_LootVanBase_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.BndEvt__PushBoxLeft_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_LootVanBase_C::BndEvt__PushBoxLeft_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.BndEvt__PushBoxLeft_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature");

	ATBP_LootVanBase_C_BndEvt__PushBoxLeft_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.BndEvt__PushBoxRight_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature
//		Flags  -> (BlueprintEvent)
// Parameters:
//		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_LootVanBase_C::BndEvt__PushBoxRight_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.BndEvt__PushBoxRight_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature");

	ATBP_LootVanBase_C_BndEvt__PushBoxRight_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature_Params params;
	params.OverlappedComponent = OverlappedComponent;
	params.OtherActor = OtherActor;
	params.OtherComp = OtherComp;
	params.OtherBodyIndex = OtherBodyIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.CheckDoorOverlaps
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void ATBP_LootVanBase_C::CheckDoorOverlaps()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.CheckDoorOverlaps");

	ATBP_LootVanBase_C_CheckDoorOverlaps_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.EnableDoorBlock
//		Flags  -> (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UStaticMeshComponent*                        DoorComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_LootVanBase_C::EnableDoorBlock(class UStaticMeshComponent* DoorComponent)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.EnableDoorBlock");

	ATBP_LootVanBase_C_EnableDoorBlock_Params params;
	params.DoorComponent = DoorComponent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.TriggerAlarm
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_LootVanBase_C::TriggerAlarm()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.TriggerAlarm");

	ATBP_LootVanBase_C_TriggerAlarm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_LootVanBase.TBP_LootVanBase_C.ExecuteUbergraph_TBP_LootVanBase
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_LootVanBase_C::ExecuteUbergraph_TBP_LootVanBase(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_LootVanBase.TBP_LootVanBase_C.ExecuteUbergraph_TBP_LootVanBase");

	ATBP_LootVanBase_C_ExecuteUbergraph_TBP_LootVanBase_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
