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
// Enums
//---------------------------------------------------------------------------

// Enum Tiger.ETigerDisciplineCooldownReductionType
enum class Tiger_ETigerDisciplineCooldownReductionType : uint8_t
{
	ETigerDisciplineCooldownReductionType__Seconds = 0,
	ETigerDisciplineCooldownReductionType__MultiplierOfTotal = 1,
	ETigerDisciplineCooldownReductionType__MultiplierOfRemaining = 2,
	ETigerDisciplineCooldownReductionType__ETigerDisciplineCooldownReductionType_MAX = 3,

};

// Enum Tiger.ETigerDisciplinesEnum
enum class Tiger_ETigerDisciplinesEnum : uint8_t
{
	ETigerDisciplinesEnum__TE_DisciplineNone = 0,
	ETigerDisciplinesEnum__TE_DisciplineTeleport = 1,
	ETigerDisciplinesEnum__TE_DisciplineStun = 2,
	ETigerDisciplinesEnum__TE_DisciplineFOTT = 3,
	ETigerDisciplinesEnum__TE_DisciplineJump = 4,
	ETigerDisciplinesEnum__TE_DisciplineSwiftStrike = 5,
	ETigerDisciplinesEnum__TE_DisciplineFlowerOfDeath = 6,
	ETigerDisciplinesEnum__TE_DisciplineDisplacement = 7,
	ETigerDisciplinesEnum__TE_DisciplineEarthshock = 8,
	ETigerDisciplinesEnum__TE_DisciplineFrenzy = 9,
	ETigerDisciplinesEnum__TE_DisciplineVanish = 10,
	ETigerDisciplinesEnum__TE_DisciplineScouts = 11,
	ETigerDisciplinesEnum__TE_DisciplineLaceratingThrow = 12,
	ETigerDisciplinesEnum__TE_DisciplineReposition = 13,
	ETigerDisciplinesEnum__TE_DisciplineIncitePain = 14,
	ETigerDisciplinesEnum__TE_DisciplineMajesty = 15,
	ETigerDisciplinesEnum__TE_DisciplineGuardBreak = 16,
	ETigerDisciplinesEnum__TE_DisciplinePassion = 17,
	ETigerDisciplinesEnum__TE_DisciplineCharm = 18,
	ETigerDisciplinesEnum__TE_DisciplineProjectionDash = 19,
	ETigerDisciplinesEnum__TE_DisciplineBlindingBeauty = 20,
	ETigerDisciplinesEnum__TE_DisciplineRejuvenatingVoice = 21,
	ETigerDisciplinesEnum__TE_DisciplineShackles = 22,
	ETigerDisciplinesEnum__TE_DisciplineTraps = 23,
	ETigerDisciplinesEnum__TE_DisciplineShockwavePunch = 24,
	ETigerDisciplinesEnum__TE_WeaponAbilityAxeThrow = 25,
	ETigerDisciplinesEnum__TE_WeaponAbilityDash = 26,
	ETigerDisciplinesEnum__TE_WeaponAbilityHook = 27,
	ETigerDisciplinesEnum__TE_WeaponAbilityReflect = 28,
	ETigerDisciplinesEnum__TE_WeaponAbilitySpikedBat = 29,
	ETigerDisciplinesEnum__TE_WeaponAbilityGreatsword = 30,
	ETigerDisciplinesEnum__TE_WeaponAbilityThrowingKnifes = 31,
	ETigerDisciplinesEnum__TE_DisciplineCount = 32,
	ETigerDisciplinesEnum__TE_MAX  = 33,

};

// Enum Tiger.ETigerDisciplineSlot
enum class Tiger_ETigerDisciplineSlot : uint8_t
{
	ETigerDisciplineSlot__TE_DisciplineSlotLeft = 0,
	ETigerDisciplineSlot__TE_DisciplineSlotSuper = 1,
	ETigerDisciplineSlot__TE_DisciplineSlotRight = 2,
	ETigerDisciplineSlot__TE_DisciplineSlotCount = 3,
	ETigerDisciplineSlot__TE_MAX   = 4,

};

// Enum Tiger.ETigerCharacterActions
enum class Tiger_ETigerCharacterActions : uint8_t
{
	ETigerCharacterActions__Reloading = 0,
	ETigerCharacterActions__Shooting = 1,
	ETigerCharacterActions__Aiming = 2,
	ETigerCharacterActions__Blocking = 3,
	ETigerCharacterActions__MeleeAttack = 4,
	ETigerCharacterActions__Climbing = 5,
	ETigerCharacterActions__LedgeGrab = 6,
	ETigerCharacterActions__LowVault = 7,
	ETigerCharacterActions__Interacting = 8,
	ETigerCharacterActions__UseDiscipline = 9,
	ETigerCharacterActions__SwitchWeapon = 10,
	ETigerCharacterActions__Jump   = 11,
	ETigerCharacterActions__Sprinting = 12,
	ETigerCharacterActions__AlternateAction = 13,
	ETigerCharacterActions__None   = 14,
	ETigerCharacterActions__ETigerCharacterActions_MAX = 15,

};

// Enum Tiger.ETigerDisciplineEvent
enum class Tiger_ETigerDisciplineEvent : uint8_t
{
	ETigerDisciplineEvent__ScoutSpawned = 0,
	ETigerDisciplineEvent__ScoutDespawned = 1,
	ETigerDisciplineEvent__AnimationCallback = 2,
	ETigerDisciplineEvent__ProjectionDied = 3,
	ETigerDisciplineEvent__TeleportToProjection = 4,
	ETigerDisciplineEvent__EnablePlayerMovement = 5,
	ETigerDisciplineEvent__WeaponAbility_ThrowHook = 6,
	ETigerDisciplineEvent__ProjectionDiedDueToOutOfRange = 7,
	ETigerDisciplineEvent__ETigerDisciplineEvent_MAX = 8,

};

// Enum Tiger.ETigerInputActionResult
enum class Tiger_ETigerInputActionResult : uint8_t
{
	ETigerInputActionResult__Failed = 0,
	ETigerInputActionResult__Buffer = 1,
	ETigerInputActionResult__Success = 2,
	ETigerInputActionResult__ETigerInputActionResult_MAX = 3,

};

// Enum Tiger.ETigerTraversalAction
enum class Tiger_ETigerTraversalAction : uint8_t
{
	ETigerTraversalAction__Jump    = 0,
	ETigerTraversalAction__WallJump = 1,
	ETigerTraversalAction__SlideBegin = 2,
	ETigerTraversalAction__SlideEnd = 3,
	ETigerTraversalAction__SlideJump = 4,
	ETigerTraversalAction__AirDash = 5,
	ETigerTraversalAction__WallGrindStarted = 6,
	ETigerTraversalAction__WallGrindEnded = 7,
	ETigerTraversalAction__ClimbStarted = 8,
	ETigerTraversalAction__ClimbEnded = 9,
	ETigerTraversalAction__HardLanding = 10,
	ETigerTraversalAction__ETigerTraversalAction_MAX = 11,

};

// Enum Tiger.ETigerCharacterAkAlignmentType
enum class Tiger_ETigerCharacterAkAlignmentType : uint8_t
{
	ETigerCharacterAkAlignmentType__Me = 0,
	ETigerCharacterAkAlignmentType__Ally = 1,
	ETigerCharacterAkAlignmentType__Enemy = 2,
	ETigerCharacterAkAlignmentType__Count = 3,
	ETigerCharacterAkAlignmentType__ETigerCharacterAkAlignmentType_MAX = 4,

};

// Enum Tiger.ETigerSeasonMatchStatType
enum class Tiger_ETigerSeasonMatchStatType : uint8_t
{
	ETigerSeasonMatchStatType__Placement = 0,
	ETigerSeasonMatchStatType__LevelReached = 1,
	ETigerSeasonMatchStatType__Kills = 2,
	ETigerSeasonMatchStatType__KillAssists = 3,
	ETigerSeasonMatchStatType__Diableries = 4,
	ETigerSeasonMatchStatType__DamageDone = 5,
	ETigerSeasonMatchStatType__Count = 6,
	ETigerSeasonMatchStatType__ETigerSeasonMatchStatType_MAX = 7,

};

// Enum Tiger.ETigerKillerType
enum class Tiger_ETigerKillerType : uint8_t
{
	ETigerKillerType__Unknown      = 0,
	ETigerKillerType__Player       = 1,
	ETigerKillerType__Entity       = 2,
	ETigerKillerType__RedGas       = 3,
	ETigerKillerType__Shark        = 4,
	ETigerKillerType__ETigerKillerType_MAX = 5,

};

// Enum Tiger.ETigerGroupingMode
enum class Tiger_ETigerGroupingMode : uint8_t
{
	ETigerGroupingMode__Solo       = 0,
	ETigerGroupingMode__SquadOfFour = 1,
	ETigerGroupingMode__Count      = 2,
	ETigerGroupingMode__ETigerGroupingMode_MAX = 3,

};

// Enum Tiger.ETargetInteraction
enum class Tiger_ETargetInteraction : uint8_t
{
	ETargetInteraction__None       = 0,
	ETargetInteraction__PickupItem = 1,
	ETargetInteraction__Lure       = 2,
	ETargetInteraction__Feed       = 3,
	ETargetInteraction__TalkTo     = 4,
	ETargetInteraction__UsingConsumable = 5,
	ETargetInteraction__InteractWithObject = 6,
	ETargetInteraction__DiablerizeTrainer = 7,
	ETargetInteraction__ReviveTrainer = 8,
	ETargetInteraction__JudgeFeed  = 9,
	ETargetInteraction__Diablerize = 10,
	ETargetInteraction__Revive     = 11,
	ETargetInteraction__ETargetInteraction_MAX = 12,

};

// Enum Tiger.ETigerWeaponMeleeAttackType
enum class Tiger_ETigerWeaponMeleeAttackType : uint8_t
{
	ETigerWeaponMeleeAttackType__Invalid = 0,
	ETigerWeaponMeleeAttackType__Normal = 1,
	ETigerWeaponMeleeAttackType__Sprinting = 2,
	ETigerWeaponMeleeAttackType__Aerial = 3,
	ETigerWeaponMeleeAttackType__QuickAttack = 4,
	ETigerWeaponMeleeAttackType__UNUSED = 5,
	ETigerWeaponMeleeAttackType__StrafeAttack = 6,
	ETigerWeaponMeleeAttackType__Heavy = 7,
	ETigerWeaponMeleeAttackType__Count = 8,
	ETigerWeaponMeleeAttackType__ETigerWeaponMeleeAttackType_MAX = 9,

};

// Enum Tiger.ETigerTelemetryMatchmackingCancelReason
enum class Tiger_ETigerTelemetryMatchmackingCancelReason : uint8_t
{
	ETigerTelemetryMatchmackingCancelReason__Input = 0,
	ETigerTelemetryMatchmackingCancelReason__Timeout = 1,
	ETigerTelemetryMatchmackingCancelReason__ExitGame = 2,
	ETigerTelemetryMatchmackingCancelReason__ETigerTelemetryMatchmackingCancelReason_MAX = 3,

};

// Enum Tiger.ETigerWeaponSlot
enum class Tiger_ETigerWeaponSlot : uint8_t
{
	ETigerWeaponSlot__First        = 0,
	ETigerWeaponSlot__Ranged_Primary = 1,
	ETigerWeaponSlot__Ranged_Secondary = 2,
	ETigerWeaponSlot__Melee        = 3,
	ETigerWeaponSlot__Unarmed      = 4,
	ETigerWeaponSlot__Last         = 5,
	ETigerWeaponSlot__Count        = 6,
	ETigerWeaponSlot__ETigerWeaponSlot_MAX = 7,

};

// Enum Tiger.ETigerOnlineErrorCategory
enum class Tiger_ETigerOnlineErrorCategory : uint8_t
{
	ETigerOnlineErrorCategory__ACC = 0,
	ETigerOnlineErrorCategory__SYS = 1,
	ETigerOnlineErrorCategory__SRV = 2,
	ETigerOnlineErrorCategory__ETigerOnlineErrorCategory_MAX = 3,

};

// Enum Tiger.ETigerAIPlayerAction
enum class Tiger_ETigerAIPlayerAction : uint8_t
{
	ETigerAIPlayerAction__None     = 0,
	ETigerAIPlayerAction__BulletImpactEnvironment = 1,
	ETigerAIPlayerAction__CollideWithCivilian = 2,
	ETigerAIPlayerAction__CollideWithGuard = 3,
	ETigerAIPlayerAction__DamageDealing = 4,
	ETigerAIPlayerAction__Dodge    = 5,
	ETigerAIPlayerAction__AirDodgeRecovery = 6,
	ETigerAIPlayerAction__FeedingStart = 7,
	ETigerAIPlayerAction__FeedingTick = 8,
	ETigerAIPlayerAction__FeedingEnd = 9,
	ETigerAIPlayerAction__FeedingStoppedOnSpecificNPC = 10,
	ETigerAIPlayerAction__GenericDisciplineActivation = 11,
	ETigerAIPlayerAction__HardLanding = 12,
	ETigerAIPlayerAction__InsideSuspiciousVolume = 13,
	ETigerAIPlayerAction__InsideThreatVolume = 14,
	ETigerAIPlayerAction__MeleeAttack = 15,
	ETigerAIPlayerAction__Mobility = 16,
	ETigerAIPlayerAction__Sprinting = 17,
	ETigerAIPlayerAction__Climbing = 18,
	ETigerAIPlayerAction__AirTime  = 19,
	ETigerAIPlayerAction__ReportSuspectPlayer = 20,
	ETigerAIPlayerAction__ReportThreateningPlayer = 21,
	ETigerAIPlayerAction__ShowingMeleeWeapon = 22,
	ETigerAIPlayerAction__ShowingRangedWeapon = 23,
	ETigerAIPlayerAction__AimingRangedWeapon = 24,
	ETigerAIPlayerAction__WeaponFired = 25,
	ETigerAIPlayerAction__SeenByEntity = 26,
	ETigerAIPlayerAction__SeenByEntityWhenBloodHunted = 27,
	ETigerAIPlayerAction__NotifyMasqueradeBreachSpecificNPC = 28,
	ETigerAIPlayerAction__SeenByGuardWhenBloodHunted = 29,
	ETigerAIPlayerAction__SeenBySuspectingGuard = 30,
	ETigerAIPlayerAction__FeedingStartGuard = 31,
	ETigerAIPlayerAction__FeedingTickGuard = 32,
	ETigerAIPlayerAction__FeedingEndGuard = 33,
	ETigerAIPlayerAction__DiablerizeStart = 34,
	ETigerAIPlayerAction__DiablerizeTick = 35,
	ETigerAIPlayerAction__DiablerizeEnd = 36,
	ETigerAIPlayerAction__HideousPassiveTick = 37,
	ETigerAIPlayerAction__AttackedByGuard = 38,
	ETigerAIPlayerAction__AttackedByEntity = 39,
	ETigerAIPlayerAction__UtilityRoarPower = 40,
	ETigerAIPlayerAction__UtilityRoarPowerCloseRange = 41,
	ETigerAIPlayerAction__ActivateCarAlarm = 42,
	ETigerAIPlayerAction__ActivateInvisibility = 43,
	ETigerAIPlayerAction__DeactivateInvisibility = 44,
	ETigerAIPlayerAction__TeleportToProjectionDash = 45,
	ETigerAIPlayerAction__KilledNPC = 46,
	ETigerAIPlayerAction__ActivateStoreAlarm = 47,
	ETigerAIPlayerAction__SeenByCivilianWhenBloodHunted = 48,
	ETigerAIPlayerAction__DisciplineBegin = 49,
	ETigerAIPlayerAction__DisciplineActivationFOTT = 50,
	ETigerAIPlayerAction__DisciplineActivationMightyLeap = 51,
	ETigerAIPlayerAction__DisciplineActivationSwiftStrike = 52,
	ETigerAIPlayerAction__DisciplineActivationDisplacement = 53,
	ETigerAIPlayerAction__DisciplineActivationGroundSlam = 54,
	ETigerAIPlayerAction__DisciplineActivationFrenzy = 55,
	ETigerAIPlayerAction__DisciplineActivationVanish = 56,
	ETigerAIPlayerAction__DisciplineActivationScouts = 57,
	ETigerAIPlayerAction__DisciplineActivationGuardBreak = 58,
	ETigerAIPlayerAction__DisciplineActivationPassion = 59,
	ETigerAIPlayerAction__DisciplineActivationCharm = 60,
	ETigerAIPlayerAction__DisciplineActivationProjectionDash = 61,
	ETigerAIPlayerAction__DisciplineActivationShackles = 62,
	ETigerAIPlayerAction__DisciplineActivationRejuvanatingVoice = 63,
	ETigerAIPlayerAction__DisciplineActivationAxe = 64,
	ETigerAIPlayerAction__DisciplineActivationKatana = 65,
	ETigerAIPlayerAction__DisciplineActivationDualBlades = 66,
	ETigerAIPlayerAction__DisciplineActivationLaceratingThrow = 67,
	ETigerAIPlayerAction__DisciplineEnd = 68,
	ETigerAIPlayerAction__Count    = 69,
	ETigerAIPlayerAction__ETigerAIPlayerAction_MAX = 70,

};

// Enum Tiger.EBodyPart
enum class Tiger_EBodyPart : uint8_t
{
	EBodyPart__None                = 0,
	EBodyPart__Head                = 1,
	EBodyPart__Chest               = 2,
	EBodyPart__Body                = 3,
	EBodyPart__Arms                = 4,
	EBodyPart__Legs                = 5,
	EBodyPart__MAX                 = 6,

};

// Enum Tiger.ETigerTelemetryItemSourceID
enum class Tiger_ETigerTelemetryItemSourceID : uint8_t
{
	ETigerTelemetryItemSourceID__Cheat = 0,
	ETigerTelemetryItemSourceID__BotCheat = 1,
	ETigerTelemetryItemSourceID__Spawn = 2,
	ETigerTelemetryItemSourceID__Floor = 3,
	ETigerTelemetryItemSourceID__Van = 4,
	ETigerTelemetryItemSourceID__Store = 5,
	ETigerTelemetryItemSourceID__EntityCorpse = 6,
	ETigerTelemetryItemSourceID__JudgeCorpse = 7,
	ETigerTelemetryItemSourceID__PlayerCorpse = 8,
	ETigerTelemetryItemSourceID__PlayerDrop = 9,
	ETigerTelemetryItemSourceID__LootCrate = 10,
	ETigerTelemetryItemSourceID__Collectible = 11,
	ETigerTelemetryItemSourceID__ETigerTelemetryItemSourceID_MAX = 12,

};

// Enum Tiger.ETigerMusicAudioState
enum class Tiger_ETigerMusicAudioState : uint8_t
{
	ETigerMusicAudioState__None    = 0,
	ETigerMusicAudioState__Unknown = 1,
	ETigerMusicAudioState__Silent  = 2,
	ETigerMusicAudioState__TitleScreen = 3,
	ETigerMusicAudioState__Ambient = 4,
	ETigerMusicAudioState__Feeding = 5,
	ETigerMusicAudioState__Elysium = 6,
	ETigerMusicAudioState__RedGas  = 7,
	ETigerMusicAudioState__Combat  = 8,
	ETigerMusicAudioState__Deployment = 9,
	ETigerMusicAudioState__PreLoading = 10,
	ETigerMusicAudioState__PostMatch = 11,
	ETigerMusicAudioState__EntityNearby = 12,
	ETigerMusicAudioState__LastStage = 13,
	ETigerMusicAudioState__MasqueradeBreak = 14,
	ETigerMusicAudioState__MainMenu = 15,
	ETigerMusicAudioState__Count   = 16,
	ETigerMusicAudioState__ETigerMusicAudioState_MAX = 17,

};

// Enum Tiger.ETigerFeedingAudioState
enum class Tiger_ETigerFeedingAudioState : uint8_t
{
	ETigerFeedingAudioState__None  = 0,
	ETigerFeedingAudioState__IsFeeding = 1,
	ETigerFeedingAudioState__Count = 2,
	ETigerFeedingAudioState__ETigerFeedingAudioState_MAX = 3,

};

// Enum Tiger.ETigerCombatAudioState
enum class Tiger_ETigerCombatAudioState : uint8_t
{
	ETigerCombatAudioState__None   = 0,
	ETigerCombatAudioState__Kindred = 1,
	ETigerCombatAudioState__Entity = 2,
	ETigerCombatAudioState__Count  = 3,
	ETigerCombatAudioState__ETigerCombatAudioState_MAX = 4,

};

// Enum Tiger.ETigerAmbienceAudioState
enum class Tiger_ETigerAmbienceAudioState : uint8_t
{
	ETigerAmbienceAudioState__None = 0,
	ETigerAmbienceAudioState__AmbienceOn = 1,
	ETigerAmbienceAudioState__AmbienceOff = 2,
	ETigerAmbienceAudioState__Count = 3,
	ETigerAmbienceAudioState__ETigerAmbienceAudioState_MAX = 4,

};

// Enum Tiger.ETigerMainMenuAudioState
enum class Tiger_ETigerMainMenuAudioState : uint8_t
{
	ETigerMainMenuAudioState__None = 0,
	ETigerMainMenuAudioState__InMainMenu = 1,
	ETigerMainMenuAudioState__OutMainMenu = 2,
	ETigerMainMenuAudioState__Count = 3,
	ETigerMainMenuAudioState__ETigerMainMenuAudioState_MAX = 4,

};

// Enum Tiger.ETigerIndoorAudioState
enum class Tiger_ETigerIndoorAudioState : uint8_t
{
	ETigerIndoorAudioState__None   = 0,
	ETigerIndoorAudioState__Indoor = 1,
	ETigerIndoorAudioState__Count  = 2,
	ETigerIndoorAudioState__ETigerIndoorAudioState_MAX = 3,

};

// Enum Tiger.ETigerBlindedAudioState
enum class Tiger_ETigerBlindedAudioState : uint8_t
{
	ETigerBlindedAudioState__None  = 0,
	ETigerBlindedAudioState__Blind = 1,
	ETigerBlindedAudioState__Count = 2,
	ETigerBlindedAudioState__ETigerBlindedAudioState_MAX = 3,

};

// Enum Tiger.ETigerLodSplitMeshQuality
enum class Tiger_ETigerLodSplitMeshQuality : uint8_t
{
	ETigerLodSplitMeshQuality__FullMesh = 0,
	ETigerLodSplitMeshQuality__OnlyLod0 = 1,
	ETigerLodSplitMeshQuality__NoLod0 = 2,
	ETigerLodSplitMeshQuality__ETigerLodSplitMeshQuality_MAX = 3,

};

// Enum Tiger.ETigerCharacterMeshPart
enum class Tiger_ETigerCharacterMeshPart : uint8_t
{
	ETigerCharacterMeshPart__Body  = 0,
	ETigerCharacterMeshPart__Head  = 1,
	ETigerCharacterMeshPart__Hair  = 2,
	ETigerCharacterMeshPart__Hoodie = 3,
	ETigerCharacterMeshPart__Headgear = 4,
	ETigerCharacterMeshPart__Eyewear = 5,
	ETigerCharacterMeshPart__Weapon = 6,
	ETigerCharacterMeshPart__SecondaryWeapon = 7,
	ETigerCharacterMeshPart__HolsteredWeapon = 8,
	ETigerCharacterMeshPart__SecondaryHolsteredWeapon = 9,
	ETigerCharacterMeshPart__BodyAdditional = 10,
	ETigerCharacterMeshPart__Count = 11,
	ETigerCharacterMeshPart__ETigerCharacterMeshPart_MAX = 12,

};

// Enum Tiger.ETigerCharacterDynamicMeshType
enum class Tiger_ETigerCharacterDynamicMeshType : uint8_t
{
	ETigerCharacterDynamicMeshType__Generic = 0,
	ETigerCharacterDynamicMeshType__Piercing = 1,
	ETigerCharacterDynamicMeshType__Beard = 2,
	ETigerCharacterDynamicMeshType__Count = 3,
	ETigerCharacterDynamicMeshType__ETigerCharacterDynamicMeshType_MAX = 4,

};

// Enum Tiger.ETigerOutlineMode
enum class Tiger_ETigerOutlineMode : uint8_t
{
	ETigerOutlineMode__HeightenedSenses = 0,
	ETigerOutlineMode__Lure        = 1,
	ETigerOutlineMode__EnemyPlayer = 2,
	ETigerOutlineMode__ScoutingFamiliarsGroupMember = 3,
	ETigerOutlineMode__ScoutingFamiliars = 4,
	ETigerOutlineMode__BloodHuntedHSReveal = 5,
	ETigerOutlineMode__BloodHunted = 6,
	ETigerOutlineMode__CapturingHaven = 7,
	ETigerOutlineMode__CharmingUs  = 8,
	ETigerOutlineMode__GroupMember = 9,
	ETigerOutlineMode__LocalPlayer = 10,
	ETigerOutlineMode__Count       = 11,
	ETigerOutlineMode__None        = 12,
	ETigerOutlineMode__ETigerOutlineMode_MAX = 13,

};

// Enum Tiger.ETigerCharacterAction
enum class Tiger_ETigerCharacterAction : uint8_t
{
	ETigerCharacterAction__Dodged  = 0,
	ETigerCharacterAction__MeleeAttack = 1,
	ETigerCharacterAction__RangedAttack = 2,
	ETigerCharacterAction__Aimed   = 3,
	ETigerCharacterAction__DisciplineActivated = 4,
	ETigerCharacterAction__SuperDisciplineActivated = 5,
	ETigerCharacterAction__PickedUpItem = 6,
	ETigerCharacterAction__BeginBlock = 7,
	ETigerCharacterAction__RangedDamageTaken = 8,
	ETigerCharacterAction__MeleeDamageTaken = 9,
	ETigerCharacterAction__DisciplineDamageTaken = 10,
	ETigerCharacterAction__OtherDamageTaken = 11,
	ETigerCharacterAction__DodgeAborted = 12,
	ETigerCharacterAction__DisciplineReleased = 13,
	ETigerCharacterAction__Downed  = 14,
	ETigerCharacterAction__DamageDealt = 15,
	ETigerCharacterAction__ETigerCharacterAction_MAX = 16,

};

// Enum Tiger.ETigerCharacterType
enum class Tiger_ETigerCharacterType : uint8_t
{
	ETigerCharacterType__Player    = 0,
	ETigerCharacterType__Npc       = 1,
	ETigerCharacterType__TutorialTrainer = 2,
	ETigerCharacterType__PlayerBot = 3,
	ETigerCharacterType__Count     = 4,
	ETigerCharacterType__ETigerCharacterType_MAX = 5,

};

// Enum Tiger.ETigerGender
enum class Tiger_ETigerGender : uint8_t
{
	ETigerGender__Female           = 0,
	ETigerGender__Male             = 1,
	ETigerGender__Count            = 2,
	ETigerGender__ETigerGender_MAX = 3,

};

// Enum Tiger.ETigerMetaStoreEventType
enum class Tiger_ETigerMetaStoreEventType : uint8_t
{
	ETigerMetaStoreEventType__ConfigAdded = 0,
	ETigerMetaStoreEventType__ConfigChanged = 1,
	ETigerMetaStoreEventType__ConfigGetFailed = 2,
	ETigerMetaStoreEventType__ETigerMetaStoreEventType_MAX = 3,

};

// Enum Tiger.ETigerMetaStoreCategoryType
enum class Tiger_ETigerMetaStoreCategoryType : uint8_t
{
	ETigerMetaStoreCategoryType__All = 0,
	ETigerMetaStoreCategoryType__FlashStore = 1,
	ETigerMetaStoreCategoryType__Battlepass = 2,
	ETigerMetaStoreCategoryType__SeasonRankSkip = 3,
	ETigerMetaStoreCategoryType__ETigerMetaStoreCategoryType_MAX = 4,

};

// Enum Tiger.ETigerBuyStoreEntryResponseCode
enum class Tiger_ETigerBuyStoreEntryResponseCode : uint8_t
{
	ETigerBuyStoreEntryResponseCode__Success = 0,
	ETigerBuyStoreEntryResponseCode__Error_InsufficentFunds = 1,
	ETigerBuyStoreEntryResponseCode__Error_NoVendor = 2,
	ETigerBuyStoreEntryResponseCode__Error_InvalidEntry = 3,
	ETigerBuyStoreEntryResponseCode__Error_NoPlayerDataService = 4,
	ETigerBuyStoreEntryResponseCode__Error_BackendError = 5,
	ETigerBuyStoreEntryResponseCode__Error_NoResponse = 6,
	ETigerBuyStoreEntryResponseCode__Error_ParsePlayerTransactionalData = 7,
	ETigerBuyStoreEntryResponseCode__Error_BuyResult_InsufficentFunds = 8,
	ETigerBuyStoreEntryResponseCode__Error_BuyResult_InsufficientItems = 9,
	ETigerBuyStoreEntryResponseCode__Error_BuyResult_ExpiredItem = 10,
	ETigerBuyStoreEntryResponseCode__Error_BuyResult_Unknown = 11,
	ETigerBuyStoreEntryResponseCode__Error_TimedOut = 12,
	ETigerBuyStoreEntryResponseCode__ETigerBuyStoreEntryResponseCode_MAX = 13,

};

// Enum Tiger.ETigerPowerKitType
enum class Tiger_ETigerPowerKitType : uint8_t
{
	ETigerPowerKitType__None       = 0,
	ETigerPowerKitType__Veteran    = 1,
	ETigerPowerKitType__Outlaw     = 2,
	ETigerPowerKitType__Siren      = 3,
	ETigerPowerKitType__Nightingale = 4,
	ETigerPowerKitType__Animalist  = 5,
	ETigerPowerKitType__Technocrat = 6,
	ETigerPowerKitType__Count      = 7,
	ETigerPowerKitType__ETigerPowerKitType_MAX = 8,

};

// Enum Tiger.ETigerThrallId
enum class Tiger_ETigerThrallId : uint8_t
{
	ETigerThrallId__None           = 0,
	ETigerThrallId__Brutallist     = 1,
	ETigerThrallId__Rebel          = 2,
	ETigerThrallId__Hacker         = 3,
	ETigerThrallId__Monster        = 4,
	ETigerThrallId__Lover          = 5,
	ETigerThrallId__Model          = 6,
	ETigerThrallId__Max            = 7,

};

// Enum Tiger.ETigerPlayerEvent
enum class Tiger_ETigerPlayerEvent : uint8_t
{
	ETigerPlayerEvent__None        = 0,
	ETigerPlayerEvent__OnFeedingCompleted = 1,
	ETigerPlayerEvent__OnRatFeedingCompleted = 2,
	ETigerPlayerEvent__OnFedOnHighPotenceBlood = 3,
	ETigerPlayerEvent__OnDownedPlayer = 4,
	ETigerPlayerEvent__OnDownedBloodHuntedPlayer = 5,
	ETigerPlayerEvent__OnDownedPlayerWithHeadshot = 6,
	ETigerPlayerEvent__OnDownedPlayerWithMelee = 7,
	ETigerPlayerEvent__OnDownedEntity = 8,
	ETigerPlayerEvent__OnDiablerizedPlayer = 9,
	ETigerPlayerEvent__OnDiablerizedBloodHuntedPlayer = 10,
	ETigerPlayerEvent__OnSurvivedHolyIncenseWave = 11,
	ETigerPlayerEvent__OnKilledEntityGrunt = 12,
	ETigerPlayerEvent__OnKilledOtherPlayer = 13,
	ETigerPlayerEvent__OnKilledBloodHuntedPlayer = 14,
	ETigerPlayerEvent__OnPickedUpRelic = 15,
	ETigerPlayerEvent__OnFedOnSuperHighPotenceBlood = 16,
	ETigerPlayerEvent__OnFedOnEntity = 17,
	ETigerPlayerEvent__OnPickedUpArtifact = 18,
	ETigerPlayerEvent__OnNewTrackingTrailSpawned = 19,
	ETigerPlayerEvent__OnAssistDowned = 20,
	ETigerPlayerEvent__OnAssistKill = 21,
	ETigerPlayerEvent__OnRevivedPlayer = 22,
	ETigerPlayerEvent__OnSurviveBloodHunted = 23,
	ETigerPlayerEvent__OnSurviveDownedState = 24,
	ETigerPlayerEvent__OnOpenedCrate = 25,
	ETigerPlayerEvent__OnFirstStoreBurglary = 26,
	ETigerPlayerEvent__OnWipedOtherGroup = 27,
	ETigerPlayerEvent__OnPickedUpCollectible = 28,
	ETigerPlayerEvent__Size        = 29,
	ETigerPlayerEvent__ETigerPlayerEvent_MAX = 30,

};

// Enum Tiger.ETigerSeasonExperienceSource
enum class Tiger_ETigerSeasonExperienceSource : uint8_t
{
	ETigerSeasonExperienceSource__Placement = 0,
	ETigerSeasonExperienceSource__PlacementBonus = 1,
	ETigerSeasonExperienceSource__SurvivalTime = 2,
	ETigerSeasonExperienceSource__DownedEnemies = 3,
	ETigerSeasonExperienceSource__Eliminations = 4,
	ETigerSeasonExperienceSource__Diableries = 5,
	ETigerSeasonExperienceSource__Assists = 6,
	ETigerSeasonExperienceSource__DamageDealt = 7,
	ETigerSeasonExperienceSource__EntityKilled = 8,
	ETigerSeasonExperienceSource__IngameAchievements = 9,
	ETigerSeasonExperienceSource__ChallengeRewards = 10,
	ETigerSeasonExperienceSource__Collectible = 11,
	ETigerSeasonExperienceSource__QuestRewards = 12,
	ETigerSeasonExperienceSource__Count = 13,
	ETigerSeasonExperienceSource__ETigerSeasonExperienceSource_MAX = 14,

};

// Enum Tiger.ETigerGrimoireEntryState
enum class Tiger_ETigerGrimoireEntryState : uint8_t
{
	ETigerGrimoireEntryState__Locked = 0,
	ETigerGrimoireEntryState__Unlocked = 1,
	ETigerGrimoireEntryState__Read = 2,
	ETigerGrimoireEntryState__ETigerGrimoireEntryState_MAX = 3,

};

// Enum Tiger.ETigerLoginStatus
enum class Tiger_ETigerLoginStatus : uint8_t
{
	ETigerLoginStatus__NotLoggedIn = 0,
	ETigerLoginStatus__LoggingIn   = 1,
	ETigerLoginStatus__LoggedIn    = 2,
	ETigerLoginStatus__ETigerLoginStatus_MAX = 3,

};

// Enum Tiger.ETigerVersionCheckStatus
enum class Tiger_ETigerVersionCheckStatus : uint8_t
{
	ETigerVersionCheckStatus__NotChecked = 0,
	ETigerVersionCheckStatus__Checking = 1,
	ETigerVersionCheckStatus__Validated = 2,
	ETigerVersionCheckStatus__ETigerVersionCheckStatus_MAX = 3,

};

// Enum Tiger.ETigerTraversalTransitionAction
enum class Tiger_ETigerTraversalTransitionAction : uint8_t
{
	ETigerTraversalTransitionAction__Jump = 0,
	ETigerTraversalTransitionAction__Crouch = 1,
	ETigerTraversalTransitionAction__OnMovementUpdated = 2,
	ETigerTraversalTransitionAction__OnMovementModeChanged = 3,
	ETigerTraversalTransitionAction__DeltaCorrection = 4,
	ETigerTraversalTransitionAction__InitialReplication = 5,
	ETigerTraversalTransitionAction__Climb = 6,
	ETigerTraversalTransitionAction__Downed = 7,
	ETigerTraversalTransitionAction__FromSavedMove = 8,
	ETigerTraversalTransitionAction__StartedForcedMove = 9,
	ETigerTraversalTransitionAction__Reset = 10,
	ETigerTraversalTransitionAction__ETigerTraversalTransitionAction_MAX = 11,

};

// Enum Tiger.ETigerTraversalState
enum class Tiger_ETigerTraversalState : uint8_t
{
	ETigerTraversalState__Walking  = 0,
	ETigerTraversalState__Falling  = 1,
	ETigerTraversalState__Jumping  = 2,
	ETigerTraversalState__WallGrinding = 3,
	ETigerTraversalState__WallJumping = 4,
	ETigerTraversalState__AirDashing = 5,
	ETigerTraversalState__Climbing = 6,
	ETigerTraversalState__LedgeGrabbing = 7,
	ETigerTraversalState__Sliding  = 8,
	ETigerTraversalState__Crouching = 9,
	ETigerTraversalState__SlideJump = 10,
	ETigerTraversalState__Downed   = 11,
	ETigerTraversalState__LowVault = 12,
	ETigerTraversalState__ForcedMove = 13,
	ETigerTraversalState__WallHang = 14,
	ETigerTraversalState__Count    = 15,
	ETigerTraversalState__ETigerTraversalState_MAX = 16,

};

// Enum Tiger.ETigerServerScalabilityTarget
enum class Tiger_ETigerServerScalabilityTarget : uint8_t
{
	ETigerServerScalabilityTarget__Target_10Hz = 0,
	ETigerServerScalabilityTarget__Target_20Hz = 1,
	ETigerServerScalabilityTarget__Target_30Hz = 2,
	ETigerServerScalabilityTarget__Target_MAX = 3,

};

// Enum Tiger.ETigerMatchState
enum class Tiger_ETigerMatchState : uint8_t
{
	ETigerMatchState__MatchNotStarted = 0,
	ETigerMatchState__MatchStarted = 1,
	ETigerMatchState__OneLastGroupAlive = 2,
	ETigerMatchState__CapturePointCaptured = 3,
	ETigerMatchState__MatchEnded   = 4,
	ETigerMatchState__ETigerMatchState_MAX = 5,

};

// Enum Tiger.ETigerPreMatchState
enum class Tiger_ETigerPreMatchState : uint8_t
{
	ETigerPreMatchState__Unknown   = 0,
	ETigerPreMatchState__WaitingForGroups = 1,
	ETigerPreMatchState__WaitingForPlayerConnections = 2,
	ETigerPreMatchState__RebalancingGroups = 3,
	ETigerPreMatchState__PreSpawnSelect = 4,
	ETigerPreMatchState__SpawnSelect = 5,
	ETigerPreMatchState__PostSpawnSelect = 6,
	ETigerPreMatchState__ArchetypeSelect = 7,
	ETigerPreMatchState__TeamView  = 8,
	ETigerPreMatchState__SpawnPawns = 9,
	ETigerPreMatchState__WaitingForLoadingPlayers = 10,
	ETigerPreMatchState__FreeLookPreparationCountdown = 11,
	ETigerPreMatchState__PreMatchEnded = 12,
	ETigerPreMatchState__ETigerPreMatchState_MAX = 13,

};

