class CfgVehicles {
	class Truck_F;
	class Truck_01_base_F: Truck_F {
    class ACE_SelfActions;
		class AnimationSources;
		class Turrets;
	};

	class rhsusf_himars_base : Truck_01_base_F {
    class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets {
			class MainTurret;
		};
	};
	class rhsusf_M142_usarmy_D: rhsusf_himars_base {
        class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
	};
  class itc_land_rhsusf_m142_usarmy_d : rhsusf_M142_usarmy_D {
		displayname = "M142 mod. 0 HIMARS 2 (DES)";
      class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = "Open Mounted Tablet";
				icon = "\itc_land_tablet\UI\arty-icon.paa";
				condition = "([_target] call itc_land_tablet_fnc_vehicleHasTablet) && (( gunner _target ) == ACE_Player)";
				statement = "[_target] call itc_land_tablet_fnc_openVehicleTablet";
			};
		};
		artilleryScanner = 0;
		class itc_land {
			tabletInterfaces[] = {"spg"};
			mountedTablet = "itc_land_tablet_spg";
			class fcs {
				tableList = "b_230";
			};
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"itc_land_230mm_mlrs"};
				magazines[] = {
					"itc_land_m230pgm_6rnd",
				};
				lockWhenVehicleSpeed= 5;
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_230mm_mlrs";
			};
			class Missiles_revolving2 {
				source = "revolving";
				weapon = "itc_land_230mm_mlrs";
			};
		};
  };
	class rhsusf_M142_usarmy_WD: rhsusf_himars_base {
        class ACE_SelfActions: ACE_SelfActions {};
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
	};
  class itc_land_rhsusf_m142_usarmy_wd : rhsusf_M142_usarmy_WD {
		displayname = "M142 mod. 0 HIMARS 2 (WD)";
      class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = "Open Mounted Tablet";
				icon = "\itc_land_tablet\UI\arty-icon.paa";
				condition = "([_target] call itc_land_tablet_fnc_vehicleHasTablet) && (( gunner _target ) == ACE_Player)";
				statement = "[_target] call itc_land_tablet_fnc_openVehicleTablet";
			};
		};
		artilleryScanner = 0;
		class itc_land {
			tabletInterfaces[] = {"spg"};
			mountedTablet = "itc_land_tablet_spg";
			class fcs {
				tableList = "b_230";
			};
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"itc_land_230mm_mlrs"};
				magazines[] = {
					"itc_land_m230pgm_6rnd",
				};
				lockWhenVehicleSpeed= 5;
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_230mm_mlrs";
			};
			class Missiles_revolving2 {
				source = "revolving";
				weapon = "itc_land_230mm_mlrs";
			};
		};
  };
};
