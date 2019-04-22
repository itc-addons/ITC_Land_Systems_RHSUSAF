class NewTurret;

class CfgVehicles {
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
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightBasic";				
			};
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
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightBasic";				
			};
		};			
	};	
};