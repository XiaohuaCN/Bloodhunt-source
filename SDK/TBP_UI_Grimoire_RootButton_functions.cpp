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
//		Name   -> Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnNewMenuSelected
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireCategory*                      NewCategory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_RootButton_C::OnNewMenuSelected(class UTigerGrimoireCategory* NewCategory)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnNewMenuSelected");

	UTBP_UI_Grimoire_RootButton_C_OnNewMenuSelected_Params params;
	params.NewCategory = NewCategory;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.Construct
//		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
void UTBP_UI_Grimoire_RootButton_C::Construct()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.Construct");

	UTBP_UI_Grimoire_RootButton_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnButtonClicked
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_UI_Grimoire_RootButton_C::OnButtonClicked()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnButtonClicked");

	UTBP_UI_Grimoire_RootButton_C_OnButtonClicked_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.ExecuteUbergraph_TBP_UI_Grimoire_RootButton
//		Flags  -> (Final)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_RootButton_C::ExecuteUbergraph_TBP_UI_Grimoire_RootButton(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.ExecuteUbergraph_TBP_UI_Grimoire_RootButton");

	UTBP_UI_Grimoire_RootButton_C_ExecuteUbergraph_TBP_UI_Grimoire_RootButton_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnClicked__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireCategory*                      SubmenuWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Grimoire_RootButton_C::OnClicked__DelegateSignature(class UTigerGrimoireCategory* SubmenuWidget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Grimoire_RootButton.TBP_UI_Grimoire_RootButton_C.OnClicked__DelegateSignature");

	UTBP_UI_Grimoire_RootButton_C_OnClicked__DelegateSignature_Params params;
	params.SubmenuWidget = SubmenuWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
