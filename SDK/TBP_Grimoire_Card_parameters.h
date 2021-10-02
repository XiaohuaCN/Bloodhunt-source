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

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Randomise Damage Placement
struct ATBP_Grimoire_Card_C_Randomise_Damage_Placement_Params
{
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.OnClose
struct ATBP_Grimoire_Card_C_OnClose_Params
{
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.OnOpen
struct ATBP_Grimoire_Card_C_OnOpen_Params
{
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Play Card Transition Animation
struct ATBP_Grimoire_Card_C_Play_Card_Transition_Animation_Params
{
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Is Back Using DNMR
struct ATBP_Grimoire_Card_C_Set_Is_Back_Using_DNMR_Params
{
	bool                                               InBool;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Is Front Using DNMR
struct ATBP_Grimoire_Card_C_Set_Is_Front_Using_DNMR_Params
{
	bool                                               InBool;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Card To New Card
struct ATBP_Grimoire_Card_C_Change_Card_To_New_Card_Params
{
	class UTigerGrimoireEntry*                         InEntry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Quality Level
struct ATBP_Grimoire_Card_C_Change_Quality_Level_Params
{
	struct FDataTableRowHandle                         InRow;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Border Colour
struct ATBP_Grimoire_Card_C_Change_Border_Colour_Params
{
	struct FDataTableRowHandle                         InRow;                                                     // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Card Mat Properties to Material
struct ATBP_Grimoire_Card_C_Send_Card_Mat_Properties_to_Material_Params
{
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Backface Texture to Material
struct ATBP_Grimoire_Card_C_Send_Backface_Texture_to_Material_Params
{
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Frontface Texture to Material
struct ATBP_Grimoire_Card_C_Send_Frontface_Texture_to_Material_Params
{
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Overwrite Card Material Preset
struct ATBP_Grimoire_Card_C_Overwrite_Card_Material_Preset_Params
{
	class UGrimoireCardMaterialPreset*                 InPreset;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Frontface
struct ATBP_Grimoire_Card_C_Set_Frontface_Params
{
	class UTexture*                                    InTexture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Backface
struct ATBP_Grimoire_Card_C_Set_Backface_Params
{
	class UTexture*                                    InTexture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Create Material Instance
struct ATBP_Grimoire_Card_C_Create_Material_Instance_Params
{
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Show
struct ATBP_Grimoire_Card_C_Show_Params
{
	class UTigerGrimoireEntry*                         InEntry;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	Tiger_ETigerGrimoireEntryMediaDisplayMode          InLastEntryNode;                                           // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.UserConstructionScript
struct ATBP_Grimoire_Card_C_UserConstructionScript_Params
{
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.FloatingCardAnimation__FinishedFunc
struct ATBP_Grimoire_Card_C_FloatingCardAnimation__FinishedFunc_Params
{
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.FloatingCardAnimation__UpdateFunc
struct ATBP_Grimoire_Card_C_FloatingCardAnimation__UpdateFunc_Params
{
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.ReceiveBeginPlay
struct ATBP_Grimoire_Card_C_ReceiveBeginPlay_Params
{
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.PlayFloatingAnimation
struct ATBP_Grimoire_Card_C_PlayFloatingAnimation_Params
{
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.ExecuteUbergraph_TBP_Grimoire_Card
struct ATBP_Grimoire_Card_C_ExecuteUbergraph_TBP_Grimoire_Card_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Begin Float Animation Dispatcher__DelegateSignature
struct ATBP_Grimoire_Card_C_Begin_Float_Animation_Dispatcher__DelegateSignature_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
