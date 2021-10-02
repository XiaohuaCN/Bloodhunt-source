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
//		Name   -> Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.OnLoaded_8DE233FE433FD044E1CDAD95B52009E5
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_RewardItemPreview_C::OnLoaded_8DE233FE433FD044E1CDAD95B52009E5(class UObject* Loaded)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.OnLoaded_8DE233FE433FD044E1CDAD95B52009E5");

	UTBP_UI_RewardItemPreview_C_OnLoaded_8DE233FE433FD044E1CDAD95B52009E5_Params params;
	params.Loaded = Loaded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.SetItem
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerInventoryItemBase*                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bInShowTexture                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_UI_RewardItemPreview_C::SetItem(class UTigerInventoryItemBase* Item, bool bInShowTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.SetItem");

	UTBP_UI_RewardItemPreview_C_SetItem_Params params;
	params.Item = Item;
	params.bInShowTexture = bInShowTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.ExecuteUbergraph_TBP_UI_RewardItemPreview
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_RewardItemPreview_C::ExecuteUbergraph_TBP_UI_RewardItemPreview(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_RewardItemPreview.TBP_UI_RewardItemPreview_C.ExecuteUbergraph_TBP_UI_RewardItemPreview");

	UTBP_UI_RewardItemPreview_C_ExecuteUbergraph_TBP_UI_RewardItemPreview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
