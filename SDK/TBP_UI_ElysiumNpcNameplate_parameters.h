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

// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.ShouldShowNameplate
struct UTBP_UI_ElysiumNpcNameplate_C_ShouldShowNameplate_Params
{
	bool                                               Visible;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.HideIfMenuIsOpen
struct UTBP_UI_ElysiumNpcNameplate_C_HideIfMenuIsOpen_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcIcon
struct UTBP_UI_ElysiumNpcNameplate_C_GetNpcIcon_Params
{
	struct FSlateBrush                                 ReturnValue;                                               // 0x0000(0x0088)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetTalkIconVisibility
struct UTBP_UI_ElysiumNpcNameplate_C_GetTalkIconVisibility_Params
{
	UMG_ESlateVisibility                               ReturnValue;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetTalkIconColor
struct UTBP_UI_ElysiumNpcNameplate_C_GetTalkIconColor_Params
{
	struct FLinearColor                                ReturnValue;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcTitle
struct UTBP_UI_ElysiumNpcNameplate_C_GetNpcTitle_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.GetNpcName
struct UTBP_UI_ElysiumNpcNameplate_C_GetNpcName_Params
{
	struct FText                                       ReturnValue;                                               // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
};

// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.Tick
struct UTBP_UI_ElysiumNpcNameplate_C_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                                // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                              InDeltaTime;                                               // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.PreConstruct
struct UTBP_UI_ElysiumNpcNameplate_C_PreConstruct_Params
{
	bool                                               IsDesignTime;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// Function TBP_UI_ElysiumNpcNameplate.TBP_UI_ElysiumNpcNameplate_C.ExecuteUbergraph_TBP_UI_ElysiumNpcNameplate
struct UTBP_UI_ElysiumNpcNameplate_C_ExecuteUbergraph_TBP_UI_ElysiumNpcNameplate_Params
{
	int                                                EntryPoint;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
