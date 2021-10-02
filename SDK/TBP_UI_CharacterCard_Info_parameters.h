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

// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetPlayerIconBorderBackground
struct UTBP_UI_CharacterCard_Info_C_SetPlayerIconBorderBackground_Params
{
};

// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetCardShapeAndBackground
struct UTBP_UI_CharacterCard_Info_C_SetCardShapeAndBackground_Params
{
};

// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.SetPlayerIcon
struct UTBP_UI_CharacterCard_Info_C_SetPlayerIcon_Params
{
};

// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.BuildCharacterCard
struct UTBP_UI_CharacterCard_Info_C_BuildCharacterCard_Params
{
};

// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.PreConstruct
struct UTBP_UI_CharacterCard_Info_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.OnInit
struct UTBP_UI_CharacterCard_Info_C_OnInit_Params
{
	class ATigerPlayerState*                           InRepresentedPlayer;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.Tick
struct UTBP_UI_CharacterCard_Info_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_CharacterCard_Info.TBP_UI_CharacterCard_Info_C.ExecuteUbergraph_TBP_UI_CharacterCard_Info
struct UTBP_UI_CharacterCard_Info_C_ExecuteUbergraph_TBP_UI_CharacterCard_Info_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
