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
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Randomise Damage Placement
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Grimoire_Card_C::Randomise_Damage_Placement()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Randomise Damage Placement");

	ATBP_Grimoire_Card_C_Randomise_Damage_Placement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.OnClose
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Grimoire_Card_C::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.OnClose");

	ATBP_Grimoire_Card_C_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.OnOpen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Grimoire_Card_C::OnOpen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.OnOpen");

	ATBP_Grimoire_Card_C_OnOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Play Card Transition Animation
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Grimoire_Card_C::Play_Card_Transition_Animation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Play Card Transition Animation");

	ATBP_Grimoire_Card_C_Play_Card_Transition_Animation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Is Back Using DNMR
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InBool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Grimoire_Card_C::Set_Is_Back_Using_DNMR(bool InBool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Is Back Using DNMR");

	ATBP_Grimoire_Card_C_Set_Is_Back_Using_DNMR_Params params;
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Is Front Using DNMR
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               InBool                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void ATBP_Grimoire_Card_C::Set_Is_Front_Using_DNMR(bool InBool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Is Front Using DNMR");

	ATBP_Grimoire_Card_C_Set_Is_Front_Using_DNMR_Params params;
	params.InBool = InBool;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Card To New Card
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireEntry*                         InEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Grimoire_Card_C::Change_Card_To_New_Card(class UTigerGrimoireEntry* InEntry)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Card To New Card");

	ATBP_Grimoire_Card_C_Change_Card_To_New_Card_Params params;
	params.InEntry = InEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Quality Level
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         InRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ATBP_Grimoire_Card_C::Change_Quality_Level(const struct FDataTableRowHandle& InRow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Quality Level");

	ATBP_Grimoire_Card_C_Change_Quality_Level_Params params;
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Border Colour
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FDataTableRowHandle                         InRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
void ATBP_Grimoire_Card_C::Change_Border_Colour(const struct FDataTableRowHandle& InRow)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Change Border Colour");

	ATBP_Grimoire_Card_C_Change_Border_Colour_Params params;
	params.InRow = InRow;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Card Mat Properties to Material
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Grimoire_Card_C::Send_Card_Mat_Properties_to_Material()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Card Mat Properties to Material");

	ATBP_Grimoire_Card_C_Send_Card_Mat_Properties_to_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Backface Texture to Material
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Grimoire_Card_C::Send_Backface_Texture_to_Material()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Backface Texture to Material");

	ATBP_Grimoire_Card_C_Send_Backface_Texture_to_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Frontface Texture to Material
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
void ATBP_Grimoire_Card_C::Send_Frontface_Texture_to_Material()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Send Frontface Texture to Material");

	ATBP_Grimoire_Card_C_Send_Frontface_Texture_to_Material_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Overwrite Card Material Preset
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UGrimoireCardMaterialPreset*                 InPreset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Grimoire_Card_C::Overwrite_Card_Material_Preset(class UGrimoireCardMaterialPreset* InPreset)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Overwrite Card Material Preset");

	ATBP_Grimoire_Card_C_Overwrite_Card_Material_Preset_Params params;
	params.InPreset = InPreset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Frontface
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture*                                    InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Grimoire_Card_C::Set_Frontface(class UTexture* InTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Frontface");

	ATBP_Grimoire_Card_C_Set_Frontface_Params params;
	params.InTexture = InTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Backface
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTexture*                                    InTexture                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Grimoire_Card_C::Set_Backface(class UTexture* InTexture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Set Backface");

	ATBP_Grimoire_Card_C_Set_Backface_Params params;
	params.InTexture = InTexture;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Create Material Instance
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void ATBP_Grimoire_Card_C::Create_Material_Instance()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Create Material Instance");

	ATBP_Grimoire_Card_C_Create_Material_Instance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Show
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerGrimoireEntry*                         InEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerGrimoireEntryMediaDisplayMode          InLastEntryNode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Grimoire_Card_C::Show(class UTigerGrimoireEntry* InEntry, Tiger_ETigerGrimoireEntryMediaDisplayMode InLastEntryNode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Show");

	ATBP_Grimoire_Card_C_Show_Params params;
	params.InEntry = InEntry;
	params.InLastEntryNode = InLastEntryNode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.UserConstructionScript
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_Grimoire_Card_C::UserConstructionScript()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.UserConstructionScript");

	ATBP_Grimoire_Card_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.FloatingCardAnimation__FinishedFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Grimoire_Card_C::FloatingCardAnimation__FinishedFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.FloatingCardAnimation__FinishedFunc");

	ATBP_Grimoire_Card_C_FloatingCardAnimation__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.FloatingCardAnimation__UpdateFunc
//		Flags  -> (BlueprintEvent)
void ATBP_Grimoire_Card_C::FloatingCardAnimation__UpdateFunc()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.FloatingCardAnimation__UpdateFunc");

	ATBP_Grimoire_Card_C_FloatingCardAnimation__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.ReceiveBeginPlay
//		Flags  -> (Event, Protected, BlueprintEvent)
void ATBP_Grimoire_Card_C::ReceiveBeginPlay()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.ReceiveBeginPlay");

	ATBP_Grimoire_Card_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.PlayFloatingAnimation
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void ATBP_Grimoire_Card_C::PlayFloatingAnimation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.PlayFloatingAnimation");

	ATBP_Grimoire_Card_C_PlayFloatingAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.ExecuteUbergraph_TBP_Grimoire_Card
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void ATBP_Grimoire_Card_C::ExecuteUbergraph_TBP_Grimoire_Card(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.ExecuteUbergraph_TBP_Grimoire_Card");

	ATBP_Grimoire_Card_C_ExecuteUbergraph_TBP_Grimoire_Card_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Begin Float Animation Dispatcher__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void ATBP_Grimoire_Card_C::Begin_Float_Animation_Dispatcher__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_Grimoire_Card.TBP_Grimoire_Card_C.Begin Float Animation Dispatcher__DelegateSignature");

	ATBP_Grimoire_Card_C_Begin_Float_Animation_Dispatcher__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
