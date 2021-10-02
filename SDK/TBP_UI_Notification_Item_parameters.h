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
// Parameters
//---------------------------------------------------------------------------

// Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.SetNewItem_Combat
struct UTBP_UI_Notification_Item_C_SetNewItem_Combat_Params
{
	struct FText                                       Pre_Text;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Texture;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FText                                       Post_Text;                                                 // 0x0020(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function TBP_UI_Notification_Item.TBP_UI_Notification_Item_C.SetNewItem
struct UTBP_UI_Notification_Item_C_SetNewItem_Params
{
	struct FText                                       Item;                                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	class UTexture2D*                                  Texture;                                                   // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
