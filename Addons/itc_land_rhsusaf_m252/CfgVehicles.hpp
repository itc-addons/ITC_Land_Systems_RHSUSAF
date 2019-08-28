class NewTurret;

class CfgVehicles {

	class Bag_Base;
	class Weapon_Bag_Base: Bag_Base {
		class assembleInfo;
	};
	class RHS_M2_Tripod_Bag: Weapon_Bag_Base {
		class assembleInfo: assembleInfo {};
	};
	class rhs_M252_Bipod_Bag: RHS_M2_Tripod_Bag {
		class assembleInfo: assembleInfo {};
	};
	class itc_rhsusf_M252_Bipod_Bag: rhs_M252_Bipod_Bag {
		displayName = "M252 mod. 0 Tripod Bag";
		class assembleInfo: assembleInfo {
			displayName = "M252 mod. 0 Mortar";
			assembleTo = "itc_land_rhsusf_m252_wd";
			base[] = {"itc_rhsusf_M252_Gun_Bag"};
		};
	};
	class RHS_M2_Gun_Bag;
	class rhs_M252_Gun_Bag: RHS_M2_Gun_Bag { };
	class itc_rhsusf_M252_Gun_Bag: RHS_M2_Gun_Bag {
		displayName = "M252 mod. 0 Gun Bag";
	};
	class LandVehicle;
	class StaticWeapon: LandVehicle {
		class Turrets {
			class MainTurret: NewTurret {};
		};
	};
	class StaticMortar: StaticWeapon {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};
	class RHS_M252_Base: StaticMortar {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};
	class RHS_M252_D: RHS_M252_Base	{
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};
	class itc_land_rhsusf_m252_d: RHS_M252_D {
		displayname = "M252 mod. 0";
		scopeCurator = 2;
		artilleryScanner = 0;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightBasic";
			};
		};
		class assembleInfo {
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"itc_rhsusf_M252_Bipod_Bag", "itc_rhsusf_M252_Gun_Bag"};
			displayName = "";
		};
	};

	class RHS_M252_WD: RHS_M252_Base {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};
	class itc_land_rhsusf_m252_wd: RHS_M252_WD {
		displayname = "M252 mod. 0";
		scopeCurator = 2;
		artilleryScanner = 0;		
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightBasic";
			};
		};
		class assembleInfo {
			primary = 0;
			base = "";
			assembleTo = "";
			dissasembleTo[] = {"itc_rhsusf_M252_Bipod_Bag", "itc_rhsusf_M252_Gun_Bag"};
			displayName = "";
		};
	};
};
