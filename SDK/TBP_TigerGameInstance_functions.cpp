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
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.AddBlackLoadingScreen
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_TigerGameInstance_C::AddBlackLoadingScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.AddBlackLoadingScreen");

	UTBP_TigerGameInstance_C_AddBlackLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetIngameMenuUI
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		class UTigerIngameMenuWidget*                      IngameMenuUI                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::GetIngameMenuUI(class UTigerIngameMenuWidget** IngameMenuUI)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetIngameMenuUI");

	UTBP_TigerGameInstance_C_GetIngameMenuUI_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (IngameMenuUI != nullptr)
		*IngameMenuUI = params.IngameMenuUI;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetUIColor
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		Tiger_ETigerUIColor                                UIColor                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		Tiger_ETigerColourSpace                            ColorSpace                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FLinearColor                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
struct FLinearColor UTBP_TigerGameInstance_C::GetUIColor(Tiger_ETigerUIColor UIColor, Tiger_ETigerColourSpace ColorSpace)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetUIColor");

	UTBP_TigerGameInstance_C_GetUIColor_Params params;
	params.UIColor = UIColor;
	params.ColorSpace = ColorSpace;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsAllowedToOpenMainMenu
//		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
bool UTBP_TigerGameInstance_C::IsAllowedToOpenMainMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsAllowedToOpenMainMenu");

	UTBP_TigerGameInstance_C_IsAllowedToOpenMainMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetJoinErrorText
