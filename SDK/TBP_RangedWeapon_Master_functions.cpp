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
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.GetRangedWeaponCategory
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		TEnumAsByte<ENUM_RangedWeaponCategories_ENUM_RangedWeaponCategories> RangedWeaponCategory                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_RangedWeapon_Master_C::GetRangedWeaponCategory(TEnumAsByte<ENUM_RangedWeaponCategories_ENUM_RangedWeaponCategories>* RangedWeaponCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.GetRangedWeaponCategory");

	UTBP_RangedWeapon_Master_C_GetRangedWeaponCategory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RangedWeaponCategory != nullptr)
		*RangedWeaponCategory = params.RangedWeaponCategory;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.StandardSpread 16
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Dir                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerRangedRandomState                     RandomState                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Master_C::StandardSpread_16(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.StandardSpread 16");

	UTBP_RangedWeapon_Master_C_StandardSpread_16_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomState != nullptr)
		*RandomState = params.RandomState;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Horizontal Line
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Dir                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerRangedRandomState                     RandomState                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Master_C::Horizontal_Line(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Horizontal Line");

	UTBP_RangedWeapon_Master_C_Horizontal_Line_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomState != nullptr)
		*RandomState = params.RandomState;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Tri
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Dir                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerRangedRandomState                     RandomState                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Master_C::Tri(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Tri");

	UTBP_RangedWeapon_Master_C_Tri_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomState != nullptr)
		*RandomState = params.RandomState;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.OnHitAuthority
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
//		class ATigerCharacter*                             Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class ATigerCharacter*                             Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_RangedWeapon_Master_C::OnHitAuthority(class ATigerCharacter* Instigator, class ATigerCharacter* Target)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.OnHitAuthority");

	UTBP_RangedWeapon_Master_C_OnHitAuthority_Params params;
	params.Instigator = Instigator;
	params.Target = Target;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Vertical Line
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Dir                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerRangedRandomState                     RandomState                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Master_C::Vertical_Line(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Vertical Line");

	UTBP_RangedWeapon_Master_C_Vertical_Line_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomState != nullptr)
		*RandomState = params.RandomState;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.StandardSpread 8
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Dir                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerRangedRandomState                     RandomState                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Master_C::StandardSpread_8(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.StandardSpread 8");

	UTBP_RangedWeapon_Master_C_StandardSpread_8_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomState != nullptr)
		*RandomState = params.RandomState;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.StandardSpread 12
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Dir                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerRangedRandomState                     RandomState                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Master_C::StandardSpread_12(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.StandardSpread 12");

	UTBP_RangedWeapon_Master_C_StandardSpread_12_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomState != nullptr)
		*RandomState = params.RandomState;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.NeoArmstrongCycloneJetArmstrongCannon
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Dir                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerRangedRandomState                     RandomState                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Master_C::NeoArmstrongCycloneJetArmstrongCannon(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.NeoArmstrongCycloneJetArmstrongCannon");

	UTBP_RangedWeapon_Master_C_NeoArmstrongCycloneJetArmstrongCannon_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomState != nullptr)
		*RandomState = params.RandomState;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.ProjectileDirectionList
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Dir                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerRangedRandomState                     RandomState                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Master_C::ProjectileDirectionList(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.ProjectileDirectionList");

	UTBP_RangedWeapon_Master_C_ProjectileDirectionList_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomState != nullptr)
		*RandomState = params.RandomState;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.DefaultShotgunSpread
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Dir                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerRangedRandomState                     RandomState                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Master_C::DefaultShotgunSpread(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.DefaultShotgunSpread");

	UTBP_RangedWeapon_Master_C_DefaultShotgunSpread_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomState != nullptr)
		*RandomState = params.RandomState;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.RowBasedGrid
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Dir                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               ShouldBeInsideSpreadRadius                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		int                                                Rows                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Master_C::RowBasedGrid(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, bool ShouldBeInsideSpreadRadius, int Rows)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.RowBasedGrid");

	UTBP_RangedWeapon_Master_C_RowBasedGrid_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;
	params.ShouldBeInsideSpreadRadius = ShouldBeInsideSpreadRadius;
	params.Rows = Rows;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.SmileyFace :D
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Dir                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Master_C::SmileyFace__D(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.SmileyFace :D");

	UTBP_RangedWeapon_Master_C_SmileyFace__D_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.CircularSpread
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Dir                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Master_C::CircularSpread(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.CircularSpread");

	UTBP_RangedWeapon_Master_C_CircularSpread_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.TrueShotgunSpread
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Dir                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FTigerRangedRandomState                     RandomState                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Master_C::TrueShotgunSpread(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir, struct FTigerRangedRandomState* RandomState)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.TrueShotgunSpread");

	UTBP_RangedWeapon_Master_C_TrueShotgunSpread_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (RandomState != nullptr)
		*RandomState = params.RandomState;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Triangle
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerRangedWeaponComponent*                 RangedWeaponComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                BulletIndex                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     In_Dir                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FVector UTBP_RangedWeapon_Master_C::Triangle(class UTigerRangedWeaponComponent* RangedWeaponComponent, int BulletIndex, const struct FVector& In_Dir)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_RangedWeapon_Master.TBP_RangedWeapon_Master_C.Triangle");

	UTBP_RangedWeapon_Master_C_Triangle_Params params;
	params.RangedWeaponComponent = RangedWeaponComponent;
	params.BulletIndex = BulletIndex;
	params.In_Dir = In_Dir;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
