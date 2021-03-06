#pragma once
#include <cstdint>
#include "../TagBlock.hpp"
#include "../TagData.hpp"
#include "../TagReference.hpp"
#include "../../Text/StringID.hpp"

namespace Blam::Tags::UserInterface
{
	using Blam::Tags::TagBlock;
	using Blam::Tags::TagData;
	using Blam::Tags::TagReference;
	using Blam::Text::StringID;

	struct ChudGlobalsDefinition
	{
		struct HudGlobal;
		struct HudShader;
		struct Unknown0;
		struct Unknown3;
		struct PlayerTrainingDatum;

		TagBlock<HudGlobal> HudGlobals;
		TagBlock<HudShader> HudShaders;
		TagBlock<Unknown0> Unknown2;
		TagBlock<Unknown3> Unknown4;
		TagBlock<PlayerTrainingDatum> PlayerTrainingData;
		TagReference StartMenuEmblems;
		TagReference CampaignMedals;
		TagReference CampaignMedalHudAnimation;
		int16_t Unknown5;
		int16_t Unknown6;
		float CampaignMedalScale;
		float CampaignMedalSpacing;
		float CampaignMedalOffsetX;
		float CampaignMedalOffsetY;
		float MetagameScoreboardTopY;
		float MetagameScoreboardSpacing;
		TagReference UnitDamageGrid;
		float MicroTextureTileAmount;
		float MediumSensorBlipScale;
		float SmallSensorBlipScale;
		float LargeSensorBlipScale;
		float SensorBlipGlowAmount;
		float SensorBlipGlowRadius;
		float SensorBlipGlowOpacity;
		TagReference MotionSensorBlip;
		TagReference BirthdayPartyEffect;
		TagReference CampaignFloodMask;
		TagReference CampaignFloodMaskTile;
		float Unknown7;
		float ShieldMinorThreshold;
		float ShieldMajorThreshold;
		float ShieldCriticalThreshold;
		float HealthMinorThreshold;
		float HealthMajorThreshold;
		float HealthCriticalThreshold;
		float Unknown8;
		float Unknown9;
		uint32_t Unknownundefined;
		uint32_t Unknown10;
		uint32_t Unknown11;
		uint32_t Unknown12;
		uint32_t Unknown13;
		uint32_t Unknown14;
		uint32_t Unknown15;
		uint32_t Unknown16;
		uint32_t Unknown17;
		uint32_t Unknown18;
		uint32_t Unknown19;
		uint32_t Unknown20;
		uint32_t Unknown21;
		uint32_t Unknown22;
		TagData<uint8_t> Unknown23;
		uint32_t Unknown24;
		uint32_t Unknown25;
		uint32_t Unknown26;
		uint32_t Unknown27;
		uint32_t Unknown28;
		uint32_t Unknown29;
		uint32_t Unknown30;
		uint32_t Unknown31;
		uint32_t Unknown32;
		uint32_t Unknown33;
		uint32_t Unknown34;
		uint32_t Unknown35;
		uint32_t Unknown36;
		uint32_t Unknown37;
		uint32_t Unknown38;
		uint32_t Unknown39;
		TagData<uint8_t> Unknown40;
		float SprintFovMultiplier;
		float SprintFovTransitionInTime;
		float SprintFovTransitionOutTime;
		TagReference ParallaxData;
		uint32_t Unknown41;
		TagData<uint8_t> Unknown42;
		TagData<uint8_t> Unknown43;
		TagData<uint8_t> Unknown44;
		TagData<uint8_t> Unknown45;
		TagData<uint8_t> Unknown46;
		uint32_t Unknown47;
		TagData<uint8_t> Unknown48;
		TagData<uint8_t> Unknown49;
		TagData<uint8_t> Unknown50;
		TagData<uint8_t> Unknown51;
		TagData<uint8_t> Unknown52;
		TagReference Unknown53;
		uint32_t Unknown54;
		uint32_t Unknown55;
		uint32_t Unknown56;