// Enum Tiger.EMatchBalanceMode
enum class Tiger_EMatchBalanceMode : uint8_t
{
	EMatchBalanceMode__Solo        = 0,
	EMatchBalanceMode__Group       = 1,
	EMatchBalanceMode__Count       = 2,
	EMatchBalanceMode__EMatchBalanceMode_MAX = 3,

};

// Enum Tiger.ETigerPlayerLifeStatus
enum class Tiger_ETigerPlayerLifeStatus : uint8_t
{
	ETigerPlayerLifeStatus__Alive  = 0,
	ETigerPlayerLifeStatus__Downed = 1,
	ETigerPlayerLifeStatus__Dead   = 2,
	ETigerPlayerLifeStatus__ETigerPlayerLifeStatus_MAX = 3,

};

// Enum Tiger.ETigerBloodType
enum class Tiger_ETigerBloodType : uint8_t
{
	ETigerBloodType__Choleric      = 0,
	ETigerBloodType__Melancholic   = 1,
	ETigerBloodType__Phlegmatic    = 2,
	ETigerBloodType__Sanguine      = 3,
	ETigerBloodType__Count         = 4,
	ETigerBloodType__ETigerBloodType_MAX = 5,

};

// Enum Tiger.ETigerBloodPotency
enum class Tiger_ETigerBloodPotency : uint8_t
{
	ETigerBloodPotency__Drained    = 0,
	ETigerBloodPotency__Normal     = 1,
	ETigerBloodPotency__Potent     = 2,
	ETigerBloodPotency__HighPotent = 3,
	ETigerBloodPotency__Count      = 4,
	ETigerBloodPotency__ETigerBloodPotency_MAX = 5,

};

// Enum Tiger.ETigerNPCType
enum class Tiger_ETigerNPCType : uint8_t
{
	ETigerNPCType__Civilian        = 0,
	ETigerNPCType__Guard           = 1,
	ETigerNPCType__Entity          = 2,
	ETigerNPCType__Judge           = 3,
	ETigerNPCType__Count           = 4,
	ETigerNPCType__ETigerNPCType_MAX = 5,

};

// Enum Tiger.ETigerDetachMethod
enum class Tiger_ETigerDetachMethod : uint8_t
{
	ETigerDetachMethod__Destroy    = 0,
	ETigerDetachMethod__Drop       = 1,
	ETigerDetachMethod__ETigerDetachMethod_MAX = 2,

};

// Enum Tiger.ETigerAIAnimationMode
enum class Tiger_ETigerAIAnimationMode : uint8_t
{
	ETigerAIAnimationMode__Neutral = 0,
	ETigerAIAnimationMode__Suspicious = 1,
	ETigerAIAnimationMode__Threatened = 2,
	ETigerAIAnimationMode__BloodDrained = 3,
	ETigerAIAnimationMode__Lured   = 4,
	ETigerAIAnimationMode__Downed  = 5,
	ETigerAIAnimationMode__Sprinting = 6,
	ETigerAIAnimationMode__Strafing = 7,
	ETigerAIAnimationMode__ETigerAIAnimationMode_MAX = 8,

};

// Enum Tiger.ETigerAIMasqueradeState
enum class Tiger_ETigerAIMasqueradeState : uint8_t
{
	ETigerAIMasqueradeState__None  = 0,
	ETigerAIMasqueradeState__Downed = 1,
	ETigerAIMasqueradeState__Suspicious = 2,
	ETigerAIMasqueradeState__Threatened = 3,
	ETigerAIMasqueradeState__Count = 4,
	ETigerAIMasqueradeState__ETigerAIMasqueradeState_MAX = 5,

};

// Enum Tiger.ETigerCivilianEmotionalState
enum class Tiger_ETigerCivilianEmotionalState : uint8_t
{
	ETigerCivilianEmotionalState__Neutral = 0,
	ETigerCivilianEmotionalState__Cocky = 1,
	ETigerCivilianEmotionalState__Disbelief = 2,
	ETigerCivilianEmotionalState__Drunk = 3,
	ETigerCivilianEmotionalState__Fearful = 4,
	ETigerCivilianEmotionalState__Flirty = 5,
	ETigerCivilianEmotionalState__Count = 6,
	ETigerCivilianEmotionalState__ETigerCivilianEmotionalState_MAX = 7,

};

// Enum Tiger.ETigerGameType
enum class Tiger_ETigerGameType : uint8_t
{
	ETigerGameType__Elysium        = 0,
	ETigerGameType__BattleRoyale   = 1,
	ETigerGameType__Tutorial       = 2,
	ETigerGameType__PvpArena       = 3,
	ETigerGameType__Benchmark      = 4,
	ETigerGameType__Invalid        = 5,
	ETigerGameType__ETigerGameType_MAX = 6,

};

// Enum Tiger.ESessionType
enum class Tiger_ESessionType : uint8_t
{
	ESessionType__Elysium          = 0,
	ESessionType__Match            = 1,
	ESessionType__Unknown          = 2,
	ESessionType__ESessionType_MAX = 3,

};

// Enum Tiger.ETigerClan
enum class Tiger_ETigerClan : uint8_t
{
	ETigerClan__Brujah             = 0,
	ETigerClan__Nosferatu          = 1,
	ETigerClan__Toreador           = 2,
	ETigerClan__Count              = 3,
	ETigerClan__ETigerClan_MAX     = 4,

};

// Enum Tiger.ETigerColourSpace
enum class Tiger_ETigerColourSpace : uint8_t
{
	ETigerColourSpace__LinearSpace = 0,
	ETigerColourSpace__SrgbSpace   = 1,
	ETigerColourSpace__ETigerColourSpace_MAX = 2,

};

// Enum Tiger.ETigerUIColor
enum class Tiger_ETigerUIColor : uint8_t
{
	ETigerUIColor__Masquerade_None = 0,
	ETigerUIColor__Masquerade_Suspicious = 1,
	ETigerUIColor__Masquerade_Threatened = 2,
	ETigerUIColor__Masquerade_BloodHunted = 3,
	ETigerUIColor__Ally            = 4,
	ETigerUIColor__GroupMember     = 5,
	ETigerUIColor__Crosshair_ActionText = 6,
	ETigerUIColor__Crosshair_ItemPickupDenied = 7,
	ETigerUIColor__Crosshair_ItemPickupDeniedInputKey = 8,
	ETigerUIColor__Text_Header_Orange = 9,
	ETigerUIColor__Text_Header_Red = 10,
	ETigerUIColor__Text_Header_DarkRed = 11,
	ETigerUIColor__Text_HardCurrency = 12,
	ETigerUIColor__Text_NeutralPlayerName = 13,
	ETigerUIColor__Text_PlayerTitle = 14,
	ETigerUIColor__Brand_MedallionYellow = 15,
	ETigerUIColor__Brand_SpurseBlue = 16,
	ETigerUIColor__Brand_JadeGreen = 17,
	ETigerUIColor__Brand_CarmineRed = 18,
	ETigerUIColor__Hitmarker_NoExtraHealth = 19,
	ETigerUIColor__Group_Player1   = 20,
	ETigerUIColor__Group_Player2   = 21,
	ETigerUIColor__Group_Player3   = 22,
	ETigerUIColor__Group_Player4   = 23,
	ETigerUIColor__Rarity_Common   = 24,
	ETigerUIColor__Rarity_Uncommon = 25,
	ETigerUIColor__Rarity_Rare     = 26,
	ETigerUIColor__Rarity_Epic     = 27,
	ETigerUIColor__Rarity_Legendary = 28,
	ETigerUIColor__Heal            = 29,
	ETigerUIColor__ItemType_Weapon = 30,
	ETigerUIColor__ItemType_Ammo   = 31,
	ETigerUIColor__ItemType_Mod    = 32,
	ETigerUIColor__ItemType_Healing = 33,
	ETigerUIColor__ItemType_Consumable = 34,
	ETigerUIColor__ItemType_Artifact = 35,
	ETigerUIColor__Count           = 36,
	ETigerUIColor__ETigerUIColor_MAX = 37,

};

// Enum Tiger.ETigerPersistentStoreCategory
enum class Tiger_ETigerPersistentStoreCategory : uint8_t
{
	ETigerPersistentStoreCategory__Featured = 0,
	ETigerPersistentStoreCategory__Apparel = 1,
	ETigerPersistentStoreCategory__Character = 2,
	ETigerPersistentStoreCategory__SkinColor = 3,
	ETigerPersistentStoreCategory__EyeBrows = 4,
	ETigerPersistentStoreCategory__EyebrowColors = 5,
	ETigerPersistentStoreCategory__EyebrowCategory = 6,
	ETigerPersistentStoreCategory__Beards = 7,
	ETigerPersistentStoreCategory__Hair = 8,
	ETigerPersistentStoreCategory__EyeColors = 9,
	ETigerPersistentStoreCategory__Accessories = 10,
	ETigerPersistentStoreCategory__Ink = 11,
	ETigerPersistentStoreCategory__Ethnicity = 12,
	ETigerPersistentStoreCategory__HairStyle = 13,
	ETigerPersistentStoreCategory__HairColor = 14,
	ETigerPersistentStoreCategory__FacialHair = 15,
	ETigerPersistentStoreCategory__FacialHairColor = 16,
	ETigerPersistentStoreCategory__FacePaint = 17,
	ETigerPersistentStoreCategory__Tattoo = 18,
	ETigerPersistentStoreCategory__Mask = 19,
	ETigerPersistentStoreCategory__Glasses = 20,
	ETigerPersistentStoreCategory__Body = 21,
	ETigerPersistentStoreCategory__BodyCategory = 22,
	ETigerPersistentStoreCategory__Emote = 23,
	ETigerPersistentStoreCategory__PlayerIcon = 24,
	ETigerPersistentStoreCategory__PlayerCardBackground = 25,
	ETigerPersistentStoreCategory__PlayerCardShape = 26,
	ETigerPersistentStoreCategory__Count = 27,
	ETigerPersistentStoreCategory__ETigerPersistentStoreCategory_MAX = 28,

};

// Enum Tiger.ETigerPlayerApperanceChangeReason
enum class Tiger_ETigerPlayerApperanceChangeReason : uint8_t
{
	ETigerPlayerApperanceChangeReason__Generic = 0,
	ETigerPlayerApperanceChangeReason__CharacterSwitch = 1,
	ETigerPlayerApperanceChangeReason__ETigerPlayerApperanceChangeReason_MAX = 2,

};

// Enum Tiger.ETigerSessionSearchStatus
enum class Tiger_ETigerSessionSearchStatus : uint8_t
{
	ETigerSessionSearchStatus__ReadyToSearch = 0,
	ETigerSessionSearchStatus__Searching = 1,
	ETigerSessionSearchStatus__SessionFound = 2,
	ETigerSessionSearchStatus__JoiningSession = 3,
	ETigerSessionSearchStatus__CouldNotFindSession = 4,
	ETigerSessionSearchStatus__CouldNotJoinSession = 5,
	ETigerSessionSearchStatus__ETigerSessionSearchStatus_MAX = 6,

};

// Enum Tiger.ETigerWorldCompositionGridLayout
enum class Tiger_ETigerWorldCompositionGridLayout : uint8_t
{
	ETigerWorldCompositionGridLayout__QuadTree = 0,
	ETigerWorldCompositionGridLayout__HexGrid = 1,
	ETigerWorldCompositionGridLayout__ETigerWorldCompositionGridLayout_MAX = 2,

};

// Enum Tiger.ETigerItemRarity
enum class Tiger_ETigerItemRarity : uint8_t
{
	ETigerItemRarity__TigerItemRarity_Common = 0,
	ETigerItemRarity__TigerItemRarity_Uncommon = 1,
	ETigerItemRarity__TigerItemRarity_Rare = 2,
	ETigerItemRarity__TigerItemRarity_Epic = 3,
	ETigerItemRarity__TigerItemRarity_Legendary = 4,
	ETigerItemRarity__TigerItemRarity_Size = 5,
	ETigerItemRarity__TigerItemRarity_MAX = 6,

};

// Enum Tiger.ETigerBloodResonanceBlockType
enum class Tiger_ETigerBloodResonanceBlockType : uint8_t
{
	ETigerBloodResonanceBlockType__BloodType = 0,
	ETigerBloodResonanceBlockType__ResonanceCap = 1,
	ETigerBloodResonanceBlockType__Count = 2,
	ETigerBloodResonanceBlockType__ETigerBloodResonanceBlockType_MAX = 3,

};

// Enum Tiger.ETigerBloodVeinAlternateAction
enum class Tiger_ETigerBloodVeinAlternateAction : uint8_t
{
	ETigerBloodVeinAlternateAction__None = 0,
	ETigerBloodVeinAlternateAction__LaunchSolo = 1,
	ETigerBloodVeinAlternateAction__RejoinGroupLaunch = 2,
	ETigerBloodVeinAlternateAction__PassCoterieNavigator = 3,
	ETigerBloodVeinAlternateAction__ETigerBloodVeinAlternateAction_MAX = 4,

};

// Enum Tiger.ETigerSelectNewSpectatorDirection
enum class Tiger_ETigerSelectNewSpectatorDirection : uint8_t
{
	ETigerSelectNewSpectatorDirection__Next = 0,
	ETigerSelectNewSpectatorDirection__Previous = 1,
	ETigerSelectNewSpectatorDirection__ETigerSelectNewSpectatorDirection_MAX = 2,

};

// Enum Tiger.ETigerMissionSuccessRating
enum class Tiger_ETigerMissionSuccessRating : uint8_t
{
	ETigerMissionSuccessRating__Abject_Failure = 0,
	ETigerMissionSuccessRating__Failure = 1,
	ETigerMissionSuccessRating__Slight_Failure = 2,
	ETigerMissionSuccessRating__Success = 3,
	ETigerMissionSuccessRating__Good = 4,
	ETigerMissionSuccessRating__Very_Good = 5,
	ETigerMissionSuccessRating__Perfect = 6,
	ETigerMissionSuccessRating__Minted = 7,
	ETigerMissionSuccessRating__Double_Minted = 8,
	ETigerMissionSuccessRating__ETigerMissionSuccessRating_MAX = 9,

};

// Enum Tiger.ETigerCustomizePart
enum class Tiger_ETigerCustomizePart : uint8_t
{
	ETigerCustomizePart__Outfit    = 0,
	ETigerCustomizePart__BodyType  = 1,
	ETigerCustomizePart__Head      = 2,
	ETigerCustomizePart__SkinColor = 3,
	ETigerCustomizePart__HairType  = 4,
	ETigerCustomizePart__HairColor = 5,
	ETigerCustomizePart__Eyes      = 6,
	ETigerCustomizePart__Tattoo    = 7,
	ETigerCustomizePart__Makeup    = 8,
	ETigerCustomizePart__BeardType = 9,
	ETigerCustomizePart__BeardColor = 10,
	ETigerCustomizePart__Count     = 11,
	ETigerCustomizePart__ETigerCustomizePart_MAX = 12,

};

// Enum Tiger.ETigerNewNotificationMenuOptions
enum class Tiger_ETigerNewNotificationMenuOptions : uint8_t
{
	ETigerNewNotificationMenuOptions__Rootmenu = 0,
	ETigerNewNotificationMenuOptions__LandingPage = 1,
	ETigerNewNotificationMenuOptions__Battlepass = 2,
	ETigerNewNotificationMenuOptions__Challenges = 3,
	ETigerNewNotificationMenuOptions__Challenges_Daily = 4,
	ETigerNewNotificationMenuOptions__Challenges_Weekly = 5,
	ETigerNewNotificationMenuOptions__Grimoire = 6,
	ETigerNewNotificationMenuOptions__Grimoire_Archetypes = 7,
	ETigerNewNotificationMenuOptions__Grimoire_Talents = 8,
	ETigerNewNotificationMenuOptions__Grimoire_Items = 9,
	ETigerNewNotificationMenuOptions__Grimoire_Locations = 10,
	ETigerNewNotificationMenuOptions__Grimoire_Lore = 11,
	ETigerNewNotificationMenuOptions__Grimoire_Characters = 12,
	ETigerNewNotificationMenuOptions__Grimoire_Collectibles = 13,
	ETigerNewNotificationMenuOptions__Grimoire_Tutorial = 14,
	ETigerNewNotificationMenuOptions__Bloodtrack = 15,
	ETigerNewNotificationMenuOptions__Inventory = 16,
	ETigerNewNotificationMenuOptions__Inventory_Character = 17,
	ETigerNewNotificationMenuOptions__Inventory_Body = 18,
	ETigerNewNotificationMenuOptions__Inventory_BodyType = 19,
	ETigerNewNotificationMenuOptions__Inventory_Head = 20,
	ETigerNewNotificationMenuOptions__Inventory_Hair = 21,
	ETigerNewNotificationMenuOptions__Inventory_Haircut = 22,
	ETigerNewNotificationMenuOptions__Inventory_HairColor = 23,
	ETigerNewNotificationMenuOptions__Inventory_Eyes = 24,
	ETigerNewNotificationMenuOptions__Inventory_Eyebrows = 25,
	ETigerNewNotificationMenuOptions__Inventory_EyebrowType = 26,
	ETigerNewNotificationMenuOptions__Inventory_EyebrowColor = 27,
	ETigerNewNotificationMenuOptions__Inventory_Makeup = 28,
	ETigerNewNotificationMenuOptions__Inventory_Tattoos = 29,
	ETigerNewNotificationMenuOptions__Inventory_FacialHair = 30,
	ETigerNewNotificationMenuOptions__Inventory_FacialHairType = 31,
	ETigerNewNotificationMenuOptions__Inventory_FacialHairColor = 32,
	ETigerNewNotificationMenuOptions__Inventory_Wardrobe = 33,
	ETigerNewNotificationMenuOptions__Inventory_Outfit = 34,
	ETigerNewNotificationMenuOptions__Inventory_Accessories = 35,
	ETigerNewNotificationMenuOptions__Inventory_Piercing = 36,
	ETigerNewNotificationMenuOptions__Inventory_Mask = 37,
	ETigerNewNotificationMenuOptions__Inventory_Glasses = 38,
	ETigerNewNotificationMenuOptions__Inventory_Hats = 39,
	ETigerNewNotificationMenuOptions__Inventory_Emotes = 40,
	ETigerNewNotificationMenuOptions__StoreMenu = 41,
	ETigerNewNotificationMenuOptions__Store_Flash = 42,
	ETigerNewNotificationMenuOptions__Store_Currency = 43,
	ETigerNewNotificationMenuOptions__ArchetypeSelect = 44,
	ETigerNewNotificationMenuOptions__Social = 45,
	ETigerNewNotificationMenuOptions__Social_Friends = 46,
	ETigerNewNotificationMenuOptions__Social_Elysium = 47,
	ETigerNewNotificationMenuOptions__Social_Invites = 48,
	ETigerNewNotificationMenuOptions__Social_GroupInvites = 49,
	ETigerNewNotificationMenuOptions__Social_FriendInvites = 50,
	ETigerNewNotificationMenuOptions__Thralls = 51,
	ETigerNewNotificationMenuOptions__Grimoire_Conversations = 52,
	ETigerNewNotificationMenuOptions__Inventory_Icon = 53,
	ETigerNewNotificationMenuOptions__Inventory_CardBackground = 54,
	ETigerNewNotificationMenuOptions__Count = 55,
	ETigerNewNotificationMenuOptions__None = 56,
	ETigerNewNotificationMenuOptions__ETigerNewNotificationMenuOptions_MAX = 57,

};

// Enum Tiger.ETigerGrimoireSortType
enum class Tiger_ETigerGrimoireSortType : uint8_t
{
	ETigerGrimoireSortType__Default = 0,
	ETigerGrimoireSortType__Alphabetical = 1,
	ETigerGrimoireSortType__Unread = 2,
	ETigerGrimoireSortType__ETigerGrimoireSortType_MAX = 3,

};

// Enum Tiger.ETigerChatMessageCategory
enum class Tiger_ETigerChatMessageCategory : uint8_t
{
	ETigerChatMessageCategory__Unknown = 0,
	ETigerChatMessageCategory__General = 1,
	ETigerChatMessageCategory__Group = 2,
	ETigerChatMessageCategory__Server = 3,
	ETigerChatMessageCategory__Game = 4,
	ETigerChatMessageCategory__ChatBanned = 5,
	ETigerChatMessageCategory__ETigerChatMessageCategory_MAX = 6,

};

// Enum Tiger.ETigerIsDedicatedServer
enum class Tiger_ETigerIsDedicatedServer : uint8_t
{
	ETigerIsDedicatedServer__DedicatedServer = 0,
	ETigerIsDedicatedServer__Other = 1,
	ETigerIsDedicatedServer__ETigerIsDedicatedServer_MAX = 2,

};

// Enum Tiger.ETigerDamageCauser
enum class Tiger_ETigerDamageCauser : uint8_t
{
	ETigerDamageCauser__Unknown    = 0,
	ETigerDamageCauser__HolyIncense = 1,
	ETigerDamageCauser__Water      = 2,
	ETigerDamageCauser__Helicopter = 3,
	ETigerDamageCauser__NPC        = 4,
	ETigerDamageCauser__Player     = 5,
	ETigerDamageCauser__Trigger    = 6,
	ETigerDamageCauser__ETigerDamageCauser_MAX = 7,

};

// Enum Tiger.ETigerSignificanceBudgetType
enum class Tiger_ETigerSignificanceBudgetType : uint8_t
{
	ETigerSignificanceBudgetType__Elysium = 0,
	ETigerSignificanceBudgetType__Match = 1,
	ETigerSignificanceBudgetType__Count = 2,
	ETigerSignificanceBudgetType__ETigerSignificanceBudgetType_MAX = 3,

};

// Enum Tiger.ETigerWeaponFireMode
enum class Tiger_ETigerWeaponFireMode : uint8_t
{
	ETigerWeaponFireMode__Single   = 0,
	ETigerWeaponFireMode__Burst    = 1,
	ETigerWeaponFireMode__Automatic = 2,
	ETigerWeaponFireMode__Count    = 3,
	ETigerWeaponFireMode__ETigerWeaponFireMode_MAX = 4,

};

// Enum Tiger.ETigerSpreadIncreaseMode
enum class Tiger_ETigerSpreadIncreaseMode : uint8_t
{
	ETigerSpreadIncreaseMode__Add  = 0,
	ETigerSpreadIncreaseMode__Multiply = 1,
	ETigerSpreadIncreaseMode__ETigerSpreadIncreaseMode_MAX = 2,

};

// Enum Tiger.ETigerFireAudioState
enum class Tiger_ETigerFireAudioState : uint8_t
{
	ETigerFireAudioState__Idle     = 0,
	ETigerFireAudioState__Firing   = 1,
	ETigerFireAudioState__FiringLoopAudio = 2,
	ETigerFireAudioState__ETigerFireAudioState_MAX = 3,

};

// Enum Tiger.ETigerAsyncMoveResult
enum class Tiger_ETigerAsyncMoveResult : uint8_t
{
	ETigerAsyncMoveResult__SuccessfullyStartedAsyncRequest = 0,
	ETigerAsyncMoveResult__Failed  = 1,
	ETigerAsyncMoveResult__ETigerAsyncMoveResult_MAX = 2,

};

// Enum Tiger.ETigerBotWeaponPowerState
enum class Tiger_ETigerBotWeaponPowerState : uint8_t
{
	ETigerBotWeaponPowerState__PowerAvailable = 0,
	ETigerBotWeaponPowerState__PowerInUse = 1,
	ETigerBotWeaponPowerState__PowerOnCooldown = 2,
	ETigerBotWeaponPowerState__ETigerBotWeaponPowerState_MAX = 3,

};

// Enum Tiger.ETigerEntityEvent
enum class Tiger_ETigerEntityEvent : uint8_t
{
	ETigerEntityEvent__NewThreatEnterCombat = 0,
	ETigerEntityEvent__NewThreatInCombat = 1,
	ETigerEntityEvent__Count       = 2,
	ETigerEntityEvent__ETigerEntityEvent_MAX = 3,

};

// Enum Tiger.ETigerNpcSquadOrder
enum class Tiger_ETigerNpcSquadOrder : uint8_t
{
	ETigerNpcSquadOrder__FollowCaptain = 0,
	ETigerNpcSquadOrder__HoldPosition = 1,
	ETigerNpcSquadOrder__OpenFire  = 2,
	ETigerNpcSquadOrder__ETigerNpcSquadOrder_MAX = 3,

};

// Enum Tiger.ETigerNpcMovementRestrictionBoundsArea
enum class Tiger_ETigerNpcMovementRestrictionBoundsArea : uint8_t
{
	ETigerNpcMovementRestrictionBoundsArea__InnerRestriction = 0,
	ETigerNpcMovementRestrictionBoundsArea__OuterRestriction = 1,
	ETigerNpcMovementRestrictionBoundsArea__OutOfBounds = 2,
	ETigerNpcMovementRestrictionBoundsArea__ETigerNpcMovementRestrictionBoundsArea_MAX = 3,

};

// Enum Tiger.ETigerJudgeRotationMode
enum class Tiger_ETigerJudgeRotationMode : uint8_t
{
	ETigerJudgeRotationMode__RotateTowardsPrimaryTarget = 0,
	ETigerJudgeRotationMode__RotateTowardsLocation = 1,
	ETigerJudgeRotationMode__RotateTowardsMovement = 2,
	ETigerJudgeRotationMode__NoForcedRotation = 3,
	ETigerJudgeRotationMode__Count = 4,
	ETigerJudgeRotationMode__ETigerJudgeRotationMode_MAX = 5,

};

// Enum Tiger.ETigerPatrollingHelicopterEventType
enum class Tiger_ETigerPatrollingHelicopterEventType : uint8_t
{
	ETigerPatrollingHelicopterEventType__BloodHunt = 0,
	ETigerPatrollingHelicopterEventType__RooftopGunFight = 1,
	ETigerPatrollingHelicopterEventType__ETigerPatrollingHelicopterEventType_MAX = 2,

};

// Enum Tiger.ETigerAiMovementReason
enum class Tiger_ETigerAiMovementReason : uint8_t
{
	ETigerAiMovementReason__GenericMovement = 0,
	ETigerAiMovementReason__ThreatMovement = 1,
	ETigerAiMovementReason__CapMovement = 2,
	ETigerAiMovementReason__Count  = 3,
	ETigerAiMovementReason__ETigerAiMovementReason_MAX = 4,

};

// Enum Tiger.ETigerNpcReactionEventSeverity
enum class Tiger_ETigerNpcReactionEventSeverity : uint8_t
{
	ETigerNpcReactionEventSeverity__Mild = 0,
	ETigerNpcReactionEventSeverity__Average = 1,
	ETigerNpcReactionEventSeverity__Severe = 2,
	ETigerNpcReactionEventSeverity__ETigerNpcReactionEventSeverity_MAX = 3,

};

// Enum Tiger.ETigerAiConditionCheckTiming
enum class Tiger_ETigerAiConditionCheckTiming : uint8_t
{
	ETigerAiConditionCheckTiming__OnConditionCommandStart = 0,
	ETigerAiConditionCheckTiming__OnConditionCommandEnd = 1,
	ETigerAiConditionCheckTiming__ETigerAiConditionCheckTiming_MAX = 2,

};

// Enum Tiger.ETigerAiFailedCAPConditionAction
enum class Tiger_ETigerAiFailedCAPConditionAction : uint8_t
{
	ETigerAiFailedCAPConditionAction__ExitCAP = 0,
	ETigerAiFailedCAPConditionAction__RedoLastCommand = 1,
	ETigerAiFailedCAPConditionAction__RestartCommandList = 2,
	ETigerAiFailedCAPConditionAction__Wait = 3,
	ETigerAiFailedCAPConditionAction__ETigerAiFailedCAPConditionAction_MAX = 4,

};

// Enum Tiger.ETigerJumpDistribution
enum class Tiger_ETigerJumpDistribution : uint8_t
{
	ETigerJumpDistribution__Random = 0,
	ETigerJumpDistribution__Early  = 1,
	ETigerJumpDistribution__Late   = 2,
	ETigerJumpDistribution__Middle = 3,
	ETigerJumpDistribution__ETigerJumpDistribution_MAX = 4,

};

// Enum Tiger.ETigerAnimBlendState
enum class Tiger_ETigerAnimBlendState : uint8_t
{
	ETigerAnimBlendState__BlendingIn = 0,
	ETigerAnimBlendState__BlendingOut = 1,
	ETigerAnimBlendState__FullyBlended = 2,
	ETigerAnimBlendState__ETigerAnimBlendState_MAX = 3,

};

// Enum Tiger.ETigerIKDirection
enum class Tiger_ETigerIKDirection : uint8_t
{
	ETigerIKDirection__Forward     = 0,
	ETigerIKDirection__Downward    = 1,
	ETigerIKDirection__ETigerIKDirection_MAX = 2,

};

// Enum Tiger.ETigerPlayOnClients
enum class Tiger_ETigerPlayOnClients : uint8_t
{
	ETigerPlayOnClients__PlayOnSelf = 0,
	ETigerPlayOnClients__PlayOnOthers = 1,
	ETigerPlayOnClients__PlayOnAll = 2,
	ETigerPlayOnClients__ETigerPlayOnClients_MAX = 3,

};

// Enum Tiger.ETigerTriggerUpdateWpnAppearance
enum class Tiger_ETigerTriggerUpdateWpnAppearance : uint8_t
{
	ETigerTriggerUpdateWpnAppearance__None = 0,
	ETigerTriggerUpdateWpnAppearance__Begin = 1,
	ETigerTriggerUpdateWpnAppearance__End = 2,
	ETigerTriggerUpdateWpnAppearance__ETigerTriggerUpdateWpnAppearance_MAX = 3,

};

// Enum Tiger.ETigerArchetypeSelectUiState
enum class Tiger_ETigerArchetypeSelectUiState : uint8_t
{
	ETigerArchetypeSelectUiState__PreSelection = 0,
	ETigerArchetypeSelectUiState__Player0 = 1,
	ETigerArchetypeSelectUiState__Player1 = 2,
	ETigerArchetypeSelectUiState__Player2 = 3,
	ETigerArchetypeSelectUiState__PostSelection = 4,
	ETigerArchetypeSelectUiState__ETigerArchetypeSelectUiState_MAX = 5,

};

// Enum Tiger.ETigerBloodTrackPassivePowerIncrease
enum class Tiger_ETigerBloodTrackPassivePowerIncrease : uint8_t
{
	ETigerBloodTrackPassivePowerIncrease__None = 0,
	ETigerBloodTrackPassivePowerIncrease__LevelDisciplineClan = 1,
	ETigerBloodTrackPassivePowerIncrease__LevelDisciplineArchetype = 2,
	ETigerBloodTrackPassivePowerIncrease__LevelPassives = 3,
	ETigerBloodTrackPassivePowerIncrease__Unused = 4,
	ETigerBloodTrackPassivePowerIncrease__ETigerBloodTrackPassivePowerIncrease_MAX = 5,

};

// Enum Tiger.ETigerBloodTrackPassiveCategory
enum class Tiger_ETigerBloodTrackPassiveCategory : uint8_t
{
	ETigerBloodTrackPassiveCategory__Archetype = 0,
	ETigerBloodTrackPassiveCategory__General = 1,
	ETigerBloodTrackPassiveCategory__HealthUpgrade = 2,
	ETigerBloodTrackPassiveCategory__UltimatePredator = 3,
	ETigerBloodTrackPassiveCategory__UnlockPowers = 4,
	ETigerBloodTrackPassiveCategory__Count = 5,
	ETigerBloodTrackPassiveCategory__ETigerBloodTrackPassiveCategory_MAX = 6,

};

// Enum Tiger.ETigerBuffProgressType
enum class Tiger_ETigerBuffProgressType : uint8_t
{
	ETigerBuffProgressType__Increase = 0,
	ETigerBuffProgressType__Decrease = 1,
	ETigerBuffProgressType__ETigerBuffProgressType_MAX = 2,

};

// Enum Tiger.ETigerBuffStatusType
enum class Tiger_ETigerBuffStatusType : uint8_t
{
	ETigerBuffStatusType__Neutral  = 0,
	ETigerBuffStatusType__Positive = 1,
	ETigerBuffStatusType__Negative = 2,
	ETigerBuffStatusType__ETigerBuffStatusType_MAX = 3,

};

// Enum Tiger.UTigerBuildingSide
enum class Tiger_EUTigerBuildingSide : uint8_t
{
	UTigerBuildingSide__Front      = 0,
	UTigerBuildingSide__Left       = 1,
	UTigerBuildingSide__Back       = 2,
	UTigerBuildingSide__Right      = 3,
	UTigerBuildingSide__UTigerBuildingSide_MAX = 4,

};

// Enum Tiger.ETigerCameraPresetModeAdditive
enum class Tiger_ETigerCameraPresetModeAdditive : uint8_t
{
	ETigerCameraPresetModeAdditive__Crouching = 0,
	ETigerCameraPresetModeAdditive__Running = 1,
	ETigerCameraPresetModeAdditive__Combat = 2,
	ETigerCameraPresetModeAdditive__Sliding = 3,
	ETigerCameraPresetModeAdditive__Count = 4,
	ETigerCameraPresetModeAdditive__ETigerCameraPresetModeAdditive_MAX = 5,

};

// Enum Tiger.ETigerCapturePointStatus
enum class Tiger_ETigerCapturePointStatus : uint8_t
{
	ETigerCapturePointStatus__YouCapturing = 0,
	ETigerCapturePointStatus__EnemyCapturing = 1,
	ETigerCapturePointStatus__ContestedWithCapturee = 2,
	ETigerCapturePointStatus__ContestedWithoutCapturee = 3,
	ETigerCapturePointStatus__None = 4,
	ETigerCapturePointStatus__ETigerCapturePointStatus_MAX = 5,

};

// Enum Tiger.ETigerAkCharacterGender
enum class Tiger_ETigerAkCharacterGender : uint8_t
{
	ETigerAkCharacterGender__Male  = 0,
	ETigerAkCharacterGender__Female = 1,
	ETigerAkCharacterGender__Count = 2,
	ETigerAkCharacterGender__ETigerAkCharacterGender_MAX = 3,

};

// Enum Tiger.ETigerCustomizationType
enum class Tiger_ETigerCustomizationType : uint8_t
{
	ETigerCustomizationType__None  = 0,
	ETigerCustomizationType__Outfits = 1,
	ETigerCustomizationType__Heads = 2,
	ETigerCustomizationType__Hairs = 3,
	ETigerCustomizationType__HairColors = 4,
	ETigerCustomizationType__EyeColors = 5,
	ETigerCustomizationType__Tattoos = 6,
	ETigerCustomizationType__FacePaints = 7,
	ETigerCustomizationType__PiercingSets = 8,
	ETigerCustomizationType__Headgears = 9,
	ETigerCustomizationType__Eyewears = 10,
	ETigerCustomizationType__Eyebrows = 11,
	ETigerCustomizationType__EyebrowColors = 12,
	ETigerCustomizationType__Beards = 13,
	ETigerCustomizationType__BeardColors = 14,
	ETigerCustomizationType__CharacterCardShapes = 15,
	ETigerCustomizationType__CharacterCardTextures = 16,
	ETigerCustomizationType__CharacterIcons = 17,
	ETigerCustomizationType__Emotes = 18,
	ETigerCustomizationType__All   = 19,
	ETigerCustomizationType__ETigerCustomizationType_MAX = 20,

};

// Enum Tiger.ETigerForcedMoveResult
enum class Tiger_ETigerForcedMoveResult : uint8_t
{
	ETigerForcedMoveResult__Finished = 0,
	ETigerForcedMoveResult__Overridden = 1,
	ETigerForcedMoveResult__Canceled = 2,
	ETigerForcedMoveResult__ETigerForcedMoveResult_MAX = 3,

};

// Enum Tiger.ETigerMovementMode
enum class Tiger_ETigerMovementMode : uint8_t
{
	ETigerMovementMode__None       = 0,
	ETigerMovementMode__Sliding    = 1,
	ETigerMovementMode__ETigerMovementMode_MAX = 2,

};

// Enum Tiger.ETigerEquippedWeaponType
enum class Tiger_ETigerEquippedWeaponType : uint8_t
{
	ETigerEquippedWeaponType__TigerEquippedWeaponType_NoWeapon = 0,
	ETigerEquippedWeaponType__TigerEquippedWeaponType_Ranged = 1,
	ETigerEquippedWeaponType__TigerEquippedWeaponType_Melee = 2,
	ETigerEquippedWeaponType__TigerEquippedWeaponType_MAX = 3,

};

// Enum Tiger.ETigerQuickUseConsumable
enum class Tiger_ETigerQuickUseConsumable : uint8_t
{
	ETigerQuickUseConsumable__Syringe = 0,
	ETigerQuickUseConsumable__Bloodbag = 1,
	ETigerQuickUseConsumable__Armor = 2,
	ETigerQuickUseConsumable__Stimpack = 3,
	ETigerQuickUseConsumable__UnholyStimulant = 4,
	ETigerQuickUseConsumable__Flare = 5,
	ETigerQuickUseConsumable__Count = 6,
	ETigerQuickUseConsumable__ETigerQuickUseConsumable_MAX = 7,

};

// Enum Tiger.ETigerContextualHelpShouldShowInGameMode
enum class Tiger_ETigerContextualHelpShouldShowInGameMode : uint8_t
{
	ETigerContextualHelpShouldShowInGameMode__TutorialOnly = 0,
	ETigerContextualHelpShouldShowInGameMode__MatchOnly = 1,
	ETigerContextualHelpShouldShowInGameMode__All = 2,
	ETigerContextualHelpShouldShowInGameMode__ETigerContextualHelpShouldShowInGameMode_MAX = 3,

};

// Enum Tiger.ETigerContextualHelpType
enum class Tiger_ETigerContextualHelpType : uint8_t
{
	ETigerContextualHelpType__Reminder = 0,
	ETigerContextualHelpType__Interaction = 1,
	ETigerContextualHelpType__Count = 2,
	ETigerContextualHelpType__ETigerContextualHelpType_MAX = 3,

};

// Enum Tiger.ETigerDesiredPawnType
enum class Tiger_ETigerDesiredPawnType : uint8_t
{
	ETigerDesiredPawnType__DefaultPawn = 0,
	ETigerDesiredPawnType__BloodVeinPawn = 1,
	ETigerDesiredPawnType__ETigerDesiredPawnType_MAX = 2,

};

// Enum Tiger.ETigerDisciplineCharmState
enum class Tiger_ETigerDisciplineCharmState : uint8_t
{
	ETigerDisciplineCharmState__Ready = 0,
	ETigerDisciplineCharmState__Bonding = 1,
	ETigerDisciplineCharmState__ETigerDisciplineCharmState_MAX = 2,

};

