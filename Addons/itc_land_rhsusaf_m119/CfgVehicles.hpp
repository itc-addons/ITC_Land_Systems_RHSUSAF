class NewTurret;

class CfgVehicles {
	class LandVehicle;
	class StaticWeapon: LandVehicle {
		class Turrets {
			class MainTurret: NewTurret {};
		};
	};
	class StaticCannon: StaticWeapon {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};
	class RHS_M119_base: StaticCannon {
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};
	class RHS_M119_D: RHS_M119_base	{
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};
	class itc_land_rhsusf_m119_d: RHS_M119_D {
		displayname = "M119A2 mod. 0";
		scopeCurator = 2;
		artilleryScanner = 0;
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightBasic";
			};
		};
	};

	class RHS_M119_WD: RHS_M119_base	{
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};
	class itc_land_rhsusf_m119_wd: RHS_M119_WD {
		displayname = "M119A2 mod. 0";
		scopeCurator = 2;
		artilleryScanner = 0;		
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightBasic";
			};
		};
	};
};