		struct HudGlobal
		{
			struct HudAttribute;
			struct HudSound;
			struct MultiplayerMedal;

			int32_t Biped;
			uint8_t _0Alpha;
			uint8_t _0R;
			uint8_t _0G;
			uint8_t _0B;
			uint8_t _1Alpha;
			uint8_t _1R;
			uint8_t _1G;
			uint8_t _1B;
			uint8_t _2Alpha;
			uint8_t _2R;
			uint8_t _2G;
			uint8_t _2B;
			uint8_t _3Alpha;
			uint8_t _3R;
			uint8_t _3G;
			uint8_t _3B;
			uint8_t _4Alpha;
			uint8_t _4R;
			uint8_t _4G;
			uint8_t _4B;
			uint8_t _5Alpha;
			uint8_t _5R;
			uint8_t _5G;
			uint8_t _5B;
			uint8_t _6Alpha;
			uint8_t _6R;
			uint8_t _6G;
			uint8_t _6B;
			uint8_t _7Alpha;
			uint8_t _7R;
			uint8_t _7G;
			uint8_t _7B;
			uint8_t _8Alpha;
			uint8_t _8R;
			uint8_t _8G;
			uint8_t _8B;
			uint8_t _9Alpha;
			uint8_t _9R;
			uint8_t _9G;
			uint8_t _9B;
			uint8_t _10Alpha;
			uint8_t _10R;
			uint8_t _10G;
			uint8_t _10B;
			uint8_t _11Alpha;
			uint8_t _11R;
			uint8_t _11G;
			uint8_t _11B;
			uint8_t _12Alpha;
			uint8_t _12R;
			uint8_t _12G;
			uint8_t _12B;
			uint8_t _13Alpha;
			uint8_t _13R;
			uint8_t _13G;
			uint8_t _13B;
			uint8_t _14Alpha;
			uint8_t _14R;
			uint8_t _14G;
			uint8_t _14B;
			uint8_t _15Alpha;
			uint8_t _15R;
			uint8_t _15G;
			uint8_t _15B;
			uint8_t _16Alpha;
			uint8_t _16R;
			uint8_t _16G;
			uint8_t _16B;
			uint8_t _17Alpha;
			uint8_t _17R;
			uint8_t _17G;
			uint8_t _17B;
			uint8_t _18Alpha;
			uint8_t _18R;
			uint8_t _18G;
			uint8_t _18B;
			uint8_t _19Alpha;
			uint8_t _19R;
			uint8_t _19G;
			uint8_t _19B;
			uint8_t _20Alpha;
			uint8_t _20R;
			uint8_t _20G;
			uint8_t _20B;
			uint8_t _21Alpha;
			uint8_t _21R;
			uint8_t _21G;
			uint8_t _21B;
			uint8_t _22Alpha;
			uint8_t _22R;
			uint8_t _22G;
			uint8_t _22B;
			uint8_t _23Alpha;
			uint8_t _23R;
			uint8_t _23G;
			uint8_t _23B;
			uint8_t _24Alpha;
			uint8_t _24R;
			uint8_t _24G;
			uint8_t _24B;
			uint8_t _25Alpha;
			uint8_t _25R;
			uint8_t _25G;
			uint8_t _25B;
			uint8_t _26Alpha;
			uint8_t _26R;
			uint8_t _26G;
			uint8_t _26B;
			uint8_t _27Alpha;
			uint8_t _27R;
			uint8_t _27G;
			uint8_t _27B;
			uint8_t _28Alpha;
			uint8_t _28R;
			uint8_t _28G;
			uint8_t _28B;
			uint8_t _29Alpha;
			uint8_t _29R;
			uint8_t _29G;
			uint8_t _29B;
			uint8_t _30Alpha;
			uint8_t _30DefaultItemVersionR;
			uint8_t _30DefaultItemVersionG;
			uint8_t _30DefaultItemVersionB;
			uint8_t _31Alpha;
			uint8_t _31Version1ItemR;
			uint8_t _31Version1ItemG;
			uint8_t _31Version1ItemB;
			uint8_t _32Alpha;
			uint8_t _32Version2ItemR;
			uint8_t _32Version2ItemG;
			uint8_t _32Version2ItemB;
			uint8_t _33Alpha;
			uint8_t _33Version3ItemR;
			uint8_t _33Version3ItemG;
			uint8_t _33Version3ItemB;
			uint8_t _34Alpha;
			uint8_t _34Version4ItemR;
			uint8_t _34Version4ItemG;
			uint8_t _34Version4ItemB;
			uint8_t _35Alpha;
			uint8_t _35Version5ItemR;
			uint8_t _35Version5ItemG;
			uint8_t _35Version5ItemB;
			uint8_t _36Alpha;
			uint8_t _36Version6ItemR;
			uint8_t _36Version6ItemG;
			uint8_t _36Version6ItemB;
			TagBlock<HudAttribute> HudAttributes;
			TagBlock<HudSound> HudSounds;
			TagReference Unknown;
			TagReference FragGrenadeSwapSound;
			TagReference PlasmaGrenadeSwapSound;
			TagReference SpikeGrenadeSwapSound;
			TagReference FirebombGrenadeSwapSound;
			TagReference DamageMicrotexture;
			TagReference DamageNoise;
			TagReference DirectionalArrow;
			TagReference Unknown2;
			TagReference Unknown3;
			uint32_t Unknown4;
			uint32_t Unknown5;
			uint32_t Unknown6;
			uint32_t Unknown7;
			uint32_t Unknown8;
			uint32_t Unknown9;
			TagReference Waypoints;
			TagReference Unknown10;
			TagReference ScoreboardHud;
			TagReference MetagameScoreboardHud;
			TagReference SurvivalHud;
			TagReference Unknown11;
			TagReference TheaterHud;
			TagReference ForgeHud;
			TagReference HudStrings;
			TagReference Medals;
			TagBlock<MultiplayerMedal> MultiplayerMedals;
			TagReference MedalHudAnimation;
			TagReference MedalHudAnimation2;
			TagReference CortanaChannel;
			TagReference Unknown12;
			TagReference Unknown13;
			TagReference Unknown14;
			TagReference Unknown15;
			uint32_t Unknown16;
			uint32_t Unknown17;
			float GrenadeScematicsSpacing;
			float EquipmentScematicOffsetY;
			float DualEquipmentScematicOffsetY;
			float Unknown18;
			float Unknown19;
			float ScoreboardLeaderOffsetY;
			float Unknown20;
			float WaypointScale;
			uint32_t Unknown21;