// Enum Tiger.ETigerDisciplineCanUseResult
enum class Tiger_ETigerDisciplineCanUseResult : uint8_t
{
	ETigerDisciplineCanUseResult__UseAllowed = 0,
	ETigerDisciplineCanUseResult__FailedDisciplineOutOfBounds = 1,
	ETigerDisciplineCanUseResult__FailedBlockingDiscipline = 2,
	ETigerDisciplineCanUseResult__FailedDoesNotExist = 3,
	ETigerDisciplineCanUseResult__FailedLocked = 4,
	ETigerDisciplineCanUseResult__FailedIsPassive = 5,
	ETigerDisciplineCanUseResult__FailedDisciplineRequirements = 6,
	ETigerDisciplineCanUseResult__FailedOnCooldown = 7,
	ETigerDisciplineCanUseResult__FailedOnCharges = 8,
	ETigerDisciplineCanUseResult__FailedInteract = 9,
	ETigerDisciplineCanUseResult__FailedChargingAttack = 10,
	ETigerDisciplineCanUseResult__FailedMeleeSwing = 11,
	ETigerDisciplineCanUseResult__FailedBuffBlocking = 12,
	ETigerDisciplineCanUseResult__ETigerDisciplineCanUseResult_MAX = 13,

};

// Enum Tiger.ETigerActionAllowed
enum class Tiger_ETigerActionAllowed : uint8_t
{
	ETigerActionAllowed__Allowed   = 0,
	ETigerActionAllowed__Blocked   = 1,
	ETigerActionAllowed__Cancel    = 2,
	ETigerActionAllowed__None      = 3,
	ETigerActionAllowed__ETigerActionAllowed_MAX = 4,

};

// Enum Tiger.ETigerFOTTStage
enum class Tiger_ETigerFOTTStage : uint8_t
{
	ETigerFOTTStage__ChargeUp      = 0,
	ETigerFOTTStage__Charged       = 1,
	ETigerFOTTStage__Attacking     = 2,
	ETigerFOTTStage__Recover       = 3,
	ETigerFOTTStage__Count         = 4,
	ETigerFOTTStage__ETigerFOTTStage_MAX = 5,

};

// Enum Tiger.ETigerDisciplineParticleStrategyColorModes
enum class Tiger_ETigerDisciplineParticleStrategyColorModes : uint8_t
{
	ETigerDisciplineParticleStrategyColorModes__Default = 0,
	ETigerDisciplineParticleStrategyColorModes__OverrideFriendlyOnly = 1,
	ETigerDisciplineParticleStrategyColorModes__OverrideEnemyOnly = 2,
	ETigerDisciplineParticleStrategyColorModes__OverrideBothSingleColor = 3,
	ETigerDisciplineParticleStrategyColorModes__OverrideBothSplitColor = 4,
	ETigerDisciplineParticleStrategyColorModes__ETigerDisciplineParticleStrategyColorModes_MAX = 5,

};

// Enum Tiger.ETigerPassionStage
enum class Tiger_ETigerPassionStage : uint8_t
{
	ETigerPassionStage__ChooseEffect = 0,
	ETigerPassionStage__ChargeEffect = 1,
	ETigerPassionStage__Count      = 2,
	ETigerPassionStage__ETigerPassionStage_MAX = 3,

};

// Enum Tiger.ETigerPassionEffect
enum class Tiger_ETigerPassionEffect : uint8_t
{
	ETigerPassionEffect__None      = 0,
	ETigerPassionEffect__Panic     = 1,
	ETigerPassionEffect__Apathy    = 2,
	ETigerPassionEffect__Wrath     = 3,
	ETigerPassionEffect__Count     = 4,
	ETigerPassionEffect__ETigerPassionEffect_MAX = 5,

};

// Enum Tiger.ETigerProjectionDashCooldownStart
enum class Tiger_ETigerProjectionDashCooldownStart : uint8_t
{
	ETigerProjectionDashCooldownStart__AfterProjectionSpawned = 0,
	ETigerProjectionDashCooldownStart__AfterDash = 1,
	ETigerProjectionDashCooldownStart__ETigerProjectionDashCooldownStart_MAX = 2,

};

// Enum Tiger.ETigerProjectionDashEndReason
enum class Tiger_ETigerProjectionDashEndReason : uint8_t
{
	ETigerProjectionDashEndReason__TimedOut = 0,
	ETigerProjectionDashEndReason__MaxDistanceReached = 1,
	ETigerProjectionDashEndReason__ETigerProjectionDashEndReason_MAX = 2,

};

// Enum Tiger.ETigerJudgeHelicopterSpotlightState
enum class Tiger_ETigerJudgeHelicopterSpotlightState : uint8_t
{
	ETigerJudgeHelicopterSpotlightState__InCombat = 0,
	ETigerJudgeHelicopterSpotlightState__Idling = 1,
	ETigerJudgeHelicopterSpotlightState__ETigerJudgeHelicopterSpotlightState_MAX = 2,

};

// Enum Tiger.ETigerPatrollingHelicopterSpotlightState
enum class Tiger_ETigerPatrollingHelicopterSpotlightState : uint8_t
{
	ETigerPatrollingHelicopterSpotlightState__TargetInSight = 0,
	ETigerPatrollingHelicopterSpotlightState__Searching = 1,
	ETigerPatrollingHelicopterSpotlightState__Idling = 2,
	ETigerPatrollingHelicopterSpotlightState__ETigerPatrollingHelicopterSpotlightState_MAX = 3,

};

// Enum Tiger.ETigerPatrollingHelicopterState
enum class Tiger_ETigerPatrollingHelicopterState : uint8_t
{
	ETigerPatrollingHelicopterState__Patrolling = 0,
	ETigerPatrollingHelicopterState__TrackingPlayer = 1,
	ETigerPatrollingHelicopterState__LostPlayer = 2,
	ETigerPatrollingHelicopterState__ETigerPatrollingHelicopterState_MAX = 3,

};

// Enum Tiger.ETigerFeedingState
enum class Tiger_ETigerFeedingState : uint8_t
{
	ETigerFeedingState__Inactive   = 0,
	ETigerFeedingState__StartFeeding = 1,
	ETigerFeedingState__Approach   = 2,
	ETigerFeedingState__Feeding    = 3,
	ETigerFeedingState__Decouple   = 4,
	ETigerFeedingState__FedOnApproach = 5,
	ETigerFeedingState__FedOn      = 6,
	ETigerFeedingState__FedOnDecouple = 7,
	ETigerFeedingState__ETigerFeedingState_MAX = 8,

};

// Enum Tiger.ETigerFriendLoadStatus
enum class Tiger_ETigerFriendLoadStatus : uint8_t
{
	ETigerFriendLoadStatus__Unloaded = 0,
	ETigerFriendLoadStatus__Loading = 1,
	ETigerFriendLoadStatus__Loaded = 2,
	ETigerFriendLoadStatus__LoadFailed = 3,
	ETigerFriendLoadStatus__ETigerFriendLoadStatus_MAX = 4,

};

// Enum Tiger.ETigerGraphicsSettingPreset
enum class Tiger_ETigerGraphicsSettingPreset : uint8_t
{
	ETigerGraphicsSettingPreset__Low = 0,
	ETigerGraphicsSettingPreset__Mid = 1,
	ETigerGraphicsSettingPreset__High = 2,
	ETigerGraphicsSettingPreset__Ultra = 3,
	ETigerGraphicsSettingPreset__ETigerGraphicsSettingPreset_MAX = 4,

};

// Enum Tiger.ETigerCurrentGameFlowState
enum class Tiger_ETigerCurrentGameFlowState : uint8_t
{
	ETigerCurrentGameFlowState__CharacterSelect = 0,
	ETigerCurrentGameFlowState__LoadingElysium = 1,
	ETigerCurrentGameFlowState__Elysium = 2,
	ETigerCurrentGameFlowState__LoadingPrague = 3,
	ETigerCurrentGameFlowState__StreamingPrague = 4,
	ETigerCurrentGameFlowState__LoadingCharacter = 5,
	ETigerCurrentGameFlowState__Waiting_Or_PreSpawn = 6,
	ETigerCurrentGameFlowState__SpawningMechanic = 7,
	ETigerCurrentGameFlowState__Spawned = 8,
	ETigerCurrentGameFlowState__EndGame = 9,
	ETigerCurrentGameFlowState__LoadingPragueToElysiumLimbo = 10,
	ETigerCurrentGameFlowState__PragueToElysiumLimbo = 11,
	ETigerCurrentGameFlowState__ETigerCurrentGameFlowState_MAX = 12,

};

// Enum Tiger.ETigerGrimoireArticleType
enum class Tiger_ETigerGrimoireArticleType : uint8_t
{
	ETigerGrimoireArticleType__Featured = 0,
	ETigerGrimoireArticleType__Suggested = 1,
	ETigerGrimoireArticleType__New = 2,
	ETigerGrimoireArticleType__ETigerGrimoireArticleType_MAX = 3,

};

// Enum Tiger.ETigerGrimoireSearchEntryType
enum class Tiger_ETigerGrimoireSearchEntryType : uint8_t
{
	ETigerGrimoireSearchEntryType__Category = 0,
	ETigerGrimoireSearchEntryType__Entry = 1,
	ETigerGrimoireSearchEntryType__ETigerGrimoireSearchEntryType_MAX = 2,

};

// Enum Tiger.ETigerGrimoireContinuationMethod
enum class Tiger_ETigerGrimoireContinuationMethod : uint8_t
{
	ETigerGrimoireContinuationMethod__NewParagraph = 0,
	ETigerGrimoireContinuationMethod__ExtendParagraph = 1,
	ETigerGrimoireContinuationMethod__Conversation = 2,
	ETigerGrimoireContinuationMethod__ETigerGrimoireContinuationMethod_MAX = 3,

};

// Enum Tiger.ETigerGrimoireEntryTextMode
enum class Tiger_ETigerGrimoireEntryTextMode : uint8_t
{
	ETigerGrimoireEntryTextMode__Small = 0,
	ETigerGrimoireEntryTextMode__Large = 1,
	ETigerGrimoireEntryTextMode__ETigerGrimoireEntryTextMode_MAX = 2,

};

// Enum Tiger.ETigerGrimoireEntryMediaDisplayMode
enum class Tiger_ETigerGrimoireEntryMediaDisplayMode : uint8_t
{
	ETigerGrimoireEntryMediaDisplayMode__Image = 0,
	ETigerGrimoireEntryMediaDisplayMode__Background = 1,
	ETigerGrimoireEntryMediaDisplayMode__Video = 2,
	ETigerGrimoireEntryMediaDisplayMode__Info = 3,
	ETigerGrimoireEntryMediaDisplayMode__Card = 4,
	ETigerGrimoireEntryMediaDisplayMode__Model = 5,
	ETigerGrimoireEntryMediaDisplayMode__ETigerGrimoireEntryMediaDisplayMode_MAX = 6,

};

// Enum Tiger.ETigerHeatmap
enum class Tiger_ETigerHeatmap : uint8_t
{
	ETigerHeatmap__PlayerDeaths    = 0,
	ETigerHeatmap__Feeding         = 1,
	ETigerHeatmap__PlayerMovement  = 2,
	ETigerHeatmap__RangedAttack    = 3,
	ETigerHeatmap__MeleeAttack     = 4,
	ETigerHeatmap__DisciplineUsed  = 5,
	ETigerHeatmap__Camping         = 6,
	ETigerHeatmap__PickedUpItem    = 7,
	ETigerHeatmap__NPCMovement     = 8,
	ETigerHeatmap__NPCDamagedPlayer = 9,
	ETigerHeatmap__PVECombat       = 10,
	ETigerHeatmap__PVPCombat       = 11,
	ETigerHeatmap__Count           = 12,
	ETigerHeatmap__ETigerHeatmap_MAX = 13,

};

// Enum Tiger.ETigerHookState
enum class Tiger_ETigerHookState : uint8_t
{
	ETigerHookState__Spawned       = 0,
	ETigerHookState__Throwing      = 1,
	ETigerHookState__Rotating      = 2,
	ETigerHookState__Reeling       = 3,
	ETigerHookState__Missed        = 4,
	ETigerHookState__Done          = 5,
	ETigerHookState__ETigerHookState_MAX = 6,

};

// Enum Tiger.ETigerDamageNumberAmount
enum class Tiger_ETigerDamageNumberAmount : uint8_t
{
	ETigerDamageNumberAmount__NoNumbers = 0,
	ETigerDamageNumberAmount__Accumulate = 1,
	ETigerDamageNumberAmount__EveryHit = 2,
	ETigerDamageNumberAmount__ETigerDamageNumberAmount_MAX = 3,

};

// Enum Tiger.ETigerVendorType
enum class Tiger_ETigerVendorType : uint8_t
{
	ETigerVendorType__MatchMaker   = 0,
	ETigerVendorType__OutfitStore  = 1,
	ETigerVendorType__TalentTrainer = 2,
	ETigerVendorType__ETigerVendorType_MAX = 3,

};

// Enum Tiger.EInteractiveObjectState
enum class Tiger_EInteractiveObjectState : uint8_t
{
	EInteractiveObjectState__NotInteractive = 0,
	EInteractiveObjectState__Inactive = 1,
	EInteractiveObjectState__Activated_Volume = 2,
	EInteractiveObjectState__Activated_Interaction = 3,
	EInteractiveObjectState__Activated_Shooting = 4,
	EInteractiveObjectState__Done  = 5,
	EInteractiveObjectState__EInteractiveObjectState_MAX = 6,

};

// Enum Tiger.ETigerWeaponCycleDirection
enum class Tiger_ETigerWeaponCycleDirection : uint8_t
{
	ETigerWeaponCycleDirection__Previous = 0,
	ETigerWeaponCycleDirection__Next = 1,
	ETigerWeaponCycleDirection__ETigerWeaponCycleDirection_MAX = 2,

};

// Enum Tiger.ETigerItemPickupInfo
enum class Tiger_ETigerItemPickupInfo : uint8_t
{
	ETigerItemPickupInfo__CanBePickedUp = 0,
	ETigerItemPickupInfo__AlreadyPickedUp = 1,
	ETigerItemPickupInfo__CategoryFull = 2,
	ETigerItemPickupInfo__ItemIsNull = 3,
	ETigerItemPickupInfo__CanPickUpAmmo = 4,
	ETigerItemPickupInfo__AmmoFull = 5,
	ETigerItemPickupInfo__Swap     = 6,
	ETigerItemPickupInfo__ETigerItemPickupInfo_MAX = 7,

};

// Enum Tiger.ERangedWeaponModType
enum class Tiger_ERangedWeaponModType : uint8_t
{
	ERangedWeaponModType__Scope    = 0,
	ERangedWeaponModType__ExtendedMag = 1,
	ERangedWeaponModType__Stock    = 2,
	ERangedWeaponModType__Special  = 3,
	ERangedWeaponModType__Barrel   = 4,
	ERangedWeaponModType__ERangedWeaponModType_MAX = 5,

};

// Enum Tiger.ETigerArtifactAbility
enum class Tiger_ETigerArtifactAbility : uint8_t
{
	ETigerArtifactAbility__DoubleJump = 0,
	ETigerArtifactAbility__Count   = 1,
	ETigerArtifactAbility__ETigerArtifactAbility_MAX = 2,

};

// Enum Tiger.ETigerTooltipStatChangeAmount
enum class Tiger_ETigerTooltipStatChangeAmount : uint8_t
{
	ETigerTooltipStatChangeAmount__Minor = 0,
	ETigerTooltipStatChangeAmount__Moderate = 1,
	ETigerTooltipStatChangeAmount__Significant = 2,
	ETigerTooltipStatChangeAmount__Major = 3,
	ETigerTooltipStatChangeAmount__Hidden = 4,
	ETigerTooltipStatChangeAmount__ETigerTooltipStatChangeAmount_MAX = 5,

};

// Enum Tiger.ETigerInventoryItemType
enum class Tiger_ETigerInventoryItemType : uint8_t
{
	ETigerInventoryItemType__TigerInventoryItem_Firearm = 0,
	ETigerInventoryItemType__TigerInventoryItem_Melee = 1,
	ETigerInventoryItemType__TigerInventoryItem_Unarmed = 2,
	ETigerInventoryItemType__TigerInventoryItem_Outfit = 3,
	ETigerInventoryItemType__TigerInventoryItem_Amulet = 4,
	ETigerInventoryItemType__TigerInventoryItem_Artifact = 5,
	ETigerInventoryItemType__TigerInventoryItem_BodyArmor = 6,
	ETigerInventoryItemType__TigerInventoryItem_Relic = 7,
	ETigerInventoryItemType__TigerInventoryItem_Ammo = 8,
	ETigerInventoryItemType__TigerInventoryItem_Consumable = 9,
	ETigerInventoryItemType__TigerInventoryItem_Mod = 10,
	ETigerInventoryItemType__TigerInventoryItem_Collectible = 11,
	ETigerInventoryItemType__TigerInventoryItem_Size = 12,
	ETigerInventoryItemType__TigerInventoryItem_MAX = 13,

};

// Enum Tiger.ETigerTimedAnimationType
enum class Tiger_ETigerTimedAnimationType : uint8_t
{
	ETigerTimedAnimationType__Montage = 0,
	ETigerTimedAnimationType__Section = 1,
	ETigerTimedAnimationType__ETigerTimedAnimationType_MAX = 2,

};

// Enum Tiger.ETigerLegalDocumentType
enum class Tiger_ETigerLegalDocumentType : uint8_t
{
	ETigerLegalDocumentType__Eula  = 0,
	ETigerLegalDocumentType__ExportGate = 1,
	ETigerLegalDocumentType__ExportGateDenied = 2,
	ETigerLegalDocumentType__PrivacyPolicy = 3,
	ETigerLegalDocumentType__Newsletter = 4,
	ETigerLegalDocumentType__NewsletterKorea = 5,
	ETigerLegalDocumentType__KoreaSpecial1 = 6,
	ETigerLegalDocumentType__KoreaSpecial2 = 7,
	ETigerLegalDocumentType__KoreaSpecial3 = 8,
	ETigerLegalDocumentType__KoreaSpecial4 = 9,
	ETigerLegalDocumentType__KoreaSpecial5 = 10,
	ETigerLegalDocumentType__ETigerLegalDocumentType_MAX = 11,

};

// Enum Tiger.ETigerAIPlayerMainState
enum class Tiger_ETigerAIPlayerMainState : uint8_t
{
	ETigerAIPlayerMainState__Idle  = 0,
	ETigerAIPlayerMainState__InBloodVein = 1,
	ETigerAIPlayerMainState__Wandering = 2,
	ETigerAIPlayerMainState__Combat = 3,
	ETigerAIPlayerMainState__Fleeing = 4,
	ETigerAIPlayerMainState__GoingForItem = 5,
	ETigerAIPlayerMainState__GoingForFeeding = 6,
	ETigerAIPlayerMainState__Healing = 7,
	ETigerAIPlayerMainState__PreMatch = 8,
	ETigerAIPlayerMainState__ETigerAIPlayerMainState_MAX = 9,

};

// Enum Tiger.ETigerAIPlayerTargetType
enum class Tiger_ETigerAIPlayerTargetType : uint8_t
{
	ETigerAIPlayerTargetType__Move = 0,
	ETigerAIPlayerTargetType__Feed = 1,
	ETigerAIPlayerTargetType__Loot = 2,
	ETigerAIPlayerTargetType__ETigerAIPlayerTargetType_MAX = 3,

};

// Enum Tiger.ETigerLootCategory
enum class Tiger_ETigerLootCategory : uint8_t
{
	ETigerLootCategory__Weapons    = 0,
	ETigerLootCategory__Ammo       = 1,
	ETigerLootCategory__RangedMods = 2,
	ETigerLootCategory__Consumables = 3,
	ETigerLootCategory__Backpacks  = 4,
	ETigerLootCategory__Collectible = 5,
	ETigerLootCategory__ETigerLootCategory_MAX = 6,

};

// Enum Tiger.EMapMarkerType
enum class Tiger_EMapMarkerType : uint8_t
{
	EMapMarkerType__Other          = 0,
	EMapMarkerType__AntiqueStore   = 1,
	EMapMarkerType__TailorStore    = 2,
	EMapMarkerType__PharmacyStore  = 3,
	EMapMarkerType__EntityCheckpoint = 4,
	EMapMarkerType__EMapMarkerType_MAX = 5,

};

// Enum Tiger.ETigerBlockState
enum class Tiger_ETigerBlockState : uint8_t
{
	ETigerBlockState__NotParrying  = 0,
	ETigerBlockState__StartParrying = 1,
	ETigerBlockState__DeflectIncomingAttacks = 2,
	ETigerBlockState__NumStates    = 3,
	ETigerBlockState__ETigerBlockState_MAX = 4,

};

// Enum Tiger.ETigerMeleeState
enum class Tiger_ETigerMeleeState : uint8_t
{
	ETigerMeleeState__ETigerMeleeState_Inactive = 0,
	ETigerMeleeState__ETigerMeleeState_SwingDamage = 1,
	ETigerMeleeState__ETigerMeleeState_SwingFinish = 2,
	ETigerMeleeState__ETigerMeleeState_MAX = 3,

};

// Enum Tiger.ETigerMeleeWeaponIdentifier
enum class Tiger_ETigerMeleeWeaponIdentifier : uint8_t
{
	ETigerMeleeWeaponIdentifier__None = 0,
	ETigerMeleeWeaponIdentifier__Axe = 1,
	ETigerMeleeWeaponIdentifier__Katana = 2,
	ETigerMeleeWeaponIdentifier__ScourgeBlades = 3,
	ETigerMeleeWeaponIdentifier__Unarmed = 4,
	ETigerMeleeWeaponIdentifier__Bat = 5,
	ETigerMeleeWeaponIdentifier__Count = 6,
	ETigerMeleeWeaponIdentifier__ETigerMeleeWeaponIdentifier_MAX = 7,

};

// Enum Tiger.ETigerDialogueQuestRequirementSpecifier
enum class Tiger_ETigerDialogueQuestRequirementSpecifier : uint8_t
{
	ETigerDialogueQuestRequirementSpecifier__InProgress = 0,
	ETigerDialogueQuestRequirementSpecifier__Completed = 1,
	ETigerDialogueQuestRequirementSpecifier__ETigerDialogueQuestRequirementSpecifier_MAX = 2,

};

// Enum Tiger.ETigerDialogueEqualitySpecifier
enum class Tiger_ETigerDialogueEqualitySpecifier : uint8_t
{
	ETigerDialogueEqualitySpecifier__LessThan = 0,
	ETigerDialogueEqualitySpecifier__LessThanOrEqualTo = 1,
	ETigerDialogueEqualitySpecifier__EqualTo = 2,
	ETigerDialogueEqualitySpecifier__GreaterThanOrEqualTo = 3,
	ETigerDialogueEqualitySpecifier__GreaterThan = 4,
	ETigerDialogueEqualitySpecifier__ETigerDialogueEqualitySpecifier_MAX = 5,

};

// Enum Tiger.ETigerDialogueOutfitRequirementSpecifier
enum class Tiger_ETigerDialogueOutfitRequirementSpecifier : uint8_t
{
	ETigerDialogueOutfitRequirementSpecifier__ClanOutfit = 0,
	ETigerDialogueOutfitRequirementSpecifier__GenderedOutfit = 1,
	ETigerDialogueOutfitRequirementSpecifier__ClanGenderedOutfit = 2,
	ETigerDialogueOutfitRequirementSpecifier__SpecificAssetName = 3,
	ETigerDialogueOutfitRequirementSpecifier__ETigerDialogueOutfitRequirementSpecifier_MAX = 4,

};

// Enum Tiger.ETigerDialogueClanRequirementSpecifier
enum class Tiger_ETigerDialogueClanRequirementSpecifier : uint8_t
{
	ETigerDialogueClanRequirementSpecifier__BothAreSame = 0,
	ETigerDialogueClanRequirementSpecifier__BothAreDifferent = 1,
	ETigerDialogueClanRequirementSpecifier__PlayerIsSpecific = 2,
	ETigerDialogueClanRequirementSpecifier__ETigerDialogueClanRequirementSpecifier_MAX = 3,

};

// Enum Tiger.ETigerDialogueCategory
enum class Tiger_ETigerDialogueCategory : uint8_t
{
	ETigerDialogueCategory__Uncategorised = 0,
	ETigerDialogueCategory__Congratulations = 1,
	ETigerDialogueCategory__Grimoire = 2,
	ETigerDialogueCategory__Character = 3,
	ETigerDialogueCategory__Collectible = 4,
	ETigerDialogueCategory__Item   = 5,
	ETigerDialogueCategory__Location = 6,
	ETigerDialogueCategory__Lore   = 7,
	ETigerDialogueCategory__Narrative = 8,
	ETigerDialogueCategory__Quest  = 9,
	ETigerDialogueCategory__Reaction = 10,
	ETigerDialogueCategory__Miscellaneous1 = 11,
	ETigerDialogueCategory__Miscellaneous2 = 12,
	ETigerDialogueCategory__Miscellaneous3 = 13,
	ETigerDialogueCategory__Miscellaneous4 = 14,
	ETigerDialogueCategory__Miscellaneous5 = 15,
	ETigerDialogueCategory__Max    = 16,

};

// Enum Tiger.ETigerDialogueRepeatability
enum class Tiger_ETigerDialogueRepeatability : uint8_t
{
	ETigerDialogueRepeatability__Repeatable = 0,
	ETigerDialogueRepeatability__OncePerElysium = 1,
	ETigerDialogueRepeatability__OnceEver = 2,
	ETigerDialogueRepeatability__ETigerDialogueRepeatability_MAX = 3,

};

// Enum Tiger.ETigerDialogueIdleAnimation
enum class Tiger_ETigerDialogueIdleAnimation : uint8_t
{
	ETigerDialogueIdleAnimation__Default = 0,
	ETigerDialogueIdleAnimation__Happy = 1,
	ETigerDialogueIdleAnimation__Sad = 2,
	ETigerDialogueIdleAnimation__Angry = 3,
	ETigerDialogueIdleAnimation__Fearful = 4,
	ETigerDialogueIdleAnimation__Amazed = 5,
	ETigerDialogueIdleAnimation__ETigerDialogueIdleAnimation_MAX = 6,

};

// Enum Tiger.ETigerDialoguePriority
enum class Tiger_ETigerDialoguePriority : uint8_t
{
	ETigerDialoguePriority__Flavour = 0,
	ETigerDialoguePriority__Situational = 1,
	ETigerDialoguePriority__Important = 2,
	ETigerDialoguePriority__Urgent = 3,
	ETigerDialoguePriority__Max    = 4,

};

// Enum Tiger.ETigerOnlineServiceStatus
enum class Tiger_ETigerOnlineServiceStatus : uint8_t
{
	ETigerOnlineServiceStatus__Available = 0,
	ETigerOnlineServiceStatus__Unavailable = 1,
	ETigerOnlineServiceStatus__ETigerOnlineServiceStatus_MAX = 2,

};

// Enum Tiger.ETigerLoginResult
enum class Tiger_ETigerLoginResult : uint8_t
{
	ETigerLoginResult__LoginSucceeded = 0,
	ETigerLoginResult__InternalError = 1,
	ETigerLoginResult__GetCharactersFailed = 2,
	ETigerLoginResult__NoValidAuthentication = 3,
	ETigerLoginResult__SteamNotEnabled = 4,
	ETigerLoginResult__AutomaticLoginFailed = 5,
	ETigerLoginResult__PlayerBanned = 6,
	ETigerLoginResult__Count       = 7,
	ETigerLoginResult__ETigerLoginResult_MAX = 8,

};

// Enum Tiger.ETigerPersistentConfigKey
enum class Tiger_ETigerPersistentConfigKey : uint8_t
{
	ETigerPersistentConfigKey__LastRewardedStatusRank = 0,
	ETigerPersistentConfigKey__ETigerPersistentConfigKey_MAX = 1,

};

// Enum Tiger.ETigerPlayerNPCVisibility
enum class Tiger_ETigerPlayerNPCVisibility : uint8_t
{
	ETigerPlayerNPCVisibility__NotSeenByNPC = 0,
	ETigerPlayerNPCVisibility__SeenByCivilian = 1,
	ETigerPlayerNPCVisibility__SeenByPolice = 2,
	ETigerPlayerNPCVisibility__ETigerPlayerNPCVisibility_MAX = 3,

};

// Enum Tiger.ETigerClimbingCameraInterpState
enum class Tiger_ETigerClimbingCameraInterpState : uint8_t
{
	ETigerClimbingCameraInterpState__None = 0,
	ETigerClimbingCameraInterpState__In = 1,
	ETigerClimbingCameraInterpState__Out = 2,
	ETigerClimbingCameraInterpState__ETigerClimbingCameraInterpState_MAX = 3,

};

// Enum Tiger.ETigerPhysicalInteraction
enum class Tiger_ETigerPhysicalInteraction : uint8_t
{
	ETigerPhysicalInteraction__Neither = 0,
	ETigerPhysicalInteraction__Revive = 1,
	ETigerPhysicalInteraction__Diablerie = 2,
	ETigerPhysicalInteraction__ETigerPhysicalInteraction_MAX = 3,

};

// Enum Tiger.ETigerBufferedActionType
enum class Tiger_ETigerBufferedActionType : uint8_t
{
	ETigerBufferedActionType__Jump = 0,
	ETigerBufferedActionType__Dodge = 1,
	ETigerBufferedActionType__MeleeAttack = 2,
	ETigerBufferedActionType__RangedAttack = 3,
	ETigerBufferedActionType__DisciplineArchetype = 4,
	ETigerBufferedActionType__DisciplineArchetypeReleased = 5,
	ETigerBufferedActionType__DisciplineClan = 6,
	ETigerBufferedActionType__DisciplineClanReleased = 7,
	ETigerBufferedActionType__WeaponAbility = 8,
	ETigerBufferedActionType__WeaponAbilityReleased = 9,
	ETigerBufferedActionType__Sprint = 10,
	ETigerBufferedActionType__Block = 11,
	ETigerBufferedActionType__Crouch = 12,
	ETigerBufferedActionType__Reload = 13,
	ETigerBufferedActionType__SwitchWeapon = 14,
	ETigerBufferedActionType__QuickAttack = 15,
	ETigerBufferedActionType__ToggleHeightenedSenses = 16,
	ETigerBufferedActionType__Count = 17,
	ETigerBufferedActionType__ETigerBufferedActionType_MAX = 18,

};

// Enum Tiger.ETigerWallJumpAnimationState
enum class Tiger_ETigerWallJumpAnimationState : uint8_t
{
	ETigerWallJumpAnimationState__None = 0,
	ETigerWallJumpAnimationState__Sliding = 1,
	ETigerWallJumpAnimationState__Jumping = 2,
	ETigerWallJumpAnimationState__ETigerWallJumpAnimationState_MAX = 3,

};

// Enum Tiger.ETigerVersionIsValidResult
enum class Tiger_ETigerVersionIsValidResult : uint8_t
{
	ETigerVersionIsValidResult__Valid = 0,
	ETigerVersionIsValidResult__Invalid = 1,
	ETigerVersionIsValidResult__ConnectionError = 2,
	ETigerVersionIsValidResult__ParseError = 3,
	ETigerVersionIsValidResult__ETigerVersionIsValidResult_MAX = 4,

};

// Enum Tiger.ETigerGetTicketResult
enum class Tiger_ETigerGetTicketResult : uint8_t
{
	ETigerGetTicketResult__Success = 0,
	ETigerGetTicketResult__ConnectionError = 1,
	ETigerGetTicketResult__ParseError = 2,
	ETigerGetTicketResult__InvalidResponse = 3,
	ETigerGetTicketResult__BackendOperationFailed = 4,
	ETigerGetTicketResult__ETigerGetTicketResult_MAX = 5,

};

// Enum Tiger.ETigerInterrupt
enum class Tiger_ETigerInterrupt : uint8_t
{
	ETigerInterrupt__Climbing      = 0,
	ETigerInterrupt__Placeholder   = 1,
	ETigerInterrupt__Size          = 2,
	ETigerInterrupt__ETigerInterrupt_MAX = 3,

};

// Enum Tiger.EHitAudio
enum class Tiger_EHitAudio : uint8_t
{
	EHitAudio__None                = 0,
	EHitAudio__Flesh               = 1,
	EHitAudio__Stone               = 2,
	EHitAudio__Concrete            = 3,
	EHitAudio__Fabric              = 4,
	EHitAudio__MetalThick          = 5,
	EHitAudio__Gravel              = 6,
	EHitAudio__Ground              = 7,
	EHitAudio__CeramicRoofTile     = 8,
	EHitAudio__Grass               = 9,
	EHitAudio__Puddle              = 10,
	EHitAudio__Wood                = 11,
	EHitAudio__MetalThin           = 12,
	EHitAudio__Glass               = 13,
	EHitAudio__MAX                 = 14,

};

// Enum Tiger.ETigerWeaponReloadMode
enum class Tiger_ETigerWeaponReloadMode : uint8_t
{
	ETigerWeaponReloadMode__NotReloading = 0,
	ETigerWeaponReloadMode__WantsToReload = 1,
	ETigerWeaponReloadMode__Reloading = 2,
	ETigerWeaponReloadMode__ETigerWeaponReloadMode_MAX = 3,

};

// Enum Tiger.ETigerReflectBehaviour
enum class Tiger_ETigerReflectBehaviour : uint8_t
{
	ETigerReflectBehaviour__Reflect = 0,
	ETigerReflectBehaviour__Block  = 1,
	ETigerReflectBehaviour__None   = 2,
	ETigerReflectBehaviour__ETigerReflectBehaviour_MAX = 3,

};

// Enum Tiger.ETigerReflectAttackType
enum class Tiger_ETigerReflectAttackType : uint8_t
{
	ETigerReflectAttackType__Bullet = 0,
	ETigerReflectAttackType__Melee = 1,
	ETigerReflectAttackType__ThrownAxe = 2,
	ETigerReflectAttackType__ThrownTrap = 3,
	ETigerReflectAttackType__ThrownChain = 4,
	ETigerReflectAttackType__Count = 5,
	ETigerReflectAttackType__ETigerReflectAttackType_MAX = 6,

};

// Enum Tiger.ETigerClassRepNodeMapping
enum class Tiger_ETigerClassRepNodeMapping : uint8_t
{
	ETigerClassRepNodeMapping__NotRouted = 0,
	ETigerClassRepNodeMapping__RelevantAllConnections = 1,
	ETigerClassRepNodeMapping__OwnerRelevantConnection = 2,
	ETigerClassRepNodeMapping__Spatialize_Static = 3,
	ETigerClassRepNodeMapping__Spatialize_Dynamic = 4,
	ETigerClassRepNodeMapping__Spatialize_Dynamic_PlayerSpawned = 5,
	ETigerClassRepNodeMapping__Spatialize_Static_PlayerSpawned = 6,
	ETigerClassRepNodeMapping__Spatialize_Dormancy = 7,
	ETigerClassRepNodeMapping__ETigerClassRepNodeMapping_MAX = 8,

};

// Enum Tiger.ETigerResurrectHolyIncenseInteractionType
enum class Tiger_ETigerResurrectHolyIncenseInteractionType : uint8_t
{
	ETigerResurrectHolyIncenseInteractionType__None = 0,
	ETigerResurrectHolyIncenseInteractionType__OnOverlap = 1,
	ETigerResurrectHolyIncenseInteractionType__OnWaveReveal = 2,
	ETigerResurrectHolyIncenseInteractionType__ETigerResurrectHolyIncenseInteractionType_MAX = 3,

};

// Enum Tiger.EScreenTransitionState
enum class Tiger_EScreenTransitionState : uint8_t
{
	EScreenTransitionState__NotStarted = 0,
	EScreenTransitionState__TransitionIn = 1,
	EScreenTransitionState__TransitionOut = 2,
	EScreenTransitionState__Finished = 3,
	EScreenTransitionState__EScreenTransitionState_MAX = 4,

};

// Enum Tiger.EShockwaveWallDestroyReason
enum class Tiger_EShockwaveWallDestroyReason : uint8_t
{
	EShockwaveWallDestroyReason__CollidedWithTerrain = 0,
	EShockwaveWallDestroyReason__ReachedMaxDistance = 1,
	EShockwaveWallDestroyReason__OtherShockwaveWall = 2,
	EShockwaveWallDestroyReason__EShockwaveWallDestroyReason_MAX = 3,

};

// Enum Tiger.ETigerSignificanceElysiumNpcMeshType
enum class Tiger_ETigerSignificanceElysiumNpcMeshType : uint8_t
{
	ETigerSignificanceElysiumNpcMeshType__Body = 0,
	ETigerSignificanceElysiumNpcMeshType__Head = 1,
	ETigerSignificanceElysiumNpcMeshType__Hair = 2,
	ETigerSignificanceElysiumNpcMeshType__Hoodie = 3,
	ETigerSignificanceElysiumNpcMeshType__Props = 4,
	ETigerSignificanceElysiumNpcMeshType__ETigerSignificanceElysiumNpcMeshType_MAX = 5,

};

// Enum Tiger.ETigerSignificancePlayerMeshType
enum class Tiger_ETigerSignificancePlayerMeshType : uint8_t
{
	ETigerSignificancePlayerMeshType__Body = 0,
	ETigerSignificancePlayerMeshType__Head = 1,
	ETigerSignificancePlayerMeshType__Hair = 2,
	ETigerSignificancePlayerMeshType__Hoodie = 3,
	ETigerSignificancePlayerMeshType__Headgear = 4,
	ETigerSignificancePlayerMeshType__Eyewear = 5,
	ETigerSignificancePlayerMeshType__Weapon = 6,
	ETigerSignificancePlayerMeshType__SecondaryWeapon = 7,
	ETigerSignificancePlayerMeshType__HolsteredWeapon = 8,
	ETigerSignificancePlayerMeshType__SecondaryHolsteredWeapon = 9,
	ETigerSignificancePlayerMeshType__BodyAdditional = 10,
	ETigerSignificancePlayerMeshType__Generic = 11,
	ETigerSignificancePlayerMeshType__Piercing = 12,
	ETigerSignificancePlayerMeshType__Beard = 13,
	ETigerSignificancePlayerMeshType__ETigerSignificancePlayerMeshType_MAX = 14,

};

// Enum Tiger.ESplatmapTextureChannel
enum class Tiger_ESplatmapTextureChannel : uint8_t
{
	ESplatmapTextureChannel__R     = 0,
	ESplatmapTextureChannel__G     = 1,
	ESplatmapTextureChannel__B     = 2,
	ESplatmapTextureChannel__A     = 3,
	ESplatmapTextureChannel__ChannelCount = 4,
	ESplatmapTextureChannel__ESplatmapTextureChannel_MAX = 5,

};

