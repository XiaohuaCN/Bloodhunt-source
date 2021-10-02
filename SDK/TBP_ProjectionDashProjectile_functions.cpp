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
//		Name   -> Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.CreateWorldIcon
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class ATigerPlayerController*                      InPlayerController                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ProjectionDashProjectile_C::CreateWorldIcon(class ATigerPlayerController* InPlayerController)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.CreateWorldIcon");

	ATBP_ProjectionDashProjectile_C_CreateWorldIcon_Params params;
	params.InPlayerController = InPlayerController;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.OnProjectileStopped
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_ProjectionDashProjectile_C::OnProjectileStopped()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.OnProjectileStopped");

	ATBP_ProjectionDashProjectile_C_OnProjectileStopped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.OnProjectileDeath
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_ProjectionDashProjectile_C::OnProjectileDeath()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.OnProjectileDeath");

	ATBP_ProjectionDashProjectile_C_OnProjectileDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ReceiveDestroyed
//		Flags  -> (Event, Public, BlueprintEvent)
void ATBP_ProjectionDashProjectile_C::ReceiveDestroyed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ReceiveDestroyed");

	ATBP_ProjectionDashProjectile_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_ProjectionDashProjectile_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ReceiveBeginPlay");

	ATBP_ProjectionDashProjectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ExecuteUbergraph_TBP_ProjectionDashProjectile
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_ProjectionDashProjectile_C::ExecuteUbergraph_TBP_ProjectionDashProjectile(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_ProjectionDashProjectile.TBP_ProjectionDashProjectile_C.ExecuteUbergraph_TBP_ProjectionDashProjectile");

	ATBP_ProjectionDashProjectile_C_ExecuteUbergraph_TBP_ProjectionDashProjectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
