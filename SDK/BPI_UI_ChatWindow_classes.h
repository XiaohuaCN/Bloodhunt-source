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

// BlueprintGeneratedClass BPI_UI_ChatWindow.BPI_UI_ChatWindow_C
// 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
class UBPI_UI_ChatWindow_C : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("BlueprintGeneratedClass BPI_UI_ChatWindow.BPI_UI_ChatWindow_C");
		return ptr;
	}



	void OnBanStatusChanged(const struct FTigerMuteInfo& InMuteInfo);
	void WelcomePlayersInElysium();
	void OnMessageNameUnhovered();
	void OnMessageNameHovered(const struct FTigerChatMessage& InChatData);
	void Focus_on_Input_Box();
	void AddMessage(const struct FTigerChatMessage& InChatMessage);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