			struct HudAttribute
			{
				uint32_t ResolutionFlags;
				float WarpAngle;
				float WarpAmount;
				float WarpDirection;
				uint32_t ResolutionWidth;
				uint32_t ResolutionHeight;
				float MotionSensorOffsetX;
				float MotionSensorOffsetY;
				float MotionSensorRadius;
				float MotionSensorScale;
				float HorizontalScale;
				float VerticalScale;
				float HorizontalStretch;
				float VerticalStretch;
				TagReference Unknown;
				TagReference Unknown2;
				TagReference FirstPersonDamageBorder;
				TagReference ThirdPersonDamageBorder;
				uint32_t Unknown3;
				uint32_t Unknown4;
				uint32_t Unknown5;
				uint32_t Unknown6;
				uint32_t Unknown7;
				uint32_t Unknown8;
				uint32_t Unknown9;
				uint32_t StateCenterOffsetY;
				uint32_t Unknown10;
				uint32_t Unknown11;
				uint32_t Unknown12;
				uint32_t Unknown13;
				uint32_t Unknown14;
				uint32_t Unknown15;
				uint32_t Unknown16;
				uint32_t Unknown17;
				uint32_t NotificationScale;
				uint32_t NotificationLineSpacing;
				uint32_t Unknown18;
				uint32_t Unknown19;
				uint32_t NotificationOffsetY;
				uint32_t Unknown20;
				uint32_t Unknown21;
				uint32_t Unknown22;
				uint32_t Unknown23;
				uint32_t Unknown24;
				uint32_t Unknown25;
				uint32_t Unknown26;
			};
			static_assert(sizeof(HudAttribute) == 0xE8, "");

