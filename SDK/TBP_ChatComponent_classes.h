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

// BlueprintGeneratedClass TBP_ChatComponent.TBP_ChatComponent_C
// 0x0012 (FullSize[0x00FA] - InheritedSize[0x00E8])
class UTBP_ChatComponent_C : public UTigerChatComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x00E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UUserWidget*                                 ChatWindow;                                                // 0x00F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                               bPreventMessages;                                          // 0x00F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                               bIsSoloMatch;                                              // 0x00F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass TBP_ChatComponent.TBP_ChatComponent_C");
		return ptr;
	}



	void OnLoaded_5480FD144B182ADDBFA34EB41371AFF7(class UClass* Loaded);
	void Server_SendChatMessageToClients(const struct FText& MessageText, bool bWriteOnlyToGroupMembers);
	void OnMessageInput(const struct FText& MessageText, bool OnlyGroup);
	void OnChatMessageReceived(const struct FTigerChatMessage& InMessage);
	void OpenChatWindow();
	void PreventChatUntilInElysium();
	void Welcome_Players_In_Chat();
	void On_Hud_Preloading_Done();
	void CreateChatWindow();
	void OnBanStatusUpdated(const struct FTigerMuteInfo& InMuteInfo);
	void ExecuteUbergraph_TBP_ChatComponent(int EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