// Enum Tiger.ETigerStaticMeshType
enum class Tiger_ETigerStaticMeshType : uint8_t
{
	ETigerStaticMeshType__Default  = 0,
	ETigerStaticMeshType__Stairs   = 1,
	ETigerStaticMeshType__Slope    = 2,
	ETigerStaticMeshType__ETigerStaticMeshType_MAX = 3,

};

// Enum Tiger.ETigerLocalPlayerStatsCategory
enum class Tiger_ETigerLocalPlayerStatsCategory : uint8_t
{
	ETigerLocalPlayerStatsCategory__OnlineTime = 0,
	ETigerLocalPlayerStatsCategory__PlayTime = 1,
	ETigerLocalPlayerStatsCategory__Count = 2,
	ETigerLocalPlayerStatsCategory__ETigerLocalPlayerStatsCategory_MAX = 3,

};

// Enum Tiger.ETigerStatsGroupType
enum class Tiger_ETigerStatsGroupType : uint8_t
{
	ETigerStatsGroupType__GeneralStats = 0,
	ETigerStatsGroupType__RangedWeaponStats = 1,
	ETigerStatsGroupType__MeleeWeaponStats = 2,
	ETigerStatsGroupType__Count    = 3,
	ETigerStatsGroupType__ETigerStatsGroupType_MAX = 4,

};

// Enum Tiger.ETigerStatsCategory
enum class Tiger_ETigerStatsCategory : uint8_t
{
	ETigerStatsCategory__TimeInRedGas = 0,
	ETigerStatsCategory__TimeInRedGasWithStimulant = 1,
	ETigerStatsCategory__TotalMoveDistance = 2,
	ETigerStatsCategory__WalkingDistance = 3,
	ETigerStatsCategory__DisciplineTravelDistance = 4,
	ETigerStatsCategory__CrouchingTime = 5,
	ETigerStatsCategory__ClimbingTime = 6,
	ETigerStatsCategory__TimeInside = 7,
	ETigerStatsCategory__WallHangTime = 8,
	ETigerStatsCategory__WallGrindTime = 9,
	ETigerStatsCategory__SlideTime = 10,
	ETigerStatsCategory__AirTime   = 11,
	ETigerStatsCategory__NotMovingTime = 12,
	ETigerStatsCategory__TotalJumps = 13,
	ETigerStatsCategory__TotalWallJumps = 14,
	ETigerStatsCategory__TotalSlideJumps = 15,
	ETigerStatsCategory__TotalLedgeGrabs = 16,
	ETigerStatsCategory__TotalLowVaults = 17,
	ETigerStatsCategory__NumberOfAlliedRevives = 18,
	ETigerStatsCategory__TotalAmountOfHealing = 19,
	ETigerStatsCategory__TotalNumberOfHealingEvents = 20,
	ETigerStatsCategory__TotalFeedingAbortsByDamage = 21,
	ETigerStatsCategory__TotalFeedingAbortsByPlayer = 22,
	ETigerStatsCategory__TotalTimeBloodHunted = 23,
	ETigerStatsCategory__TotalBloodHuntsByFeeding = 24,
	ETigerStatsCategory__TotalBloodHuntsByKilling = 25,
	ETigerStatsCategory__TotalNumberAreaMarkerConsequences = 26,
	ETigerStatsCategory__TotalNumberMapMarkerConsequences = 27,
	ETigerStatsCategory__PingMin   = 28,
	ETigerStatsCategory__PingMax   = 29,
	ETigerStatsCategory__TotalDamageDone = 30,
	ETigerStatsCategory__SurvivalTime = 31,
	ETigerStatsCategory__KindredsKilled = 32,
	ETigerStatsCategory__Placement = 33,
	ETigerStatsCategory__Diableries = 34,
	ETigerStatsCategory__DownedPlayers = 35,
	ETigerStatsCategory__LevelReached = 36,
	ETigerStatsCategory__Assists   = 37,
	ETigerStatsCategory__TotalExpGained = 38,
	ETigerStatsCategory__Deaths    = 39,
	ETigerStatsCategory__NumberOfRangedHits = 40,
	ETigerStatsCategory__NumberOfRangedShots = 41,
	ETigerStatsCategory__DamageDealtWithWeapon = 42,
	ETigerStatsCategory__EnemiesDownedWithWeapon = 43,
	ETigerStatsCategory__NumberOfTimesOutOfAmmoWithWeapon = 44,
	ETigerStatsCategory__NumberHeadshotsWithWeapon = 45,
	ETigerStatsCategory__DurationMeleeWeaponHeldFor = 46,
	ETigerStatsCategory__NumberOfTimesMeleeWeaponDrawn = 47,
	ETigerStatsCategory__NumberOfAttacksWithMeleeWeapon = 48,
	ETigerStatsCategory__NumberOfHitsWithMeleeWeapon = 49,
	ETigerStatsCategory__TotalDamageDoneWithMeleeWeapon = 50,
	ETigerStatsCategory__TotalNumberOfDownsWithMeleeWeapon = 51,
	ETigerStatsCategory__TotalNumberOfKillsWithMeleeWeapon = 52,
	ETigerStatsCategory__Count     = 53,
	ETigerStatsCategory__ETigerStatsCategory_MAX = 54,

};

// Enum Tiger.ETigerTalent
enum class Tiger_ETigerTalent : uint8_t
{
	ETigerTalent__None             = 0,
	ETigerTalent__ShootingDamage1  = 1,
	ETigerTalent__ShotgunDamage1   = 2,
	ETigerTalent__ShotgunDamage2   = 3,
	ETigerTalent__DecreaseSignatureSkillCD = 4,
	ETigerTalent__IncreaseAbilityDamage1 = 5,
	ETigerTalent__Count            = 6,
	ETigerTalent__ETigerTalent_MAX = 7,

};

// Enum Tiger.ETigerTalentType
enum class Tiger_ETigerTalentType : uint8_t
{
	ETigerTalentType__PassiveStatBoost = 0,
	ETigerTalentType__ETigerTalentType_MAX = 1,

};

// Enum Tiger.ETigerTelemetryAceDeathType
enum class Tiger_ETigerTelemetryAceDeathType : uint8_t
{
	ETigerTelemetryAceDeathType__Unknown = 0,
	ETigerTelemetryAceDeathType__Damage = 1,
	ETigerTelemetryAceDeathType__Diablerize = 2,
	ETigerTelemetryAceDeathType__ETigerTelemetryAceDeathType_MAX = 3,

};

// Enum Tiger.ETigerTelemetryMetaItemSourceType
enum class Tiger_ETigerTelemetryMetaItemSourceType : uint8_t
{
	ETigerTelemetryMetaItemSourceType__FlashStore = 0,
	ETigerTelemetryMetaItemSourceType__Battlepass = 1,
	ETigerTelemetryMetaItemSourceType__Reward = 2,
	ETigerTelemetryMetaItemSourceType__Other = 3,
	ETigerTelemetryMetaItemSourceType__ETigerTelemetryMetaItemSourceType_MAX = 4,

};

// Enum Tiger.ETigerTelemetryAceRebirthType
enum class Tiger_ETigerTelemetryAceRebirthType : uint8_t
{
	ETigerTelemetryAceRebirthType__Unknown = 0,
	ETigerTelemetryAceRebirthType__Revive = 1,
	ETigerTelemetryAceRebirthType__Respawn = 2,
	ETigerTelemetryAceRebirthType__ETigerTelemetryAceRebirthType_MAX = 3,

};

// Enum Tiger.ETigerTelemetryNetworkIpType
enum class Tiger_ETigerTelemetryNetworkIpType : uint8_t
{
	ETigerTelemetryNetworkIpType__Unspec = 0,
	ETigerTelemetryNetworkIpType__Ipv4 = 1,
	ETigerTelemetryNetworkIpType__Ipv6 = 2,
	ETigerTelemetryNetworkIpType__ETigerTelemetryNetworkIpType_MAX = 3,

};

// Enum Tiger.ETigerTelemetryNetworkType
enum class Tiger_ETigerTelemetryNetworkType : uint8_t
{
	ETigerTelemetryNetworkType__Unknown = 0,
	ETigerTelemetryNetworkType__Ethernet = 1,
	ETigerTelemetryNetworkType__Wifi = 2,
	ETigerTelemetryNetworkType__ETigerTelemetryNetworkType_MAX = 3,

};

// Enum Tiger.ETigerTelemetryChallengeType
enum class Tiger_ETigerTelemetryChallengeType : uint8_t
{
	ETigerTelemetryChallengeType__Daily = 0,
	ETigerTelemetryChallengeType__Weekly = 1,
	ETigerTelemetryChallengeType__Other = 2,
	ETigerTelemetryChallengeType__ETigerTelemetryChallengeType_MAX = 3,

};

// Enum Tiger.ETigerTelemetryHardCurrencyRecieveMethod
enum class Tiger_ETigerTelemetryHardCurrencyRecieveMethod : uint8_t
{
	ETigerTelemetryHardCurrencyRecieveMethod__TopUp = 0,
	ETigerTelemetryHardCurrencyRecieveMethod__BattlepassReward = 1,
	ETigerTelemetryHardCurrencyRecieveMethod__Gifted = 2,
	ETigerTelemetryHardCurrencyRecieveMethod__Other = 3,
	ETigerTelemetryHardCurrencyRecieveMethod__ETigerTelemetryHardCurrencyRecieveMethod_MAX = 4,

};

// Enum Tiger.ETigerTelemetryBattlepassType
enum class Tiger_ETigerTelemetryBattlepassType : uint8_t
{
	ETigerTelemetryBattlepassType__Regular = 0,
	ETigerTelemetryBattlepassType__Bundle = 1,
	ETigerTelemetryBattlepassType__RankSkipOnly = 2,
	ETigerTelemetryBattlepassType__ETigerTelemetryBattlepassType_MAX = 3,

};

// Enum Tiger.ETigerTelemetryGameplayMode
enum class Tiger_ETigerTelemetryGameplayMode : uint8_t
{
	ETigerTelemetryGameplayMode__BattleRoyale = 0,
	ETigerTelemetryGameplayMode__ETigerTelemetryGameplayMode_MAX = 1,

};

// Enum Tiger.ETigerTelemetryRankedMode
enum class Tiger_ETigerTelemetryRankedMode : uint8_t
{
	ETigerTelemetryRankedMode__Casual = 0,
	ETigerTelemetryRankedMode__ETigerTelemetryRankedMode_MAX = 1,

};

// Enum Tiger.ETigerTelemetryMapIds
enum class Tiger_ETigerTelemetryMapIds : uint8_t
{
	ETigerTelemetryMapIds__Prague  = 0,
	ETigerTelemetryMapIds__ETigerTelemetryMapIds_MAX = 1,

};

// Enum Tiger.ETigerTelemetryPlatformType
enum class Tiger_ETigerTelemetryPlatformType : uint8_t
{
	ETigerTelemetryPlatformType__Steam = 0,
	ETigerTelemetryPlatformType__Unknown = 1,
	ETigerTelemetryPlatformType__ETigerTelemetryPlatformType_MAX = 2,

};

// Enum Tiger.ETigerTelemetryDeviceType
enum class Tiger_ETigerTelemetryDeviceType : uint8_t
{
	ETigerTelemetryDeviceType__Windows = 0,
	ETigerTelemetryDeviceType__ETigerTelemetryDeviceType_MAX = 1,

};

// Enum Tiger.ETigerTelemetryCauseOfPingRemoval
enum class Tiger_ETigerTelemetryCauseOfPingRemoval : uint8_t
{
	ETigerTelemetryCauseOfPingRemoval__Timeout = 0,
	ETigerTelemetryCauseOfPingRemoval__Cancel = 1,
	ETigerTelemetryCauseOfPingRemoval__CollectedLoot = 2,
	ETigerTelemetryCauseOfPingRemoval__GroupMemberRemoved = 3,
	ETigerTelemetryCauseOfPingRemoval__ETigerTelemetryCauseOfPingRemoval_MAX = 4,

};

// Enum Tiger.ETigerTelemetryExpSource
enum class Tiger_ETigerTelemetryExpSource : uint8_t
{
	ETigerTelemetryExpSource__Civillian = 0,
	ETigerTelemetryExpSource__PotentCivillian = 1,
	ETigerTelemetryExpSource__HighPotentCivillian = 2,
	ETigerTelemetryExpSource__Diablerie = 3,
	ETigerTelemetryExpSource__Rat  = 4,
	ETigerTelemetryExpSource__Team = 5,
	ETigerTelemetryExpSource__Entity = 6,
	ETigerTelemetryExpSource__Invalid = 7,
	ETigerTelemetryExpSource__ETigerTelemetryExpSource_MAX = 8,

};

// Enum Tiger.ETigerTelemetryDamageCauser
enum class Tiger_ETigerTelemetryDamageCauser : uint8_t
{
	ETigerTelemetryDamageCauser__Undefined = 0,
	ETigerTelemetryDamageCauser__Self = 1,
	ETigerTelemetryDamageCauser__OtherPlayer = 2,
	ETigerTelemetryDamageCauser__Entity = 3,
	ETigerTelemetryDamageCauser__Judge = 4,
	ETigerTelemetryDamageCauser__Civilian = 5,
	ETigerTelemetryDamageCauser__None = 6,
	ETigerTelemetryDamageCauser__RedGas = 7,
	ETigerTelemetryDamageCauser__Environmental = 8,
	ETigerTelemetryDamageCauser__ETigerTelemetryDamageCauser_MAX = 9,

};

// Enum Tiger.ETigerTelemetryDamageType
enum class Tiger_ETigerTelemetryDamageType : uint8_t
{
	ETigerTelemetryDamageType__Undefined = 0,
	ETigerTelemetryDamageType__Ranged = 1,
	ETigerTelemetryDamageType__Melee = 2,
	ETigerTelemetryDamageType__Discipline = 3,
	ETigerTelemetryDamageType__Environmental = 4,
	ETigerTelemetryDamageType__RedGas = 5,
	ETigerTelemetryDamageType__ETigerTelemetryDamageType_MAX = 6,

};

// Enum Tiger.ETigerThrallMenu
enum class Tiger_ETigerThrallMenu : uint8_t
{
	ETigerThrallMenu__Thralls      = 0,
	ETigerThrallMenu__Upgrades     = 1,
	ETigerThrallMenu__Other        = 2,
	ETigerThrallMenu__ETigerThrallMenu_MAX = 3,

};

// Enum Tiger.ETigerMissionObjectiveType
enum class Tiger_ETigerMissionObjectiveType : uint8_t
{
	ETigerMissionObjectiveType__Action_Brawl = 0,
	ETigerMissionObjectiveType__Action_Firearms = 1,
	ETigerMissionObjectiveType__Action_Chase = 2,
	ETigerMissionObjectiveType__Stealth_FindEntrance = 3,
	ETigerMissionObjectiveType__Stealth_TakePhoto = 4,
	ETigerMissionObjectiveType__Stealth_Hack = 5,
	ETigerMissionObjectiveType__Intel_StealIntenl = 6,
	ETigerMissionObjectiveType__Intel_PlantBug = 7,
	ETigerMissionObjectiveType__Intel_ThreatenWitness = 8,
	ETigerMissionObjectiveType__ETigerMissionObjectiveType_MAX = 9,

};

// Enum Tiger.ETigerMissionType
enum class Tiger_ETigerMissionType : uint8_t
{
	ETigerMissionType__Action      = 0,
	ETigerMissionType__Stealth     = 1,
	ETigerMissionType__Intel       = 2,
	ETigerMissionType__ETigerMissionType_MAX = 3,

};

// Enum Tiger.ETigerThrallSystemLoadedTable
enum class Tiger_ETigerThrallSystemLoadedTable : uint8_t
{
	ETigerThrallSystemLoadedTable__Abilities = 0,
	ETigerThrallSystemLoadedTable__BaseThralls = 1,
	ETigerThrallSystemLoadedTable__StatsModifier = 2,
	ETigerThrallSystemLoadedTable__ThrallMission = 3,
	ETigerThrallSystemLoadedTable__ETigerThrallSystemLoadedTable_MAX = 4,

};

// Enum Tiger.ETigerThrallStatId
enum class Tiger_ETigerThrallStatId : uint8_t
{
	ETigerThrallStatId__Perception = 0,
	ETigerThrallStatId__Commitment = 1,
	ETigerThrallStatId__Dominance  = 2,
	ETigerThrallStatId__Sociability = 3,
	ETigerThrallStatId__Proficiency = 4,
	ETigerThrallStatId__Stealth    = 5,
	ETigerThrallStatId__Stamina    = 6,
	ETigerThrallStatId__Combat     = 7,
	ETigerThrallStatId__Count      = 8,
	ETigerThrallStatId__ETigerThrallStatId_MAX = 9,

};

// Enum Tiger.ETigerThrallAbilityId
enum class Tiger_ETigerThrallAbilityId : uint8_t
{
	ETigerThrallAbilityId__None    = 0,
	ETigerThrallAbilityId__Diplomat = 1,
	ETigerThrallAbilityId__Slippery = 2,
	ETigerThrallAbilityId__NaturalEnemy = 3,
	ETigerThrallAbilityId__IWorkAlone = 4,
	ETigerThrallAbilityId__ETigerThrallAbilityId_MAX = 5,

};

// Enum Tiger.ETigerTraversalNetValue
enum class Tiger_ETigerTraversalNetValue : uint8_t
{
	ETigerTraversalNetValue__Sprint = 0,
	ETigerTraversalNetValue__RootMotionDisabled = 1,
	ETigerTraversalNetValue__Climb = 2,
	ETigerTraversalNetValue__ForcedMove = 3,
	ETigerTraversalNetValue__Stagger = 4,
	ETigerTraversalNetValue__LedgeGrab = 5,
	ETigerTraversalNetValue__LowVault = 6,
	ETigerTraversalNetValue__Downed = 7,
	ETigerTraversalNetValue__WallGrind = 8,
	ETigerTraversalNetValue__Sliding = 9,
	ETigerTraversalNetValue__RESERVE = 10,
	ETigerTraversalNetValue__RESERVE01 = 11,
	ETigerTraversalNetValue__RESERVE02 = 12,
	ETigerTraversalNetValue__RESERVE03 = 13,
	ETigerTraversalNetValue__RESERVE04 = 14,
	ETigerTraversalNetValue__ETigerTraversalNetValue_MAX = 15,

};

// Enum Tiger.ETigerTraversalTransitionResult
enum class Tiger_ETigerTraversalTransitionResult : uint8_t
{
	ETigerTraversalTransitionResult__Success = 0,
	ETigerTraversalTransitionResult__SuccessWithConsumption = 1,
	ETigerTraversalTransitionResult__Fail = 2,
	ETigerTraversalTransitionResult__ETigerTraversalTransitionResult_MAX = 3,

};

// Enum Tiger.ETigerWallJumpInputOption
enum class Tiger_ETigerWallJumpInputOption : uint8_t
{
	ETigerWallJumpInputOption__None = 0,
	ETigerWallJumpInputOption__OppositeToNormal = 1,
	ETigerWallJumpInputOption__ParallelToNormal = 2,
	ETigerWallJumpInputOption__ETigerWallJumpInputOption_MAX = 3,

};

// Enum Tiger.ETigerUIBorderShape
enum class Tiger_ETigerUIBorderShape : uint8_t
{
	ETigerUIBorderShape__ETigerBorderShape_Rectangle = 0,
	ETigerUIBorderShape__ETigerBorderShape_Circle = 1,
	ETigerUIBorderShape__ETigerBorderShape_MAX = 2,

};

// Enum Tiger.ETigerMinMax
enum class Tiger_ETigerMinMax : uint8_t
{
	ETigerMinMax__Min              = 0,
	ETigerMinMax__Max              = 1,
	ETigerMinMax__Count            = 2,

};

// Enum Tiger.ETigerExtendedWeaponLevels
enum class Tiger_ETigerExtendedWeaponLevels : uint8_t
{
	ETigerExtendedWeaponLevels__Default = 0,
	ETigerExtendedWeaponLevels__ExtendedSmall = 1,
	ETigerExtendedWeaponLevels__ExtendedMedium = 2,
	ETigerExtendedWeaponLevels__ExtendedLarge = 3,
	ETigerExtendedWeaponLevels__LevelCount = 4,
	ETigerExtendedWeaponLevels__ETigerExtendedWeaponLevels_MAX = 5,

};

// Enum Tiger.ETigerSpreadModifier
enum class Tiger_ETigerSpreadModifier : uint8_t
{
	ETigerSpreadModifier__Aiming   = 0,
	ETigerSpreadModifier__Crouching = 1,
	ETigerSpreadModifier__Moving   = 2,
	ETigerSpreadModifier__IsInAir  = 3,
	ETigerSpreadModifier__Sprinting = 4,
	ETigerSpreadModifier__Sliding  = 5,
	ETigerSpreadModifier__WallHang = 6,
	ETigerSpreadModifier__Count    = 7,
	ETigerSpreadModifier__ETigerSpreadModifier_MAX = 8,

};

// Enum Tiger.ETigerWeaponAmmoType
enum class Tiger_ETigerWeaponAmmoType : uint8_t
{
	ETigerWeaponAmmoType__Bullet   = 0,
	ETigerWeaponAmmoType__Buckshot = 1,
	ETigerWeaponAmmoType__Pistol   = 2,
	ETigerWeaponAmmoType__SMG      = 3,
	ETigerWeaponAmmoType__Bolt     = 4,
	ETigerWeaponAmmoType__Precision = 5,
	ETigerWeaponAmmoType__Unique   = 6,
	ETigerWeaponAmmoType__Count    = 7,
	ETigerWeaponAmmoType__ETigerWeaponAmmoType_MAX = 8,

};

// Enum Tiger.ETigerWeaponType
enum class Tiger_ETigerWeaponType : uint8_t
{
	ETigerWeaponType__AssaultRifle = 0,
	ETigerWeaponType__Revolver     = 1,
	ETigerWeaponType__Rifle        = 2,
	ETigerWeaponType__SMG          = 3,
	ETigerWeaponType__Pistol       = 4,
	ETigerWeaponType__Axe          = 5,
	ETigerWeaponType__Bat          = 6,
	ETigerWeaponType__Knife        = 7,
	ETigerWeaponType__Shotgun      = 8,
	ETigerWeaponType__Sword        = 9,
	ETigerWeaponType__Bow          = 10,
	ETigerWeaponType__Crossbow     = 11,
	ETigerWeaponType__Count        = 12,
	ETigerWeaponType__ETigerWeaponType_MAX = 13,

};