			struct HudSound
			{
				struct Unknown;

				uint32_t LatchedTo;
				float Scale;
				TagBlock<Unknown> Unknown2;

				struct Unknown
				{
					int32_t Biped;
					TagReference Sound;
				};
				static_assert(sizeof(Unknown) == 0x14, "");
			};
			static_assert(sizeof(HudSound) == 0x14, "");

			struct MultiplayerMedal
			{
				int32_t Medal;
			};
			static_assert(sizeof(MultiplayerMedal) == 0x4, "");
		};
		static_assert(sizeof(HudGlobal) == 0x2B0, "");

		struct HudShader
		{
			TagReference VertexShader;
			TagReference PixelShader;
		};
		static_assert(sizeof(HudShader) == 0x20, "");

		struct Unknown0
		{
			uint32_t Unknown;
			uint32_t Unknown2;
			uint32_t Unknown3;
			uint32_t Unknown4;
			uint32_t Unknown5;
			uint32_t Unknown6;
			uint32_t Unknown7;
			uint32_t Unknown8;
			uint32_t Unknown9;
			uint32_t Unknown10;
			uint32_t Unknown11;
			uint32_t Unknown12;
			uint32_t Unknown13;
			uint32_t Unknown14;
			uint32_t Unknown15;
			uint32_t Unknown16;
		};
		static_assert(sizeof(Unknown0) == 0x40, "");

		struct Unknown3
		{
			struct Unknown2;

			uint32_t Unknown;
			TagBlock<Unknown2> Unknown3a;

			struct Unknown2
			{
				uint32_t Unknown;
				uint32_t Unknown2a;
				uint32_t Unknown3;
				uint32_t Unknown4;
				uint32_t Unknown5;
				uint32_t Unknown6;
				uint32_t Unknown7;
				uint32_t Unknown8;
				uint32_t Unknown9;
				uint32_t Unknown10;
				uint32_t Unknown11;
				uint32_t Unknown12;
				uint32_t Unknown13;
				uint32_t Unknown14;
				uint32_t Unknown15;
				uint32_t Unknown16;
				uint32_t Unknown17;
				uint32_t Unknown18;
				uint32_t Unknown19;
				uint32_t Unknown20;
				uint32_t Unknown21;
				uint32_t Unknown22;
				uint32_t Unknown23;
				uint32_t Unknown24;
				uint32_t Unknown25;
				TagReference Sound;
				uint32_t Unknown26;
				uint32_t Unknown27;
				uint32_t Unknown28;
				uint32_t Unknown29;
				uint32_t Unknown30;
				uint32_t Unknown31;
				uint32_t Unknown32;
				uint32_t Unknown33;
				uint32_t Unknown34;
				uint32_t Unknown35;
				uint32_t Unknown36;
				uint32_t Unknown37;
				uint32_t Unknown38;
				uint32_t Unknown39;
				uint32_t Unknown40;
				uint32_t Unknown41;
				uint32_t Unknown42;
				uint32_t Unknown43;
				uint32_t Unknown44;
				uint32_t Unknown45;
				uint32_t Unknown46;
				uint32_t Unknown47;
				uint32_t Unknown48;
				uint32_t Unknown49;
				TagReference Sound2;
			};
			static_assert(sizeof(Unknown2) == 0xE4, "");
		};
		static_assert(sizeof(Unknown3) == 0x10, "");

		struct PlayerTrainingDatum
		{
			int32_t DisplayString;
			int16_t MaxDisplayTime;
			int16_t DisplayCount;
			int16_t DisappearDelay;
			int16_t RedisplayDelay;
			float DisplayDelay;
			uint16_t Flags;
			int16_t Unknown;
		};
		static_assert(sizeof(PlayerTrainingDatum) == 0x14, "");
	};
	static_assert(sizeof(ChudGlobalsDefinition) == 0x2C0, "");
}