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
//		Name   -> Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.SetNewItem_Combat
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Pre_Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FText                                       Post_Text                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_UI_Notification_Item_C::SetNewItem_Combat(const struct FText& Pre_Text, class UTexture2D* Texture, const struct FText& Post_Text)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.SetNewItem_Combat");

	UTBP_UI_Notification_Item_C_SetNewItem_Combat_Params params;
	params.Pre_Text = Pre_Text;
	params.Texture = Texture;
	params.Post_Text = Post_Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.SetNewItem
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
//		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_UI_Notification_Item_C::SetNewItem(const struct FText& Item, class UTexture2D* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.SetNewItem");

	UTBP_UI_Notification_Item_C_SetNewItem_Params params;
	params.Item = Item;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