// Enum Tiger.ETigerWorldCompositionProxyMode
enum class Tiger_ETigerWorldCompositionProxyMode : uint8_t
{
	ETigerWorldCompositionProxyMode__Legacy = 0,
	ETigerWorldCompositionProxyMode__SingleStageMerge = 1,
	ETigerWorldCompositionProxyMode__ETigerWorldCompositionProxyMode_MAX = 2,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Tiger.TigerCharacterSingleStatModification
// 0x0008
struct FTigerCharacterSingleStatModification
{
	float                                              AdditiveChange;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MultiplicativeChange;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.ClanDamageMultiplierMatrix
// 0x0024
struct FClanDamageMultiplierMatrix
{
	float                                              BrujahAgainst[0x3];                                        // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NosferatuAgainst[0x3];                                     // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ToreadorAgainst[0x3];                                      // 0x0018(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerStatusEffect
// 0x000B
struct FTigerStatusEffect
{
	bool                                               bBlockInteraction;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bInvulnerable;                                             // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bInvisible;                                                // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bHidden;                                                   // 0x0003(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bLogicHidden;                                              // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDisableSprint;                                            // 0x0005(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDisableClimb;                                             // 0x0006(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDisableDisciplines;                                       // 0x0007(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDisableRotation;                                          // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bDisableHeightenedSenses;                                  // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bBlockAILogic;                                             // 0x000A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Tiger.TigerNiagaraAttachment
// 0x0048
struct FTigerNiagaraAttachment
{
	struct FSoftObjectPath                             NiagaraPath;                                               // 0x0000(0x0018) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_369P[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       AttachPointName;                                           // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0028(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0034(0x000C) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_EAttachLocation>                AttachLocationRule;                                        // 0x0040(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOnlySpawnOnLocalPlayer;                                   // 0x0041(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAbsoluteRotation;                                      // 0x0042(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_02L4[0x5];                                     // 0x0043(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerCharacterStatModification
// 0x00B4
struct FTigerCharacterStatModification
{
	float                                              ClanSkillCooldownMultiplier;                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArchetypeSkillCooldownMultiplier;                          // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownMultiplier;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownSpeedMultiplier;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RechargeMultiplier;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RechargeSpeedMultiplier;                                   // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerCharacterSingleStatModification       MovementSpeed;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ClimbSpeedMultiplier;                                      // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MasqueradePointMultiplier;                                 // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerCharacterSingleStatModification       MovementAcceleration;                                      // 0x0028(0x0008) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FTigerCharacterSingleStatModification       Health;                                                    // 0x0030(0x0008) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                              JumpForceMultiplier;                                       // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WallJumpForceMultiplier;                                   // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackSpeedMultiplier;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReloadSpeedMultiplier;                                     // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaminaCostMultiplier;                                     // 0x0048(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmmoFindMultiplier;                                        // 0x004C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FeedSpeedMultiplier;                                       // 0x0050(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeDamageDealtMultiplier;                                // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageDealtMultiplier;                                     // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageDealtToCiviliansMultiplier;                          // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClanDamageMultiplierMatrix                 DamageToClansMultiplierMatrix;                             // 0x0060(0x0024) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	float                                              AbilityDamageDealtMultiplier;                              // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShotgunDamageDealtMultiplier;                              // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShootingDamageDealtMultiplier;                             // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageTakenMultiplier;                                     // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeDamageTakenMultiplier;                                // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbilityDamageTakenMultiplier;                              // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShootingDamageTakenMultiplier;                             // 0x009C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MosquitoDamageTakenMultiplier;                             // 0x00A0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoudnessMultiplier;                                        // 0x00A4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReviveSpeedMultiplier;                                     // 0x00A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExperienceGainMultiplier;                                  // 0x00AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AimSensitivityMultiplier;                                  // 0x00B0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerNpcVoCategory
// 0x0008
struct FTigerNpcVoCategory
{
	struct FName                                       Category;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Tiger.TigerCommandQueue
// 0x0010
struct FTigerCommandQueue
{
	TArray<class UTigerAICommandBase*>                 Commands;                                                  // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct Tiger.TigerContextualAnimationWrapper
// 0x000C
struct FTigerContextualAnimationWrapper
{
	struct FName                                       AnimationName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Chance;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerAIMoveToLocationData
// 0x0018
struct FTigerAIMoveToLocationData
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AcceptanceRadius;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSetRotation;                                              // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UZCI[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerAiMovementBudget
// 0x0018
struct FTigerAiMovementBudget
{
	int                                                NpcMoveBudget[0x3];                                        // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinAllotedMoveTime;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAllotedMoveTime;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRestrictMovementTimePerTicket;                            // 0x0014(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A6AK[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPlayerActionProcessData
// 0x0070
struct FTigerPlayerActionProcessData
{
	class ATigerPlayer*                                TigerPlayer;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATigerBaseNPC*                               NPC;                                                       // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M9WG[0x60];                                    // 0x0010(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerAIGroupCapCondition
// 0x000C
struct FTigerAIGroupCapCondition
{
	int                                                Slot;                                                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CommandIndex;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerAiConditionCheckTiming                 ConditionCheckTiming;                                      // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerAiFailedCAPConditionAction             FailedConditionAction;                                     // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S8YP[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerAIGroupCapCommandWrapper
// 0x0018
struct FTigerAIGroupCapCommandWrapper
{
	struct FTigerAIGroupCapCondition                   Condition;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1771[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerAICommandBase*                         Command;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerAiGroupCapSlot
// 0x0050
struct FTigerAiGroupCapSlot
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Yaw;                                                       // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTigerNPCAsset*                              NpcAssetToSpawn;                                           // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<Tiger_ETigerNPCType>                        RestrictedNpcTypesForSlot;                                 // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTigerAIGroupCapCommandWrapper>      SlotCommands;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                               bLoopCommands;                                             // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_70UP[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATigerNPC*                                   OccupyingNPC;                                              // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CommandIndex;                                              // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_II7V[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerSightConfigProperties
// 0x001C
struct FTigerSightConfigProperties
{
	float                                              SightRadius;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoseSightRadius;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PeripheralVisionAngleDegrees;                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CloseSightRadius;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CloseLoseSightRadius;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClosePeripheralVisionAngleDegrees;                         // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HeightDifference;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.WeaponDistanceDesc
// 0x0008
struct FWeaponDistanceDesc
{
	float                                              MinDistSquared;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxDistSquared;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerAIPlayerAction
// 0x0058
struct FTigerAIPlayerAction
{
	unsigned char                                      UnknownData_9434[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Tiger_ETigerAIPlayerAction                         Action;                                                    // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_48UD[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATigerCharacter*                             AffectedTarget;                                            // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0010(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseCustomLocation;                                        // 0x001C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2X9L[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              HearingRangeSquared;                                       // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VisionRangeSquared;                                        // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MustReactRangeSquared;                                     // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FearMultiplier;                                            // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MasqueradeMultiplier;                                      // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bProcessOnlyByAffectedTarget;                              // 0x0034(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMustBeProcessedByAffectedTarget;                          // 0x0035(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDontProcessForAffectedTarget;                             // 0x0036(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreInvisibility;                                       // 0x0037(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldDistanceScaleFearValue;                             // 0x0038(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldDistanceScaleMasqueradePoints;                      // 0x0039(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LQPA[0x1E];                                    // 0x003A(0x001E) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerAIMasqueradeEvent
// 0x0088
struct FTigerAIMasqueradeEvent
{
	float                                              Amount;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HitLocation;                                               // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0PUW[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATigerCharacter*                             TargetActor;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATigerPlayer*                                Instigator;                                                // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerAIPlayerAction                        PlayerAction;                                              // 0x0030(0x0058) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSightConfigData
// 0x0050
struct FTigerSightConfigData
{
	TMap<Tiger_ETigerAIMasqueradeState, struct FTigerSightConfigProperties> SightProperties;                                           // 0x0000(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerAISplinePathConnection
// 0x0030
struct FTigerAISplinePathConnection
{
	int                                                Index;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3TQO[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<Tiger_ETigerNPCType>                        RestrictedTypes;                                           // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class ATigerAiSplinePathHub*                       ConnectedHub;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATigerAISplinePath*                          OwningSpline;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysSwitchSpline;                                       // 0x002C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I3OZ[0x3];                                     // 0x002D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerAISplinePathData
// 0x00A0
struct FTigerAISplinePathData
{
	TArray<struct FVector>                             PathWaypoints;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             PathWaypointsRightVectors;                                 // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTigerAISplinePathConnection                StartingPoint;                                             // 0x0020(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTigerAISplinePathConnection                EndPoint;                                                  // 0x0050(0x0030) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FTigerAISplinePathConnection>        AdditionalPathConnections;                                 // 0x0080(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic)
	bool                                               bLooping;                                                  // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EQ27[0x3];                                     // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ExtraRows;                                                 // 0x0094(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RowDistance;                                               // 0x0098(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QYQ0[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRandomVisualAsset
// 0x0010
struct FTigerRandomVisualAsset
{
	class UTigerNPCVisualAsset*                        VisualAsset;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_10AT[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPlayerSequenceByClan
// 0x0018
struct FTigerPlayerSequenceByClan
{
	class UAnimSequence*                               AnimationObjects[0x3];                                     // 0x0000(0x0018) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPlayerMontageByClan
// 0x0018
struct FTigerPlayerMontageByClan
{
	class UAnimMontage*                                AnimationObjects[0x3];                                     // 0x0000(0x0018) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPlayerBlendSpaceByClan
// 0x0018
struct FTigerPlayerBlendSpaceByClan
{
	class UBlendSpace*                                 AnimationObjects[0x3];                                     // 0x0000(0x0018) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPlayerBlendSpace1DByClan
// 0x0018
struct FTigerPlayerBlendSpace1DByClan
{
	class UBlendSpace1D*                               AnimationObjects[0x3];                                     // 0x0000(0x0018) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTooltipAction
// 0x0048
struct FTigerTooltipAction
{
	struct FText                                       ActionText;                                                // 0x0000(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FName                                       InputAction;                                               // 0x0018(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsHoldAction;                                             // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bListenForOnPreviewKeyDown;                                // 0x0021(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TEnumAsByte<SlateCore_EHorizontalAlignment>        HAlign;                                                    // 0x0022(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8WZ7[0x1];                                     // 0x0023(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptDelegate                             OnPressed;                                                 // 0x0024(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptDelegate                             OnReleased;                                                // 0x0034(0x0010) (ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SISU[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPersistentCharacterID
// 0x0001
struct FTigerPersistentCharacterID
{
	unsigned char                                      SlotIndex;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSavedBloodTrackData
// 0x0010
struct FTigerSavedBloodTrackData
{
	TArray<struct FString>                             SelectedPassives;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPersistentOutfitSetup
// 0x0030
struct FTigerPersistentOutfitSetup
{
	unsigned char                                      OutfitConfig[0x28];                                        // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	int                                                OutfitId;                                                  // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HoodieIndex;                                               // 0x002C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerItemId
// 0x0008
struct FTigerItemId
{
	uint64_t                                           Value;                                                     // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Tiger.TigerCharacterAppearance
// 0x0080
struct FTigerCharacterAppearance
{
	struct FTigerPersistentOutfitSetup                 PersistentAppearance;                                      // 0x0000(0x0030) (BlueprintVisible, NativeAccessSpecifierPublic)
	int                                                HeadId;                                                    // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SkinColorIndex;                                            // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HairId;                                                    // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HairColorId;                                               // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EyeColorId;                                                // 0x0040(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TattooId;                                                  // 0x0044(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FacePaintId;                                               // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HeadgearId;                                                // 0x004C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EyewearId;                                                 // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PiercingSetId;                                             // 0x0054(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EyebrowShapeId;                                            // 0x0058(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EyebrowColorId;                                            // 0x005C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BeardId;                                                   // 0x0060(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BeardColorId;                                              // 0x0064(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerGender                                 BodyType;                                                  // 0x0068(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V5IR[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        EmoteIds;                                                  // 0x0070(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPersistentPlayerCharacterData
// 0x00A8
struct FTigerPersistentPlayerCharacterData
{
	Tiger_ETigerPowerKitType                           ArchetypeType;                                             // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0KLA[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTigerSavedBloodTrackData                   BloodTrack;                                                // 0x0008(0x0010) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTigerCharacterAppearance                   CharacterAppearance;                                       // 0x0018(0x0080) (BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<int>                                        Talents;                                                   // 0x0098(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPersistentPlayerCharacter
// 0x00B8
struct FTigerPersistentPlayerCharacter
{
	struct FTigerPersistentCharacterID                 UniqueCharacterID;                                         // 0x0000(0x0001) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BL03[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTigerPersistentPlayerCharacterData         Data;                                                      // 0x0008(0x00A8) (BlueprintVisible, NativeAccessSpecifierPublic)
	int64_t                                            LastUsedAt;                                                // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerHeightenedSensesAudioVisualization
// 0x0008
struct FTigerHeightenedSensesAudioVisualization
{
	class UParticleSystemComponent*                    ParticleSystem;                                            // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerBuildingSystemBalconyVolumeDefaults
// 0x0048
struct FTigerBuildingSystemBalconyVolumeDefaults
{
	struct FVector                                     BottomVolumeOffset;                                        // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     BottomVolumeScale;                                         // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LeftVolumeOffset;                                          // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LeftVolumeScale;                                           // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RightVolumeOffset;                                         // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RightVolumeScale;                                          // 0x003C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerFacePoseData
// 0x0038
struct FTigerFacePoseData
{
	unsigned char                                      HeadMesh[0x28];                                            // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	class UPoseAsset*                                  PoseAsset;                                                 // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                               PoseSourceAnimation;                                       // 0x0030(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerReplicatedCharacterStats
// 0x0018
struct FTigerReplicatedCharacterStats
{
	struct FTigerCharacterSingleStatModification       Health;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FTigerCharacterSingleStatModification       MovementSpeed;                                             // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                              ClimbSpeedMultiplier;                                      // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReviveSpeedMultiplier;                                     // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerMeshCollection
// 0x00F0
struct FTigerMeshCollection
{
	unsigned char                                      HeadMesh[0x28];                                            // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      HairMesh[0x28];                                            // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      ColorSetAsset[0x28];                                       // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      HairColorSetAsset[0x28];                                   // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      VisualAsset[0x28];                                         // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      PropAsset[0x28];                                           // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Tiger.TigerThrallStats
// 0x0010
struct FTigerThrallStats
{
	TArray<int>                                        Stats;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Tiger.TigerBloodResonanceBuffs
// 0x0010
struct FTigerBloodResonanceBuffs
{
	TArray<class UClass*>                              Buffs;                                                     // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerBloodTrack
// 0x0010
struct FTigerBloodTrack
{
	TArray<class UTigerBloodTrackPassiveConfig*>       Passives;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerBloodVeinBranchMovementSettings
// 0x0024
struct FTigerBloodVeinBranchMovementSettings
{
	float                                              LaunchPower;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SimulationTimeScale;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              YawRotationSpeed;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchDownRotationSpeed;                                    // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PitchUpRotationSpeed;                                      // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetPitchOffset;                                         // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxTargetPitch;                                            // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSpeed;                                                  // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaximumMovementYawAdjustment;                              // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerBuffReplicatedInstanceData
// 0x0020
struct FTigerBuffReplicatedInstanceData
{
	class UClass*                                      BuffType;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BuffID;                                                    // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeLeft;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BuffStrength;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ATigerCharacter>              BuffCaster;                                                // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CAWR[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerDeferredBuffInstantiation
// 0x0028
struct FTigerDeferredBuffInstantiation
{
	unsigned char                                      UnknownData_W5A7[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATigerCharacter*                             BuffCaster;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2ME8[0x18];                                    // 0x0010(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerBuildingSystemWallPieceInstancingDataEntry
// 0x0018
struct FTigerBuildingSystemWallPieceInstancingDataEntry
{
	class UStaticMeshComponent*                        Component;                                                 // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      Data;                                                      // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerBuildingSystemWallPieceInstancingData
// 0x0010
struct FTigerBuildingSystemWallPieceInstancingData
{
	TArray<struct FTigerBuildingSystemWallPieceInstancingDataEntry> Entries;                                                   // 0x0000(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerStreamableBuildingSide
// 0x0030
struct FTigerStreamableBuildingSide
{
	TArray<class UStaticMeshComponent*>                SideSegments;                                              // 0x0000(0x0010) (Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                                     Normal;                                                    // 0x0010(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Center;                                                    // 0x001C(0x000C) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVisible;                                                  // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DDZ8[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerStreamableBuildingSides
// 0x0010
struct FTigerStreamableBuildingSides
{
	TArray<struct FTigerStreamableBuildingSide>        BuildingWalls;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerChallengeTypeID
// 0x0004
struct FTigerChallengeTypeID
{
	uint32_t                                           UID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Tiger.TigerMetaStoreEntryItem
// 0x0010
struct FTigerMetaStoreEntryItem
{
	struct FTigerItemId                                ItemId;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Quantity;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FCZA[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerGroupId
// 0x0010
struct FTigerGroupId
{
	struct FGuid                                       ID;                                                        // 0x0000(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

};

// ScriptStruct Tiger.TigerFeedingDescription
// 0x0030
struct FTigerFeedingDescription
{
	class UAnimMontage*                                AttackerApproach;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                AttackerFeeding;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                AttackerDecouple;                                          // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                VictimApproach;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                VictimFeeding;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                VictimDecouple;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerFeedingMontages
// 0x0090
struct FTigerFeedingMontages
{
	struct FTigerFeedingDescription                    FemaleTargetDescription;                                   // 0x0000(0x0030) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FTigerFeedingDescription                    MaleTargetDescription;                                     // 0x0030(0x0030) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FTigerFeedingDescription                    EntityTargetDescription;                                   // 0x0060(0x0030) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerFeedingDataByGender
// 0x0120
struct FTigerFeedingDataByGender
{
	struct FTigerFeedingMontages                       FeedingDataByVampireGender[0x2];                           // 0x0000(0x0120) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRecentlyStreamedCellEntries
// 0x0010
struct FTigerRecentlyStreamedCellEntries
{
	class UTigerWorldCompositionCellComponent*         Cell;                                                      // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2I5V[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerStreamingPlayer
// 0x0038
struct FTigerStreamingPlayer
{
	class APlayerController*                           PlayerController;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MIIO[0x30];                                    // 0x0008(0x0030) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerBuildingSystemTransformableCorner
// 0x0040
struct FTigerBuildingSystemTransformableCorner
{
	class UPoseableMeshComponent*                      Component;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        StaticComponent;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    MiddleBoneRotation;                                        // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     EndBoneLocation;                                           // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     StartNormal;                                               // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     NextNormal;                                                // 0x0034(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerChallengeCollectionEntry
// 0x0010
struct FTigerChallengeCollectionEntry
{
	class UTigerChallenge*                             ReferenceChallenge;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerChallengeTypeID                       ChallengeTypeID;                                           // 0x0008(0x0004) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SK9U[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerChallengeInstanceID
// 0x0004
struct FTigerChallengeInstanceID
{
	int                                                UID;                                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Tiger.TigerSeasonalChallengeInstanceDefinition
// 0x0010
struct FTigerSeasonalChallengeInstanceDefinition
{
	struct FTigerChallengeInstanceID                   ChallengeInstanceID;                                       // 0x0000(0x0004) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerChallengeTypeID                       ChallengeTypeID;                                           // 0x0004(0x0004) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerItemId                                RewardId;                                                  // 0x0008(0x0008) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSeasonConfig_DailyFinalReward
// 0x0038
struct FTigerSeasonConfig_DailyFinalReward
{
	struct FTigerItemId                                DailyFinalRewardIds[0x7];                                  // 0x0000(0x0038) (Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSeasonConfig_DailyRewardCollection
// 0x0020
struct FTigerSeasonConfig_DailyRewardCollection
{
	TArray<struct FTigerItemId>                        TrackRewardIds;                                            // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FTigerSeasonConfig_DailyFinalReward> DailyFinalRewardWeeks;                                     // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerChallengeRequirementBase
// 0x0008
struct FTigerChallengeRequirementBase
{
	unsigned char                                      UnknownData_45Y8[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerChallengeRequirementWeaponType
// 0x0010 (0x0018 - 0x0008)
struct FTigerChallengeRequirementWeaponType : public FTigerChallengeRequirementBase
{
	bool                                               bAnyRangedWeapon;                                          // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bAnyMeleeWeapon;                                           // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_99ZN[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerItemAsset*                             RequiredWeaponAsAsset;                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

};

// ScriptStruct Tiger.TigerChallengeRequirementGameMode
// 0x0008 (0x0010 - 0x0008)
struct FTigerChallengeRequirementGameMode : public FTigerChallengeRequirementBase
{
	bool                                               bSpecificGameMode;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Tiger_EMatchBalanceMode                            RequiredGameMode;                                          // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_591Z[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerChallengeRequirementDisciplineSlot
// 0x0008 (0x0010 - 0x0008)
struct FTigerChallengeRequirementDisciplineSlot : public FTigerChallengeRequirementBase
{
	bool                                               bUseSpecificSlot;                                          // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Tiger_ETigerDisciplineSlot                         RequiredSlot;                                              // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4A8C[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerInventoryItemOwnerType
// 0x0003
struct FTigerInventoryItemOwnerType
{
	Tiger_ETigerClan                                   Clan;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerPowerKitType                           Archetype;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerGender                                 Gender;                                                    // 0x0002(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerLodSplitMesh
// 0x0078
struct FTigerLodSplitMesh
{
	unsigned char                                      Mesh[0x28];                                                // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Mesh_Lod0[0x28];                                           // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Mesh_NoLod0[0x28];                                         // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Tiger.TigerCharacterCustomizationScalarParameter
// 0x0010
struct FTigerCharacterCustomizationScalarParameter
{
	Tiger_ETigerCharacterDynamicMeshType               DynamicMeshType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerCharacterMeshPart                      Part;                                                      // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HOYN[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Value;                                                     // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCharacterCustomizationTextureParameter
// 0x0018
struct FTigerCharacterCustomizationTextureParameter
{
	Tiger_ETigerCharacterDynamicMeshType               DynamicMeshType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerCharacterMeshPart                      Part;                                                      // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HF3U[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HK75[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture*                                    Texture;                                                   // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCharacterCustomizationColorParameter
// 0x001C
struct FTigerCharacterCustomizationColorParameter
{
	Tiger_ETigerCharacterDynamicMeshType               DynamicMeshType;                                           // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerCharacterMeshPart                      Part;                                                      // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_019Z[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       Name;                                                      // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x000C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCharacterCustomizationParameters
// 0x0038
struct FTigerCharacterCustomizationParameters
{
	TArray<struct FTigerCharacterCustomizationScalarParameter> Scalars;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTigerCharacterCustomizationColorParameter> Colors;                                                    // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTigerCharacterCustomizationTextureParameter> Textures;                                                  // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FName                                       MaterialSlotName;                                          // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCharacterOutfitHoodieVariation
// 0x00B8
struct FTigerCharacterOutfitHoodieVariation
{
	bool                                               bEnableHairAnimDynamics;                                   // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FZUC[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Mesh[0x28];                                                // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      Materials[0x50];                                           // 0x0030(0x0050) UNKNOWN PROPERTY: MapProperty
	struct FTigerCharacterCustomizationParameters      AdditionalParameters;                                      // 0x0080(0x0038) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerClusteredItem
// 0x0064 (0x0070 - 0x000C)
struct FTigerClusteredItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData_S5FH[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                                     Velocity;                                                  // 0x0040(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K0WS[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerItemAsset*                             Item;                                                      // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemCount;                                                 // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           ItemUID;                                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ATigerPlayerState>            PlayerWhoDroppedItem;                                      // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DropTime;                                                  // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerTelemetryItemSourceID                  ItemSource;                                                // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7BJM[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.ItemClusterArray
// 0x0018 (0x0120 - 0x0108)
struct FItemClusterArray : public FFastArraySerializer
{
	TArray<struct FTigerClusteredItem>                 Items;                                                     // 0x0108(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class ATigerItemCluster*                           Parent;                                                    // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerItemDatabaseCategoryEntry
// 0x0030
struct FTigerItemDatabaseCategoryEntry
{
	uint64_t                                           ItemId;                                                    // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ItemPath[0x28];                                            // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Tiger.TigerChallengeRequirementClan
// 0x0008 (0x0010 - 0x0008)
struct FTigerChallengeRequirementClan : public FTigerChallengeRequirementBase
{
	bool                                               bSpecificClan;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	Tiger_ETigerClan                                   RequiredClan;                                              // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_SH0J[0x6];                                     // 0x000A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRevealedWave
// 0x0030
struct FTigerRevealedWave
{
	class ATigerHaven*                                 RevealedHaven;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z3JS[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        DeformIndices;                                             // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      TargetArea;                                                // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerWaveData
// 0x0090
struct FTigerWaveData
{
	unsigned char                                      UnknownData_DOUB[0x58];                                    // 0x0000(0x0058) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTigerRevealedWave                          RevealData;                                                // 0x0058(0x0030) (Transient, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QD1P[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerHolyIncenseSettings
// 0x0001
struct FTigerHolyIncenseSettings
{
	Tiger_EMatchBalanceMode                            BalanceMode;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerJudgeSwingCollisionInstant
// 0x0030
struct FTigerJudgeSwingCollisionInstant
{
	float                                              TimeInSwing;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SwordStartSweepLoc;                                        // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SwordEndSweepLoc;                                          // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KKXP[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       SwordRot;                                                  // 0x0020(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerJudgeSwingCollisionInfo
// 0x0010
struct FTigerJudgeSwingCollisionInfo
{
	TArray<struct FTigerJudgeSwingCollisionInstant>    CollisionInstants;                                         // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPlayerMeshMaterialData
// 0x0010
struct FTigerPlayerMeshMaterialData
{
	TArray<class UMaterialInterface*>                  OriginalMaterials;                                         // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPaperDollHighlightComponents
// 0x0050
struct FTigerPaperDollHighlightComponents
{
	TMap<class USpotLightComponent*, float>            SpotLightIntensities;                                      // 0x0000(0x0050) (ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPropAttachmentInfo
// 0x0060
struct FTigerPropAttachmentInfo
{
	struct FName                                       AttachIdentifier;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStreamableRenderAsset*                      Prop;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SocketName;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V4OH[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  Transform;                                                 // 0x0020(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UClass*                                      PropCompClass;                                             // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_39J9[0x8];                                     // 0x0058(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerDummyPropAttachment
// 0x0070
struct FTigerDummyPropAttachment
{
	struct FTigerPropAttachmentInfo                    AttachmentInfo;                                            // 0x0000(0x0060) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bShow;                                                     // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V0ED[0xF];                                     // 0x0061(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRequest_UpdateSeasonProgressGenericExp
// 0x0008
struct FTigerRequest_UpdateSeasonProgressGenericExp
{
	uint32_t                                           Level;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Exp;                                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_UpdateSeasonProgress
// 0x0078
struct FTigerRequest_UpdateSeasonProgress
{
	uint32_t                                           ExpGained;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           ExpRemovedDueToConversion;                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           LevelCount;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O0JG[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ArchetypeId;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           PlayedSeconds;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IncrementMatchesPlayed;                                    // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K1JC[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FTigerRequest_UpdateSeasonProgressGenericExp> GenericExps;                                               // 0x0028(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponseEnvelope
// 0x0018
struct FTigerResponseEnvelope
{
	bool                                               OK;                                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Retryable;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G8M0[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Error;                                                     // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_IncrementSeasonExp
// 0x0008 (0x0020 - 0x0018)
struct FTigerResponse_IncrementSeasonExp : public FTigerResponseEnvelope
{
	uint32_t                                           OldExp;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           NewExp;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_IncrementSeasonExp
// 0x0004
struct FTigerRequest_IncrementSeasonExp
{
	uint32_t                                           Exp;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_UpdateLastUse
// 0x0001
struct FTigerRequest_UpdateLastUse
{
	unsigned char                                      CharacterId;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_Character
// 0x0020
struct FTigerResponse_Character
{
	unsigned char                                      CharacterId;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GKHF[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Data;                                                      // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            LastUsedAt;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerQuestIdentifier
// 0x0030
struct FTigerQuestIdentifier
{
	struct FString                                     QuestLineId;                                               // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     QuestId;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                       ObjectiveId;                                               // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerNpcDialogue
// 0x00A8
struct FTigerNpcDialogue
{
	struct FText                                       DialogueHeader;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FText>                               DialogueText;                                              // 0x0018(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bRandomiseText;                                            // 0x0028(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerDialoguePriority                       DialoguePriority;                                          // 0x0029(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerDialogueIdleAnimation                  IdleAnimation;                                             // 0x002A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZP24[0x5];                                     // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UTigerDialogueCondition*>             DialogueConditions;                                        // 0x0030(0x0010) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic)
	Tiger_ETigerDialogueRepeatability                  Repeatability;                                             // 0x0040(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerDialogueCategory                       DialogueCategory;                                          // 0x0041(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIgnoreCategoryRestrictions;                               // 0x0042(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NZA5[0x5];                                     // 0x0043(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTigerQuestIdentifier                       QuestToStartId;                                            // 0x0048(0x0030) (Edit, DisableEditOnInstance, AdvancedDisplay, NativeAccessSpecifierPublic)
	TArray<class UTigerGrimoireEntry*>                 EntriesToUnlock;                                           // 0x0078(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, AdvancedDisplay, NativeAccessSpecifierPublic)
	class UAkAudioEvent*                               DialogueAudio;                                             // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                AnimationToPlay;                                           // 0x0090(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8IEE[0x10];                                    // 0x0098(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerScoutedCharacter
// 0x0018
struct FTigerScoutedCharacter
{
	class ATigerCharacter*                             ScoutedCharacter;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTigerMapMarkerProxy*                        MarkerProxy;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PYHP[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerScouterCharacterData
// 0x0030
struct FTigerScouterCharacterData
{
	TArray<struct FTigerScoutedCharacter>              ScoutedCharacters;                                         // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTigerScoutedCharacter>              GroupScoutedCharacters;                                    // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      ScoutedPlayerMapMarkerClass;                               // 0x0020(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      ScoutedNpcMapMarkerClass;                                  // 0x0028(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.EarthshockUseDataNetworked
// 0x0034
struct FEarthshockUseDataNetworked
{
	struct FVector                                     StartLocation;                                             // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TargetLocation;                                            // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SurfaceNormal;                                             // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ConeDirection;                                             // 0x0024(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTargetIsWall;                                             // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K78P[0x3];                                     // 0x0031(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerShockwaveWallData
// 0x0060
struct FTigerShockwaveWallData
{
	TArray<class UCurveFloat*>                         SpeedCurve;                                                // 0x0000(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UCurveVector*>                        EffectExtentCurve;                                         // 0x0010(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FVector>                             TerrainSweepBoxExtent;                                     // 0x0020(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<float>                                      TravelDistance;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<float>                                      Damage;                                                    // 0x0040(0x0010) (Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              OnHitBuff;                                                 // 0x0050(0x0010) (Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerMetaStoreEntry
// 0x0050
struct FTigerMetaStoreEntry
{
	uint64_t                                           StoreEntryID;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           PremiumPrice;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RQWO[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ImagePath;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Discount;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VIIF[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   StartDate;                                                 // 0x0028(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   EndDate;                                                   // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FlashStoreSlot;                                            // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DP8Z[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTigerMetaStoreEntryItem>            Items;                                                     // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerMetaStoreEntriesConfig
// 0x0028
struct FTigerMetaStoreEntriesConfig
{
	Tiger_ETigerMetaStoreCategoryType                  ConfigCategory;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q14A[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTigerMetaStoreEntry>                StoreEntries;                                              // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int64_t                                            Checksum;                                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsValid;                                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IVJM[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerMetaStoreEntriesKeeper
// 0x0040
struct FTigerMetaStoreEntriesKeeper
{
	TArray<struct FScriptDelegate>                     ConfigEventSubscribers;                                    // 0x0000(0x0010) (ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FTigerMetaStoreEntriesConfig                StoreEntryConfig;                                          // 0x0010(0x0028) (NativeAccessSpecifierPublic)
	Tiger_ETigerMetaStoreEventType                     LastEventStatus;                                           // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KQJ2[0x7];                                     // 0x0039(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.AutoInitializedWidget
// 0x0020
struct FAutoInitializedWidget
{
	class UClass*                                      WidgetClass;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AssignToPropertyName;                                      // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToViewportOnPlayerSpawn;                               // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAddToOnScreenWidgets;                                     // 0x0019(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VVFA[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ZOrder;                                                    // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerElysiumNpcAnimationData
// 0x0010
struct FTigerElysiumNpcAnimationData
{
	class UAnimSequenceBase*                           AnimationToPlay;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AnimationOffset;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2TB5[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerElysiumNpcProp
// 0x0090
struct FTigerElysiumNpcProp
{
	unsigned char                                      PropAsset[0x28];                                           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      PropActorAsset[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FTransform                                  LocalTransform;                                            // 0x0050(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FName                                       AttachmentPoint;                                           // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EQOB[0x8];                                     // 0x0088(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerElysiumNpcData
// 0x01D0
struct FTigerElysiumNpcData
{
	unsigned char                                      BodyMesh[0x28];                                            // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      HeadMesh[0x28];                                            // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      HairMesh[0x28];                                            // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	unsigned char                                      HoodieMesh[0x28];                                          // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	struct FTigerElysiumNpcProp                        FirstPropAsset;                                            // 0x00A0(0x0090) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTigerElysiumNpcProp                        SecondPropAsset;                                           // 0x0130(0x0090) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTigerElysiumNpcAnimationData               AnimationData;                                             // 0x01C0(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPersistentPlayerCardData
// 0x000C
struct FTigerPersistentPlayerCardData
{
	int                                                CharacterIconId;                                           // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CharacterCardShapeMaskId;                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CharacterCardBackgroundTextureId;                          // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPlayingEmote
// 0x0010
struct FTigerPlayingEmote
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartTime;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               StopsMovement;                                             // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZGQ9[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerNPCSpawningPoint
// 0x0020
struct FTigerNPCSpawningPoint
{
	class UTigerNPCAsset*                              NPCAsset;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     SpawnPoint;                                                // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerQuestObjectivePersistentProgressEntry
// 0x0018
struct FTigerQuestObjectivePersistentProgressEntry
{
	struct FString                                     Guid;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Progress;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R67Z[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerQuestPersistentProgressEntry
// 0x0018
struct FTigerQuestPersistentProgressEntry
{
	bool                                               bHasDistributedReward;                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W69S[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTigerQuestObjectivePersistentProgressEntry> ObjectivesProgress;                                        // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerQuestLinePersistentProgress
// 0x0050
struct FTigerQuestLinePersistentProgress
{
	TMap<struct FString, struct FTigerQuestPersistentProgressEntry> Progress;                                                  // 0x0000(0x0050) (RepSkip, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerQuestPersistentProgress
// 0x0050
struct FTigerQuestPersistentProgress
{
	TMap<struct FString, struct FTigerQuestLinePersistentProgress> Progress;                                                  // 0x0000(0x0050) (RepSkip, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCharacterHolsteredWeaponTransforms
// 0x0060
struct FTigerCharacterHolsteredWeaponTransforms
{
	struct FTransform                                  MeleeWeaponHolsteredTransform;                             // 0x0000(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                                  MeleeWeaponSecondaryHolsteredTransform;                    // 0x0030(0x0030) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerInventoryCombinedItemValue
// 0x0010
struct FTigerInventoryCombinedItemValue
{
	struct FTigerInventoryItemOwnerType                Key;                                                       // 0x0000(0x0003) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H3XG[0x5];                                     // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      Value;                                                     // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCharacterHeadHeadgearOffset
// 0x0018
struct FTigerCharacterHeadHeadgearOffset
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.MapLandmarkPoint
// 0x0018
struct FMapLandmarkPoint
{
	struct FName                                       LandmarkName;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   PositionInWorld;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   PositionOnMap;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPingContext
// 0x0010
struct FTigerPingContext
{
	class UDataAsset*                                  Asset;                                                     // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Argument;                                                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TelemetryTypeId;                                           // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EHX1[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPingNotificationNetData
// 0x0018
struct FTigerPingNotificationNetData
{
	class UClass*                                      PingClass;                                                 // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerPingContext                           Context;                                                   // 0x0008(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerGrimoireSearchEntry
// 0x0038
struct FTigerGrimoireSearchEntry
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T6UH[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerGrimoireCategory*                      Category;                                                  // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EntryIdAsString;                                           // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MV1V[0x8];                                     // 0x0030(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.DisciplineUse
// 0x0050
struct FDisciplineUse
{
	Tiger_ETigerDisciplinesEnum                        DisciplineUsed;                                            // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3PC2[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     Location;                                                  // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Direction;                                                 // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZXL7[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class ATigerCharacter*>                     Targets;                                                   // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                                     DisciplineSpecificVector1;                                 // 0x0030(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DisciplineSpecificVector2;                                 // 0x003C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisciplineSpecificBool1;                                  // 0x0048(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDisciplineSpecificBool2;                                  // 0x0049(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D7GD[0x6];                                     // 0x004A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerSeasonSessionExperience
// 0x0018
struct FTigerSeasonSessionExperience
{
	TArray<int>                                        SeasonExperienceAccumulatedSources;                        // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                SeasonExperienceAccumulated;                               // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E3AG[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPlayerMatchMetaStats
// 0x0038
struct FTigerPlayerMatchMetaStats
{
	struct FTigerSeasonSessionExperience               SeasonSessionExperienceAccumulated;                        // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                SeasonExpBeforeSession;                                    // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArchetypeExpBeforeSession;                                 // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArchetypeExperienceAccumulated;                            // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SoftCurrencyBeforeSession;                                 // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SoftCurrencyAccumulated;                                   // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DWK2[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTigerItemId                                SoftCurrencyItemId;                                        // 0x0030(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPlayerPostMatchScreenHighlightStat
// 0x000C
struct FTigerPlayerPostMatchScreenHighlightStat
{
	int                                                MatchStatValue;                                            // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SeasonAverage;                                             // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerSeasonMatchStatType                    MatchStatType;                                             // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNewSeasonBest;                                          // 0x0009(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_T2WG[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPlayerMatchStats
// 0x0038
struct FTigerPlayerMatchStats
{
	Tiger_ETigerKillerType                             KillerType;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FD55[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     KillerName;                                                // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerPlayerPostMatchScreenHighlightStat    Placement;                                                 // 0x0018(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HEFG[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTigerPlayerPostMatchScreenHighlightStat> Stats;                                                     // 0x0028(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerProgressedChallengeWrapper
// 0x0028
struct FTigerProgressedChallengeWrapper
{
	struct FText                                       ChallengeDescription;                                      // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                TargetValue;                                               // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PostSessionProgress;                                       // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreSessionProgress;                                        // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsDailyChallenge;                                         // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YWFF[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerGroupInvitation
// 0x0010
struct FTigerGroupInvitation
{
	struct FTigerGroupId                               GroupID;                                                   // 0x0000(0x0010) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCharacterServerHit
// 0x0038
struct FTigerCharacterServerHit
{
	class ATigerCharacter*                             TigerChar;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         VictimLocation;                                            // 0x0008(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      BoneIndexHit;                                              // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSharkInt8Vector                            ImpactOffset;                                              // 0x0015(0x0003) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   SwingDirection;                                            // 0x0018(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0C97[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                KnockbackMontage;                                          // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAbortAttack;                                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      CompressedActorYaw;                                        // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_98GJ[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerMeleeAttackNetData
// 0x0020
struct FTigerMeleeAttackNetData
{
	unsigned char                                      UnknownData_JMBN[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerCharacterClientHit
// 0x0028
struct FTigerCharacterClientHit
{
	class ATigerCharacter*                             TigerChar;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         VictimLocation;                                            // 0x0008(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      BoneIndexHit;                                              // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSharkInt8Vector                            ImpactOffset;                                              // 0x0015(0x0003) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal                   SwingDirection;                                            // 0x0018(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      WeaponIndex;                                               // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EA28[0x3];                                     // 0x0025(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerNetworkedDebugShape
// 0x0040
struct FTigerNetworkedDebugShape
{
	struct FCoreUObject_FColor                         Color;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     ShapeSpecificData;                                         // 0x0010(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6GWD[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FQuat                                       Rotation;                                                  // 0x0020(0x0010) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              Thickness;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LifeTime;                                                  // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Shape;                                                     // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      DepthPriority;                                             // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPersistentLines;                                          // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P5P7[0x5];                                     // 0x003B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerFireProjectileData
// 0x0014
struct FTigerFireProjectileData
{
	struct FVector_NetQuantize100                      ProjectileSpawnLocation;                                   // 0x0000(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShootDirPitch;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShootDirYaw;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerFireProjectileDataInterpolated
// 0x0004 (0x0018 - 0x0014)
struct FTigerFireProjectileDataInterpolated : public FTigerFireProjectileData
{
	float                                              LocationAlpha;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerClientItemDefinition
// 0x0018
struct FTigerClientItemDefinition
{
	struct FTigerItemId                                ItemId;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Cost;                                                      // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WLXZ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTigerItemId                                SoftCurrencyId;                                            // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPartyId
// 0x0010
struct FTigerPartyId
{
	struct FGuid                                       Guid;                                                      // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSpawnGroupBudget
// 0x0008
struct FTigerSpawnGroupBudget
{
	int                                                MaxSpawned;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinSpawned;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSpawnGroupBudgetTableRow
// 0x0010 (0x0018 - 0x0008)
struct FTigerSpawnGroupBudgetTableRow : public FTableRowBase
{
	struct FTigerSpawnGroupBudget                      Budgets[0x2];                                              // 0x0008(0x0010) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSessionConnectionParams
// 0x0020
struct FTigerSessionConnectionParams
{
	unsigned char                                      UnknownData_LFXP[0x20];                                    // 0x0000(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRequest_AcknowledgeStateUpdate
// 0x0004
struct FTigerRequest_AcknowledgeStateUpdate
{
	uint32_t                                           StateUpdateId;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_CreateGameSession
// 0x0020
struct FTigerRequest_CreateGameSession
{
	struct FString                                     GameSessionToken;                                          // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SESSIONTYPE;                                               // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_AcceptInvite
// 0x0060 (0x0078 - 0x0018)
struct FTigerResponse_AcceptInvite : public FTigerResponseEnvelope
{
	struct FString                                     HostPlayerId;                                              // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PartyId;                                                   // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PartyPlayerIds;                                            // 0x0038(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                LeaderIndex;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SRUY[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     HostAddr;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HostPort;                                                  // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_THLP[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSessionToken;                                          // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_DeclineInvite
// 0x0010
struct FTigerRequest_DeclineInvite
{
	struct FString                                     PartyInviteToken;                                          // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_AcceptInvite
// 0x0010
struct FTigerRequest_AcceptInvite
{
	struct FString                                     PartyInviteToken;                                          // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_InvitePlayer
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_InvitePlayer : public FTigerResponseEnvelope
{
	struct FString                                     InviteId;                                                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_InvitePlayer
// 0x0030
struct FTigerRequest_InvitePlayer
{
	struct FString                                     GuestPlayerId;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameSessionToken;                                          // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LanSessionUrl;                                             // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetParty
// 0x0058 (0x0070 - 0x0018)
struct FTigerResponse_GetParty : public FTigerResponseEnvelope
{
	bool                                               PartyFound;                                                // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IIIC[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PartyId;                                                   // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PlayerIds;                                                 // 0x0030(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                LeaderIndex;                                               // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxMembers;                                                // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     HostAddr;                                                  // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HostPort;                                                  // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S4LV[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSessionToken;                                          // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPartyInviteToken
// 0x0010
struct FTigerPartyInviteToken
{
	struct FString                                     Content;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPlayerIdWithPlacement
// 0x0018
struct FTigerPlayerIdWithPlacement
{
	struct FString                                     PlayerId;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Placement;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1JVC[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRequest_RegisterGameSessionResults
// 0x0010
struct FTigerRequest_RegisterGameSessionResults
{
	TArray<struct FTigerPlayerIdWithPlacement>         Result;                                                    // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetMatchmakingToken
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_GetMatchmakingToken : public FTigerResponseEnvelope
{
	struct FString                                     MatchmakingDataToken;                                      // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_GetMatchmakingToken
// 0x0010
struct FTigerRequest_GetMatchmakingToken
{
	TArray<struct FString>                             PlayerIds;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetSeasonConfigs
// 0x0078 (0x0090 - 0x0018)
struct FTigerResponse_GetSeasonConfigs : public FTigerResponseEnvelope
{
	TMap<uint32_t, struct FString>                     ConfigsBySeasonId;                                         // 0x0018(0x0050) (NativeAccessSpecifierPublic)
	struct FString                                     PublicIpv4;                                                // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PublicIpv6;                                                // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   CurrentDateTime;                                           // 0x0088(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GenericExp
// 0x0008
struct FTigerResponse_GenericExp
{
	uint32_t                                           Level;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Exp;                                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_TransactionalPlayerData
// 0x0118
struct FTigerResponse_TransactionalPlayerData
{
	int                                                Version;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           SeasonId;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           SeasonLevel;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           SeasonLevelExp;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           SeasonPlacementExpBonusPercentage;                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2994[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, struct FTigerResponse_GenericExp> GenericExps;                                               // 0x0018(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FString, int>                          InventoryItems;                                            // 0x0068(0x0050) (NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               CustomizationConfigs;                                      // 0x00B8(0x0050) (NativeAccessSpecifierPublic)
	float                                              Rating;                                                    // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_56NO[0x4];                                     // 0x010C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint64_t                                           PremiumCurrencyBalance;                                    // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_BuyItem
// 0x0118 (0x0130 - 0x0018)
struct FTigerResponse_BuyItem : public FTigerResponseEnvelope
{
	struct FTigerResponse_TransactionalPlayerData      Transactional;                                             // 0x0018(0x0118) (NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_SetCustomizationConfigs
// 0x0020
struct FTigerRequest_SetCustomizationConfigs
{
	TArray<struct FString>                             Keys;                                                      // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             Values;                                                    // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerBoughtItemElement
// 0x0018
struct FTigerBoughtItemElement
{
	struct FString                                     ItemId;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Quantity;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L632[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerResponse_BuyStoreEntries
// 0x0130 (0x0148 - 0x0018)
struct FTigerResponse_BuyStoreEntries : public FTigerResponseEnvelope
{
	struct FTigerResponse_TransactionalPlayerData      Transactional;                                             // 0x0018(0x0118) (NativeAccessSpecifierPublic)
	TArray<struct FTigerBoughtItemElement>             BoughtItems;                                               // 0x0130(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      BuyResult;                                                 // 0x0140(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CTU6[0x7];                                     // 0x0141(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerStoreEntryAndQuantity
// 0x0018
struct FTigerStoreEntryAndQuantity
{
	struct FString                                     ItemId;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Quantity;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S950[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRequest_BuyStoreEntries
// 0x0018
struct FTigerRequest_BuyStoreEntries
{
	TArray<struct FTigerStoreEntryAndQuantity>         StoreEntriesToBuy;                                         // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	uint32_t                                           TotalCost;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Channel;                                                   // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M3RD[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerItemIdWithQuantity
// 0x0018
struct FTigerItemIdWithQuantity
{
	struct FString                                     ID;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Quantity;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XJ39[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerResponse_CategoryGroupDefinition
// 0x0010
struct FTigerResponse_CategoryGroupDefinition
{
	struct FString                                     CategoryDefinitions;                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetStoreItemConfigs
// 0x0050 (0x0068 - 0x0018)
struct FTigerResponse_GetStoreItemConfigs : public FTigerResponseEnvelope
{
	TMap<struct FString, struct FTigerResponse_CategoryGroupDefinition> CategoryGroups;                                            // 0x0018(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_StoreEntryConfig
// 0x0001
struct FTigerRequest_StoreEntryConfig
{
	unsigned char                                      Show;                                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_UpdatePlayerData
// 0x0020
struct FTigerRequest_UpdatePlayerData
{
	struct FString                                     Data;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CardData;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetCreatePlayer
// 0x0168 (0x0180 - 0x0018)
struct FTigerResponse_GetCreatePlayer : public FTigerResponseEnvelope
{
	struct FTigerResponse_TransactionalPlayerData      Transactional;                                             // 0x0018(0x0118) (NativeAccessSpecifierPublic)
	struct FString                                     Data;                                                      // 0x0130(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CardData;                                                  // 0x0140(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Banned;                                                    // 0x0150(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      BanReason;                                                 // 0x0151(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KSAD[0x6];                                     // 0x0152(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BanEndsAt;                                                 // 0x0158(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Muted;                                                     // 0x0168(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      MutedReason;                                               // 0x0169(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8AYH[0x6];                                     // 0x016A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MutedEndsAt;                                               // 0x0170(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_GetCreatePlayer
// 0x0001
struct FTigerRequest_GetCreatePlayer
{
	unsigned char                                      UnknownData_L19K[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerOutfitCustomizationConfigValue
// 0x0004
struct FTigerOutfitCustomizationConfigValue
{
	int                                                HoodieIndex;                                               // 0x0000(0x0004) (ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetCharactersForPlayer
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_GetCharactersForPlayer : public FTigerResponseEnvelope
{
	TArray<struct FTigerResponse_Character>            Characters;                                                // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCharacterCustomizationOutfitData
// 0x0028
struct FTigerCharacterCustomizationOutfitData
{
	unsigned char                                      ItemClassPath[0x28];                                       // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Tiger.TigerCharacterCustomizationHeadData
// 0x0028
struct FTigerCharacterCustomizationHeadData
{
	unsigned char                                      ItemClassPath[0x28];                                       // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Tiger.TigerCharacterCustomizationItem
// 0x0028
struct FTigerCharacterCustomizationItem
{
	unsigned char                                      ItemClassPath[0x28];                                       // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Tiger.TigerCharacterCardData
// 0x0098
struct FTigerCharacterCardData
{
	unsigned char                                      CharacterIcon[0x28];                                       // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      CharacterCardShape[0x28];                                  // 0x0028(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      CharacterCardBackground[0x28];                             // 0x0050(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      UnknownData_EJOR[0x20];                                    // 0x0078(0x0020) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerCombinedItemCustomizations
// 0x0010
struct FTigerCombinedItemCustomizations
{
	TArray<struct FTigerCharacterCustomizationItem>    CombinedItems;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerMeshData
// 0x0002
struct FTigerMeshData
{
	bool                                               bIsVisibile;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bVisibilityIsAllowed;                                      // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerStaticMeshData
// 0x0016 (0x0018 - 0x0002)
struct FTigerStaticMeshData : public FTigerMeshData
{
	unsigned char                                      UnknownData_RD4A[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UStaticMeshComponent*                        MeshComponent;                                             // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N7OQ[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPoseableMeshData
// 0x0016 (0x0018 - 0x0002)
struct FTigerPoseableMeshData : public FTigerMeshData
{
	unsigned char                                      UnknownData_MAJT[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H38Q[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerCharacterMeshData
// 0x0016 (0x0018 - 0x0002)
struct FTigerCharacterMeshData : public FTigerMeshData
{
	unsigned char                                      UnknownData_TJLX[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class USkeletalMeshComponent*                      MeshComponent;                                             // 0x0008(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMesh*                               RegisteredMesh;                                            // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerDeltaCorrectionData
// 0x0040
struct FTigerDeltaCorrectionData
{
	unsigned char                                      UnknownData_93BJ[0x38];                                    // 0x0000(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UAnimMontage*                                CurrentAnimation;                                          // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPhysicalInteractionDescription
// 0x0030
struct FTigerPhysicalInteractionDescription
{
	class UAnimMontage*                                PrimeStart;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PrimeMid;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                PrimeEnd;                                                  // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                SecondaryStart;                                            // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                SecondaryMid;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                SecondaryEnd;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPhysicalInteractionMontages
// 0x0060
struct FTigerPhysicalInteractionMontages
{
	struct FTigerPhysicalInteractionDescription        DescriptionByTargetGender[0x2];                            // 0x0000(0x0060) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCharacterPoseableMeshBoneData
// 0x0024
struct FTigerCharacterPoseableMeshBoneData
{
	Tiger_ETigerCharacterMeshPart                      BodyPart;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZXFX[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ParentBone;                                                // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RelativeLocation;                                          // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RelativeRotation;                                          // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.ClientSpawnData
// 0x0050
struct FClientSpawnData
{
	uint32_t                                           ClientUid;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UKB6[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      SpawnClass;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                                  Transform;                                                 // 0x0010(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ClassSpecificData;                                         // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCurrentContextualHelp
// 0x0018
struct FTigerCurrentContextualHelp
{
	class UTigerContextualHelp*                        ContextualHelp;                                            // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MKUJ[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.DamageTriggerOverlapData
// 0x0010
struct FDamageTriggerOverlapData
{
	class ATigerCharacter*                             Character;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimerAccumulator;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OXG9[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerItemDatabaseCategory
// 0x0010
struct FTigerItemDatabaseCategory
{
	TArray<struct FTigerItemDatabaseCategoryEntry>     Items;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerItemPreviewCamera
// 0x0018
struct FTigerItemPreviewCamera
{
	class ACineCameraActor*                            CameraActor;                                               // 0x0000(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I8YP[0x10];                                    // 0x0008(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerJudgeRotationSettings
// 0x0008
struct FTigerJudgeRotationSettings
{
	Tiger_ETigerJudgeRotationMode                      RotationMode;                                              // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WOBC[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              RotationSpeed;                                             // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTimedAnimationTrigger
// 0x0010
struct FTigerTimedAnimationTrigger
{
	struct FName                                       Name;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TriggerTime;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerTimedAnimationType                     AnimationType;                                             // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_276P[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTimedAnimationTriggerWrapper
// 0x0018
struct FTigerTimedAnimationTriggerWrapper
{
	TArray<struct FTigerTimedAnimationTrigger>         AnimationTriggers;                                         // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                              ElapsedTime;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsActive;                                                 // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LQDQ[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerJudgePlayerDamage
// 0x0020
struct FTigerJudgePlayerDamage
{
	class ATigerPlayer*                                Player;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                      DamageCollection;                                          // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              DamageOverLastSecond;                                      // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TotalDamage;                                               // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerVoEvent
// 0x0018
struct FTigerVoEvent
{
	struct FName                                       Category;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      EventActor;                                                // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPlayFacialAnimFromCategory;                               // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GW5J[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerSeasonConfigResponse_SeasonalChallengeDefinition
// 0x0018
struct FTigerSeasonConfigResponse_SeasonalChallengeDefinition
{
	struct FTigerChallengeInstanceID                   ChallengeInstanceID;                                       // 0x0000(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerChallengeTypeID                       ChallengeTypeID;                                           // 0x0004(0x0004) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RewardId;                                                  // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSeasonConfigResponse_ChallengeCollection
// 0x0030
struct FTigerSeasonConfigResponse_ChallengeCollection
{
	TArray<struct FTigerSeasonConfigResponse_SeasonalChallengeDefinition> ChallengeDefinitions;                                      // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             RewardIds;                                                 // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	struct FDateTime                                   UnlockDate;                                                // 0x0020(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LockDate;                                                  // 0x0028(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSeasonConfigResponse_RewardTier
// 0x0010
struct FTigerSeasonConfigResponse_RewardTier
{
	TArray<struct FString>                             ItemIds;                                                   // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.DistrictDataAnchor
// 0x0010
struct FDistrictDataAnchor
{
	struct FVector2D                                   WorldPosition;                                             // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   MapPosition;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerWallJumpBlendBundle
// 0x0010
struct FTigerWallJumpBlendBundle
{
	float                                              InputBlendScale;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalBlendScale;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VelocityDirectionBlendScale;                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VelocityForceScale;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TutorialTrainerDiablerizeData
// 0x0020
struct FTutorialTrainerDiablerizeData
{
	unsigned char                                      UnknownData_9AOL[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DiablerizeTimeLeft;                                        // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeToGetInPositionforDiablerize;                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsGettingDiablerized;                                     // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XCX8[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class ATigerCharacter>              DiablerizingCharacter;                                     // 0x0014(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7K17[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TutorialTrainerReviveData
// 0x0018
struct FTutorialTrainerReviveData
{
	bool                                               bIsGettingRevived;                                         // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L2T3[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ReviveTimeInSeconds;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentReviveTime;                                         // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RotationSpeed;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ATigerPlayer>                 CurrentRevivingPlayer;                                     // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerInputBindings
// 0x0040
struct FTigerInputBindings
{
	TArray<struct FInputActionKeyMapping>              KeyboardMouseMappings;                                     // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>                KeyboardMouseAxisMappings;                                 // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputActionKeyMapping>              GamepadMappings;                                           // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputAxisKeyMapping>                GamepadAxisMappings;                                       // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSensitivitySetting
// 0x0014
struct FTigerSensitivitySetting
{
	float                                              MasterSensitivity;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HorizontalSensitivity;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VerticalSensitivity;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AimingSensitivity;                                         // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ScopedSensitivity;                                         // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerControllerSettings
// 0x001C
struct FTigerControllerSettings
{
	int                                                WeaponCyclePreset;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerSensitivitySetting                    SensitivitySettings;                                       // 0x0004(0x0014) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bInvertedYAxis;                                            // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PIEA[0x3];                                     // 0x0019(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerInputSettings
// 0x003C
struct FTigerInputSettings
{
	struct FTigerControllerSettings                    KeyboardMouseSettings;                                     // 0x0000(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FTigerControllerSettings                    GamepadSettings;                                           // 0x001C(0x001C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseAutoSprint;                                            // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHoldForHeightenedSenses;                                  // 0x0039(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHoldForInventory;                                         // 0x003A(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZV8S[0x1];                                     // 0x003B(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerInputPresetData
// 0x0018
struct FTigerInputPresetData
{
	struct FString                                     ConfigFileName;                                            // 0x0000(0x0010) (Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseAutoSprint;                                            // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHoldForHeightenedSenses;                                  // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHoldForInventory;                                         // 0x0012(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1WIV[0x5];                                     // 0x0013(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerDsGameSessionDetails
// 0x0018
struct FTigerDsGameSessionDetails
{
	struct FString                                     GameSessionData;                                           // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxPlayers;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               AllowsJoin;                                                // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      GROUPINGMODE;                                              // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HPQS[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerResponse_IdleGameServerHeartbeat
// 0x0020 (0x0038 - 0x0018)
struct FTigerResponse_IdleGameServerHeartbeat : public FTigerResponseEnvelope
{
	bool                                               HasSwitchedToRunning;                                      // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SBR5[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTigerDsGameSessionDetails                  SessionDetails;                                            // 0x0020(0x0018) (NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_IdleGameServerHeartbeat
// 0x0030
struct FTigerRequest_IdleGameServerHeartbeat
{
	struct FString                                     OverrideIp;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N8JS[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DsVersionId;                                               // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerCount;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O70Z[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRequest_RegisterNewIdle
// 0x0028
struct FTigerRequest_RegisterNewIdle
{
	struct FString                                     OverrideIp;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KBTS[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DsVersionId;                                               // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPlayerStateFriendPair
// 0x0010
struct FTigerPlayerStateFriendPair
{
	class ATigerPlayerState*                           PlayerState;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTigerFriend*                                Friend;                                                    // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSplatmapSplatHistoryItem
// 0x0020
struct FTigerSplatmapSplatHistoryItem
{
	class UTexture*                                    Textures[0x4];                                             // 0x0000(0x0020) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.PlayerStatistic
// 0x0018
struct FPlayerStatistic
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CXVZ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerAnimationStatistic
// 0x0018
struct FTigerAnimationStatistic
{
	struct FString                                     Name;                                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RelativeTimePlayed;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RN7T[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryPlayerGeneralInfo
// 0x0040
struct FTigerTelemetryPlayerGeneralInfo
{
	unsigned char                                      UnknownData_BL0I[0x40];                                    // 0x0000(0x0040) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryTutorialLocation
// 0x0020
struct FTigerTelemetryTutorialLocation
{
	struct FString                                     ObjectiveId;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Location;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryTutorialLocationsContainer
// 0x0010
struct FTigerTelemetryTutorialLocationsContainer
{
	TArray<struct FTigerTelemetryTutorialLocation>     Locations;                                                 // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryTutorialTimeStamp
// 0x0018
struct FTigerTelemetryTutorialTimeStamp
{
	struct FString                                     ObjectiveId;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DZ6L[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerExpLevelRequirements
// 0x0018
struct FTigerExpLevelRequirements
{
	TArray<int>                                        ExpRequirements;                                           // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               bClampAtMaxLevel;                                          // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OUZ4[0x3];                                     // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ExpRequirementIncreasePostMaxLevel;                        // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSeasonConfig_RewardTier
// 0x0010
struct FTigerSeasonConfig_RewardTier
{
	TArray<struct FTigerItemId>                        ItemIds;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPlayerEventToSeasonExperienceSource
// 0x0008
struct FTigerPlayerEventToSeasonExperienceSource
{
	Tiger_ETigerSeasonExperienceSource                 ExperienceSource;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A7LK[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ExperienceAmount;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSeasonExperienceSourceModifiers
// 0x0008
struct FTigerSeasonExperienceSourceModifiers
{
	int                                                ExperienceCap;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExperienceMultiplier;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCapSpawnData
// 0x0040
struct FTigerCapSpawnData
{
	class UTigerNPCAsset*                              SpawnAsset;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X17D[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  SpawnTransform;                                            // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerAnimNotifyIKData
// 0x0034
struct FTigerAnimNotifyIKData
{
	struct FVector                                     IKTarget;                                                  // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RelativeTargetJointTarget;                                 // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CurrentIKAlphaBlend;                                       // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShouldBeUsed;                                             // 0x001C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PKH4[0x17];                                    // 0x001D(0x0017) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerDamageImmunitySelector
// 0x0008
struct FTigerDamageImmunitySelector
{
	class UClass*                                      DamageType;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSidePieceMaterialOverrideCache
// 0x0028
struct FTigerSidePieceMaterialOverrideCache
{
	class UStaticMesh*                                 OldMesh;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  Materials;                                                 // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FName>                               SlotNames;                                                 // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerBuildingSystemMaterialCacheMaterialBinding
// 0x0010
struct FTigerBuildingSystemMaterialCacheMaterialBinding
{
	int                                                MaterialIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LPR3[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          Material;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerBuildingSystemMaterialCache
// 0x0018
struct FTigerBuildingSystemMaterialCache
{
	TArray<struct FTigerBuildingSystemMaterialCacheMaterialBinding> MaterialBindings;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bStaticMeshComponent;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_12EK[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerBuildingSystemSideFloorEnables
// 0x0004
struct FTigerBuildingSystemSideFloorEnables
{
	bool                                               bFront;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bLeft;                                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bBack;                                                     // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bRight;                                                    // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerBuildingSystemFloorComponents
// 0x0010
struct FTigerBuildingSystemFloorComponents
{
	TArray<class UStaticMeshComponent*>                SidePieceComponents;                                       // 0x0000(0x0010) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerBuildingSystemCornerOverrides
// 0x0040
struct FTigerBuildingSystemCornerOverrides
{
	class UStaticMesh*                                 GroundFloorCorners;                                        // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ColumnsFloor1;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ColumnsFloor2;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ColumnsFloor3;                                             // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ColumnsFloor4;                                             // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ColumnsFloor5;                                             // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ColumnsFloor6;                                             // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                                 ColumnsFloor7;                                             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerBuildingSystemGroundFloorOverrides
// 0x0018
struct FTigerBuildingSystemGroundFloorOverrides
{
	class UClass*                                      Preset;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bOverrideScaling;                                          // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LVQH[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              MeshWidth;                                                 // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G81V[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerBuildingSystemSideOverrides
// 0x0040
struct FTigerBuildingSystemSideOverrides
{
	class UClass*                                      GroundFloorPreset;                                         // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FloorPreset1;                                              // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FloorPreset2;                                              // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FloorPreset3;                                              // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FloorPreset4;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FloorPreset5;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FloorPreset6;                                              // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      FloorPreset7;                                              // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerDamageSource
// 0x0024
struct FTigerDamageSource
{
	struct FVector                                     DamageSourceDirection;                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     DamageSourceLocation;                                      // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NewHealth;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageAmount;                                              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsRedGasDamage;                                           // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasDirection;                                             // 0x0021(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3Y7E[0x2];                                     // 0x0022(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerCharacterPiercingSetCustomizationItem
// 0x0010
struct FTigerCharacterPiercingSetCustomizationItem
{
	class UStaticMesh*                                 Mesh;                                                      // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FaceSlot;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerFriendServiceFriend
// 0x0020
struct FTigerFriendServiceFriend
{
	struct FString                                     DISPLAYNAME;                                               // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SharkmobUserId;                                            // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_FriendsList
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_FriendsList : public FTigerResponseEnvelope
{
	TArray<struct FTigerFriendServiceFriend>           Friends;                                                   // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerItemPrice
// 0x0010
struct FTigerItemPrice
{
	int                                                Amount;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_39HS[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTigerItemId                                SoftCurrencyId;                                            // 0x0008(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerItemIdWithPrice
// 0x0018
struct FTigerItemIdWithPrice
{
	struct FTigerItemId                                ItemId;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerItemPrice                             Price;                                                     // 0x0008(0x0010) (Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPreviewerData
// 0x02B0
struct FTigerPreviewerData
{
	unsigned char                                      Outfit[0x28];                                              // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	int                                                OutfitHoodieIndex;                                         // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J8GA[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      Head[0x28];                                                // 0x002C(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	int                                                SkinColorIndex;                                            // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GEB6[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      HairStyle[0x28];                                           // 0x005C(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      HairColor[0x28];                                           // 0x0088(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      Beard[0x28];                                               // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      BeardColor[0x28];                                          // 0x00D8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      EyeColor[0x28];                                            // 0x0100(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      Eyebrow[0x28];                                             // 0x0128(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      EyebrowColor[0x28];                                        // 0x0150(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      Tattoo[0x28];                                              // 0x0178(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      FacePaint[0x28];                                           // 0x01A0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      Headgear[0x28];                                            // 0x01C8(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      Eyewear[0x28];                                             // 0x01F0(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      PiercingSet[0x28];                                         // 0x0218(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      Emotes[0x10];                                              // 0x0240(0x0010) UNKNOWN PROPERTY: ArrayProperty
	unsigned char                                      CurrentOutfitConfig[0x28];                                 // 0x0250(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      CombinedItem[0x28];                                        // 0x0278(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      UnknownData_OSSW[0x10];                                    // 0x02A0(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerInviteId
// 0x0010
struct FTigerInviteId
{
	unsigned char                                      UnknownData_KPOV[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.HideousTimingData
// 0x0008
struct FHideousTimingData
{
	unsigned char                                      UnknownData_OCTG[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPersistentItemDefinition
// 0x0030
struct FTigerPersistentItemDefinition
{
	struct FTigerItemId                                ItemId;                                                    // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                             ItemClassPath;                                             // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Cost;                                                      // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StorePriority;                                             // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerItemId                                SoftCurrencyId;                                            // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSeasonConfig_ChallengeCollection
// 0x0030
struct FTigerSeasonConfig_ChallengeCollection
{
	TArray<struct FTigerSeasonalChallengeInstanceDefinition> ChallengeDefinitions;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FTigerItemId>                        RewardIds;                                                 // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FDateTime                                   UnlockDate;                                                // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   LockDate;                                                  // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSeasonExperiences
// 0x00C8
struct FTigerSeasonExperiences
{
	TMap<Tiger_ETigerPlayerEvent, struct FTigerPlayerEventToSeasonExperienceSource> PlayerEventBasedExperiences;                               // 0x0000(0x0050) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<int>                                        TopPlacementExperience;                                    // 0x0050(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FTigerSeasonExperienceSourceModifiers       ExperienceSourceModifiers[0xD];                            // 0x0060(0x0068) (Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSeasonConfig
// 0x0258
struct FTigerSeasonConfig
{
	struct FDateTime                                   SeasonStartDate;                                           // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   SeasonEndDate;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   BattlepassStartDate;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   BattlepassEndDate;                                         // 0x0018(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerItemId                                BattlePassItemId;                                          // 0x0020(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           BattlePassPrice;                                           // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_C1A4[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      BattlepassBannerTexture[0x28];                             // 0x002C(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	TArray<struct FTigerItemIdWithPrice>               SpecialItemPrices;                                         // 0x0058(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FTigerSeasonConfig_RewardTier>       FreeRewards;                                               // 0x0068(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FTigerSeasonConfig_RewardTier>       BattlepassRewards;                                         // 0x0078(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FTigerSeasonConfig_ChallengeCollection> WeeklyChallenges;                                          // 0x0088(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FTigerItemId                                DailyChallengeExpReward;                                   // 0x0098(0x0008) (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerSeasonConfig_DailyRewardCollection    DailyRewards;                                              // 0x00A0(0x0020) (Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FName                                       DefaultVendorSubLevelName;                                 // 0x00C0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerItemId                                SoftCurrencyMatchRewardItemId;                             // 0x00C8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SoftCurrencyMatchRewardMultiplier;                         // 0x00D0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3I7K[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FRuntimeFloatCurve                          SoftCurrencyPlacementBonus;                                // 0x00D8(0x0088) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FTigerSeasonExperiences                     SeasonExperiences;                                         // 0x0160(0x00C8) (Edit, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic)
	struct FTigerExpLevelRequirements                  SeasonExpRequirements;                                     // 0x0228(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FTigerExpLevelRequirements                  ArchetypeExpRequirements;                                  // 0x0240(0x0018) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerAudioSettings
// 0x0024
struct FTigerAudioSettings
{
	float                                              MasterVolume;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SFXVolume;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MusicVolume;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VideoVolume;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DialogueVolume;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VoiceChatVolume;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MicVolume;                                                 // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableVoiceChat;                                          // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPushToTalk;                                               // 0x001D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowBackgroundAudio;                                     // 0x001E(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableDolbyAtmos;                                         // 0x001F(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SavedVersion;                                              // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerLanguageSettings
// 0x0028
struct FTigerLanguageSettings
{
	struct FString                                     AudioLanguage;                                             // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TextLanguage;                                              // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseSubtitles;                                             // 0x0020(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GSRD[0x3];                                     // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SavedVersion;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerGameplaySettings
// 0x0008
struct FTigerGameplaySettings
{
	bool                                               bSwapOutDefaultWeapon;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMuteGeneralChat;                                          // 0x0001(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_45V7[0x2];                                     // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SavedVersion;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerDisplaySettings
// 0x0028
struct FTigerDisplaySettings
{
	int                                                ResolutionX;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ResolutionY;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ResolutionScale;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WindowMode;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Gamma;                                                     // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FrameRateLimit;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableFrameRateSmoothing;                                 // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableVSync;                                              // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WD4H[0x2];                                     // 0x001A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                FsrQualityLevel;                                           // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FsrSharpening;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SavedVersion;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerGraphicsQualityPreset
// 0x0044
struct FTigerGraphicsQualityPreset
{
	int                                                ViewDistanceQuality;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaterialQuality;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextureQuality;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TextureFilteringQuality;                                   // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VisualEffectQuality;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FoliageQuality;                                            // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LightingQuality;                                           // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VolumetricFogQuality;                                      // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmbientOcclusionQuality;                                   // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ScreenSpaceReflectionQuality;                              // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ShadowQuality;                                             // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AntiAliasingQuality;                                       // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SubSurfaceScatteringQuality;                               // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MotionBlurQuality;                                         // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BloomQuality;                                              // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LensFlareQuality;                                          // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseChromaticAberration;                                   // 0x0040(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseFilmGrain;                                             // 0x0041(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseLightShafts;                                           // 0x0042(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4YI9[0x1];                                     // 0x0043(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerBanInfo
// 0x0018
struct FTigerBanInfo
{
	unsigned char                                      Reason;                                                    // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ECHN[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EndsAt;                                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerLoginFailedInfo
// 0x0020
struct FTigerLoginFailedInfo
{
	Tiger_ETigerLoginResult                            FailReason;                                                // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G0W2[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTigerBanInfo                               BanInfo;                                                   // 0x0008(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerProgressedObjectiveWrapper
// 0x000C
struct FTigerProgressedObjectiveWrapper
{
	int                                                TargetValue;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PostSessionProgress;                                       // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreSessionProgress;                                        // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerGraphicsSettings
// 0x004C
struct FTigerGraphicsSettings
{
	struct FTigerGraphicsQualityPreset                 QualityPreset;                                             // 0x0000(0x0044) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bUseDX12;                                                  // 0x0044(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TIXU[0x3];                                     // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                SavedVersion;                                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSuggestedArticlesData
// 0x0018
struct FTigerSuggestedArticlesData
{
	int                                                Day;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N96P[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             EntryIds;                                                  // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerThrallMissionRewardItem
// 0x0030
struct FTigerThrallMissionRewardItem
{
	unsigned char                                      ItemClassPath[0x28];                                       // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	int                                                Count;                                                     // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9TU2[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerThrallMissionReward
// 0x0018
struct FTigerThrallMissionReward
{
	int                                                XpReward;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YGG8[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTigerThrallMissionRewardItem>       Rewards;                                                   // 0x0008(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_BuyItems
// 0x0050
struct FTigerRequest_BuyItems
{
	TArray<struct FTigerItemIdWithQuantity>            ItemsToBuy;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             CustomizationKeys;                                         // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             CustomizationValues;                                       // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                TotalCost;                                                 // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencyAmountToAdd;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           SeasonPlacementExpBoostPercentageToAdd;                    // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Channel;                                                   // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LQOF[0x3];                                     // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTigerItemIdWithQuantity>            ItemsToConsume;                                            // 0x0040(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerThrallStatModifiersTableRow
// 0x0030 (0x0038 - 0x0008)
struct FTigerThrallStatModifiersTableRow : public FTableRowBase
{
	struct FText                                       Name;                                                      // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int                                                StartingTurnsAffecting;                                    // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InjuryLevel;                                               // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerThrallStats                           StatModifier;                                              // 0x0028(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerBaseThrallTableRow
// 0x0010 (0x0018 - 0x0008)
struct FTigerBaseThrallTableRow : public FTableRowBase
{
	Tiger_ETigerThrallId                               ThrallId;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0YGP[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerBaseThrallData*                        BaseThrall;                                                // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerThrallUpgradeScreenInformation
// 0x0010
struct FTigerThrallUpgradeScreenInformation
{
	TArray<int>                                        ThrallStatsArray;                                          // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerThrallDetailsScreenInformation
// 0x0060
struct FTigerThrallDetailsScreenInformation
{
	struct FText                                       ThrallInjuries;                                            // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ThrallDescription;                                         // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       ThrallHintText;                                            // 0x0030(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ThrallKeepsakePortrait;                                    // 0x0048(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<int>                                        ThrallStatsArray;                                          // 0x0050(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerThrallAbility
// 0x0028
struct FTigerThrallAbility
{
	struct FText                                       AbilityName;                                               // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                                  AbilityIcon;                                               // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerThrallAbilityId                        AbilityId;                                                 // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LP63[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerThrallCharacterCardInformation
// 0x0040
struct FTigerThrallCharacterCardInformation
{
	struct FText                                       ThrallName;                                                // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UTexture2D*                                  ThrallPortrait;                                            // 0x0018(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ThrallExp;                                                 // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrallExpNormalised;                                       // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ThrallHealthNormalised;                                    // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8IXA[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTigerThrallAbility>                 ThrallAbilities;                                           // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerNewNotificationNodeEntry
// 0x0018
struct FTigerNewNotificationNodeEntry
{
	unsigned char                                      EnumMenuOption;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RSFU[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             Ids;                                                       // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerNewNotificationSaveLoadStruct
// 0x0018
struct FTigerNewNotificationSaveLoadStruct
{
	TArray<struct FTigerNewNotificationNodeEntry>      SaveLoadEntries;                                           // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int64_t                                            LatestLoginDaysFromEpoch;                                  // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerWaveDataRow
// 0x0018 (0x0020 - 0x0008)
struct FTigerWaveDataRow : public FTableRowBase
{
	float                                              WaitTime;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClosingTime;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageTickInterval;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamagePerTick;                                             // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CoveragePercentage;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WNVL[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerHolyIncenseBorderLine
// 0x001C
struct FTigerHolyIncenseBorderLine
{
	unsigned char                                      UnknownData_HT5Q[0x1C];                                    // 0x0000(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerSpreadModifier
// 0x000C
struct FTigerSpreadModifier
{
	Tiger_ETigerSpreadIncreaseMode                     Mode;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q8SE[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Speed;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Amount;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerFireSettings
// 0x00C0
struct FTigerFireSettings
{
	float                                              BulletDamage;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerWeaponFireMode                         FireMode;                                                  // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_COJN[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BurstCount;                                                // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShotsFiredPerSecondInBurst;                                // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BulletsFiredSimultaneously;                                // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShotsFiredPerSecond;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      AreaEffect;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FireStickyTime;                                            // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VerticalRecoilAmount;                                      // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HorizontalRecoilAmount;                                    // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StartingSpread;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerSpreadModifier                        SpreadModifiers[0x7];                                      // 0x0030(0x0054) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TimeUntilSpreadDecreases;                                  // 0x0084(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BaseMovementSpeedMultiplier;                               // 0x0088(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AimingMovementSpeedMultiplier;                             // 0x008C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HipFireMovementSpeedMultiplier;                            // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7890[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UCurveFloat*                                 SpreadIncreaseCurve;                                       // 0x0098(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 SpreadDecreaseCurve;                                       // 0x00A0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 FireRateIncreaseCurve;                                     // 0x00A8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 FireRateDecreaseCurve;                                     // 0x00B0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MasqueradeNoiseEventRadius;                                // 0x00B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ReverseSpreadChange;                                       // 0x00BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bPierceCivilians;                                          // 0x00BD(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUsesScope;                                                // 0x00BE(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8B8W[0x1];                                     // 0x00BF(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRangedWeaponData
// 0x00B8 (0x00C0 - 0x0008)
struct FTigerRangedWeaponData : public FTableRowBase
{
	int                                                MaxAmmoInClips[0x4];                                       // 0x0008(0x0010) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmmoOnPickup;                                              // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanHeadshot;                                              // 0x001C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_91N5[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              BodyPartDamageModifiers[0x6];                              // 0x0020(0x0018) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NPCBulletDamage;                                           // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverrideReloadTime;                                        // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReloadSpeedMultiplier;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ActivationTime;                                            // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableFireModeSwitchByDefault;                            // 0x0048(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VERH[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTigerFireSettings>                  FireSettings;                                              // 0x0050(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTigerRangedModItemAsset*>            BarrelMods;                                                // 0x0060(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTigerRangedModItemAsset*>            AmmoMods;                                                  // 0x0070(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTigerRangedModItemAsset*>            ScopeMods;                                                 // 0x0080(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTigerRangedModItemAsset*>            StockMods;                                                 // 0x0090(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UTigerRangedModItemAsset*>            SpecialMods;                                               // 0x00A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UClass*                                      InAirMomentumDrainBuff;                                    // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              InAirMomentumDrainBuffSpeedMultiplier;                     // 0x00B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DYME[0x4];                                     // 0x00BC(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.GatheredTigerCompositionCell
// 0x0028
struct FGatheredTigerCompositionCell
{
	unsigned char                                      UnknownData_UNGZ[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerGroupSettingsData
// 0x0010
struct FTigerGroupSettingsData
{
	class UTexture2D*                                  CompassMarkerTexture;                                      // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      MapMarkerWidgetType;                                       // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCampingData
// 0x0010
struct FTigerCampingData
{
	unsigned char                                      UnknownData_LUET[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerInventoryWeapon
// 0x0008
struct FTigerInventoryWeapon
{
	class UTigerItemAsset*                             ItemAsset;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerItemData
// 0x0010
struct FTigerItemData
{
	class UTigerItemAsset*                             ItemAsset;                                                 // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SXLY[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerInventorySlotContent
// 0x0018
struct FTigerInventorySlotContent
{
	Tiger_ETigerInventoryItemType                      Type;                                                      // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FVH3[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerItemAsset*                             ItemAsset;                                                 // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StackCount;                                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LD8T[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerConsequenceUpdateData
// 0x0014
struct FTigerConsequenceUpdateData
{
	int                                                ConsequenceId;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExpectedTimeLeft;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         VectorData;                                                // 0x0008(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerConsequenceData
// 0x0020
struct FTigerConsequenceData
{
	class UClass*                                      ConsequenceClass;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerConsequenceUpdateData                 UpdateData;                                                // 0x0008(0x0014) (NoDestructor, NativeAccessSpecifierPublic)
	Tiger_ETigerAIPlayerAction                         PlayerAction;                                              // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JIRA[0x3];                                     // 0x001D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.BloodHuntMarker
// 0x0010
struct FBloodHuntMarker
{
	class UTigerCompassMarkerWidget*                   CompassMarker;                                             // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTigerMapMarkerProxy*                        MapMarkerProxy;                                            // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerThrallStatModifier
// 0x0038
struct FTigerThrallStatModifier
{
	int                                                InjuryLevel;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_0F8Z[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       ModifierName;                                              // 0x0008(0x0018) (Protected, NativeAccessSpecifierProtected)
	uint32_t                                           TurnsRemaining;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_OED4[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTigerThrallStats                           StatModifiers;                                             // 0x0028(0x0010) (Protected, NativeAccessSpecifierProtected)

};

// ScriptStruct Tiger.TigerPersistentThrallData
// 0x0030
struct FTigerPersistentThrallData
{
	struct FTigerThrallStats                           ThrallStats;                                               // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      ThrallAbilities;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	Tiger_ETigerThrallId                               ThrallId;                                                  // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int8_t                                             ThrallInjuryLevel;                                         // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int8_t                                             ThrallRating;                                              // 0x0013(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_G38V[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTigerThrallStatModifier>            ThrallStatModifiers;                                       // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)
	int                                                ThrallExp;                                                 // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_ATAY[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPersistentMissionData
// 0x0020
struct FTigerPersistentMissionData
{
	int                                                MissionId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HZEK[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<Tiger_ETigerThrallId>                       ThrallsOnMission;                                          // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                Progress;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O0E1[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRandomizedLootResult
// 0x0020
struct FTigerRandomizedLootResult
{
	class UTigerItemAsset*                             PrimaryItem;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PrimaryItemCount;                                          // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MGG7[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerItemAsset*                             SecondaryItem;                                             // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SecondaryItemCount;                                        // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5HMW[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerLootItemType
// 0x0010
struct FTigerLootItemType
{
	class UTigerItemAsset*                             LootAsset;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AmmoCount;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DropChanceWeight;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerLootLocationEntry
// 0x0010
struct FTigerLootLocationEntry
{
	class UTigerItemLootTable*                         LootTable;                                                 // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinimumItemCount;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaximumItemCount;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerMeleeWeaponAttackIdentifier
// 0x0002
struct FTigerMeleeWeaponAttackIdentifier
{
	Tiger_ETigerWeaponMeleeAttackType                  AttackType;                                                // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AttackIndex;                                               // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSwingCollisionInstant
// 0x0040
struct FTigerSwingCollisionInstant
{
	struct FTransform                                  Transform;                                                 // 0x0000(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                              TimeInSwing;                                               // 0x0030(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                HitboxNotifyIndexForWeapon;                                // 0x0034(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WeaponIndex;                                               // 0x0038(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EA56[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerSwingCollisionInfo
// 0x0010
struct FTigerSwingCollisionInfo
{
	TArray<struct FTigerSwingCollisionInstant>         CollisionInstants;                                         // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerVendorStoreCategoryItem
// 0x0098
struct FTigerVendorStoreCategoryItem
{
	struct FTigerMetaStoreEntry                        StoreEntry;                                                // 0x0000(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	unsigned char                                      ItemClassPath[0x28];                                       // 0x0050(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	class UTigerInventoryItemBase*                     BaseItem;                                                  // 0x0078(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Cost;                                                      // 0x0080(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InventoryCount;                                            // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerItemId                                SoftCurrencyId;                                            // 0x0088(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StorePriority;                                             // 0x0090(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DEV3[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerFullCharacterAppearance
// 0x0090
struct FTigerFullCharacterAppearance
{
	struct FTigerCharacterAppearance                   PartialCharacterAppearance;                                // 0x0000(0x0080) (NativeAccessSpecifierPublic)
	struct FTigerPersistentPlayerCardData              PlayerCardData;                                            // 0x0080(0x000C) (NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I8ZO[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerGrimoireCardBorderQualityRow
// 0x0010 (0x0018 - 0x0008)
struct FTigerGrimoireCardBorderQualityRow : public FTableRowBase
{
	float                                              DamageAmount;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraDamage;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExtraDamageOnEdges;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_20OK[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerItemLootEntry
// 0x0020
struct FTigerItemLootEntry
{
	class UTigerItemAsset*                             ItemAsset;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinItemCount;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxItemCount;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Weight;                                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P24G[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerItemLootTable*                         SpawnsWith;                                                // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSubItemLootTable
// 0x0028
struct FTigerSubItemLootTable
{
	class UTigerItemLootTable*                         SubLootTable;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerItemRarity                             MinimumRarity;                                             // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerItemRarity                             MaximumRarity;                                             // 0x0009(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QQGF[0x2];                                     // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              WeightMultiplier;                                          // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WeightMultiplierByRarity[0x5];                             // 0x0010(0x0014) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              OverrideTotalWeight;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerLootTableKey
// 0x0003
struct FTigerLootTableKey
{
	unsigned char                                      UnknownData_MCCL[0x3];                                     // 0x0000(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerGeneratedLootTable
// 0x0018
struct FTigerGeneratedLootTable
{
	TArray<struct FTigerItemLootEntry>                 Items;                                                     // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GQOP[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.PointOfInterest
// 0x00A0
struct FPointOfInterest
{
	struct FText                                       Name;                                                      // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Image;                                                     // 0x0018(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   MapPosition;                                               // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       TooltipTitle;                                              // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FLinearColor                                TooltipTitleColor;                                         // 0x0040(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       TooltipDescription;                                        // 0x0050(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	Tiger_ETigerItemRarity                             LootRarity;                                                // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8TKJ[0x7];                                     // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PingType;                                                  // 0x0070(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      HighTierLootGroup[0x28];                                   // 0x0078(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Tiger.TigerMapInfo
// 0x00B8
struct FTigerMapInfo
{
	struct FMapLandmarkPoint                           FirstLandmark;                                             // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FMapLandmarkPoint                           SecondLandmark;                                            // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	class UTexture2D*                                  MapTexture;                                                // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LevelName;                                                 // 0x0038(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPointOfInterest>                    PointsOfInterest;                                          // 0x0048(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FVector2D                                   MinimapSize;                                               // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CachedScale;                                               // 0x0060(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_67RE[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<class UClass*, Tiger_EMapMarkerType>          BotMarkerTypes;                                            // 0x0068(0x0050) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerReadyToPlayState
// 0x000C
struct FTigerReadyToPlayState
{
	TWeakObjectPtr<class ATigerPlayerController>       PlayerController;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsReadyToPlay;                                            // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LLPW[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerEntityCheckpointsSettings
// 0x0010
struct FTigerEntityCheckpointsSettings
{
	int                                                MinEntityCheckpoints;                                      // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxEntityCheckpoints;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinAutomaticSupplyDropCallInDelay;                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxAutomaticSupplyDropCallInDelay;                         // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRatSpawnpointSettings
// 0x0008
struct FTigerRatSpawnpointSettings
{
	int                                                MinRatSpawnpoints;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxRatSpawnpoints;                                         // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSHPBSettings
// 0x001C
struct FTigerSHPBSettings
{
	int                                                StartMinSHPBNPCs;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                StartMaxSHPBNPCs;                                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IntervalMinSHPBNPCs;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IntervalMaxSHPBNPCs;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinSpawnInterval;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxSpawnInterval;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastIntervalSpawnMatchTime;                                // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerHavenCapturePointSettings
// 0x0020
struct FTigerHavenCapturePointSettings
{
	float                                              TimeUntilEnableCapturePoint;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TimeUntilRevealEveryoneAndSpeedupCapturePercentages;       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CaptureSpeedPercentageIncreasePerSecondWhenEveryoneIsRevealed; // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxCaptureSpeedPercentagePerSecondWhenEveryoneIsRevealed;  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CaptureTime;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CapturePercentageIncreasePerSecond;                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FastDecrementPercentageDropPerSecond;                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SlowDecrementPercentageDropPerSecond;                      // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerBattleRoyalePlayerSpawnSettings
// 0x0008
struct FTigerBattleRoyalePlayerSpawnSettings
{
	float                                              MinimumDistanceCentimetersBetweenGroups;                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DesiredDistanceCentimetersBetweenGroups;                   // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPreSpawnSettings
// 0x0028
struct FTigerPreSpawnSettings
{
	int                                                GroupSyncSettleTime;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InitialArchetypeSelectCountDown;                           // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PostArchetypeSelectTime;                                   // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PreSpawnSelectionTime;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SpawnSelectionTime;                                        // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeUntilAutomaticSpawnAssignment;                         // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PostSpawnSelectionTime;                                    // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArchetypeSelectTimePerPlayer;                              // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamViewTime;                                              // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                FreeLookPreparationTime;                                   // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerHighTierLootSettings
// 0x0030
struct FTigerHighTierLootSettings
{
	struct FSharkRandomDeviationInt                    NumberOfHighTierLootLocations;                             // 0x0000(0x0008) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      HighTierLootTable[0x28];                                   // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

};

// ScriptStruct Tiger.TigerPreMatchStateInfo
// 0x0008
struct FTigerPreMatchStateInfo
{
	int                                                StateData;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerPreMatchState                          State;                                                     // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QD43[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerWeaponCrosshairSlot
// 0x00B8
struct FTigerWeaponCrosshairSlot
{
	struct FVector2D                                   Direction;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Offset;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Alignment;                                                 // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Brush;                                                     // 0x0018(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                                Color;                                                     // 0x00A0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RenderAngle;                                               // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HQIY[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerWeaponScalingCrosshairSlot
// 0x0090
struct FTigerWeaponScalingCrosshairSlot
{
	struct FSlateBrush                                 Brush;                                                     // 0x0000(0x0088) (Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	float                                              RenderAngle;                                               // 0x0088(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AdditionalSize;                                            // 0x008C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCustomizableKeybindData
// 0x0020
struct FTigerCustomizableKeybindData
{
	struct FText                                       DISPLAYNAME;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               DebugOnly;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5O0F[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerCustomizableAxisKeybindData
// 0x0038
struct FTigerCustomizableAxisKeybindData
{
	struct FText                                       DISPLAYNAME;                                               // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       OptionalReverseDisplayName;                                // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                               DebugOnly;                                                 // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CY00[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerNPCMasqueradeStateMessage
// 0x0010
struct FTigerNPCMasqueradeStateMessage
{
	class ATigerNPC*                                   NPC;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerAIMasqueradeState                      MasqueradeState;                                           // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A56D[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerDisableHSenseTarget
// 0x0028
struct FTigerDisableHSenseTarget
{
	unsigned char                                      Actor[0x28];                                               // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Tiger.TigerVoCategoryData
// 0x000C
struct FTigerVoCategoryData
{
	unsigned char                                      Prio;                                                      // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RQX1[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TriggerChance;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Cooldown;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerMeleeAttack
// 0x0088
struct FTigerMeleeAttack
{
	struct FName                                       AttackName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AttackGroup;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SwingAnimationMontageName;                                 // 0x000C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       SwingAnimationNoTargetMontageName;                         // 0x0014(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RecoveryAnimationMontageName;                              // 0x001C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       RecoveryAnimationNoTargetMontageName;                      // 0x0024(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       HitAnimationMontageName;                                   // 0x002C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       DirectionalHitAnimationMontageNames[0x4];                  // 0x0034(0x0020) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HitEffectAngle;                                            // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      HitCameraShake;                                            // 0x0058(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 InputMultiplierCurve;                                      // 0x0060(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackCooldown;                                            // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAllowMultipleHits;                                        // 0x006C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6OXR[0x3];                                     // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TargetingAttackMinimumDistance;                            // 0x0070(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AerialAttackAbortedBlendOutTime;                           // 0x0074(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 DamageScalingCurve;                                        // 0x0078(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AttackIndex;                                               // 0x0080(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerWeaponMeleeAttackType                  AttackType;                                                // 0x0084(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0Q5H[0x3];                                     // 0x0085(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRegionPingerSettings
// 0x0014
struct FTigerRegionPingerSettings
{
	int                                                PingNumSamples;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPingsToDisregard;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PingTimeoutSeconds;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AllowedConsecutiveFailures;                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WaitSecondsOnUnreachable;                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerNearCameraFadeMaterialMasterData
// 0x0018
struct FTigerNearCameraFadeMaterialMasterData
{
	class UMaterialInterface*                          MasterMaterial;                                            // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       UseCameraDitherFadeName;                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       FadeLengthName;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerNearCameraFadeDebugData
// 0x0028
struct FTigerNearCameraFadeDebugData
{
	bool                                               bDebugNearCameraFade;                                      // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WVRY[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          NearCameraFadeDebugMaterial;                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DebugVisualizationMaterialEnabled;                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DebugVisualizationMaterialNoMaster;                        // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                          DebugVisualizationMaterialNoSimpleCollision;               // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPlayerSavedLocation
// 0x0010
struct FTigerPlayerSavedLocation
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Timestamp;                                                 // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTrackedPlayerData
// 0x0018
struct FTigerTrackedPlayerData
{
	class APlayerState*                                PlayerState;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ATigerBestialTrailVisualizer*                Visualizer;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TrackingBuffID;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_S4TU[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.DisplayedItemWidget
// 0x0010
struct FDisplayedItemWidget
{
	class UUserWidget*                                 Widget;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E8OS[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerNpcReactionData
// 0x000C
struct FTigerNpcReactionData
{
	float                                              ReactionExpireTime;                                        // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReactionCompensationAngle;                                 // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanMoveDuringReaction;                                    // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FB1V[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRangedHitInfo
// 0x0020
struct FTigerRangedHitInfo
{
	struct FVector_NetQuantize100                      End;                                                       // 0x0000(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_EBodyPart                                    BodyPart;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G4P1[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class ATigerCharacter*                             HitCharacter;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ProjectileId;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9CQM[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerQueuedTextPrompt
// 0x0060
struct FTigerQueuedTextPrompt
{
	class UTigerSimpleTextPrompt*                      Prompt;                                                    // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9ZRL[0x58];                                    // 0x0008(0x0058) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerQueuedTextPromptPriorityEntry
// 0x0018
struct FTigerQueuedTextPromptPriorityEntry
{
	struct FName                                       PropertyName;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                      PromptClass;                                               // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       VisibleName;                                               // 0x0010(0x0008) (Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerProgressedQuestWrapper
// 0x0028
struct FTigerProgressedQuestWrapper
{
	struct FText                                       QuestDescription;                                          // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FTigerProgressedObjectiveWrapper>    ProgressedObjectives;                                      // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerItemPriceJSON
// 0x0018
struct FTigerItemPriceJSON
{
	int                                                Amount;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7QOM[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SoftCurrencyId;                                            // 0x0008(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPingIconData
// 0x0010
struct FTigerPingIconData
{
	class UTexture2D*                                  Texture;                                                   // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Scale;                                                     // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerUIColor                                TintColor;                                                 // 0x000C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W8PD[0x3];                                     // 0x000D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPingNotificationUIData
// 0x0028
struct FTigerPingNotificationUIData
{
	struct FText                                       NotificationText;                                          // 0x0000(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTigerPingIconData                          IconData;                                                  // 0x0018(0x0010) (BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerAttackingNPCCollection
// 0x0018
struct FTigerAttackingNPCCollection
{
	TArray<TWeakObjectPtr<class ATigerNPC>>            AttackingNPCs;                                             // 0x0000(0x0010) (ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O806[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerInventoryStats
// 0x001C
struct FTigerInventoryStats
{
	float                                              MeleeDamage;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShootingDamage;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbilityDamageBonus;                                        // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeDefense;                                              // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShootingDefense;                                           // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbilityDefense;                                            // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbilityHaste;                                              // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSeasonalData
// 0x0010
struct FTigerSeasonalData
{
	uint32_t                                           OldExp;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           NewExp;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           OldLevel;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           NewLevel;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetPremiumCurrencyBalance
// 0x0008 (0x0020 - 0x0018)
struct FTigerResponse_GetPremiumCurrencyBalance : public FTigerResponseEnvelope
{
	uint64_t                                           Balance;                                                   // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_IncrementPremiumCurrency
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_IncrementPremiumCurrency : public FTigerResponseEnvelope
{
	uint64_t                                           OldAmount;                                                 // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           NewAmount;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_IncrementPremiumCurrency
// 0x0008
struct FTigerRequest_IncrementPremiumCurrency
{
	uint64_t                                           Amount;                                                    // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetStoreEntriesChecksum
// 0x0008 (0x0020 - 0x0018)
struct FTigerResponse_GetStoreEntriesChecksum : public FTigerResponseEnvelope
{
	unsigned char                                      UnknownData_44M9[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerResponse_StoreEntryItem
// 0x0018
struct FTigerResponse_StoreEntryItem
{
	struct FString                                     ItemId;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Quantity;                                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OMVJ[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPropAttachment
// 0x0018
struct FTigerPropAttachment
{
	struct FName                                       AttachIdentifier;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Prop[0x10];                                                // 0x0008(0x0010) UNKNOWN PROPERTY: InterfaceProperty

};

// ScriptStruct Tiger.TigerNonReplicatedCharacterStats
// 0x009C
struct FTigerNonReplicatedCharacterStats
{
	struct FTigerCharacterSingleStatModification       MovementAcceleration;                                      // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                              JumpForceMultiplier;                                       // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WallJumpForceMultiplier;                                   // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeDamageDealtMultiplier;                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbilityDamageDealtMultiplier;                              // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageTakenMultiplier;                                     // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MeleeDamageTakenMultiplier;                                // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AbilityDamageTakenMultiplier;                              // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShootingDamageTakenMultiplier;                             // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownMultiplier;                                        // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CooldownSpeedMultiplier;                                   // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RechargeMultiplier;                                        // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RechargeSpeedMultiplier;                                   // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MasqueradePointMultiplier;                                 // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ClanSkillCooldownMultiplier;                               // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArchetypeSkillCooldownMultiplier;                          // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AttackSpeedMultiplier;                                     // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ReloadSpeedMultiplier;                                     // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShootingDamageDealtMultiplier;                             // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ShotgunDamageDealtMultiplier;                              // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StaminaCostMultiplier;                                     // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AmmoFindMultiplier;                                        // 0x0058(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              FeedSpeedMultiplier;                                       // 0x005C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MosquitoDamageTakenMultiplier;                             // 0x0060(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LoudnessMultiplier;                                        // 0x0064(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ExperienceGainMultiplier;                                  // 0x0068(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AimSensitivityMultiplier;                                  // 0x006C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageDealtMultiplier;                                     // 0x0070(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageDealtToCiviliansMultiplier;                          // 0x0074(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FClanDamageMultiplierMatrix                 DamageToClansMultiplierMatrix;                             // 0x0078(0x0024) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerBuyStoreEntryResponsePayload
// 0x0028
struct FTigerBuyStoreEntryResponsePayload
{
	TArray<struct FTigerItemId>                        BoughtItems;                                               // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32_t>                                   BoughtItemQuantities;                                      // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	Tiger_ETigerBuyStoreEntryResponseCode              ResponseCode;                                              // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSuccess;                                                  // 0x0021(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UYIS[0x6];                                     // 0x0022(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerMetaStoreBuyPayloadElement
// 0x0010
struct FTigerMetaStoreBuyPayloadElement
{
	uint64_t                                           EntryToBuy;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                QuantityToBuy;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5L2L[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerChallengePersistentProgressEntry
// 0x0008
struct FTigerChallengePersistentProgressEntry
{
	int                                                Progress;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bHasDistributedReward;                                     // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BGLX[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerDailyChallengePersistentProgress
// 0x0058
struct FTigerDailyChallengePersistentProgress
{
	TMap<struct FTigerChallengeTypeID, struct FTigerChallengePersistentProgressEntry> Progress;                                                  // 0x0000(0x0050) (RepSkip, NativeAccessSpecifierPublic)
	int                                                Date;                                                      // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LastRewardTrackIndex;                                      // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerWeeklyChallengePersistentProgress
// 0x0060
struct FTigerWeeklyChallengePersistentProgress
{
	TMap<struct FTigerChallengeInstanceID, struct FTigerChallengePersistentProgressEntry> Progress;                                                  // 0x0000(0x0050) (RepSkip, NativeAccessSpecifierPublic)
	TArray<int>                                        LastRewardTrackIndices;                                    // 0x0050(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSeasonMatchStat
// 0x0008
struct FTigerSeasonMatchStat
{
	int                                                SeasonTotal;                                               // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SeasonBest;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPersistentSeasonMatchStats
// 0x0020
struct FTigerPersistentSeasonMatchStats
{
	TArray<struct FTigerSeasonMatchStat>               Stats;                                                     // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                MatchesPlayed;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9G8V[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            SeasonId;                                                  // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerGrimoireEntryStatusStruct
// 0x0008
struct FTigerGrimoireEntryStatusStruct
{
	uint32_t                                           EntryId;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      State;                                                     // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VKDO[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPersistentCollectibleData
// 0x0008
struct FTigerPersistentCollectibleData
{
	uint32_t                                           CollectibleId;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      CollectibleCount;                                          // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_PYVC[0x3];                                     // 0x0005(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerReadDialogueCategoryWrapper
// 0x0020
struct FTigerReadDialogueCategoryWrapper
{
	struct FString                                     NpcIdentifier;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<unsigned char>                              ReadCategories;                                            // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCharacterHeadPiercingSocket
// 0x0018
struct FTigerCharacterHeadPiercingSocket
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.ClientDebugInfo
// 0x000C
struct FClientDebugInfo
{
	uint32_t                                           ClientUid;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Location;                                                  // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.ActivateObjectState
// 0x0008
struct FActivateObjectState
{
	unsigned char                                      UnknownData_KYTX[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerLoggedInElsewherePush
// 0x0001
struct FTigerLoggedInElsewherePush
{
	unsigned char                                      UnknownData_YIQ9[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerCollectibleTableRow
// 0x0008 (0x0010 - 0x0008)
struct FTigerCollectibleTableRow : public FTableRowBase
{
	class UTigerCollectibleData*                       Collectible;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerOwnedConsumable
// 0x0010
struct FTigerOwnedConsumable
{
	class UTigerConsumableAsset*                       ConsumableAsset;                                           // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EOKQ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerContextualHelpContext
// 0x0018
struct FTigerContextualHelpContext
{
	class ATigerPlayerController*                      PlayerController;                                          // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTigerPowerKit*                              PowerKit;                                                  // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumMatchesPlayedTotal;                                     // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumMatchesWithArchetype;                                   // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerDisciplineLevelInfo
// 0x0040
struct FTigerDisciplineLevelInfo
{
	struct FText                                       StatName;                                                  // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<float>                                      StatChanges;                                               // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FText                                       StatChangeSuffix;                                          // 0x0028(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerEmoteTableRow
// 0x0030 (0x0038 - 0x0008)
struct FTigerEmoteTableRow : public FTableRowBase
{
	struct FText                                       EmoteName;                                                 // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class UTexture2D*                                  EmoteIcon;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                                EmoteMontage;                                              // 0x0028(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bStopsMovement;                                            // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bAlwaysUnlocked;                                           // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_35TJ[0x6];                                     // 0x0032(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerFakeGameSessionToken
// 0x0018
struct FTigerFakeGameSessionToken
{
	struct FString                                     Ip;                                                        // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           Port;                                                      // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      GROUPINGMODE;                                              // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B6OU[0x5];                                     // 0x0013(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerFriendsAccountIdSet
// 0x0030
struct FTigerFriendsAccountIdSet
{
	struct FString                                     PlatformUserId;                                            // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerId;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SharkmobUserId;                                            // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerGrimoireSubEntry
// 0x0018
struct FTigerGrimoireSubEntry
{
	unsigned char                                      UnknownData_NB6F[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       EntryName;                                                 // 0x0004(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FBWM[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerGrimoireEntry*                         Entry;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerGrimoireEntryRow
// 0x0020 (0x0028 - 0x0008)
struct FTigerGrimoireEntryRow : public FTableRowBase
{
	unsigned char                                      UnknownData_OGUS[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerGrimoireEntry*                         Entry;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTigerGrimoireSubEntry>              SubEntries;                                                // 0x0018(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerHeatmapData
// 0x0014
struct FTigerHeatmapData
{
	unsigned char                                      UnknownData_ZF4M[0x14];                                    // 0x0000(0x0014) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerDebugDrawCallbackEntry
// 0x0060
struct FTigerDebugDrawCallbackEntry
{
	unsigned char                                      UnknownData_4JF9[0x60];                                    // 0x0000(0x0060) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerModSlotInfo
// 0x0010
struct FTigerModSlotInfo
{
	class UTigerRangedModItemAsset*                    Mod;                                                       // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsUnlocked;                                                // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I0JI[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTooltipStatChange
// 0x0020
struct FTigerTooltipStatChange
{
	struct FText                                       StatName;                                                  // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	Tiger_ETigerTooltipStatChangeAmount                Amount;                                                    // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsNegativeChange;                                         // 0x0019(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AGQE[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerSeasonalItemLink
// 0x0030 (0x0038 - 0x0008)
struct FTigerSeasonalItemLink : public FTableRowBase
{
	uint64_t                                           ItemId;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      ItemPath[0x28];                                            // 0x0010(0x0028) UNKNOWN PROPERTY: SoftClassProperty

};

// ScriptStruct Tiger.TigerJudgeTargetConsideration
// 0x0028
struct FTigerJudgeTargetConsideration
{
	class ATigerPlayer*                                Player;                                                    // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ApplicableAttacks;                                         // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                              DamageDoneSinceReset;                                      // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceToPlayer;                                          // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TargetValue;                                               // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GK6G[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerBotNameData
// 0x0018 (0x0020 - 0x0008)
struct FTigerBotNameData : public FTableRowBase
{
	struct FText                                       BotNames;                                                  // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_LoginToken
// 0x0018 (0x0030 - 0x0018)
struct FTigerResponse_LoginToken : public FTigerResponseEnvelope
{
	uint16_t                                           EstimatedTimeInSeconds;                                    // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8SLJ[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Token;                                                     // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_LoginToken
// 0x0010
struct FTigerRequest_LoginToken
{
	struct FString                                     Token;                                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_StoreEntry
// 0x0058
struct FTigerResponse_StoreEntry
{
	struct FString                                     StoreEntryID;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           PremiumPrice;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2OYN[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ImagePath;                                                 // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Discount;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MNT8[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FDateTime                                   StartAt;                                                   // 0x0030(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                                   EndsAt;                                                    // 0x0038(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Slot;                                                      // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XASM[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTigerResponse_StoreEntryItem>       Items;                                                     // 0x0048(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetStoreEntries
// 0x0018 (0x0030 - 0x0018)
struct FTigerResponse_GetStoreEntries : public FTigerResponseEnvelope
{
	TArray<struct FTigerResponse_StoreEntry>           StoreEntries;                                              // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int64_t                                            Checksum;                                                  // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetServerMetricsConfig
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_GetServerMetricsConfig : public FTigerResponseEnvelope
{
	struct FString                                     MetricsConfig;                                             // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSeasonConfigResponse_DailyFinalReward
// 0x0010
struct FTigerSeasonConfigResponse_DailyFinalReward
{
	TArray<struct FString>                             DailyFinalRewardIds;                                       // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSeasonConfigResponse_DailyRewardCollection
// 0x0020
struct FTigerSeasonConfigResponse_DailyRewardCollection
{
	TArray<struct FString>                             TrackRewardIds;                                            // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTigerSeasonConfigResponse_DailyFinalReward> DailyFinalRewardWeeks;                                     // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryTutorialTimeStampContainer
// 0x0010
struct FTigerTelemetryTutorialTimeStampContainer
{
	TArray<struct FTigerTelemetryTutorialTimeStamp>    TimeStamps;                                                // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryItemSpawnAmounts
// 0x0050
struct FTigerTelemetryItemSpawnAmounts
{
	TMap<uint64_t, int>                                ItemAmounts;                                               // 0x0000(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_PremiumCurrencyPack
// 0x0040 (0x0058 - 0x0018)
struct FTigerResponse_PremiumCurrencyPack : public FTigerResponseEnvelope
{
	int64_t                                            ID;                                                        // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Amount;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LEMO[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ImagePath;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            Bonus;                                                     // 0x0038(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8FMH[0x6];                                     // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	double                                             Price;                                                     // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CurrencyType;                                              // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetPremiumCurrencyPacks
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_GetPremiumCurrencyPacks : public FTigerResponseEnvelope
{
	TArray<struct FTigerResponse_PremiumCurrencyPack>  CurrencyPacks;                                             // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_PremiumCurrencyPack
// 0x0010
struct FTigerRequest_PremiumCurrencyPack
{
	struct FString                                     CurrencyType;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetSupportedCurrencyCode
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_GetSupportedCurrencyCode : public FTigerResponseEnvelope
{
	struct FString                                     Type;                                                      // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_GetSupportedCurrencyCode
// 0x0010
struct FTigerRequest_GetSupportedCurrencyCode
{
	struct FString                                     UserId;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTalentTableRow
// 0x0010 (0x0018 - 0x0008)
struct FTigerTalentTableRow : public FTableRowBase
{
	class UTigerTalentAsset*                           Talent;                                                    // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ManuallyInputUID;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VJYV[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryResponse
// 0x0018
struct FTigerTelemetryResponse
{
	struct FString                                     Error;                                                     // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               OK;                                                        // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_K1US[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryKeyValuePair
// 0x0020
struct FTigerTelemetryKeyValuePair
{
	struct FString                                     Key;                                                       // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Value;                                                     // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryData
// 0x0080
struct FTigerTelemetryData
{
	struct FString                                     PlayerId;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventName;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Universe;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformType;                                              // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ApplicationVersion;                                        // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EventTimestamp;                                            // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SessionId;                                                 // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTigerTelemetryKeyValuePair>         Data;                                                      // 0x0070(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryDefinition
// 0x0078
struct FTigerTelemetryDefinition
{
	struct FString                                     EnumName;                                                  // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VariableType;                                              // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ActualDataSize;                                            // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FYNV[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TMap<struct FString, int>                          KeyValuePairs;                                             // 0x0028(0x0050) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryDefinitionMaster
// 0x0050
struct FTigerTelemetryDefinitionMaster
{
	TMap<struct FString, struct FTigerTelemetryDefinition> Definitions;                                               // 0x0000(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryArchetypeAmounts
// 0x0050
struct FTigerTelemetryArchetypeAmounts
{
	TMap<int, int>                                     ArchetypeAmounts;                                          // 0x0000(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventStore_AquiredInventoryItems
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventStore_AquiredInventoryItems : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_471K[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UnlockedItems;                                             // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UnlockSource;                                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E7V0[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventAccount_Customization
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventAccount_Customization : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0FDC[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     CharacterCard;                                             // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventCharacter_Customization
// 0x00F0 (0x00F8 - 0x0008)
struct FTigerTelemetryEventCharacter_Customization : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HAPY[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArchetypeId;                                               // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CharacterId;                                               // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OutfitId;                                                  // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Accessories;                                               // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Body;                                                      // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Hair;                                                      // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Eye;                                                       // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     MakeupID;                                                  // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     TattooId;                                                  // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     FacialHair;                                                // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     EmotesID;                                                  // 0x00E0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalTimeSpend;                                            // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BPNG[0x4];                                     // 0x00F4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventProgression_BattlepassLevelUp
// 0x0078 (0x0080 - 0x0008)
struct FTigerTelemetryEventProgression_BattlepassLevelUp : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YET7[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattlepassExperienceSource;                                // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BattlepassLevelBefore;                                     // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BattlepassLevelAfter;                                      // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BattlepassExperienceBefore;                                // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BattlepassExperienceAfter;                                 // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChangedBattlepassExperience;                               // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LOEI[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventSocial_DeleteFriend
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventSocial_DeleteFriend : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YLIJ[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IDDeleted;                                                 // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventSocial_FriendRequestResponse
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventSocial_FriendRequestResponse : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0HOF[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IDRequestSentFrom;                                         // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RequestResponse;                                           // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8VGO[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventSocial_FriendRequest
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventSocial_FriendRequest : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SVX2[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     IDRequestRecipient;                                        // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventSocial_FriendList
// 0x0078 (0x0080 - 0x0008)
struct FTigerTelemetryEventSocial_FriendList : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BKAU[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SharkmobFriendNumber;                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3AU5[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SharkmobFriendIDList;                                      // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlatformFriendNumber;                                      // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventTutorial_Exit
// 0x0080 (0x0088 - 0x0008)
struct FTigerTelemetryEventTutorial_Exit : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ON4Z[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TutorialStartTime;                                         // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TutorialEndTime;                                           // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TutorialFinished;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N390[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ObjectiveDuration;                                         // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ObjectiveLocation;                                         // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventChallenge_Progress
// 0x0070 (0x0078 - 0x0008)
struct FTigerTelemetryEventChallenge_Progress : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3NBP[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DailyChallengeProgress;                                    // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WeeklyChallengeProgress;                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventChallenge_Completed
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventChallenge_Completed : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_63LA[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ChallengeID;                                               // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChallengeType;                                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WJZP[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventChallenge_List
// 0x0070 (0x0078 - 0x0008)
struct FTigerTelemetryEventChallenge_List : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I8XD[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DailyChallengeID;                                          // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WeeklyChallengeID;                                         // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventStore_CurrencySpend
// 0x0088 (0x0090 - 0x0008)
struct FTigerTelemetryEventStore_CurrencySpend : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q05B[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                   // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StoreEntryID;                                              // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Count;                                                     // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencyType;                                              // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Price;                                                     // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DiscountedPrice;                                           // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalDiscountedPrice;                                      // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OUOY[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventStore_FlashStorePurchase
// 0x00A8 (0x00B0 - 0x0008)
struct FTigerTelemetryEventStore_FlashStorePurchase : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1M5M[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                   // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StoreEntryID;                                              // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StoreEntryName;                                            // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencyType;                                              // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Price;                                                     // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DiscountPrice;                                             // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DiscountTotalPrice;                                        // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DiscountTimeLeft;                                          // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NY1F[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LocalizedStoreEntryName;                                   // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventStore_PremiumCurrencyIncrease
// 0x00D8 (0x00E0 - 0x0008)
struct FTigerTelemetryEventStore_PremiumCurrencyIncrease : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WQVF[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientIP;                                                  // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencySource;                                            // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TI6I[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PremiumCurrencyBefore;                                     // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PremiumCurrencyAfter;                                      // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                IncreasedPremiumCurrency;                                  // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_897T[0x4];                                     // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CurrencyPackID;                                            // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OriginalCurrencyPackPrice;                                 // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DiscountedCurrencyPackPrice;                               // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerPayCurrency;                                         // 0x00C0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PurchasingPlatform;                                        // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventStore_FlashStoreRefresh
// 0x0080 (0x0088 - 0x0008)
struct FTigerTelemetryEventStore_FlashStoreRefresh : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KFXQ[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientIP;                                                  // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                   // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     StoreEntryList;                                            // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventStore_BattlepassPurchase
// 0x0080 (0x0088 - 0x0008)
struct FTigerTelemetryEventStore_BattlepassPurchase : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z1IW[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BattlepassType;                                            // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OriginalBattlepassPrice;                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DiscountedBattlepassPrice;                                 // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BattlepassLevelAtPurchase;                                 // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                BattlepassLevelAfterPurchase;                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AccountLevelAtPurchase;                                    // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                   // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Season;                                                    // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SeasonDay;                                                 // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventStore_ItemExit
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventStore_ItemExit : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_88MJ[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventStore_ItemPreview
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventStore_ItemPreview : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9NXT[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventStore_Exit
// 0x0050 (0x0058 - 0x0008)
struct FTigerTelemetryEventStore_Exit : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_88X7[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventStore_Preview
// 0x0050 (0x0058 - 0x0008)
struct FTigerTelemetryEventStore_Preview : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SU22[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ScourgeDashUse
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventMatchSession_ScourgeDashUse : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NSTI[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameAppid;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalDistanceScourgeDashed;                                // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4XCO[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ScourgeDashStartLocation;                                  // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ScourgeDashEndLocation;                                    // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DidDamageTarget;                                           // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W4NW[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_KatanaReflectUse
// 0x0040 (0x0048 - 0x0008)
struct FTigerTelemetryEventMatchSession_KatanaReflectUse : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZPWW[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalTimeInKatanaReflectState;                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalDamageNullified;                                      // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_MeleeWeaponUse
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventMatchSession_MeleeWeaponUse : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PFGY[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DurationMeleeWeaponHeldFor;                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfTimesMeleeWeaponDrawn;                             // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfAttacksWithMeleeWeapon;                            // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfHitsWithMeleeWeapon;                               // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalDamageDoneWithMeleeWeapon;                            // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalNumberOfDownsWithMeleeWeapon;                         // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalNumberOfKillsWithMeleeWeapon;                         // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EMFG[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_RangedWeaponUse
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventMatchSession_RangedWeaponUse : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UMJ9[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfRangedHits;                                        // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfRangedShots;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageDealtWithWeapon;                                     // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                EnemiesDownedWithWeapon;                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfTimesOutOfAmmoWithWeapon;                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberHeadshotsWithWeapon;                                 // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerPings
// 0x0058 (0x0060 - 0x0008)
struct FTigerTelemetryEventMatchSession_PlayerPings : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M9B0[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PingType;                                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M5CH[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PingTarget;                                                // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AgreementsReceived;                                        // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CauseOfPingRemoval;                                        // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerRedGasStats
// 0x0040 (0x0048 - 0x0008)
struct FTigerTelemetryEventMatchSession_PlayerRedGasStats : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9B4T[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalTimeInRedGas;                                         // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalTimeInRedGasWithStimulant;                            // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_EndPlayerMasquerad
// 0x0050 (0x0058 - 0x0008)
struct FTigerTelemetryEventMatchSession_EndPlayerMasquerad : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MMXS[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalTimeBloodHunted;                                      // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalBloodHuntsByFeeding;                                  // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalBloodHuntsByKilling;                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalNumberAreaMarkerConsequences;                         // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalNumberMapMarkerConsequences;                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NCCW[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerTraversal
// 0x0078 (0x0080 - 0x0008)
struct FTigerTelemetryEventMatchSession_PlayerTraversal : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MPOP[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalMoveDistance;                                         // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WalkingDistance;                                           // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DisciplineTravelDistance;                                  // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CrouchingTime;                                             // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClimbingTime;                                              // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TimeInside;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WallHangTime;                                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WallGrindTime;                                             // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SlideTime;                                                 // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AirTime;                                                   // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NotMovingTime;                                             // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalJumps;                                                // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalWallJumps;                                            // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalSlideJumps;                                           // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalLedgeGrabs;                                           // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalLowVaults;                                            // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerMetaChange
// 0x0048 (0x0050 - 0x0008)
struct FTigerTelemetryEventMatchSession_PlayerMetaChange : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XCAS[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SeasonExperienceGained;                                    // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SeasonLevelBeforeChange;                                   // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SeasonLevelAfterChange;                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LRMM[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_EndPlayerResults
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventMatchSession_EndPlayerResults : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KBXL[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerQuitBeforeEnd;                                       // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KillCount;                                                 // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AssistCount;                                               // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalSurvivalTime;                                         // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberOfAlliedRevives;                                     // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalAmountOfHealing;                                      // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalNumberOfHealingEvents;                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalFeedingAbortsByDamage;                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalFeedingAbortsByPlayer;                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VSCC[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerRankChanges
// 0x0078 (0x0080 - 0x0008)
struct FTigerTelemetryEventMatchSession_PlayerRankChanges : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y46Z[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerResult;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamRank;                                                  // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChangedKillRatingValue;                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KillRatingValueAfterChanged;                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ChangedWinRatingValue;                                     // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                WinRatingValueAfterChanged;                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PreviousRankedBracket;                                     // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     NewRankedBracket;                                          // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TotalPoint;                                                // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RatingLevel;                                               // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_EndGameEvent
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventMatchSession_EndGameEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5JB0[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BattleID;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     WinningPlayerID;                                           // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SeasonId;                                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M5LE[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ClanID;                                                    // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ArchetypeId;                                               // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_DamageEvents
// 0x0098 (0x00A0 - 0x0008)
struct FTigerTelemetryEventMatchSession_DamageEvents : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HXXL[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BattleID;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UinSource;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     UinTarget;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DamageCauseID;                                             // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageDone;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KilledTarget;                                              // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                KnockedDownTarget;                                         // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CZOP[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     TargetDamageLocation;                                      // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SourceDamageLocation;                                      // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TargetWasBloodHunted;                                      // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageEventWasHeadshot;                                    // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             DamageTypeID;                                              // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8_t                                             SourceType;                                                // 0x0099(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8_t                                             TargetType;                                                // 0x009A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_E7WD[0x5];                                     // 0x009B(0x0005) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ItemConsumption
// 0x0048 (0x0050 - 0x0008)
struct FTigerTelemetryEventMatchSession_ItemConsumption : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2BFX[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_DisciplineUse
// 0x0050 (0x0058 - 0x0008)
struct FTigerTelemetryEventMatchSession_DisciplineUse : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D0BF[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DisciplinesUseLocation;                                    // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             DisciplineID;                                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_4VVO[0x7];                                     // 0x0051(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ItemDrop
// 0x0060 (0x0068 - 0x0008)
struct FTigerTelemetryEventMatchSession_ItemDrop : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IIKH[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemDropQuantity;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E30B[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DropLocation;                                              // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_ItemPickups
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventMatchSession_ItemPickups : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3ITL[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ItemId;                                                    // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemPickUpQuantity;                                        // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KXET[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PickUpLocation;                                            // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemSourceID;                                              // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PVIQ[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_PlayerStart
// 0x0090 (0x0098 - 0x0008)
struct FTigerTelemetryEventMatchSession_PlayerStart : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_69W4[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DXUG[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LeaderID;                                                  // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0058(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SquadNum;                                                  // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Q1OH[0x4];                                     // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     SquadMembers;                                              // 0x0070(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SpawnLocation;                                             // 0x0080(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MatchMakingID;                                             // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             ClanID;                                                    // 0x0094(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8_t                                             ArchetypeId;                                               // 0x0095(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_JHWR[0x2];                                     // 0x0096(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchSession_MatchData
// 0x0098 (0x00A0 - 0x0008)
struct FTigerTelemetryEventMatchSession_MatchData : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4QHV[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3URU[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ClientVersion;                                             // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamSize;                                                  // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPlayers;                                                // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumBots;                                                   // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TS5H[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ItemTypeAmounts;                                           // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerArchetypesAmounts;                                   // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SafeZoneLocations;                                         // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumberofTeams;                                             // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             GameplayMode;                                              // 0x009C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8_t                                             RankMode;                                                  // 0x009D(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8_t                                             MapID;                                                     // 0x009E(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_RB9X[0x1];                                     // 0x009F(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventServerDelay
// 0x0088 (0x0090 - 0x0008)
struct FTigerTelemetryEventServerDelay : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EAJD[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AXY9[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ClientVersion;                                             // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     BattleID;                                                  // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NXXL[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameAppid;                                                 // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NetworkType;                                               // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UploadSeq;                                                 // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AvgDelay;                                                  // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxDelay;                                                  // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinDelay;                                                  // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OutPacketLossPercent;                                      // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                InPacketLossPercent;                                       // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_2NZO[0x4];                                     // 0x008C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventServerLog
// 0x0050 (0x0058 - 0x0008)
struct FTigerTelemetryEventServerLog : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_10HP[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Country;                                                   // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameSvrId;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OnlineCountPC;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OnlineCountPS;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OnlineCountXbox;                                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                UserCount;                                                 // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SB7Q[0x4];                                     // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameAppid;                                                 // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchMaking_Cancelled
// 0x0030 (0x0038 - 0x0008)
struct FTigerTelemetryEventMatchMaking_Cancelled : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z6QT[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MatchMakingID;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             CancelReason;                                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_I1H3[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchMaking_Succeeded
// 0x0028 (0x0030 - 0x0008)
struct FTigerTelemetryEventMatchMaking_Succeeded : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_M9KM[0x3];                                     // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MatchMakingID;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventMatchMaking_BattleInfo
// 0x0078 (0x0080 - 0x0008)
struct FTigerTelemetryEventMatchMaking_BattleInfo : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XQ2O[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     LeaderID;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                TeamSize;                                                  // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                NumPremadeMembers;                                         // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MatchMakingID;                                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerELO;                                                 // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0068(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             ClanID;                                                    // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8_t                                             ArchetypeId;                                               // 0x0079(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8_t                                             GameplayMode;                                              // 0x007A(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8_t                                             RankMode;                                                  // 0x007B(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int8_t                                             MapID;                                                     // 0x007C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_24HS[0x3];                                     // 0x007D(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventPlayerLogout
// 0x00B0 (0x00B8 - 0x0008)
struct FTigerTelemetryEventPlayerLogout : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0GWV[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_U2MA[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G5C2[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ClientIP;                                                  // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                OnlineTime;                                                // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayTime;                                                  // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LoginWay;                                                  // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SMFriendsNum;                                              // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatformFriendsNum;                                        // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientLanguage;                                            // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                   // 0x0098(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OperatingSys;                                              // 0x00A8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventPlayerLogin
// 0x0108 (0x0110 - 0x0008)
struct FTigerTelemetryEventPlayerLogin : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_TYQW[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameAppid;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9MF2[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NA86[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ClientIP;                                                  // 0x0040(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LoginWay;                                                  // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SMFriendsNum;                                              // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatformFriendsNum;                                        // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientVersion;                                             // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            ScreenWidth;                                               // 0x0070(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16_t                                            ScreenHeight;                                              // 0x0072(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LLXE[0x4];                                     // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     CpuHardware;                                               // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientIPV6;                                                // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DeviceType;                                                // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PQJR[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     OperatingSys;                                              // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DeviceModel;                                               // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SysRAM;                                                    // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                VRAM;                                                      // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     VideoCard;                                                 // 0x00C8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Microphone;                                                // 0x00D8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AvlHardDiskSpace;                                          // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AllHardDiskSpace;                                          // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientLanguage;                                            // 0x00F0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                   // 0x0100(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventPlayerRegister
// 0x0068 (0x0070 - 0x0008)
struct FTigerTelemetryEventPlayerRegister : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E33I[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameAppid;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CHKH[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ClientIP;                                                  // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RegWay;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LRV9[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     ClientVersion;                                             // 0x0050(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Country;                                                   // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventGameServerState
// 0x0040 (0x0048 - 0x0008)
struct FTigerTelemetryEventGameServerState : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5YN7[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            AreaId;                                                    // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerIP;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameAppid;                                                 // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerDamageProcessEvent
// 0x0148 (0x0150 - 0x0008)
struct FTigerTelemetryEventAcePlayerDamageProcessEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FIOH[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BattleID;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapID;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankMode;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FCF1[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XTMP[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            ZoneId;                                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5EQ2[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                             // 0x0070(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W7NX[0x2];                                     // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumPlayers;                                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                              // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GQPM[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     rolename;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4HQG[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     team_id;                                                   // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Index;                                                     // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZT6W[0x4];                                     // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     attacker_player_position;                                  // 0x00B8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            attacker_weapon_id;                                        // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           attacker_weapon_type;                                      // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JF1Y[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     attacker_player_direction;                                 // 0x00D8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           attacker_blood_left;                                       // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L6YI[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     victim_Uin;                                                // 0x00F0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           victim_account_type_;                                      // 0x0100(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OK4A[0x6];                                     // 0x0102(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     victim_player_position;                                    // 0x0108(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     visible_body_part;                                         // 0x0118(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           victim_blood_left;                                         // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_551V[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            hit_part;                                                  // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            DamageCauseID;                                             // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageTypeID;                                              // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DamageDone;                                                // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      death_type;                                                // 0x0148(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9ZBY[0x7];                                     // 0x0149(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerChangeWeaponEvent
// 0x00B8 (0x00C0 - 0x0008)
struct FTigerTelemetryEventAcePlayerChangeWeaponEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DG0L[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BattleID;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapID;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankMode;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H3SR[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FZMJ[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            ZoneId;                                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_1H8G[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                             // 0x0070(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0CE8[0x2];                                     // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumPlayers;                                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                              // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P4H9[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     rolename;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SI3H[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     team_id;                                                   // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            ori_weapon;                                                // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            dst_weapon;                                                // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerRebornEvent
// 0x00B0 (0x00B8 - 0x0008)
struct FTigerTelemetryEventAcePlayerRebornEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NJPJ[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BattleID;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapID;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankMode;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N16V[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DU57[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            ZoneId;                                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8039[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                             // 0x0070(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9KC9[0x2];                                     // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumPlayers;                                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                              // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AGKT[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     rolename;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B0VH[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     team_id;                                                   // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      rebirth_type;                                              // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JDVF[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerReportCrimeEvent
// 0x00A8 (0x00B0 - 0x0008)
struct FTigerTelemetryEventAcePlayerReportCrimeEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LIE4[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BattleID;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapID;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankMode;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H7J4[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Z2CC[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            ZoneId;                                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HPIH[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                             // 0x0070(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8YX7[0x6];                                     // 0x0072(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     reported_Uin;                                              // 0x0078(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           reported_account_type_;                                    // 0x0088(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N42B[0x6];                                     // 0x008A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     report_type;                                               // 0x0090(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     report_reason;                                             // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventAceBulletShotEvent
// 0x0110 (0x0118 - 0x0008)
struct FTigerTelemetryEventAceBulletShotEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AS89[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BattleID;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapID;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankMode;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YNJ9[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_Y06W[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            ZoneId;                                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DIWN[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                             // 0x0070(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EHZW[0x2];                                     // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumPlayers;                                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                              // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FL68[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     rolename;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_19HH[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     team_id;                                                   // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            shot_id;                                                   // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            weapon_id;                                                 // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           weapon_type;                                               // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BP6G[0x4];                                     // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     player_position;                                           // 0x00C8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     attacker_player_direction;                                 // 0x00D8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      bullets_cost;                                              // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GH65[0x1];                                     // 0x00E9(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint16_t                                           bullets_left;                                              // 0x00EA(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_63M0[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     victim_player_position;                                    // 0x00F0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     shot_dst_position;                                         // 0x0100(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      hit_part;                                                  // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3YCP[0x7];                                     // 0x0111(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerDieEvent
// 0x0110 (0x0118 - 0x0008)
struct FTigerTelemetryEventAcePlayerDieEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MBF2[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BattleID;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapID;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankMode;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X8AJ[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B5LZ[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            ZoneId;                                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_V9IZ[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                             // 0x0070(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GC7J[0x2];                                     // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumPlayers;                                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                              // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3ZQ6[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     rolename;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L1RL[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     team_id;                                                   // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     victim_player_position;                                    // 0x00B0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            victim_weapon_id;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           victim_weapon_type;                                        // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           victim_blood_left;                                         // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     attacker_Uin;                                              // 0x00D0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           attacker_account_type_;                                    // 0x00E0(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_492Q[0x6];                                     // 0x00E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     attacker_player_position;                                  // 0x00E8(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            attacker_weapon_id;                                        // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           attacker_weapon_type;                                      // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           attacker_blood_left;                                       // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      hit_part;                                                  // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JQWZ[0x7];                                     // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            die_reason;                                                // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerGameSummaryEvent2
// 0x00C0 (0x00C8 - 0x0008)
struct FTigerTelemetryEventAcePlayerGameSummaryEvent2 : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3OUD[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BattleID;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapID;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankMode;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OXEK[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5HJ6[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            ZoneId;                                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VXT1[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                             // 0x0070(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_02VW[0x2];                                     // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumPlayers;                                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                              // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UJR5[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     rolename;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QZOC[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     team_id;                                                   // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Duration;                                                  // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           rank;                                                      // 0x00B4(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           NumberOfRangedShots;                                       // 0x00B6(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           NumberOfRangedHits;                                        // 0x00B8(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_D4QE[0x2];                                     // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                KillCount;                                                 // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           death_num;                                                 // 0x00C0(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NS51[0x2];                                     // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AssistCount;                                               // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerGameSummaryEvent
// 0x00D0 (0x00D8 - 0x0008)
struct FTigerTelemetryEventAcePlayerGameSummaryEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R44G[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BattleID;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapID;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankMode;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UGAE[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RV0G[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            ZoneId;                                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PA0Q[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                             // 0x0070(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_49EU[0x2];                                     // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumPlayers;                                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                              // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7YWZ[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     rolename;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ICGB[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     team_id;                                                   // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             Result;                                                    // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0ESC[0x3];                                     // 0x00B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                Duration;                                                  // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           rank;                                                      // 0x00B8(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_22K6[0x2];                                     // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                KillCount;                                                 // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           death_num;                                                 // 0x00C0(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7PCO[0x2];                                     // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                AssistCount;                                               // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           Score;                                                     // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Bonus;                                                     // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Experience;                                                // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_INO5[0x4];                                     // 0x00D4(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerDisconnectEvent
// 0x0098 (0x00A0 - 0x0008)
struct FTigerTelemetryEventAcePlayerDisconnectEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NK33[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BattleID;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapID;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankMode;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IE8S[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_99NM[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            ZoneId;                                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CXOX[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                             // 0x0070(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_03SP[0x2];                                     // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumPlayers;                                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                              // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_J00A[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     rolename;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      disconnect_flag;                                           // 0x0098(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_OD70[0x7];                                     // 0x0099(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventAcePlayerConnectEvent
// 0x00C8 (0x00D0 - 0x0008)
struct FTigerTelemetryEventAcePlayerConnectEvent : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8QY2[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     BattleID;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MapID;                                                     // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                GameplayMode;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                RankMode;                                                  // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           game_id_;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlatID;                                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RUOI[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSvrId;                                                 // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                AreaId;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9C3L[0x4];                                     // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            ZoneId;                                                    // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           channel_id;                                                // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3ANK[0x4];                                     // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Uin;                                                       // 0x0060(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           account_type_;                                             // 0x0070(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_R4QX[0x2];                                     // 0x0072(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                NumPlayers;                                                // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            role_id_;                                                  // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      rolename_len;                                              // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7JTR[0x7];                                     // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     rolename;                                                  // 0x0088(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Level;                                                     // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_O7D6[0x4];                                     // 0x009C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     team_id;                                                   // 0x00A0(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8_t                                             Gender;                                                    // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CWR7[0x7];                                     // 0x00B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            Experience;                                                // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            money;                                                     // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      connect_flag;                                              // 0x00C8(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_96YJ[0x7];                                     // 0x00C9(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventPlayerRevived
// 0x0030 (0x0038 - 0x0008)
struct FTigerTelemetryEventPlayerRevived : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LEVH[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     Location;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerId;                                                  // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                was_helped;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6PHO[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryEventPlayerDied
// 0x0038 (0x0040 - 0x0008)
struct FTigerTelemetryEventPlayerDied : public FSharkTelemetryEventBase
{
	struct FSharkTelemetryDateTime                     dtEventTime;                                               // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7GOT[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     player_location;                                           // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     damage_causer;                                             // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     damage_reason;                                             // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryIDExportArray
// 0x0001
struct FTigerTelemetryIDExportArray
{
	unsigned char                                      UnknownData_U5M7[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryIDExportData
// 0x0001
struct FTigerTelemetryIDExportData
{
	unsigned char                                      UnknownData_LEE1[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerThrallMissionTableRow
// 0x0008 (0x0010 - 0x0008)
struct FTigerThrallMissionTableRow : public FTableRowBase
{
	class UTigerThrallMission*                         Mission;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerThrallAbilityTableRow
// 0x0010 (0x0018 - 0x0008)
struct FTigerThrallAbilityTableRow : public FTableRowBase
{
	Tiger_ETigerThrallAbilityId                        AbilityId;                                                 // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5DM3[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTexture2D*                                  AbilityIcon;                                               // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerOnlineErrorCode
// 0x0008
struct FTigerOnlineErrorCode
{
	Tiger_ETigerOnlineErrorCategory                    Category;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WAEG[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ID;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerOnlineStatusMessageEntry
// 0x0020
struct FTigerOnlineStatusMessageEntry
{
	struct FTigerOnlineErrorCode                       ErrorCode;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FText                                       Message;                                                   // 0x0008(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformableCorner
// 0x0040
struct FTigerRoofSystemFreeTransformableCorner
{
	class UPoseableMeshComponent*                      CornerComponent;                                           // 0x0000(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                        StaticComponent;                                           // 0x0008(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UProceduralMeshComponent*                    CollisionComponent;                                        // 0x0010(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     TopBoneLocation;                                           // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     LeftBoneLocation;                                          // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RightBoneLocation;                                         // 0x0030(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MFLG[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerItemPreviewData
// 0x0018
struct FTigerItemPreviewData
{
	class UClass*                                      PreviewActorClass;                                         // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UClass*>                              ItemClasses;                                               // 0x0008(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerThrallMissionMapMarker
// 0x0018
struct FTigerThrallMissionMapMarker
{
	struct FVector2D                                   Position;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                                  Icon;                                                      // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   Size;                                                      // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerThrallMissionObjective
// 0x0038
struct FTigerThrallMissionObjective
{
	Tiger_ETigerMissionType                            MissionType;                                               // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VTXV[0x3];                                     // 0x0000(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	Tiger_ETigerMissionObjectiveType                   ObjectiveType;                                             // 0x0004(0x0001) ELEMENT_SIZE_MISMATCH (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_E58S[0x3];                                     // 0x0004(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	struct FName                                       ObjectiveName;                                             // 0x0008(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ObjectiveDescription;                                      // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<Tiger_ETigerThrallStatId>                   SuccessStatIds;                                            // 0x0020(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                PercentReductionIfDiscovered;                              // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MF39[0x4];                                     // 0x0034(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerBloodHuntPositionWrapper
// 0x0018
struct FTigerBloodHuntPositionWrapper
{
	class ATigerPlayerState*                           PlayerState;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                         WorldPosition;                                             // 0x0008(0x000C) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_74KI[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerMeleeWeaponAttackData
// 0x0040 (0x0048 - 0x0008)
struct FTigerMeleeWeaponAttackData : public FTableRowBase
{
	float                                              SwingDepth;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SwingOffsetX;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SwingOffsetY;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SwingOffsetZ;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SwingDamageAmount;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   FlinchStrengthMin;                                         // 0x001C(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   FlinchStrengthMax;                                         // 0x0024(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AimAssistConeAngle;                                        // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AimAssistConeLength;                                       // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              StopAimAssistTime;                                         // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              EnableMeleeRecoveryMoveTime;                               // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CanStartNextAttackTime;                                    // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WorldStaticCollisionRadius;                                // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              WorldStaticCollisionHalfHeight;                            // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerMeleeAimAssistData
// 0x0008
struct FTigerMeleeAimAssistData
{
	float                                              ConeAngle;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConeLength;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerMeleeAimAssistCandidate
// 0x0028
struct FTigerMeleeAimAssistCandidate
{
	class ATigerCharacter*                             TigerCharacter;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PredictedLocation;                                         // 0x0008(0x000C) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCanSweepToPredictedLocation;                              // 0x0014(0x0001) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsKindred;                                                // 0x0015(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4D5W[0x2];                                     // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              DistanceFromCrosshair;                                     // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DistanceFromPlayerSquared;                                 // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngleFromPlayer;                                           // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A8GH[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerMeleeFlinchData
// 0x0018
struct FTigerMeleeFlinchData
{
	class UCurveFloat*                                 HorizontalFlinch;                                          // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCurveFloat*                                 VerticalFlinch;                                            // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              HorizontalStrength;                                        // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              VerticalStrength;                                          // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerMultiplayMetaData
// 0x0008
struct FTigerMultiplayMetaData
{
	bool                                               FakeMatchmakingEnabled;                                    // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RB2E[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                BuildChangeList;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerMultiplayServerInfo
// 0x0010
struct FTigerMultiplayServerInfo
{
	struct FString                                     SessionId;                                                 // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_MultiplayDeallocate
// 0x0020
struct FTigerRequest_MultiplayDeallocate
{
	struct FString                                     FleetId;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     GameSessionId;                                             // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_MultiplayHeartbeat
// 0x0008 (0x0020 - 0x0018)
struct FTigerResponse_MultiplayHeartbeat : public FTigerResponseEnvelope
{
	bool                                               IsDraining;                                                // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               ShouldForceStop;                                           // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_P0DF[0x6];                                     // 0x001A(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRequest_MultiplayHeartbeat
// 0x0028
struct FTigerRequest_MultiplayHeartbeat
{
	struct FString                                     GameSessionId;                                             // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerCount;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X6XC[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     MetaData;                                                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPingServerConfig
// 0x0018
struct FTigerPingServerConfig
{
	struct FString                                     PingServerIpV4;                                            // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16_t                                           PingServerPort;                                            // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5BL4[0x6];                                     // 0x0012(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerResponse_GetCharacter
// 0x0020 (0x0038 - 0x0018)
struct FTigerResponse_GetCharacter : public FTigerResponseEnvelope
{
	struct FTigerResponse_Character                    Character;                                                 // 0x0018(0x0020) (NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPingWrapper
// 0x0020
struct FTigerPingWrapper
{
	class UTigerPingClientData*                        ClientData;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTigerPingWorldInstanceUI*                   InnerWidget;                                               // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTigerPingMarkerProxy*                       MapMarkerProxy;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_3EYG[0x8];                                     // 0x0018(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerUniquePingId
// 0x0004
struct FTigerUniquePingId
{
	uint32_t                                           Value;                                                     // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPingCoordinatorEntry
// 0x0048
struct FTigerPingCoordinatorEntry
{
	struct FTigerUniquePingId                          UniqueID;                                                  // 0x0000(0x0004) (Transient, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4KC2[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UClass*                                      PingClass;                                                 // 0x0008(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class AActor>                       ContextActor;                                              // 0x0010(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataAsset*                                  ContextObject;                                             // 0x0018(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      TelemetryTypeId;                                           // 0x0020(0x0001) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZFFF[0x27];                                    // 0x0021(0x0027) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPingWorldNetData
// 0x0010 (0x0028 - 0x0018)
struct FTigerPingWorldNetData : public FTigerPingNotificationNetData
{
	struct FVector                                     WorldLocation;                                             // 0x0018(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7VJB[0x4];                                     // 0x0024(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerCompressedRotation
// 0x0002
struct FTigerCompressedRotation
{
	unsigned char                                      Yaw;                                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Pitch;                                                     // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerNpcThatCanSeePlayerWrapper
// 0x0018
struct FTigerNpcThatCanSeePlayerWrapper
{
	unsigned char                                      UnknownData_UWII[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerNpcThatCanSeePlayerWrapper_Client
// 0x000C
struct FTigerNpcThatCanSeePlayerWrapper_Client
{
	TWeakObjectPtr<class ATigerBaseNPC>                NPC;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LastTimeReactingToPlayerAction;                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerClanPassiveAndDefault
// 0x0010
struct FTigerClanPassiveAndDefault
{
	class UActorComponent*                             PassiveLogic;                                              // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTigerPassiveConfig*                         PassiveConfig;                                             // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerHandIkData
// 0x0028
struct FTigerHandIkData
{
	struct FName                                       HandBoneName;                                              // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     HandLocation;                                              // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ToWallDistance;                                            // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTraceSuccessful;                                          // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G6W4[0xF];                                     // 0x0019(0x000F) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerHandIkWallTraceData
// 0x0058
struct FTigerHandIkWallTraceData
{
	struct FTigerHandIkData                            RightHandIkData;                                           // 0x0000(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FTigerHandIkData                            LeftHandIkData;                                            // 0x0028(0x0028) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	TEnumAsByte<Engine_ETraceTypeQuery>                InTraceChannel;                                            // 0x0050(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_63WX[0x3];                                     // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TraceLength;                                               // 0x0054(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerAnimMetaData
// 0x0018
struct FTigerAnimMetaData
{
	class UAnimMontage*                                Montage;                                                   // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMetaData*                               MetaData;                                                  // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              BlendWeight;                                               // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerAnimBlendState                         BlendState;                                                // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DBXH[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPlayerAnimationSets
// 0x0018
struct FTigerPlayerAnimationSets
{
	class UTigerAnimationSetAsset*                     AnimationSetByClan[0x3];                                   // 0x0000(0x0018) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPlayerGridCell
// 0x0030
struct FTigerPlayerGridCell
{
	TArray<int>                                        CellIndexOffsets;                                          // 0x0000(0x0010) (Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FVector2D                                   WorldPosition;                                             // 0x0010(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayersInCellArea;                                         // 0x0018(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ClosestPlayerCellDistance;                                 // 0x001C(0x0004) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TWeakObjectPtr<class ATigerPlayer>>         PlayersInCell;                                             // 0x0020(0x0010) (Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.StaticPhysicsPiercingData
// 0x0050
struct FStaticPhysicsPiercingData
{
	class UStaticMeshComponent*                        PiercingStaticMesh;                                        // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     PreviousLocation;                                          // 0x0008(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_N4F3[0xC];                                     // 0x0014(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTransform                                  CachedRelativeTransform;                                   // 0x0020(0x0030) (IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRegionConfig
// 0x0030
struct FTigerRegionConfig
{
	struct FString                                     RegionName;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     RegionId;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTigerPingServerConfig>              PingServers;                                               // 0x0020(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRegionsConfigResponse
// 0x0010 (0x0028 - 0x0018)
struct FTigerRegionsConfigResponse : public FTigerResponseEnvelope
{
	TArray<struct FTigerRegionConfig>                  AvailableRegions;                                          // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerItemNotification
// 0x0028
struct FTigerItemNotification
{
	class UTigerItemAsset*                             Item;                                                      // 0x0000(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ItemCount;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5RZC[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FText                                       OverrideName;                                              // 0x0010(0x0018) (BlueprintVisible, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_UpdateSeasonProgress
// 0x0060 (0x0078 - 0x0018)
struct FTigerResponse_UpdateSeasonProgress : public FTigerResponseEnvelope
{
	uint32_t                                           OldSeasonExp;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           NewSeasonExp;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           OldSeasonLevel;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           NewSeasonLevel;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FTigerResponse_GenericExp> NewGenericExps;                                            // 0x0028(0x0050) (NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerSubLevelBackground
// 0x0030
struct FTigerSubLevelBackground
{
	struct FSoftObjectPath                             SubLevel;                                                  // 0x0000(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       UiName;                                                    // 0x0018(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPostProcessSettingsSetup
// 0x0010
struct FTigerPostProcessSettingsSetup
{
	TArray<class UMaterialInterface*>                  PostProcessMaterials;                                      // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPersistentPlayerData
// 0x01C0
struct FTigerPersistentPlayerData
{
	struct FTigerQuestPersistentProgress               QuestProgress;                                             // 0x0000(0x0050) (NativeAccessSpecifierPublic)
	struct FTigerDailyChallengePersistentProgress      DailyChallengeProgress;                                    // 0x0050(0x0058) (NativeAccessSpecifierPublic)
	struct FTigerWeeklyChallengePersistentProgress     WeeklyChallengeProgress;                                   // 0x00A8(0x0060) (NativeAccessSpecifierPublic)
	struct FTigerPersistentSeasonMatchStats            SeasonMatchStats;                                          // 0x0108(0x0020) (NativeAccessSpecifierPublic)
	int                                                MatchesPlayed;                                             // 0x0128(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4YIB[0x4];                                     // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<int>                                        MatchesPlayedPerArchetype;                                 // 0x0130(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTigerGrimoireEntryStatusStruct>     GrimoireEntries;                                           // 0x0140(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int>                                        ReadDialogues;                                             // 0x0150(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTigerPersistentThrallData>          PersistentThrallData;                                      // 0x0160(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTigerPersistentMissionData>         PersistentThrallMissions;                                  // 0x0170(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTigerPersistentCollectibleData>     PersistentCollectibleData;                                 // 0x0180(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                SharedThrallExp;                                           // 0x0190(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HVXJ[0x4];                                     // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTigerSuggestedArticlesData                 GrimoireSuggestedArticlesData;                             // 0x0198(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FTigerReadDialogueCategoryWrapper>   ReadDialogueCategoriesContainer;                           // 0x01B0(0x0010) (ZeroConstructor, NativeAccessSpecifierPrivate)

};

// ScriptStruct Tiger.TigerPersistentInventoryItem
// 0x0030
struct FTigerPersistentInventoryItem
{
	unsigned char                                      ItemClassPath[0x28];                                       // 0x0000(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	int                                                Count;                                                     // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A79L[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPersistentArchetypeTransactionalData
// 0x0010
struct FTigerPersistentArchetypeTransactionalData
{
	int64_t                                            ArchetypeLevel;                                            // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            ArchetypeLevelExp;                                         // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPersistentPlayerTransactionalData
// 0x0068
struct FTigerPersistentPlayerTransactionalData
{
	int64_t                                            SeasonId;                                                  // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            SeasonLevel;                                               // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64_t                                            SeasonLevelExp;                                            // 0x0010(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SeasonPlacementExpBonusPercentage;                         // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_AWRK[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTigerPersistentInventoryItem>       InventoryItems;                                            // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTigerPersistentOutfitSetup>         Outfits;                                                   // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTigerPersistentArchetypeTransactionalData> ArchetypeData;                                             // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                              Rating;                                                    // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XM72[0x4];                                     // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int64_t                                            PremiumCurrencyBalance;                                    // 0x0058(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CYOI[0x8];                                     // 0x0060(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerMuteInfo
// 0x0018
struct FTigerMuteInfo
{
	bool                                               bIsMuted;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Reason;                                                    // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KGIT[0x6];                                     // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     EndsAt;                                                    // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerLoginQueueToken
// 0x0010
struct FTigerLoginQueueToken
{
	struct FString                                     Content;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerMetaStoreBuyPayload
// 0x0018
struct FTigerMetaStoreBuyPayload
{
	TArray<struct FTigerMetaStoreBuyPayloadElement>    EntriesToBuy;                                              // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	uint32_t                                           TotalCost;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_QM4K[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerNpcReactionEvent
// 0x0018
struct FTigerNpcReactionEvent
{
	float                                              Intensity;                                                 // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerAIMasqueradeState                      PreState;                                                  // 0x0004(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerAIMasqueradeState                      PostState;                                                 // 0x0005(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CHLO[0x2];                                     // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     EventLocation;                                             // 0x0008(0x000C) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsVisual;                                                 // 0x0014(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_PJWJ[0x3];                                     // 0x0015(0x0003) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRewardWithQuantity
// 0x0010
struct FTigerRewardWithQuantity
{
	struct FTigerItemId                                ItemId;                                                    // 0x0000(0x0008) (NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Quantity;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5A9F[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRewardsCollection
// 0x0020
struct FTigerRewardsCollection
{
	TArray<struct FTigerRewardWithQuantity>            InventoryRewards;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	int                                                PremiumCurrency;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SeasonExp;                                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ArchetypeExp;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SeasonPlacementExpBoostPercentage;                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerGrimoireCardColorRow
// 0x0008 (0x0010 - 0x0008)
struct FTigerGrimoireCardColorRow : public FTableRowBase
{
	struct FCoreUObject_FColor                         Color;                                                     // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B5CJ[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerBpFindSessionSelectedSession
// 0x0110
struct FTigerBpFindSessionSelectedSession
{
	unsigned char                                      UnknownData_0LTC[0x110];                                   // 0x0000(0x0110) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerSignificancePlayerBucket
// 0x0014
struct FTigerSignificancePlayerBucket
{
	int                                                BucketSize;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TickRate;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MoveCompTickRate;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           VisibleMeshesBitMask;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableClothSim;                                           // 0x0010(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableFootIk;                                             // 0x0011(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H5UM[0x2];                                     // 0x0012(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerSignificanceElysiumNpcBucket
// 0x0010
struct FTigerSignificanceElysiumNpcBucket
{
	int                                                BucketSize;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TickRate;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32_t                                           VisibleMeshesBitMask;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bForceLastLod;                                             // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bEnableClothSim;                                           // 0x000D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DKM7[0x2];                                     // 0x000E(0x0002) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerSignificanceBudget
// 0x0040
struct FTigerSignificanceBudget
{
	TArray<struct FTigerSignificancePlayerBucket>      PlayerBuckets;                                             // 0x0000(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTigerSignificanceElysiumNpcBucket>  ElysiumNpcBuckets;                                         // 0x0010(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      PlayerUroScreenSizeThresholds;                             // 0x0020(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                      NpcUroScreenSizeThresholds;                                // 0x0030(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerDesiredSpawnLocation
// 0x0020
struct FTigerDesiredSpawnLocation
{
	class ATigerPlayerController*                      PlayerController;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                      AssignedSpawnPoint;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_8FEB[0x10];                                    // 0x0010(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerClientSpawnLocationInfo
// 0x0010
struct FTigerClientSpawnLocationInfo
{
	class ATigerPlayerState*                           PlayerState;                                               // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                                   DesiredSpawnLocation;                                      // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.ThrallMissionRequirements
// 0x0018
struct FThrallMissionRequirements
{
	int                                                MinRequiredThalls;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxRequiredThralls;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerThrallStats                           TotalRequiredStats;                                        // 0x0008(0x0010) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_FriendInvites
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_FriendInvites : public FTigerResponseEnvelope
{
	TArray<struct FTigerFriendServiceFriend>           Invites;                                                   // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerMatchStats
// 0x0098
struct FTigerMatchStats
{
	struct FTigerPlayerMatchStats                      PlayerMatchStats;                                          // 0x0000(0x0038) (BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTigerPlayerMatchMetaStats                  OwnPlayerStats;                                            // 0x0038(0x0038) (BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FTigerProgressedChallengeWrapper>    ProgressedChallenges;                                      // 0x0070(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	unsigned char                                      InitialGroupCount;                                         // 0x0080(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerGroupingMode                           GROUPINGMODE;                                              // 0x0081(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_H3AE[0x2];                                     // 0x0082(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGuid                                       MatchID;                                                   // 0x0084(0x0010) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NZ09[0x4];                                     // 0x0094(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerClientCategoryDefinition
// 0x0018
struct FTigerClientCategoryDefinition
{
	Tiger_ETigerPersistentStoreCategory                Category;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GBKV[0x7];                                     // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTigerClientItemDefinition>          AvailableItems;                                            // 0x0008(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerParty
// 0x0030
struct FTigerParty
{
	struct FTigerPartyId                               ID;                                                        // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PlayerIds;                                                 // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FString                                     LeaderPlayerId;                                            // 0x0020(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPlayerPresenceInfo
// 0x0028
struct FTigerPlayerPresenceInfo
{
	struct FString                                     PlayerId;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerLocation;                                            // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsOnline;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WP9O[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerBpFindSessionResultList
// 0x0028
struct FTigerBpFindSessionResultList
{
	unsigned char                                      UnknownData_P6PY[0x18];                                    // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             AlternativeStrings;                                        // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPingResponse
// 0x0002
struct FTigerPingResponse
{
	unsigned char                                      PlayerGroupIndex;                                          // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bIsInterested;                                             // 0x0001(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryIDBundle
// 0x0010
struct FTigerTelemetryIDBundle
{
	class UObject*                                     FoundObject;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64_t                                           PersistentID;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerChatMessage
// 0x0058
struct FTigerChatMessage
{
	struct FText                                       PlayerName;                                                // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FText                                       Message;                                                   // 0x0018(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSharkUserId                                SharkUserId;                                               // 0x0030(0x0010) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FTigerPersistentPlayerID                    PlayerId;                                                  // 0x0040(0x0010) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	Tiger_ETigerChatMessageCategory                    MessageCategory;                                           // 0x0050(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      GroupPlayerId;                                             // 0x0051(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HSXY[0x6];                                     // 0x0052(0x0006) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerTelemetryIDExportFilter
// 0x0008
struct FTigerTelemetryIDExportFilter
{
	class UClass*                                      FilterClass;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerTelemetryIDCollisionBundle
// 0x0010
struct FTigerTelemetryIDCollisionBundle
{
	class UObject*                                     CollidingObject1;                                          // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                     CollidingObject2;                                          // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.PerfTimerHandle
// 0x0008
struct FPerfTimerHandle
{
	unsigned char                                      UnknownData_EC8R[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerDamageContext
// 0x0018
struct FTigerDamageContext
{
	unsigned char                                      UnknownData_Y7K3[0x8];                                     // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UObject*                                     DamagingUObject;                                           // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_0VJH[0x8];                                     // 0x0010(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRangedRandomState
// 0x0008
struct FTigerRangedRandomState
{
	uint64_t                                           RandomState;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.StreamingBenchmarkConfig
// 0x0001
struct FStreamingBenchmarkConfig
{
	unsigned char                                      UnknownData_6FEA[0x1];                                     // 0x0000(0x0001) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerResponse_AdminMessagesConfigs
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_AdminMessagesConfigs : public FTigerResponseEnvelope
{
	struct FString                                     MessagesJson;                                              // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerAdminMessagesConfig
// 0x0010
struct FTigerAdminMessagesConfig
{
	struct FString                                     MessagesJson;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerAiMovementTicketGroup
// 0x0058
struct FTigerAiMovementTicketGroup
{
	unsigned char                                      UnknownData_PWJA[0x58];                                    // 0x0000(0x0058) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPatrollingHelicopterEventTicket
// 0x0020
struct FTigerPatrollingHelicopterEventTicket
{
	TWeakObjectPtr<class ATigerPlayer>                 BloodHuntTarget;                                           // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GK9H[0x18];                                    // 0x0008(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerMasqueradeState
// 0x002C
struct FTigerMasqueradeState
{
	unsigned char                                      UnknownData_U5CA[0x4];                                     // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TWeakObjectPtr<class ATigerBaseNPC>                NPC;                                                       // 0x0004(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ATigerPlayer>                 TigerPlayer;                                               // 0x000C(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SV70[0x18];                                    // 0x0014(0x0018) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerInvestigationTicket
// 0x0028
struct FTigerInvestigationTicket
{
	TArray<TWeakObjectPtr<class ATigerNPC>>            WaitList;                                                  // 0x0000(0x0010) (ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ATigerNPC>                    CurrentInvestigator;                                       // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_5E4M[0x10];                                    // 0x0018(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerSightedPlayerData
// 0x001C
struct FTigerSightedPlayerData
{
	unsigned char                                      UnknownData_JC0D[0x1C];                                    // 0x0000(0x001C) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerCharacterHeadEyewearOffset
// 0x0018
struct FTigerCharacterHeadEyewearOffset
{
	struct FVector                                     Location;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    Rotation;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerCharacterPoseableMeshBoneSetupData
// 0x002C
struct FTigerCharacterPoseableMeshBoneSetupData
{
	Tiger_ETigerCharacterMeshPart                      BodyPart;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WWKR[0x3];                                     // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FName                                       ParentBone;                                                // 0x0004(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FName                                       MeshBone;                                                  // 0x000C(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     RelativeLocation;                                          // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                                    RelativeRotation;                                          // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.StatChangeDescription
// 0x0028
struct FStatChangeDescription
{
	struct FText                                       StatName;                                                  // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FString                                     StatChange;                                                // 0x0018(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_ConvertedIds
// 0x0010 (0x0028 - 0x0018)
struct FTigerResponse_ConvertedIds : public FTigerResponseEnvelope
{
	TArray<struct FTigerFriendsAccountIdSet>           PlayerIds;                                                 // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_GetSharkmobAccountIds
// 0x0018
struct FTigerRequest_GetSharkmobAccountIds
{
	uint32_t                                           ChannelID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_IEUM[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FString>                             PlatformUserIds;                                           // 0x0008(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_FriendAction
// 0x0010
struct FTigerRequest_FriendAction
{
	struct FString                                     SharkmobUserId;                                            // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPersistentCategoryDefinition
// 0x0018 (0x0020 - 0x0008)
struct FTigerPersistentCategoryDefinition : public FTableRowBase
{
	Tiger_ETigerPersistentStoreCategory                Category;                                                  // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DPAS[0x7];                                     // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FTigerPersistentItemDefinition>      AvailableItems;                                            // 0x0010(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPersistentCategoryGroupDefinition
// 0x0010
struct FTigerPersistentCategoryGroupDefinition
{
	TArray<struct FTigerPersistentCategoryDefinition>  CategoryDefinitions;                                       // 0x0000(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerItemIdWithPriceJSON
// 0x0028
struct FTigerItemIdWithPriceJSON
{
	struct FString                                     ItemId;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTigerItemPriceJSON                         Price;                                                     // 0x0010(0x0018) (NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_UpdateCharacter
// 0x00A8
struct FTigerRequest_UpdateCharacter
{
	struct FTigerPersistentPlayerCharacterData         CharacterData;                                             // 0x0000(0x00A8) (NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_AddCharacter
// 0x0001
struct FTigerRequest_AddCharacter
{
	unsigned char                                      Archetype;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetPlayerInfoFromTicket
// 0x0038 (0x0050 - 0x0018)
struct FTigerResponse_GetPlayerInfoFromTicket : public FTigerResponseEnvelope
{
	struct FString                                     PlayerId;                                                  // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     SharkmobUserId;                                            // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerName;                                                // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      Channel;                                                   // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_YLMU[0x7];                                     // 0x0049(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRequest_GetPlayerInfoFromTicket
// 0x0010
struct FTigerRequest_GetPlayerInfoFromTicket
{
	struct FString                                     Ticket;                                                    // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetVersionIsValid
// 0x0028 (0x0040 - 0x0018)
struct FTigerResponse_GetVersionIsValid : public FTigerResponseEnvelope
{
	bool                                               VersionIsValid;                                            // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WTNI[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PublicIpv4;                                                // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PublicIpv6;                                                // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetLonelyFishTicket
// 0x0028 (0x0040 - 0x0018)
struct FTigerResponse_GetLonelyFishTicket : public FTigerResponseEnvelope
{
	struct FString                                     Ticket;                                                    // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     PlayerId;                                                  // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DesiredRefreshIntervalMinutes;                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_XLK7[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRequest_GetLonelyFishTicket
// 0x0048
struct FTigerRequest_GetLonelyFishTicket
{
	struct FString                                     AuthenticationOpenId;                                      // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     AuthenticationToken;                                       // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      AuthenticationChannelId;                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4KRL[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     LoginToken;                                                // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Location;                                                  // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPremiumCurrencyPackData
// 0x0048
struct FTigerPremiumCurrencyPackData
{
	int                                                CurrencyAmount;                                            // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CurrencyBonusAmount;                                       // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RealCurrencyCost;                                          // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZE9A[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DisplayImagePath;                                          // 0x0010(0x0010) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       CurrencyType;                                              // 0x0020(0x0018) (BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UD8D[0x10];                                    // 0x0038(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRequest_DsPresence
// 0x0020
struct FTigerRequest_DsPresence
{
	struct FString                                     DsInstanceId;                                              // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             PlayerIds;                                                 // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_SetInterestedPlayers
// 0x0010
struct FTigerRequest_SetInterestedPlayers
{
	TArray<struct FString>                             InterestedPlayers;                                         // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_SetLocation
// 0x0010
struct FTigerRequest_SetLocation
{
	struct FString                                     Location;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_Presence
// 0x0020
struct FTigerRequest_Presence
{
	struct FString                                     Location;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FString>                             InterestedPlayers;                                         // 0x0010(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_Presence
// 0x0008 (0x0020 - 0x0018)
struct FTigerResponse_Presence : public FTigerResponseEnvelope
{
	bool                                               ResendData;                                                // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_W3XZ[0x7];                                     // 0x0019(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.PresenceInfo
// 0x0028
struct FPresenceInfo
{
	struct FString                                     PlayerId;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Location;                                                  // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               IsOnline;                                                  // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9G0C[0x7];                                     // 0x0021(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerResponse_GetPlayers
// 0x0018 (0x0030 - 0x0018)
struct FTigerResponse_GetPlayers : public FTigerResponseEnvelope
{
	TArray<struct FPresenceInfo>                       InterestedPlayers;                                         // 0x0018(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               ResendData;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_I5RX[0x7];                                     // 0x0029(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPromotionalPopupConfig
// 0x00F8
struct FTigerPromotionalPopupConfig
{
	TMap<struct FString, struct FString>               PromoPopup_BgImage;                                        // 0x0000(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               PromoPopup_Title;                                          // 0x0050(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TMap<struct FString, struct FString>               PromoPopup_Paragraph;                                      // 0x00A0(0x0050) (Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int                                                PopupTriggerInterval;                                      // 0x00F0(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PopupVersion;                                              // 0x00F4(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPromotionalPopupConfigEntry
// 0x0040
struct FTigerPromotionalPopupConfigEntry
{
	struct FString                                     ImageUrl;                                                  // 0x0000(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FText                                       Title;                                                     // 0x0010(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FText                                       Paragraph;                                                 // 0x0028(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerPromotionalUiData
// 0x0010
struct FTigerPromotionalUiData
{
	struct FDateTime                                   LastShowDateTime;                                          // 0x0000(0x0008) (ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                LastShowVersion;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NDH0[0x4];                                     // 0x000C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerPushMessage
// 0x0010
struct FTigerPushMessage
{
	struct FString                                     MsgType;                                                   // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerDsPushRegisterReq
// 0x0030 (0x0040 - 0x0010)
struct FTigerDsPushRegisterReq : public FTigerPushMessage
{
	struct FString                                     ClientProtocolVersion;                                     // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     ServerSecret;                                              // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     DsInstanceId;                                              // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerGameClientPushRegisterReq
// 0x0020 (0x0030 - 0x0010)
struct FTigerGameClientPushRegisterReq : public FTigerPushMessage
{
	struct FString                                     ClientProtocolVersion;                                     // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ticket;                                                    // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerQuestItemLocationDetails
// 0x0040
struct FTigerQuestItemLocationDetails
{
	struct FTigerQuestIdentifier                       QuestIdentifier;                                           // 0x0000(0x0030) (NativeAccessSpecifierPublic)
	struct FVector                                     Location;                                                  // 0x0030(0x000C) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LMAN[0x4];                                     // 0x003C(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerQuestCollectionEntry
// 0x0010
struct FTigerQuestCollectionEntry
{
	int                                                UniqueQuestID;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_91GE[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerQuest*                                 ReferenceQuest;                                            // 0x0008(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerProjectileAreaEffect
// 0x0010
struct FTigerProjectileAreaEffect
{
	class ATigerAreaEffect*                            AreaEffect;                                                // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_9NV4[0x8];                                     // 0x0008(0x0008) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerShotProjectileData
// 0x0030
struct FTigerShotProjectileData
{
	unsigned char                                      UnknownData_YV8Y[0x28];                                    // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UTigerRangedWeapon*                          RangedWeapon;                                              // 0x0028(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResurrectToken
// 0x0010
struct FTigerResurrectToken
{
	unsigned char                                      UnknownData_TPC3[0x10];                                    // 0x0000(0x0010) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRichIconRow
// 0x0088 (0x0090 - 0x0008)
struct FTigerRichIconRow : public FTableRowBase
{
	struct FSlateBrush                                 Brush;                                                     // 0x0008(0x0088) (Edit, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRoofSystemPrimitiveData
// 0x0020
struct FTigerRoofSystemPrimitiveData
{
	struct FVector4                                    Color;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Desaturation;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_L4AT[0xC];                                     // 0x0014(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformablePrimitiveData
// 0x0020
struct FTigerRoofSystemFreeTransformablePrimitiveData
{
	struct FVector4                                    Color;                                                     // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Desaturation;                                              // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_GMDR[0xC];                                     // 0x0014(0x000C) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformableMaterialCacheMaterialBinding
// 0x0010
struct FTigerRoofSystemFreeTransformableMaterialCacheMaterialBinding
{
	int                                                MaterialIndex;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ZNYT[0x4];                                     // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UMaterialInterface*                          Material;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRoofSystemFreeTransformableMaterialCache
// 0x0018
struct FTigerRoofSystemFreeTransformableMaterialCache
{
	TArray<struct FTigerRoofSystemFreeTransformableMaterialCacheMaterialBinding> MaterialBindings;                                          // 0x0000(0x0010) (ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               bStaticMeshComponent;                                      // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_NYE1[0x7];                                     // 0x0011(0x0007) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerBattlepassRewardPreviewRow
// 0x0058 (0x0060 - 0x0008)
struct FTigerBattlepassRewardPreviewRow : public FTableRowBase
{
	unsigned char                                      ItemClass[0x28];                                           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	unsigned char                                      PreviewActorClass[0x28];                                   // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty
	struct FName                                       CameraTag;                                                 // 0x0058(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerDsLoginElsewherePush
// 0x0020
struct FTigerDsLoginElsewherePush
{
	struct FString                                     PlayerId;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OtherDsInstanceId;                                         // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerKickPlayerPush
// 0x0010
struct FTigerKickPlayerPush
{
	struct FString                                     PlayerId;                                                  // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerResponse_GetGameSessionDsData
// 0x0050 (0x0068 - 0x0018)
struct FTigerResponse_GetGameSessionDsData : public FTigerResponseEnvelope
{
	int                                                GameSessionPlayerCount;                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_BJ2F[0x4];                                     // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GameSessionId;                                             // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Tiger_ETigerGroupingMode                           GROUPINGMODE;                                              // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MCAV[0x7];                                     // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     GroupID;                                                   // 0x0038(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     Ip;                                                        // 0x0048(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableFakeMatchmakingDelay;                                // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HLRH[0x3];                                     // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	uint32_t                                           GameSessionBotCount;                                       // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_MUDJ[0x4];                                     // 0x0064(0x0004) MISSED OFFSET (PADDING)

};

// ScriptStruct Tiger.TigerRequest_GetGameSessionDsData
// 0x0038
struct FTigerRequest_GetGameSessionDsData
{
	struct FString                                     GameSessionToken;                                          // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                DsPort;                                                    // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_B811[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     PlayerUniqueId;                                            // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FString                                     OverrideIp;                                                // 0x0028(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};

// ScriptStruct Tiger.TigerRequest_RunningGameServerHeartbeat
// 0x0048
struct FTigerRequest_RunningGameServerHeartbeat
{
	struct FString                                     OverrideIp;                                                // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                Port;                                                      // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UJQP[0x4];                                     // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FString                                     DsVersionId;                                               // 0x0018(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                PlayerCount;                                               // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_USGK[0x4];                                     // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FTigerDsGameSessionDetails                  SessionDetails;                                            // 0x0030(0x0018) (NativeAccessSpecifierPublic)

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
