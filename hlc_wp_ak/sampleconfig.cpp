#define private        0
#define protected        1
#define public        2

#define true    1
#define false    0

#include "cfgsoundshaders.hpp"
#include "cfgsoundset.hpp"
// TECHNICALLY Doing that for ALL the Cfg<Object> Classes is actually the smartest thing, and I should have been doing this from the start, but I am also a peice of shit.

//Also, wanna know something cool?
class cfgMods
{
	class Mod_Base;
	class Niarms_AK :Mod_Base
	{
		name = "NIArsenal: AK Rifles";
		picture = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
		dir = "@NIArsenal";
		hideName = 1;
		hidePicture = 0;
		action = "http://credmo.updatedtuesdays.com/tier1";
		author = "Toadie";
		logo = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
		logoOver = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
		logoSmall = "hlc_wp_ak\tex\ui\NIArms1_ca.paa";
	};
};
//Okay this isn't going to delcare externals (Mod_fullauto, Weaponslotfino, etc.,) because this a sample, not a fucking Dance Party

class CfgWeapons {
	class hlc_rifle_ak74 : hlc_ak_base
	{
		dlc = "Niarms_AK";
		AB_barrelTwist = 7.87;
		AB_barrelLength = 16.3;
		ACE_barrelTwist = 199.898;
		ACE_barrelLength = 414.02;
		deployedPivot = "deploypivot";       /// what point should be used to be on surface while unfolded
		hasBipod = false;          /// a weapon with bipod obviously has a bipod
		author = "MrRifleman, Toadie";
		scope = public;
		magazines[] = {
			"hlc_30Rnd_545x39_B_AK", "hlc_30Rnd_545x39_T_AK", "hlc_30Rnd_545x39_EP_AK", "hlc_45Rnd_545x39_t_rpk", "hlc_30Rnd_545x39_S_AK"
		};
		displayName = "Izhmash AK74";
		model = "\hlc_wp_ak\mesh\tigg_ak74\ak74.p3d";
		picture = "\hlc_wp_ak\tex\ui\gear_ak74_ca";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		bg_bipod = 0;
		aidispersioncoefx = 4;
		aidispersioncoefy = 6;
		recoil = "recoil_mk20";
		modes[] = { "FullAuto", "Single", "fullauto_medium", "single_medium_optics1", "single_far_optics2" };
		drysound[] = { "\hlc_wp_ak\snd\empty_assaultrifles", 1, 1, 10 };
		discretedistance[] = { 200, 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
		handAnim[] = { "OFP2_ManSkeleton", "hlc_wp_ak\anim\new_akhandgesture.rtm" };
		changeFiremodeSound[] = { "hlc_wp_ak\snd\ak_selector", 1, 1, 20 };
		class Single : Mode_SemiAuto
		{
			airateoffire = "1e-006";
			begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };// IGNORE- Pre-First Soud Engine update. How Arma2 handles sound.
			begin2[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };// IGNORE- Pre-First Soud Engine update. How Arma2 handles sound.
			soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
			closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };// IGNORE- Pre-First Soud Engine update. How Arma2 handles sound.
			closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };// IGNORE- Pre-First Soud Engine update. How Arma2 handles sound.
			soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.086;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			dispersion = 0.000654498;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			sounds[] = { "StandardSound", "SilencedSound" };

			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				soundClosure[] = { closure1, 0.5, closure2, 0.5 };
			};

			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "ak74_Shot_SoundSet", "ak74_Tail_SoundSet" };
				//NEW THING PAY ATTENTION
				begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
			};

			class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "ak74_silencerShot_SoundSet", "ak74_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
				begin1[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				begin2[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				soundBegin[] = { begin1, 0.5, begin2, 0.5 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
			};
			/// various other fire mode parameters
		};
		class FullAuto : Mode_FullAuto
		{
			airateoffire = "1e-006";
			begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };// IGNORE- Pre-First Soud Engine update. How Arma2 handles sound.
			begin2[] = { "\hlc_wp_ak\snd\ak74m_fire", 1, 1, 900 };// IGNORE- Pre-First Soud Engine update. How Arma2 handles sound.
			soundBegin[] = { "begin1", 0.5, "begin2", 0.5 };
			closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };// IGNORE- Pre-First Soud Engine update. How Arma2 handles sound.
			closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1.0, 1, 30 };// IGNORE- Pre-First Soud Engine update. How Arma2 handles sound.
			soundClosure[] = { "closure1", 0.5, "closure2", 0.5 };
			weaponSoundEffect = "DefaultRifle";
			reloadTime = 0.086;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			dispersion = 0.000654498;
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
			sounds[] = { "StandardSound", "SilencedSound" };

			class BaseSoundModeType /// I am too lazy to copy this twice into both standard and silenced sounds, that is why there is a base class from which both inherit (and sound of closure stays the same no matter what muzzle accessory is used)
			{
				weaponSoundEffect = "DefaultRifle";

				closure1[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				closure2[] = { "\hlc_wp_ak\snd\ak74_first", 1, 1, 10 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				soundClosure[] = { closure1, 0.5, closure2, 0.5 };
			};

			class StandardSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 0, according to sounds[]
			{
				soundSetShot[] = { "ak74_Shot_SoundSet", "ak74_Tail_SoundSet" };
				//NEW THING PAY ATTENTION
				begin1[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				begin2[] = { "\hlc_wp_ak\snd\ak74m_fire2", 1.7782794, 1, 1200 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				begin3[] = { "\hlc_wp_ak\snd\ak74m_fire", 1.7782794, 1, 1200 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				soundBegin[] = { begin1, 0.33, begin2, 0.33, begin3, 0.34 };
				class SoundTails
				{
					class TailForest
					{
						sound[] = { "\hlc_wp_ak\snd\tails\ak545_forest", 1.1, 1, 1200 };
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] = { "\hlc_wp_ak\snd\tails\ak74_indoor", 1.0, 1, 1200 };
						frequency = 1;
						volume = "interior";
					};
				};
			};

			class SilencedSound : BaseSoundModeType /// Sounds inside this class are used when soundTypeIndex = 1, according to sounds[]
			{
				soundSetShot[] = { "ak74_silencerShot_SoundSet", "ak74_silencerTail_SoundSet" };
				//NEW THING PAY ATTENTION
				begin1[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				begin2[] = { "\hlc_wp_ak\snd\ak74_sil", 1.35, 1, 200 };// IGNORE- First Sound Engine update.		OH. Unless you're not using soundshaders ,in which case, yeah these still work.
				soundBegin[] = { begin1, 0.5, begin2, 0.5 };
				class SoundTails
				{
					class TailInterior
					{
						sound[] = { "\hlc_wp_ak\snd\tails\ak74_sil_indoor", 1, 1, 100 };
						frequency = 1;
						volume = "interior";
					};
				};
			};
		};
		/*
		==========
		IMPORTANT
		==========
		If you redefine sound shaders on child of this class, you must redefine ALL the fire modes, otherwise the child class will still use the parent sounds. 
		NO IDEA WHY

		BECAUSE  BOHEMIA  I  ASSUME
		*/
		class fullauto_medium : FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2.0;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1 : Single
		{
			requiredOpticType = 1;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
		};
		class single_far_optics2 : single_medium_optics1
		{
			requiredOpticType = 2;
			showToPlayer = 0;
			minRange = 100;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.05;
			aiRateOfFire = 8;
			aiRateOfFireDistance = 700;
		};
		class WeaponSlotsInfo : WeaponSlotsInfo
		{
			mass = 61.4;
			class asdg_OpticRail_AK74 : asdg_OpticSideMount {};
		};
		class ItemInfo
		{
			priority = 1;
			RMBhint = "XMC";
			onHoverText = "TODO XMC DSS";
		};
		reloadMagazineSound[] = { "\hlc_wp_ak\snd\ak74m_reload", 0.74, 1, 30 };
	};
};