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
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C
// 0x0040 (FullSize[0x02C0] - InheritedSize[0x0280])
class UTBP_UI_ElysiumMenu_PlayerInfo_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      IsReadyLines;                                              // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      IsReadyLinesCheckmark;                                     // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                                    IsReadyOverlay;                                            // 0x0298(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   PlayerArchetype;                                           // 0x02A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      PlayerAvatarImage;                                         // 0x02A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTigerStyledRichTextBlock*                   PlayerName;                                                // 0x02B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTBP_UI_MaskedCardBorder_C*                  TBP_UI_MaskedCardBorder_C_1;                               // 0x02B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_ElysiumMenu_PlayerInfo.TBP_UI_ElysiumMenu_PlayerInfo_C");
		return ptr;
	}



	void TBP_UI_ElysiumMenu_PlayerInfo_AutoGenFunc(bool bInIsGroupReady);
	void SetPlayerName();
	void UpdatePlayerName();
	void SetArchetypeText(Tiger_ETigerPowerKitType InArchetypeType);
	void UpdatePlayerArchetype(class UTigerPlayerClanData* InClanData, class UTigerPowerKit* InArchetypeData);
	void SetupPlayerIcon();
	void SetCharacterIcon();
	void PopulatePlayerInfo(Tiger_ETigerPowerKitType InArchetypeType);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnPlayerBeginPlay(class ATigerPlayer* InPlayer);
	void OnValidPawnFound(class APawn* NewPawn);
	void Destruct();
	void ExecuteUbergraph_TBP_UI_ElysiumMenu_PlayerInfo(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
