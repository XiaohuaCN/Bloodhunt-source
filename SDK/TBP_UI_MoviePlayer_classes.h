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

// WidgetBlueprintGeneratedClass TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C
// 0x0079 (FullSize[0x02F9] - InheritedSize[0x0280])
class UTBP_UI_MoviePlayer_C : public UTigerWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                            // 0x0280(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                      BlackBackground;                                           // 0x0288(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                      MovieTexture;                                              // 0x0290(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMediaPlayer*                                AnimaticPlayer;                                            // 0x0298(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFileMediaSource*                            MovieFile;                                                 // 0x02A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               PlayImmediately;                                           // 0x02A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	unsigned char                                      UnknownData_OJLW[0x7];                                     // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnClosed;                                                  // 0x02B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ATBP_MovieSound_C*                           SoundActor;                                                // 0x02C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMediaPlaylist*                              Playlist;                                                  // 0x02C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                               bCanSkipMovies;                                            // 0x02D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	unsigned char                                      UnknownData_JLYV[0x7];                                     // 0x02D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FKey>                                CancelKeys;                                                // 0x02D8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FKey>                                WaitingForRelease;                                         // 0x02E8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                               WasMouseCursorShown;                                       // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TBP_UI_MoviePlayer.TBP_UI_MoviePlayer_C");
		return ptr;
	}



	void UpdateCurrentDownKeys();
	void IsLastVideo(bool* bIsLastVideo);
	void SetCinematicState(bool InCinematic);
	void CancelPlayback();
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
	void StartPlaying(bool* PlaySucceeded);
	void FinishedPlaying();
	void Construct();
	void EndReached();
	void FinishedLoading(const struct FString& OpenedUrl);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnMenuBack();
	void ExecuteUbergraph_TBP_UI_MoviePlayer(int EntryPoint);
	void OnClosed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
