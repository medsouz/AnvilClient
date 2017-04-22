#pragma once
#include <Interfaces\Initializable.hpp>

#include <Blam\Data\DataArray.hpp>
#include <Blam\Data\DatumIndex.hpp>
#include <Blam\Game\Players\PlayerDatum.hpp>
#include <Blam\Tags\Game\MultiplayerGlobals.hpp>

#include <Game\Players\PlayerPropertiesExtender.hpp>

#include <map>

namespace AnvilEldorado::Game::Players
{
	class PlayerImpl :
		public AnvilCommon::Initializable
	{
	protected:
		std::shared_ptr<AnvilCommon::Initializable> m_Hooks;

	private:
		PlayerPropertiesExtender* m_PlayerPropertiesExtender = new PlayerPropertiesExtender();;

		std::wstring m_UserName;

		bool m_UpdateArmor = false;

		uint32_t m_ArmorPrimaryColor;
		uint32_t m_ArmorSecondaryColor;
		uint32_t m_ArmorVisorColor;
		uint32_t m_ArmorLightsColor;
		uint32_t m_ArmorHoloColor;

		std::map<std::string, uint8_t> m_ArmorHelmetIndices;
		std::string m_ArmorHelmet;

		std::map<std::string, uint8_t> m_ArmorChestIndices;
		std::string m_ArmorChest;

		std::map<std::string, uint8_t> m_ArmorShouldersIndices;
		std::string m_ArmorShoulders;

		std::map<std::string, uint8_t> m_ArmorArmsIndices;
		std::string m_ArmorArms;

		std::map<std::string, uint8_t> m_ArmorLegsIndices;
		std::string m_ArmorLegs;

		std::map<std::string, uint8_t> m_ArmorPelvisIndices;
		std::string m_ArmorPelvis;

		std::map<std::string, uint8_t> m_ArmorAccessoryIndices;
		std::string m_ArmorAccessory;

		std::map<std::string, uint16_t> m_PodiumWeaponIndices;
		std::string m_PodiumWeapon;

	public:
		virtual bool Init();

		Blam::Data::DataArray<Blam::Game::Players::PlayerDatum> &GetPlayers();
		Blam::Data::DatumIndex GetLocalPlayer(const int32_t p_Index);
		size_t GetPlayerPropertiesPacketSize();

		bool LoadArmor(Blam::Tags::Game::MultiplayerGlobals *p_MultiplayerGlobals);
		Blam::Data::DatumIndex GetPodiumBiped() const;

		void BuildCustomization(Blam::Game::Players::PlayerCustomization * p_Customization) const;
		void CustomizeBiped(const Blam::Data::DatumIndex &p_BipedIndex);

		std::wstring GetName() const;
		void SetName(const std::string &p_UserName);

		bool NeedsArmorUpdate() const;
		void SetUpdateArmor(const bool p_UpdateArmor = true);

		uint32_t GetArmorPrimaryColor() const;
		void SetArmorPrimaryColor(const uint32_t p_Color);
		void SetArmorPrimaryColor(const uint8_t p_Red, const uint8_t p_Green, const uint8_t p_Blue);

		uint32_t GetArmorSecondaryColor() const;
		void SetArmorSecondaryColor(const uint32_t p_Color);
		void SetArmorSecondaryColor(const uint8_t p_Red, const uint8_t p_Green, const uint8_t p_Blue);

		uint32_t GetArmorVisorColor() const;
		void SetArmorVisorColor(const uint32_t p_Color);
		void SetArmorVisorColor(const uint8_t p_Red, const uint8_t p_Green, const uint8_t p_Blue);

		uint32_t GetArmorLightsColor() const;
		void SetArmorLightsColor(const uint32_t p_Color);
		void SetArmorLightsColor(const uint8_t p_Red, const uint8_t p_Green, const uint8_t p_Blue);

		uint32_t GetArmorHoloColor() const;
		void SetArmorHoloColor(const uint32_t p_Color);
		void SetArmorHoloColor(const uint8_t p_Red, const uint8_t p_Green, const uint8_t p_Blue);

		std::string GetArmorHelmet() const;
		void SetArmorHelmet(const std::string &p_ArmorHelmet);

		std::string GetArmorChest() const;
		void SetArmorChest(const std::string &p_ArmorChest);

		std::string GetArmorShoulders() const;
		void SetArmorShoulders(const std::string &p_ArmorShoulders);

		std::string GetArmorArms() const;
		void SetArmorArms(const std::string &p_ArmorArms);

		std::string GetArmorLegs() const;
		void SetArmorLegs(const std::string &p_ArmorLegs);

		std::string GetArmorPelvis() const;
		void SetArmorPelvis(const std::string &p_ArmorPelvis);

		std::string GetArmorAccessory() const;
		void SetArmorAccessory(const std::string &p_ArmorAccessory);

		std::string GetPodiumWeapon() const;
		void SetPodiumWeapon(const std::string &p_PodiumWeapon);
	};

	// Packet size constants
	extern const size_t PlayerPropertiesPacketHeaderSize;
	extern const size_t PlayerPropertiesSize;
	extern const size_t PlayerPropertiesPacketFooterSize;
}
