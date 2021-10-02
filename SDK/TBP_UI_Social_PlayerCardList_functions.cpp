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
//		Name   -> Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.FixLayout
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_UI_Social_PlayerCardList_C::FixLayout()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.FixLayout");

	UTBP_UI_Social_PlayerCardList_C_FixLayout_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.ClearList
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void UTBP_UI_Social_PlayerCardList_C::ClearList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.ClearList");

	UTBP_UI_Social_PlayerCardList_C_ClearList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.AddPlayerWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UUserWidget*                                 InPlayerWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_PlayerCardList_C::AddPlayerWidget(class UUserWidget* InPlayerWidget, int InIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.AddPlayerWidget");

	UTBP_UI_Social_PlayerCardList_C_AddPlayerWidget_Params params;
	params.InPlayerWidget = InPlayerWidget;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.RowColumnFromIndex
//		Flags  -> (Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Row                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                Column                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Social_PlayerCardList_C::RowColumnFromIndex(int InIndex, int* Row, int* Column)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Social_PlayerCardList.TBP_UI_Social_PlayerCardList_C.RowColumnFromIndex");

	UTBP_UI_Social_PlayerCardList_C_RowColumnFromIndex_Params params;
	params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Row != nullptr)
		*Row = params.Row;
	if (Column != nullptr)
		*Column = params.Column;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