//		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FText                                       OutErrorText                                               (Parm, OutParm)
//		bool                                               bHadError                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_TigerGameInstance_C::GetJoinErrorText(struct FText* OutErrorText, bool* bHadError)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetJoinErrorText");

	UTBP_TigerGameInstance_C_GetJoinErrorText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutErrorText != nullptr)
		*OutErrorText = params.OutErrorText;
	if (bHadError != nullptr)
		*bHadError = params.bHadError;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetErrorStringTableId
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FName                                       TableId                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::GetErrorStringTableId(struct FName* TableId)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.GetErrorStringTableId");

	UTBP_TigerGameInstance_C_GetErrorStringTableId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (TableId != nullptr)
		*TableId = params.TableId;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsInMatch
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		bool                                               InMatch                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_TigerGameInstance_C::IsInMatch(bool* InMatch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsInMatch");

	UTBP_TigerGameInstance_C_IsInMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (InMatch != nullptr)
		*InMatch = params.InMatch;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateLoadingScreenWidgetBP
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UClass*                                      InWidgetClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		float                                              InFadeInTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerLoadingScreenAsset*                    InLoadingScreenAsset                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerLoadingScreenUI*                       LoadingScreen                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::CreateLoadingScreenWidgetBP(class UClass* InWidgetClass, float InFadeInTime, class UTigerLoadingScreenAsset* InLoadingScreenAsset, class UTigerLoadingScreenUI** LoadingScreen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateLoadingScreenWidgetBP");

	UTBP_TigerGameInstance_C_CreateLoadingScreenWidgetBP_Params params;
	params.InWidgetClass = InWidgetClass;
	params.InFadeInTime = InFadeInTime;
	params.InLoadingScreenAsset = InLoadingScreenAsset;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (LoadingScreen != nullptr)
		*LoadingScreen = params.LoadingScreen;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsElysiumGameMenuOpen
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		bool                                               bIsOpen                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_TigerGameInstance_C::IsElysiumGameMenuOpen(bool* bIsOpen)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.IsElysiumGameMenuOpen");

	UTBP_TigerGameInstance_C_IsElysiumGameMenuOpen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (bIsOpen != nullptr)
		*bIsOpen = params.bIsOpen;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateJoinGameMenu
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTBP_UI_JoinGameMenu_C*                      Output_Get                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::CreateJoinGameMenu(class UTBP_UI_JoinGameMenu_C** Output_Get)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateJoinGameMenu");

	UTBP_TigerGameInstance_C_CreateJoinGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (Output_Get != nullptr)
		*Output_Get = params.Output_Get;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ValidateBloodTrackPresets
//		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
void UTBP_TigerGameInstance_C::ValidateBloodTrackPresets()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ValidateBloodTrackPresets");

	UTBP_TigerGameInstance_C_ValidateBloodTrackPresets_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseMenuWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerMenuWidget*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::CloseMenuWidget(class UTigerMenuWidget* Widget)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseMenuWidget");

	UTBP_TigerGameInstance_C_CloseMenuWidget_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenMenuWidget
//		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		class UTigerMenuWidget*                            Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		int                                                ZOrder                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::OpenMenuWidget(class UTigerMenuWidget* Widget, int ZOrder)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenMenuWidget");

	UTBP_TigerGameInstance_C_OpenMenuWidget_Params params;
	params.Widget = Widget;
	params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TravelErrorToString
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<Engine_ETravelFailure>                 FailureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     OutString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::TravelErrorToString(TEnumAsByte<Engine_ETravelFailure> FailureType, struct FString* OutString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TravelErrorToString");

	UTBP_TigerGameInstance_C_TravelErrorToString_Params params;
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.NetErrorToString
//		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
//		TEnumAsByte<Engine_ENetworkFailure>                FailureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		struct FString                                     OutString                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::NetErrorToString(TEnumAsByte<Engine_ENetworkFailure> FailureType, struct FString* OutString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.NetErrorToString");

	UTBP_TigerGameInstance_C_NetErrorToString_Params params;
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutString != nullptr)
		*OutString = params.OutString;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnPreLoadingDone_CA1249C244C7069F7709069D760517F5
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnPreLoadingDone_CA1249C244C7069F7709069D760517F5()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnPreLoadingDone_CA1249C244C7069F7709069D760517F5");

	UTBP_TigerGameInstance_C_OnPreLoadingDone_CA1249C244C7069F7709069D760517F5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnEnterElysium_CA1249C244C7069F7709069D760517F5
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnEnterElysium_CA1249C244C7069F7709069D760517F5()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnEnterElysium_CA1249C244C7069F7709069D760517F5");

	UTBP_TigerGameInstance_C_OnEnterElysium_CA1249C244C7069F7709069D760517F5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5");

	UTBP_TigerGameInstance_C_OnEnterElysiumFirstTime_CA1249C244C7069F7709069D760517F5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLaunchTutorial_CA1249C244C7069F7709069D760517F5
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnLaunchTutorial_CA1249C244C7069F7709069D760517F5()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLaunchTutorial_CA1249C244C7069F7709069D760517F5");

	UTBP_TigerGameInstance_C_OnLaunchTutorial_CA1249C244C7069F7709069D760517F5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnFailed_3610B3364B95E4E2F5EC2286C6423010
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnFailed_3610B3364B95E4E2F5EC2286C6423010()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnFailed_3610B3364B95E4E2F5EC2286C6423010");

	UTBP_TigerGameInstance_C_OnFailed_3610B3364B95E4E2F5EC2286C6423010_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSuccess_3610B3364B95E4E2F5EC2286C6423010
//		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerBpFindSessionResultList               Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_TigerGameInstance_C::OnSuccess_3610B3364B95E4E2F5EC2286C6423010(const struct FTigerBpFindSessionResultList& Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSuccess_3610B3364B95E4E2F5EC2286C6423010");

	UTBP_TigerGameInstance_C_OnSuccess_3610B3364B95E4E2F5EC2286C6423010_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowHostMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::ShowHostMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowHostMenu");

	UTBP_TigerGameInstance_C_ShowHostMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenLobbyMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OpenLobbyMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenLobbyMenu");

	UTBP_TigerGameInstance_C_OpenLobbyMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoginSucceeded
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		TArray<struct FTigerPersistentPlayerCharacter>     AvailableCharacters                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_TigerGameInstance_C::OnLoginSucceeded(TArray<struct FTigerPersistentPlayerCharacter> AvailableCharacters)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoginSucceeded");

	UTBP_TigerGameInstance_C_OnLoginSucceeded_Params params;
	params.AvailableCharacters = AvailableCharacters;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoginFailed
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTigerLoginFailedInfo                       InLoginFailedInfo                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
void UTBP_TigerGameInstance_C::OnLoginFailed(const struct FTigerLoginFailedInfo& InLoginFailedInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoginFailed");

	UTBP_TigerGameInstance_C_OnLoginFailed_Params params;
	params.InLoginFailedInfo = InLoginFailedInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.LaunchElysiumServer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		int                                                NumberOfPlayers                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               EnableLan_                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		struct FText                                       ServerName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_TigerGameInstance_C::LaunchElysiumServer(int NumberOfPlayers, bool EnableLan_, const struct FText& ServerName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.LaunchElysiumServer");

	UTBP_TigerGameInstance_C_LaunchElysiumServer_Params params;
	params.NumberOfPlayers = NumberOfPlayers;
	params.EnableLan_ = EnableLan_;
	params.ServerName = ServerName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCreateCharacterResult
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTigerPersistentCharacterID                 CharacterId                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
//		bool                                               bWasCharacterCreated                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_TigerGameInstance_C::OnCreateCharacterResult(const struct FTigerPersistentCharacterID& CharacterId, bool bWasCharacterCreated)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCreateCharacterResult");

	UTBP_TigerGameInstance_C_OnCreateCharacterResult_Params params;
	params.CharacterId = CharacterId;
	params.bWasCharacterCreated = bWasCharacterCreated;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCharacterSelected
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnCharacterSelected()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCharacterSelected");

	UTBP_TigerGameInstance_C_OnCharacterSelected_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.HandleNetworkError
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_ENetworkFailure>                FailureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		bool                                               bIsServer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_TigerGameInstance_C::HandleNetworkError(TEnumAsByte<Engine_ENetworkFailure> FailureType, bool bIsServer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.HandleNetworkError");

	UTBP_TigerGameInstance_C_HandleNetworkError_Params params;
	params.FailureType = FailureType;
	params.bIsServer = bIsServer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.HandleTravelError
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		TEnumAsByte<Engine_ETravelFailure>                 FailureType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::HandleTravelError(TEnumAsByte<Engine_ETravelFailure> FailureType)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.HandleTravelError");

	UTBP_TigerGameInstance_C_HandleTravelError_Params params;
	params.FailureType = FailureType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.EnterBootFlow
//		Flags  -> (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::EnterBootFlow()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.EnterBootFlow");

	UTBP_TigerGameInstance_C_EnterBootFlow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleLobbyMeny
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::ToggleLobbyMeny()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleLobbyMeny");

	UTBP_TigerGameInstance_C_ToggleLobbyMeny_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseLobbyMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::CloseLobbyMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseLobbyMenu");

	UTBP_TigerGameInstance_C_CloseLobbyMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseFindGameFailedMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::CloseFindGameFailedMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseFindGameFailedMenu");

	UTBP_TigerGameInstance_C_CloseFindGameFailedMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenFindElysiumMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bStartSearch                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
//		bool                                               bStartHidden                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_TigerGameInstance_C::OpenFindElysiumMenu(bool bStartSearch, bool bStartHidden)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenFindElysiumMenu");

	UTBP_TigerGameInstance_C_OpenFindElysiumMenu_Params params;
	params.bStartSearch = bStartSearch;
	params.bStartHidden = bStartHidden;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseFindElysiumMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::CloseFindElysiumMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseFindElysiumMenu");

	UTBP_TigerGameInstance_C_CloseFindElysiumMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenMatchMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OpenMatchMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenMatchMenu");

	UTBP_TigerGameInstance_C_OpenMatchMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenLoadingScreen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OpenLoadingScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenLoadingScreen");

	UTBP_TigerGameInstance_C_OpenLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseLoadingScreen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::CloseLoadingScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseLoadingScreen");

	UTBP_TigerGameInstance_C_CloseLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToCharacterSelection
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::ReturnToCharacterSelection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToCharacterSelection");

	UTBP_TigerGameInstance_C_ReturnToCharacterSelection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenJoinGameMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerBpFindSessionSelectedSession          SessionToJoin                                              (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_TigerGameInstance_C::OpenJoinGameMenu(const struct FTigerBpFindSessionSelectedSession& SessionToJoin)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenJoinGameMenu");

	UTBP_TigerGameInstance_C_OpenJoinGameMenu_Params params;
	params.SessionToJoin = SessionToJoin;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseJoinGameMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::CloseJoinGameMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseJoinGameMenu");

	UTBP_TigerGameInstance_C_CloseJoinGameMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReceiveInvitation
//		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
//		struct FTigerGroupInvitation                       Invitation                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
//		class ATigerPlayerState*                           Inviter                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::ReceiveInvitation(const struct FTigerGroupInvitation& Invitation, class ATigerPlayerState* Inviter)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReceiveInvitation");

	UTBP_TigerGameInstance_C_ReceiveInvitation_Params params;
	params.Invitation = Invitation;
	params.Inviter = Inviter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RemoveInvitationList
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::RemoveInvitationList()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RemoveInvitationList");

	UTBP_TigerGameInstance_C_RemoveInvitationList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenServerSelectionMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerBpFindSessionResultList               Sessions                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_TigerGameInstance_C::OpenServerSelectionMenu(const struct FTigerBpFindSessionResultList& Sessions)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenServerSelectionMenu");

	UTBP_TigerGameInstance_C_OpenServerSelectionMenu_Params params;
	params.Sessions = Sessions;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseServerSelectionMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::CloseServerSelectionMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseServerSelectionMenu");

	UTBP_TigerGameInstance_C_CloseServerSelectionMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenFindGameFailedMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OpenFindGameFailedMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenFindGameFailedMenu");

	UTBP_TigerGameInstance_C_OpenFindGameFailedMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSelected
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FTigerBpFindSessionSelectedSession          Session                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
void UTBP_TigerGameInstance_C::OnSelected(const struct FTigerBpFindSessionSelectedSession& Session)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSelected");

	UTBP_TigerGameInstance_C_OnSelected_Params params;
	params.Session = Session;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FadeInLoadingScreen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::FadeInLoadingScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FadeInLoadingScreen");

	UTBP_TigerGameInstance_C_FadeInLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FadeOutLoadingScreen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::FadeOutLoadingScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FadeOutLoadingScreen");

	UTBP_TigerGameInstance_C_FadeOutLoadingScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnInitialLevelStreamingCompleted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnInitialLevelStreamingCompleted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnInitialLevelStreamingCompleted");

	UTBP_TigerGameInstance_C_OnInitialLevelStreamingCompleted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnClosedJoinElysium
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     ErrorString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::OnClosedJoinElysium(const struct FString& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnClosedJoinElysium");

	UTBP_TigerGameInstance_C_OnClosedJoinElysium_Params params;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSuccessfulJoin
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnSuccessfulJoin()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnSuccessfulJoin");

	UTBP_TigerGameInstance_C_OnSuccessfulJoin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToBootStartMapTransfer
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::ReturnToBootStartMapTransfer()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToBootStartMapTransfer");

	UTBP_TigerGameInstance_C_ReturnToBootStartMapTransfer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.PostLoadMapWithWorld
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_TigerGameInstance_C::PostLoadMapWithWorld()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.PostLoadMapWithWorld");

	UTBP_TigerGameInstance_C_PostLoadMapWithWorld_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnGetValidGameVersionResult
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		Tiger_ETigerVersionIsValidResult                   Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::OnGetValidGameVersionResult(Tiger_ETigerVersionIsValidResult Result)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnGetValidGameVersionResult");

	UTBP_TigerGameInstance_C_OnGetValidGameVersionResult_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnIgnored_Dispatch_Event_1
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnIgnored_Dispatch_Event_1()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnIgnored_Dispatch_Event_1");

	UTBP_TigerGameInstance_C_OnIgnored_Dispatch_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FindMatch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::FindMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.FindMatch");

	UTBP_TigerGameInstance_C_FindMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RetryPostLoadMap
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::RetryPostLoadMap()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.RetryPostLoadMap");

	UTBP_TigerGameInstance_C_RetryPostLoadMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CancelJoinGame
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::CancelJoinGame()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CancelJoinGame");

	UTBP_TigerGameInstance_C_CancelJoinGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReceiveInit
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_TigerGameInstance_C::ReceiveInit()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReceiveInit");

	UTBP_TigerGameInstance_C_ReceiveInit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenTutorialMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OpenTutorialMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenTutorialMenu");

	UTBP_TigerGameInstance_C_OpenTutorialMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseTutorialMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::CloseTutorialMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseTutorialMenu");

	UTBP_TigerGameInstance_C_CloseTutorialMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateLoadingScreenWidget
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		float                                              InFadeInTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UTigerLoadingScreenAsset*                    InLoadingScreenAsset                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
//		class UClass*                                      InWidgetClass                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::CreateLoadingScreenWidget(float InFadeInTime, class UTigerLoadingScreenAsset* InLoadingScreenAsset, class UClass* InWidgetClass)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CreateLoadingScreenWidget");

	UTBP_TigerGameInstance_C_CreateLoadingScreenWidget_Params params;
	params.InFadeInTime = InFadeInTime;
	params.InLoadingScreenAsset = InLoadingScreenAsset;
	params.InWidgetClass = InWidgetClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTransferLoadingScreenOpaque
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnTransferLoadingScreenOpaque()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTransferLoadingScreenOpaque");

	UTBP_TigerGameInstance_C_OnTransferLoadingScreenOpaque_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferToElysium
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::TransferToElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferToElysium");

	UTBP_TigerGameInstance_C_TransferToElysium_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferFromMatch
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::TransferFromMatch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferFromMatch");

	UTBP_TigerGameInstance_C_TransferFromMatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyElysiumFailed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     ErrorString                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::OnJoinPartyElysiumFailed(const struct FString& ErrorString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyElysiumFailed");

	UTBP_TigerGameInstance_C_OnJoinPartyElysiumFailed_Params params;
	params.ErrorString = ErrorString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseJoinPartyElysiumMenu
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::CloseJoinPartyElysiumMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseJoinPartyElysiumMenu");

	UTBP_TigerGameInstance_C_CloseJoinPartyElysiumMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyElysiumSuccess
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnJoinPartyElysiumSuccess()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinPartyElysiumSuccess");

	UTBP_TigerGameInstance_C_OnJoinPartyElysiumSuccess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTransferToPartyElysiumFadeComplete
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnTransferToPartyElysiumFadeComplete()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTransferToPartyElysiumFadeComplete");

	UTBP_TigerGameInstance_C_OnTransferToPartyElysiumFadeComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenJoinPartyElysiumScreen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OpenJoinPartyElysiumScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OpenJoinPartyElysiumScreen");

	UTBP_TigerGameInstance_C_OpenJoinPartyElysiumScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.KickToLoginScreen
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::KickToLoginScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.KickToLoginScreen");

	UTBP_TigerGameInstance_C_KickToLoginScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoadingScreenFullyOpaque_Event
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnLoadingScreenFullyOpaque_Event()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoadingScreenFullyOpaque_Event");

	UTBP_TigerGameInstance_C_OnLoadingScreenFullyOpaque_Event_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCreateGameSessionFailed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnCreateGameSessionFailed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnCreateGameSessionFailed");

	UTBP_TigerGameInstance_C_OnCreateGameSessionFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.JoinSessionThroughUrl
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FString                                     SessionURL                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::JoinSessionThroughUrl(const struct FString& SessionURL)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.JoinSessionThroughUrl");

	UTBP_TigerGameInstance_C_JoinSessionThroughUrl_Params params;
	params.SessionURL = SessionURL;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowTitleScreen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::ShowTitleScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowTitleScreen");

	UTBP_TigerGameInstance_C_ShowTitleScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.DispatchTitleScreenClosed
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::DispatchTitleScreenClosed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.DispatchTitleScreenClosed");

	UTBP_TigerGameInstance_C_DispatchTitleScreenClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowMoviesAndTitleScreen
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::ShowMoviesAndTitleScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowMoviesAndTitleScreen");

	UTBP_TigerGameInstance_C_ShowMoviesAndTitleScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.Cheat_QuitTutorial
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_TigerGameInstance_C::Cheat_QuitTutorial()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.Cheat_QuitTutorial");

	UTBP_TigerGameInstance_C_Cheat_QuitTutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowWinScreen
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::ShowWinScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowWinScreen");

	UTBP_TigerGameInstance_C_ShowWinScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.Transfer from Match
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::Transfer_from_Match()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.Transfer from Match");

	UTBP_TigerGameInstance_C_Transfer_from_Match_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseMatchMenu
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::CloseMatchMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseMatchMenu");

	UTBP_TigerGameInstance_C_CloseMatchMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TitleScreenFadeOutStarted
//		Flags  -> (BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::TitleScreenFadeOutStarted()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TitleScreenFadeOutStarted");

	UTBP_TigerGameInstance_C_TitleScreenFadeOutStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleTutorialMenu
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::ToggleTutorialMenu()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleTutorialMenu");

	UTBP_TigerGameInstance_C_ToggleTutorialMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToElysium
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::ReturnToElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToElysium");

	UTBP_TigerGameInstance_C_ReturnToElysium_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseWinScreen
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::CloseWinScreen()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.CloseWinScreen");

	UTBP_TigerGameInstance_C_CloseWinScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowPostMatchScreen
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		bool                                               bInShouldLeaveParty                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
void UTBP_TigerGameInstance_C::ShowPostMatchScreen(bool bInShouldLeaveParty)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ShowPostMatchScreen");

	UTBP_TigerGameInstance_C_ShowPostMatchScreen_Params params;
	params.bInShouldLeaveParty = bInShouldLeaveParty;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleMatchMeny
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::ToggleMatchMeny()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ToggleMatchMeny");

	UTBP_TigerGameInstance_C_ToggleMatchMeny_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToBootWithError
//		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
//		struct FString                                     InError                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::ReturnToBootWithError(const struct FString& InError)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ReturnToBootWithError");

	UTBP_TigerGameInstance_C_ReturnToBootWithError_Params params;
	params.InError = InError;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferToPartyElysium
//		Flags  -> (Event, Public, BlueprintEvent)
void UTBP_TigerGameInstance_C::TransferToPartyElysium()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.TransferToPartyElysium");

	UTBP_TigerGameInstance_C_TransferToPartyElysium_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ExecuteUbergraph_TBP_TigerGameInstance
//		Flags  -> (Final, HasDefaults)
// Parameters:
//		int                                                EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
void UTBP_TigerGameInstance_C::ExecuteUbergraph_TBP_TigerGameInstance(int EntryPoint)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.ExecuteUbergraph_TBP_TigerGameInstance");

	UTBP_TigerGameInstance_C_ExecuteUbergraph_TBP_TigerGameInstance_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTitleScreenFadeOutStarted__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnTitleScreenFadeOutStarted__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnTitleScreenFadeOutStarted__DelegateSignature");

	UTBP_TigerGameInstance_C_OnTitleScreenFadeOutStarted__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinGameCountdownBegin__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnJoinGameCountdownBegin__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnJoinGameCountdownBegin__DelegateSignature");

	UTBP_TigerGameInstance_C_OnJoinGameCountdownBegin__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x016C0340
//		Name   -> Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoadingScreenFullyOpaque__DelegateSignature
//		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
void UTBP_TigerGameInstance_C::OnLoadingScreenFullyOpaque__DelegateSignature()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function TBP_TigerGameInstance.TBP_TigerGameInstance_C.OnLoadingScreenFullyOpaque__DelegateSignature");

	UTBP_TigerGameInstance_C_OnLoadingScreenFullyOpaque__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
