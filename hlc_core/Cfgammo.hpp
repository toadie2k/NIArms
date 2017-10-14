//Ballistics data presented largely by Spartan0536
//Other suppliers commented as approriate. 
class CfgAmmo {
    class B_762x51_Ball;
    class B_556x45_Ball;
    class B_127x99_Ball;
    class B_127x99_Ball_Tracer_Red;
    class B_12Gauge_Pellets;
    class BoundingMineBase;
    class ShotDeployBase;
    class SubmunitionBase;
    class G_40mm_HE;

    class VOG25P_Range_Ammo : BoundingMineBase {
        hit = 20;
        indirectHit = 20;
        indirectHitRange = 20;
        model = "\A3\weapons_f\ammo\UGL_slug";
        mineModelDisabled = "\A3\weapons_f\ammo\UGL_slug";
        defaultMagazine = "VOG25P_test";
        soundHit[] = { "A3\Sounds_F\weapons\mines\mine_debris_3", 3.1622777, 1, 1000 };
        explosionEffects = "BoundingMineExplosion";
        CraterEffects = "BoundingMineCrater";
        mineJumpEffects = "MineJumpEffect";
        whistleDist = 60;
        cost = 300;
        mineBoundingTime = 0.3;
        mineBoundingDist = 2.0;
        mineInconspicuousness = 999;
        mineTrigger = "RangeTriggerBounding";
        triggerWhenDestroyed = 1;
    };
    class VOG25P_Deployrange : ShotDeployBase {
        submunitionAmmo = "VOG25P_Range_Ammo";
        typicalSpeed = 185;
        deflecting = 5;
        airFriction = -0.001;
    };
    class VOG25P_SubMunition : SubmunitionBase {
        submunitionAmmo = "VOG25P_Deployrange";
        submunitionConeType[] = { "randomcenter", 1 };
        submunitionConeAngle = 30;
        triggerDistance = 100;
        cost = 10;
        whistleDist = 16;
        typicalSpeed = 185;
        deflecting = 5;
        airFriction = -0.001;
        visibleFire = 6;
        audibleFire = 6;
        visibleFireTime = 3;
        muzzleEffect = "";
        class CamShakeFire {
            power = "(0^0.25)";
            duration = "((round (0^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((0^0.5)*8)";
        };
        class CamShakePlayerFire {
            power = 0.02;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };

    //M855A1 EPR
    /*
    US Military Designated M885A1 EPR
    ArmA Name: M855A1 EPR
    Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)
    Load Type: Supersonic
    */
    class HLC_556NATO_EPR : B_556x45_Ball {
        hit = 10.28;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        typicalSpeed = 974.8;
        airFriction = -0.0012744;
        caliber = 0.964;
        deflecting = 21;
        visibleFire = 3;
        audibleFire = 7;
        ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = { -27.20, -26.44, -23.76, -21.00, -17.54, -13.10, -7.95, -1.62, 6.24, 15.48, 27.75 };
        ACE_ballisticCoefficients[] = { 0.151 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 723, 764, 796, 825, 843, 866, 878, 892, 906, 915, 922, 900 };
        ACE_barrelLengths[] = { 210.82, 238.76, 269.24, 299.72, 330.2, 360.68, 391.16, 419.1, 449.58, 480.06, 508.0, 609.6 };
    };

    class HLC_556NATO_EPR_Tracer : HLC_556NATO_EPR {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerStartTime = 0.073;
        tracerEndTime = 1.57123;
        nvgOnly = 0;
    };
    /*
    US Military Designated Mk318 Mod 1 SOST
    ArmA Name: MK318 Mod 1
    Type: Nickel Plated Reverse Drawn Full Metal Jacket (Special Operations Science & Technology)
    Load Type: Supersonic
    */
    class HLC_556NATO_SOST : B_556x45_Ball {
        hit = 10.7;
        typicalSpeed = 954.4;
        airFriction = -0.001307846;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 0.684;
        deflecting = 20;
        visibleFire = 3;
        audibleFire = 5.5;
        AB_caliber = 0.224;
        AB_bulletLength = 0.906;
        AB_bulletMass = 62;
        AB_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        AB_ballisticCoefficients[] = { 0.307 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ASM";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 780, 886, 950 };
        AB_barrelLengths[] = { 10, 15.5, 20 };
        ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.307 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 780, 886, 950 };
        ACE_barrelLengths[] = { 254.0, 393.7, 508.0 };
    };
    /*
    US Military Designated MK262 Mod 1 SBLR
    ArmA Name: MK262 Mod 1
    Type: Open Tip Match (Special Ball Long Range)
    Load Type: Supersonic
    */
    class HLC_556NATO_SPR : B_556x45_Ball {
        hit = 11.12;
        typicalSpeed = 868.7;
        airFriction = -0.0010867938;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        caliber = 0.189;
        deflecting = 19;
        visibleFire = 2.5;
        audibleFire = 5;
        AB_caliber = 0.224;
        AB_bulletLength = 0.906;
        AB_bulletMass = 77;
        AB_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        AB_ballisticCoefficients[] = { 0.361 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ASM";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 624, 816, 832, 838 };
        AB_barrelLengths[] = { 7.5, 14.5, 18, 20 };
        ACE_caliber = 5.69;
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.9896;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.361 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 624, 816, 832, 838 };
        ACE_barrelLengths[] = { 190.5, 368.3, 457.2, 508.0 };
    };
    class B_556x45_Ball_Tracer_Red;
    class HLC_B_556x45_Ball_Tracer_Dim : B_556x45_Ball_Tracer_Red {
        nvgOnly = 1;
        tracerStartTime = 0.073;
        tracerEndTime = 1.57123;
    };
    /*
    Custom Mil-Spec Handload Blackout EPR
    ArmA Name: Blackout EPR
    Type: Pulled M80A1 EPR bullet, handloaded (Remington Brass, 19.5 grains of Hodgdon Lil'Gun powder at maximum load volume, using a Remington 7 1/2 Small Rifle Magnum primer, US Military M80A1 EPR bullet)
    Load Type: Supersonic
    */
    class HLC_300Blackout_Ball : B_556x45_Ball {
        airFriction = -0.00113233;
        airlock = 1;
        audiblefire = 8;
        caliber = 0.500;
        deflecting = 22;
        cartridge = "FxCartridge_762";
        cost = 1.2;
        hit = 10.34;
        indirecthit = 0;
        indirecthitrange = 0;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.05;
        typicalspeed = 674.6;
        visiblefire = 5;
        class CamShakeExplode {
            distance = "((6^0.5)*3)";
            duration = "((round (6^0.5))*0.2 max 0.2)";
            frequency = 20;
            power = "(6^0.5)";
        };
        class CamShakeHit {
            distance = 1;
            duration = "((round (6^0.25))*0.2 max 0.2)";
            frequency = 20;
            power = 6;
        };
        AB_caliber = 0.308;
        AB_bulletLength = 1.118;
        AB_bulletMass = 147;
        AB_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        AB_ballisticCoefficients[] = { 0.398 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ICAO";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 559, 609, 625 };
        AB_barrelLengths[] = { 6, 16, 20 };
        ACE_caliber = 7.823;
        ACE_bulletLength = 28.397;
        ACE_bulletMass = 9.5256;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.398 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 559, 609, 625 };
        ACE_barrelLengths[] = { 152.4, 406.4, 508.0 };
    };
    /*
    Custom Combat Handload TAC-TX
    ArmA Name: TAC-TX
    Type: Solid Copper Ballistic Tip Boat Tail (Hornady Brass, 17.5 Grains Winchester W296 powder, using a CCI #400 Small Rifle Primer, Barnes 120 grain TAC-TX Bullet)
    Load Type: Supersonic
    */
    class HLC_300Blackout_SMK : HLC_300Blackout_Ball {
        airFriction = -0.00118473;
        airlock = 1;
        caliber = 0.337;
        cartridge = "FxCartridge_762";
        cost = 1.2;
        hit = 13.94;
        deflecting = 20;
        indirecthit = 0;
        indirecthitrange = 0;
        model = "\hlc_core\mesh\bullettracer\tracer_dim";
        tracerscale = 1;
        tracerstarttime = 0.05;
        typicalSpeed = 312;
        visibleFire = 0.55;
        audibleFire = 0.65;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        ACE_caliber = 7.823;
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 14.256;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.608 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 300, 320, 340 };
        ACE_barrelLengths[] = { 228.6, 406.4, 508.0 };
        AB_caliber = 0.308;
        AB_bulletLength = 1.489;
        AB_bulletMass = 220;
        AB_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        AB_ballisticCoefficients[] = { 0.608 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ICAO";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 300, 320, 340 };
        AB_barrelLengths[] = { 9, 16, 20 };
    };
    /*
    Custom Noveske Handload RNBT-BT
    ArmA Name: RNBT Subsonic
    Type: Round Nose Ballistic Tip Boat Tail with Glow Tip (Noveske Brass /w black nickel plating, 8.5 grains of Alliant 2400 powder at 75% load volume, using a CCI No 41 primer, Nosler )
    Load Type: Subsonic
    */
    class HLC_300Blackout_RNBT : HLC_300Blackout_Ball {
        airFriction = -0.0004139;
        airlock = 1;
        caliber = 0.621;
        cartridge = "FxCartridge_762";
        cost = 1.2;
        hit = 9.27;
        deflecting = 20;
        indirecthit = 0;
        indirecthitrange = 0;
        model = "\hlc_core\mesh\bullettracer\tracer_dim";
        tracerscale = 0.6;
        tracerstarttime = 0.05;
        typicalSpeed = 329.2;
        visibleFire = 0.55;
        audibleFire = 0.65;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        ACE_caliber = 7.823;
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 14.256;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.608 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 300, 320, 340 };
        ACE_barrelLengths[] = { 228.6, 406.4, 508.0 };
        AB_caliber = 0.308;
        AB_bulletLength = 1.489;
        AB_bulletMass = 220;
        AB_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        AB_ballisticCoefficients[] = { 0.608 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ICAO";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 300, 320, 340 };
        AB_barrelLengths[] = { 9, 16, 20 };
    };

        //7.62x39mm Russian: *Ballistics based on a 16.3 inch barrel AKM
        /*
        Russian Military Designated 57 - N - 231S FMJ
        ArmA Name : 57 - N - 231S FMJ
        Type : Full Metal Jacket with Mild Steel Core
        Load Type : Supersonic
        */
    class HLC_762x39_Ball : HLC_300Blackout_Ball {
        airFriction = -0.0014104;
        caliber = 0.628;
        deflecting = 23;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        tracerStartTime = 0.073;
        tracerEndTime = 1.7;
        hit = 10.034;
        typicalspeed = 739.1;
        nvgonly = 1;
        ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 7.9704;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.275 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 650, 716, 750 };
        ACE_barrelLengths[] = { 254.0, 414.02, 508.0 };
        class CamShakeExplode {
            distance = "((6^0.5)*3)";
            duration = "((round (6^0.5))*0.2 max 0.2)";
            frequency = 20;
            power = "(6^0.5)";
        };
        class CamShakeHit {
            distance = 1;
            duration = "((round (6^0.25))*0.2 max 0.2)";
            frequency = 20;
            power = 6;
        };
    };
    /*
    Russian Military Designated 7N23 AP
    ArmA Name: 7N23 AP
    Type: Full Metal Jacket with a hardened steel core
    Load Type: Supersonic
    */
    class HLC_762x39_AP : HLC_300Blackout_Ball {
        airFriction = -0.0014063;
        caliber = 0.703;
        deflecting = 25;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        tracerStartTime = 0.073;
        tracerEndTime = 1.7;
        hit = 8.121;
        typicalspeed = 759;
        nvgonly = 1;
        ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 7.9704;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.275 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 650, 716, 750 };
        ACE_barrelLengths[] = { 254.0, 414.02, 508.0 };
        class CamShakeExplode {
            distance = "((6^0.5)*3)";
            duration = "((round (6^0.5))*0.2 max 0.2)";
            frequency = 20;
            power = "(6^0.5)";
        };
        class CamShakeHit {
            distance = 1;
            duration = "((round (6^0.25))*0.2 max 0.2)";
            frequency = 20;
            power = 6;
        };
    };
    /*
    Russian Military Designated 57-N-23U
    ArmA Name: 57-N-321U Subsonic
    Type: Full Metal Jacket with mild steel core
    Load Type: Subsonic
    */
    class HLC_762x39_SUB : HLC_300Blackout_Ball {
        airFriction = -0.0007324;
        caliber = 0.402;
        deflecting = 20;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        tracerStartTime = 0.073;
        tracerEndTime = 1.7;
        hit = 8.121;
        typicalspeed = 311.8;
        nvgonly = 1;
        ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 7.9704;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.275 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 650, 716, 750 };
        ACE_barrelLengths[] = { 254.0, 414.02, 508.0 };
        class CamShakeExplode {
            distance = "((6^0.5)*3)";
            duration = "((round (6^0.5))*0.2 max 0.2)";
            frequency = 20;
            power = "(6^0.5)";
        };
        class CamShakeHit {
            distance = 1;
            duration = "((round (6^0.25))*0.2 max 0.2)";
            frequency = 20;
            power = 6;
        };
    };
    class HLC_762x39_Tracer : HLC_762x39_Ball {
        nvgonly = 0;
        ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 7.5816;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.275 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 650, 716, 750 };
        ACE_barrelLengths[] = { 254.0, 414.02, 508.0 };
    };


    /*
    7.62x51mm NATO: *Ballistics based on a 20 inch barrel from an FN Mk20 SSR

    US Military Designated M80A1 EPR
    ArmA Name: M80A1 EPR
    Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)
    */
    class HLC_762x51_ball : B_762x51_Ball {
        airFriction = -0.00100899;
        typicalSpeed = 908.4;
        hit = 13.92;
        tracerScale = 1.2; 
        tracerStartTime = 0.073;  
        tracerEndTime = 2.15957;  
        caliber = 1.123;
        deflecting = 22;
        ACE_caliber = 7.823;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.4608;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.2 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 700, 800, 820, 833, 845 };
        ACE_barrelLengths[] = { 254.0, 406.4, 508.0, 609.6, 660.4 };
    };
    class B_762x51_Tracer_Yellow;
    class HLC_B_762x51_Tracer_Dim : B_762x51_Tracer_Yellow {
        nvgOnly = 1;
    };
    /*
    US Military Designated MK316 Mod 0 SBLR
    ArmA Name: MK316 Mod 0 SBLR
    Type: Open Tip Match (Special Ball Long Range)
    Load Type: Supersonic
    */
    class HLC_762x51_MK316_20in : HLC_762x51_ball {
        airFriction = -0.00083979;
        caliber = 0.348;
        hit = 17.02;
        typicalSpeed = 791;
        deflecting = 21;
        ACE_caliber = 7.823;
        ACE_bulletLength = 31.496;
        ACE_bulletMass = 11.34;
        ACE_ammoTempMuzzleVelocityShifts[] = { -5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2 };
        ACE_ballisticCoefficients[] = { 0.243 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 775, 790, 805, 810 };
        ACE_barrelLengths[] = { 406.4, 508.0, 609.6, 660.4 };
    };
    //Ballistics by Ruthberg, CO ACE3
    // NO LONGER BEING MAINTAINED, Retaining for Legacy. 
    class HLC_762x51_Barrier : HLC_762x51_ball {
        airFriction = -0.00102338;
        caliber = 1.5;
        hit = 14;
        typicalSpeed = 900;
        ACE_caliber = 7.823;
        ACE_bulletLength = 31.496;
        ACE_bulletMass = 8.424;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.377 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 838, 892, 910 };
        ACE_barrelLengths[] = { 330.2, 406.4, 508.0 };
    };
    /*
    Lapua FMJ-BT Subsonic
    ArmA Name: FMJ Subsonic
    Type: Full Metal Jacket with Boat Tail
    Load Type: Subsonic
    */
    class HLC_762x51_BTSub : HLC_762x51_ball {
        airFriction = -0.000510997;
        caliber = 0.399;
        hit = 5.232;
        typicalSpeed = 325;
        deflecting = 20;
        ACE_caliber = 7.823;
        ACE_bulletLength = 34.036;
        ACE_bulletMass = 12.96;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.235 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 305, 325, 335, 340 };
        ACE_barrelLengths[] = { 406.4, 508.0, 609.6, 660.4 };
    };
    class HLC_762x51_tracer : HLC_762x51_ball {
        cartridge = "FxCartridge_762";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 0;
        tracerendtime = 1.4;
        tracerscale = 1;
        tracerstarttime = 0.06;
    };

    //7,62x54mm R
    class HLC_762x54_ball : HLC_762x51_ball {
        hit = 13;
        typicalSpeed = 828;
        airfriction = -0.00125;
        caliber = 1.3;
        cost = 1.2;
        deflecting = 20;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_762";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.05;
        ACE_caliber = 7.925;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.8496;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.4 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 700, 800, 820, 833 };
        ACE_barrelLengths[] = { 406.4, 508.0, 609.6, 660.4 };
        AB_caliber = 0.312;
        AB_bulletLength = 1.14;
        AB_bulletMass = 152;
        AB_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        AB_ballisticCoefficients[] = { 0.4 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ICAO";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 700, 800, 820, 833 };
        AB_barrelLengths[] = { 16, 20, 24, 26 };
    };
    class HLC_762x54_tracer : HLC_762x51_tracer {
        airfriction = -0.00125;
        caliber = 1.3;
        cartridge = "FxCartridge_762";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        nvgonly = 0;
        tracerendtime = 1.7;
        tracerscale = 1;
        tracerstarttime = 0.02;
        ACE_caliber = 7.925;
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.6552;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.395 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 680, 750, 798, 800 };
        ACE_barrelLengths[] = { 406.4, 508.0, 609.6, 660.4 };
        AB_caliber = 0.312;
        AB_bulletLength = 1.14;
        AB_bulletMass = 149;
        AB_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        AB_ballisticCoefficients[] = { 0.395 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ICAO";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 680, 750, 798, 800 };
        AB_barrelLengths[] = { 16, 20, 24, 26 };
    };
    class HLC_762x54_AP : HLC_762x54_ball {
        hit = 16.5;
        caliber = 1.75;
        typicalSpeed = 828;
        airfriction = -0.00125;
        deflecting = 20;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_762";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.05;
    };

    class HLC_303Brit_B : B_556x45_Ball {
        airfriction = -0.00091623899;
        caliber = 1.35;
        typicalSpeed = 800;
        maxspeed = 900;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        cartridge = "FxCartridge_762";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.01;
        cost = 1;
        deflecting = 20;
        hit = 12;
        airlock = 1;
        ACE_caliber = 7.899;
        ACE_bulletLength = 31.166;
        ACE_bulletMass = 11.2752;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.499, 0.493, 0.48 };
        ACE_velocityBoundaries[] = { 671, 549 };
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 748, 761, 765 };
        ACE_barrelLengths[] = { 508.0, 609.6, 660.4 };
        AB_caliber = 0.311;
        AB_bulletLength = 1.227;
        AB_bulletMass = 174;
        AB_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        AB_ballisticCoefficients[] = { 0.499, 0.493, 0.48 };
        AB_velocityBoundaries[] = { 671, 549 };
        AB_standardAtmosphere = "ASM";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 748, 761, 765 };
        AB_barrelLengths[] = { 20, 24, 26 };
    };
    class HLC_303Brit_T : HLC_303Brit_B {
        caliber = 1;
        typicalSpeed = 725;
        maxspeed = 900;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        cartridge = "FxCartridge_762";
        nvgonly = 0;
        tracerendtime = 1.4;
        tracerscale = 1;
        tracerstarttime = 0.02;
        hit = 12;
        airlock = 1;
    };
    class HLC_303Brit_AP : HLC_303Brit_B {
        airfriction = -0.00211;
        caliber = 1.5;
        typicalSpeed = 844;
        maxspeed = 900;
        hit = 15;
        indirecthit = 3;
        indirecthitrange = 0.1;
        airlock = 1;
    };


    //7.92 Mauser
    //Ballistics by Spartan 0536
    //FMJ : sS Patrone
    class HLC_792x57_Ball : HLC_303Brit_B {
        airfriction = -0.00071885;
        caliber = 0.424;
        typicalSpeed = 759.9;
        maxspeed = 759.9;
        audibleFire = 80;
        visibleFireTime = 3;
        suppressionRadiusBulletClose = 5;
        suppressionRadiusHit = 7;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        cartridge = "FxCartridge_762";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.01;
        cost = 1;
        deflecting = 20;
        hit = 12.533;
        airlock = 1;
        ACE_caliber = 8.2;
        ACE_bulletLength = 28.651;
        ACE_bulletMass = 9.9;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.315 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 785, 800, 815 };
        ACE_barrelLengths[] = { 508.0, 599.948, 660.4 };
    };
    //Tracer (Mild AP) : SMK L'spur
    class HLC_792x57_Tracer : HLC_792x57_Ball {
        airfriction = -0.0007423;
        caliber = 0.79;
        typicalSpeed = 884.9;
        maxspeed = 884.9;
        audibleFire = 80;
        visibleFireTime = 3;
        suppressionRadiusBulletClose = 7;
        suppressionRadiusHit = 9;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_yellow";
        cartridge = "FxCartridge_762";
        nvgonly = 0;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.01;
        cost = 1;
        deflecting = 20;
        hit = 11.57;
        airlock = 1;
        ACE_caliber = 8.2;
        ACE_bulletLength = 28.651;
        ACE_bulletMass = 10;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.315 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 785, 800, 815 };
        ACE_barrelLengths[] = { 508.0, 599.948, 660.4 };
    };
    //AP (Hardened) : SMKH
    class HLC_792x57_AP : HLC_792x57_Ball {
        airfriction = -0.00070184;
        audibleFire = 80;
        visibleFireTime = 3;
        caliber = 1.875;
        typicalSpeed = 853.44;
        maxspeed = 853.44;
        suppressionRadiusBulletClose = 5;
        suppressionRadiusHit = 7;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        cartridge = "FxCartridge_762";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.01;
        cost = 1;
        deflecting = 20;
        hit = 16;
        airlock = 1;
        ACE_caliber = 8.077;
        ACE_bulletLength = 28.651;
        ACE_bulletMass = 12.7008;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.315 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 785, 800, 815 };
        ACE_barrelLengths[] = { 508.0, 599.948, 660.4 };
    };

    // Load Data - MEN S230430 FMJ
    // Provided by Spartan0536
    class HLC_300WM_FMJ : B_556x45_Ball {
        hit = 13.55;
        typicalSpeed = 841.2;
        airFriction = -0.00085473;
        //caliber = 0.922;
        caliber = 1.081;
        deflecting = 21;
        visibleFire = 3.25;
        audibleFire = 8;
        cost = 1;
        indirecthit = 0;
        indirecthitrange = 0;
        maxspeed = 990;
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.05;
        timeToLive = 12;
        ACE_caliber = 7.823;
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 13.0;
        ACE_ammoTempMuzzleVelocityShifts[] = { -5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2 };
        ACE_ballisticCoefficients[] = { 0.250 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 690, 990 };
        ACE_barrelLengths[] = { 305, 660.4 };
        class CamShakeExplode {
            power = "(10^0.5)";
            duration = "((round (10^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((10^0.5)*3)";
        };
        class CamShakeHit {
            power = 10;
            duration = "((round (10^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
    };
    class HLC_300WM_Tracer : B_556x45_Ball {
        hit = 13.54294485;
        typicalSpeed = 841.2;
        airFriction = -0.00085473;
        //caliber = 0.922;
        caliber = 1.081;
        deflecting = 21;
        visibleFire = 3.25;
        audibleFire = 8;
        cost = 1;
        indirecthit = 0;
        indirecthitrange = 0;
        maxspeed = 990;
        nvgonly = 0;
        tracerscale = 1;
        tracerStartTime = 0.073;
        tracerEndTime = 1.7;
        timeToLive = 12;
        ACE_caliber = 7.823;
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 13.0;
        ACE_ammoTempMuzzleVelocityShifts[] = { -5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2 };
        ACE_ballisticCoefficients[] = { 0.250 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 690, 990 };
        ACE_barrelLengths[] = { 305, 660.4 };
        class CamShakeExplode {
            power = "(10^0.5)";
            duration = "((round (10^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((10^0.5)*3)";
        };
        class CamShakeHit {
            power = 10;
            duration = "((round (10^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
    };
    //Like above, but squishier. For Squishier Targets, not meant to shred Ifrits.
    // Data composited by Toadie
    class HLC_300WM_BTSP : B_556x45_Ball {
        airfriction = -0.00083518;
        //caliber = 0.6;
        caliber = 1.8;
        cost = 1;
        deflecting = 20;
        typicalSpeed = 940;
        hit = 15.7;
        indirecthit = 0;
        indirecthitrange = 0;
        maxspeed = 990;
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.05;
        timeToLive = 12;
        ACE_caliber = 7.8232;
        ACE_bulletLength = 35.1282;
        ACE_bulletMass = 12.31179;
        ACE_ammoTempMuzzleVelocityShifts[] = { -5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2 };
        ACE_ballisticCoefficients[] = { 0.268 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 670, 940 };
        ACE_barrelLengths[] = { 305, 660 };
        class CamShakeExplode {
            power = "(10^0.5)";
            duration = "((round (10^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((10^0.5)*3)";
        };
        class CamShakeHit {
            power = 10;
            duration = "((round (10^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
    };
    // Load Data - MEN DM131 AP (Tungsten-Carbide penetrator in a solid aluminium slug)
    // Provided by Spartan0536
    // SAPI maybe later if we can figure out a way to do Incendiray without it being explosive OR comparatively redundant.
    // This bullet kills ifrits.
    class HLC_300WM_AP : HLC_300WM_BTSP {
        hit = 10.59;
        typicalSpeed = 861;
        airFriction = -0.00073473;
        //caliber = 1.48;
        caliber = 1.735;
        deflecting = 23;
        visibleFire = 3.25;
        audibleFire = 8;
        ACE_caliber = 7.823;
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 12.8;
        ACE_ammoTempMuzzleVelocityShifts[] = { -5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2 };
        ACE_ballisticCoefficients[] = { 0.286 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 614, 861 };
        ACE_barrelLengths[] = { 305, 660.4 };
    };
    // Load Data - Mk248 Mod 1 OTM (220 Grain SMK Boat-Tailed Hollowpoint, as Spec'd by Black Hills)
    // Provided by Spartan0536
    class HLC_300WM_BTHP : HLC_300WM_BTSP {
        hit = 18.98;
        typicalSpeed = 899.2;
        airFriction = -0.00066395;
        //caliber = 0.453;
        caliber = 0.531055;
        //caliber = 1.9;
        deflecting = 19;
        visibleFire = 3.25;
        audibleFire = 8;
        visibleFireTime = 0.75;
        //typicalSpeed = 869;
        maxspeed = 990;
        timeToLive = 12;
        //Ruthberg Data. Source: ACE3 Source Code. Plze forgive me Spartan, Don't leave me ;_;
        ACE_caliber = 7.823;
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 14.256;
        ACE_ammoTempMuzzleVelocityShifts[] = { -5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2 };
        ACE_ballisticCoefficients[] = { 0.310 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 847, 867, 877 };
        ACE_barrelLengths[] = { 508.0, 609.6, 660.4 };
    };

    class HLC_300WM_S_BT : HLC_300WM_BTSP {
        hit = 15.8;
        airFriction = -0.000498;
        typicalSpeed = 340;
        visibleFire = 2.2;
        audibleFire = 2.2;
        visibleFireTime = 0.75;
        caliber = 0.8;
        maxspeed = 400;
        timeToLive = 12;
    };
    //6.8x43mm SPCII
    /*
    Federal American Eagle FMJ-BT
    ArmA Name: FMJ
    Type: Full Metal Jacket Boat Tail
    Load Type: Supersonic
    */
    class HLC_68x43_FMJ :B_556x45_Ball
    {
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        cartridge = "FxCartridge_556";
        typicalSpeed = 815.4;
        airFriction = -0.00111121;
        caliber = 0.585;
        deflecting = 22;
        visibleFire = 3.05;
        audibleFire = 6;
        hit = 9.96;
        ACE_caliber = 6.706;
        ACE_bulletLength = 32.893;
        ACE_bulletMass = 7.9704;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.8, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.263 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 730, 760, 788, 800, 810, 830 };
        ACE_barrelLengths[] = { 254, 406.4, 508, 609.6, 660.4, 762 };
    };
    class hlc_68x43_IRDIM : HLC_68x43_FMJ
    {
        nvgonly = 1;
    };
    /*
    Combat Custom Handloaded BT-BT
    ArmA Name: Ballistic Tip
    Type: Ballistic Tip Boat Tail (Alliant RL10X at 27.5 grains, CCI BR4 primer, SSA-S Brass, SPC II rating MAXIMUM LOAD, Hornady SST Bullet)
    Load Type: Supersonic
    */
    class hlc_68x43_OTM :HLC_68x43_FMJ
    {
        typicalSpeed = 795.0;
        airFriction = -0.00105458;
        caliber = 0.250;
        deflecting = 20;
        visibleFire = 3.8;
        audibleFire = 7;
        hit = 14.16;
    };
    /*
    Combat Custom Handloaded Spitzer SP
    ArmA Name: Subsonic
    Type: Spitzer Soft Point (Alliant RL9 at 20 grains, CCI BR4 Primer, SSA-S Brass, Speer HOT-COR Bullet)
    Load Type: Subsonic
    */
    class hlc_68x43_Sub :HLC_68x43_FMJ
    {
        typicalSpeed = 317.0;
        airFriction = -0.0005841;
        caliber = 0.398;
        deflecting = 18;
        visibleFire = 3.8;
        audibleFire = 7;
        hit = 6.86;
    };




    //Swiss 7.5x55mm GP11
    class HLC_GP11_FMJ :B_762x51_Ball {
        airFriction = -0.0004689059;
        caliber = 1.33;
        hit = 11.71;
        typicalSpeed = 750;
        ACE_caliber = 7.7724;
        ACE_bulletLength = ‪35.0012‬;
        ACE_bulletMass = 11.275;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.505 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 780, 730 };
        ACE_barrelLengths[] = { 583, 254 };
        class CamShakeExplode
        {
            power = "(10^0.5)";
            duration = "((round (10^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((10^0.5)*3)";
        };
        class CamShakeHit
        {
            power = 10;
            duration = "((round (10^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
    };
    // Provided by Spartan0536
    /*
    Swiss Military Designated GP11-APBT
    Armor Piercing Boat Tail
    180 Grains
    2570 ft/s
    2642 ft/lbs KE
    .514 Ballistics Coefficient (G1)
    -0.00 AirFriction
    Penetrates 5.5mm of RHA at 500m (mild steel core)
    */
    class HLC_GP11_APBT :B_762x51_Ball
    {
        airFriction = -0.0004606955;
        caliber = 2.2;
        hit = 9.7608273215;
        typicalSpeed = 910;
        ACE_caliber = 7.7724;
        ACE_bulletLength = ‪35.0012‬;
        ACE_bulletMass = 11.275;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.514 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 783, 710 };
        ACE_barrelLengths[] = { 583, 254 };
    };
    // 
    // Provided by Spartan0536
    class HLC_GP11_tracer : HLC_GP11_FMJ
    {

        //caliber = 1.9;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 0;
        deflecting = 19;
        visibleFire = 3.25;
        audibleFire = 8;
        visibleFireTime = 0.75;
        maxspeed = 990;
        timeToLive = 12;
    };


    // .30-06 M1 Ball
    class HLC_3006_FMJ :B_556x45_Ball {
        hit = 11.4;
        airFriction = -0.00096;            //-0.00080900;
        typicalSpeed = 810;
        //caliber = 0.922;
        caliber = 2;
        deflecting = 21;
        visibleFire = 22;
        audibleFire = 18;
        visibleFireTime = 3;
        cost = 1;
        indirecthit = 0;
        indirecthitrange = 0;
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.05;
        ACE_caliber = 7.823;
        ACE_bulletLength = 37.821;
        ACE_bulletMass = 13.0;
        ACE_ammoTempMuzzleVelocityShifts[] = { -5.3, -5.1, -4.6, -4.2, -3.4, -2.6, -1.4, -0.3, 1.4, 3.0, 5.2 };
        ACE_ballisticCoefficients[] = { 0.250 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ICAO";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 690, 990 };
        ACE_barrelLengths[] = { 305, 660.4 };
        class CamShakeExplode
        {
            power = "(10^0.5)";
            duration = "((round (10^0.5))*0.2 max 0.2)";
            frequency = 20;
            distance = "((10^0.5)*3)";
        };
        class CamShakeHit
        {
            power = 10;
            duration = "((round (10^0.25))*0.2 max 0.2)";
            frequency = 20;
            distance = 1;
        };
    };



    //Mannlicher-Carcano
    class HLC_542x42_ball : HLC_303Brit_B {
        airfriction = -3.8571428571428571428571428571429e-4;
        caliber = 0.8;
        typicalSpeed = 700;
        maxspeed = 820;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        cartridge = "FxCartridge_762";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.01;
        cost = 1;
        deflecting = 20;
        hit = 10;
        airlock = 1;
    };
    class HLC_542x42_Tracer : HLC_303Brit_B {
        airfriction = -3.8571428571428571428571428571429e-4;
        caliber = 0.8;
        typicalSpeed = 700;
        maxspeed = 820;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        cartridge = "FxCartridge_762";
        nvgonly = 0;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.01;
        cost = 1;
        deflecting = 20;
        hit = 10;
        airlock = 1;
    };


    //5.45x39mm
    /*
    Russian Military Designated 7N6M FMJ
    ArmA Name: 7N6M FMJ
    Type: Full Metal Jacket (Lead Tip, Mild Steel Core)
    Load Type: Supersonic
    */
    class FH_545x39_Ball : B_556x45_Ball {
        airFriction = -0.0012003;
        caliber = 0.543;
        deflecting = 23;
        cost = 1;
        typicalSpeed = 879.9;
        hit = 8.10;
        indirecthit = 0;
        indirecthitrange = 0;
        visibleFire = 3;
        audibleFire = 7;
        maxspeed = 950;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        nvgonly = 1;
        tracerscale = 1;
        tracerStartTime = 0.072999999;
        tracerEndTime = 1.35;
        AB_caliber = 0.220;
        AB_bulletLength = 0.85;
        AB_bulletMass = 52.9;
        AB_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        AB_ballisticCoefficients[] = { 0.168 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ASM";
        AB_dragModel = 7;
        AB_muzzleVelocities[] = { 780, 880, 920 };
        AB_barrelLengths[] = { 10, 16.3, 20 };
        ACE_caliber = 5.588;
        ACE_bulletLength = 21.59;
        ACE_bulletMass = 3.42792;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.168 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = { 780, 880, 920 };
        ACE_barrelLengths[] = { 254.0, 414.02, 508.0 };
    };
    class FH_545x39_Tracer : FH_545x39_Ball {
        cost = 1;
        indirecthit = 0;
        indirecthitrange = 0;
        maxspeed = 950;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        nvgonly = 0;
        tracerscale = 1;
        tracerStartTime = 0.073;
        tracerEndTime = 1.35;
    };
    /*
    Russian Military Designated 7U1 (Only for use in the AKS-74U, will not cycle in AK-74)
    ArmA Name: 7U1 Subsonic
    Type: Full Metal Jacket
    Load Type: Subsonic
    */
    class FH_545x39_7u1 : FH_545x39_Ball {
        hhit = 3.09;
        indirectHit = 0;
        indirectHitRange = 0;
        visibleFire = 0.02;
        audibleFire = 0.07;
        visibleFireTime = 2;
        cost = 1;
        typicalSpeed = 303;
        airFriction = -0.0005447;
        caliber = 0.402;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        nvgonly = 0;
        tracerendtime = 1.14;
        tracerscale = 1;
        tracerstarttime = 0.07;
        ACE_bulletMass = 5.184;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_muzzleVelocities[] = { 260, 303, 320 };
        ACE_barrelLengths[] = { 254.0, 414.02, 508.0 };
        AB_bulletMass = 80;
        AB_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        AB_muzzleVelocities[] = { 260, 303, 320 };
        AB_barrelLengths[] = { 10, 16.3, 20 };
    };
    /*
    Russian Military Designated 7N10 EP FMJ
    ArmA Name: 7N10 EP-FMJ
    Type: Full Metal Jacket (Lead Tip, Hardened Steel Core)
    Load Type: Supersonic
    */
    class FH_545x39_EP : FH_545x39_Ball {
        airFriction = -0.0011501;
        typicalSpeed = 879.9;
        caliber = 1.424;
        hit = 7.5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        nvgonly = 0;
        tracerendtime = 1.14;
        tracerscale = 1;
        tracerstarttime = 0.07;
        deflecting = 25;
        visibleFire = 3;
        audibleFire = 7;
    };


    // 5.7x28mm
    class HLC_57x28mm_JHP : FH_545x39_Ball {
        airfriction = -6.1538461538461538461538461538462e-4;
        caliber = 0.6;
        cost = 1;
        deflecting = 10;
        typicalSpeed = 720;
        hit = 8;
        indirecthit = 0;
        indirecthitrange = 0;
        maxspeed = 850;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        ACE_caliber = 5.69;
        ACE_bulletLength = 12.573;
        ACE_bulletMass = 1.8144;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.144 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 550, 625, 720 };
        ACE_barrelLengths[] = { 101.6, 152.4, 262.89 };
    };
    class HLC_57x28mm_FMJ : HLC_57x28mm_JHP {
        caliber = 0.55;
        hit = 10;
    };

    //9x19mm
    /*
    US Military Designated M882 Ball
    ArmA Name : M882 Ball
    Type : Full Metal Jacket
    Load Type : Supersonic
    */
    class HLC_9x19_Ball : B_556x45_Ball {
        airFriction = -0.0027652;
        caliber = 0.365;
        cost = 1;
        deflecting = 27;
        typicalSpeed = 390.2;
        hit = 4.95;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        ACE_caliber = 9.017;
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 8.0352;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.165 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 340, 370, 400 };
        ACE_barrelLengths[] = { 101.6, 127.0, 228.6 };
        AB_caliber = 0.355;
        AB_bulletLength = 0.610;
        AB_bulletMass = 124;
        AB_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        AB_ballisticCoefficients[] = { 0.165 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ASM";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 340, 370, 400 };
        AB_barrelLengths[] = { 4, 5, 9 };
    };
    /*
    US Military Designated Mk243 Mod 0 JHP
    ArmA Name: Mk243 Mod 0 JHP
    Type: Jacketed Hollow Point (Winchester USA9JHP2)
    Load Type: Subsonic
    */
    class HLC_9x19_JHP : HLC_9x19_Ball {
        airFriction = -0.001095;
        caliber = 0.334;
        deflecting = 22;
        hit = 6.95;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        typicalSpeed = 301.8;
        tracerendtime = 1.14;
        tracerscale = 1;
        tracerstarttime = 0.07;
        AB_muzzleVelocities[] = { 350, 380, 420 };
        ACE_muzzleVelocities[] = { 350, 380, 420 };
    };
    //SMG-optimised versions
    class HLC_9x19_M882_SMG : B_556x45_Ball {
        airFriction = -0.0026754;
        caliber = 0.357;
        cost = 1;
        deflecting = 27;
        typicalSpeed = 416.1;
        hit = 5.28;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        ACE_caliber = 9.017;
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 8.0352;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.165 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 340, 370, 400 };
        ACE_barrelLengths[] = { 101.6, 127.0, 228.6 };
        AB_caliber = 0.355;
        AB_bulletLength = 0.610;
        AB_bulletMass = 124;
        AB_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        AB_ballisticCoefficients[] = { 0.165 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ASM";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 340, 370, 400 };
        AB_barrelLengths[] = { 4, 5, 9 };
    };
    class HLC_9x19_JHP_SMG : HLC_9x19_Ball {
        airFriction = -0.0011461;
        caliber = 0.326;
        deflecting = 22;
        hit = 7.27;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        typicalSpeed = 315.8;
        tracerendtime = 1.14;
        tracerscale = 1;
        tracerstarttime = 0.07;
        AB_muzzleVelocities[] = { 350, 380, 420 };
        ACE_muzzleVelocities[] = { 350, 380, 420 };
    };
    class HLC_9x19_Subsonic : HLC_9x19_Ball {
        airFriction = -0.00145426;
        caliber = 0.334;
        deflecting = 21;
        visibleFire = 1;
        audibleFire = 2;
        hit = 7.670762747;
        supersonicCrackNear[] = {};
        supersonicCrackFar[] = {};
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        typicalSpeed = 333;
        tracerendtime = 1.14;
        tracerscale = 1;
        tracerstarttime = 0.07;
        AB_muzzleVelocities[] = { 300, 320, 340 };
        ACE_muzzleVelocities[] = { 300, 320, 340 };
    };
    
    
    //.357 SIG

    /*
    DoubleTap Ammunition FMJ-FN
    ArmA Name: FMJ-FN
    Type: Full Metal Jacket Flat Nose
    Load Type: Supersonic
    */
    class HLC_357SIG_FMJ : B_556x45_Ball {
        airFriction = -0.0025294;
        caliber = 0.384;
        cost = 1;
        deflecting = 26;
        typicalSpeed = 401.5;
        hit = 5.78;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        ACE_caliber = 9.017;
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 8.0352;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.165 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 340, 370, 400 };
        ACE_barrelLengths[] = { 101.6, 127.0, 228.6 };
        AB_caliber = 0.355;
        AB_bulletLength = 0.610;
        AB_bulletMass = 124;
        AB_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        AB_ballisticCoefficients[] = { 0.165 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ASM";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 340, 370, 400 };
        AB_barrelLengths[] = { 4, 5, 9 };
    };
    /*
    Hornady Critical Duty LE (Law Enforcement distribution lot numbers)
    ArmA Name: FlexLock JHP
    Type: Jacketed Hollow Point Ballistic Tip (FlexLock)
    Load Type: Supersonic
    */
    class HLC_357SIG_JHP : HLC_9x19_Ball {
        airFriction = -0.0022223;
        caliber = 0.306;
        deflecting = 22;
        hit = 8.21;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        typicalSpeed = 372.2;
        tracerendtime = 1.14;
        tracerscale = 1;
        tracerstarttime = 0.07;
        AB_muzzleVelocities[] = { 350, 380, 420 };
        ACE_muzzleVelocities[] = { 350, 380, 420 };
    };

    //.40 SHORT AND WIMPY

    /*
    US Military Designated Mk309 Mod 0 Ball
    ArmA Name: Mk309 Mod 0 Ball
    Type: Total Metal Jacket Flat Nose (Federal American Eagle AE40R2)
    Load Type: Supersonic
    */
    class HLC_40SW_FMJ : B_556x45_Ball {
        airFriction = -0.00243;
        caliber = 0.409;
        cost = 1;
        deflecting = 26;
        typicalSpeed = 347.5;
        hit = 5.13;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        ACE_caliber = 9.017;
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 8.0352;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.165 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 340, 370, 400 };
        ACE_barrelLengths[] = { 101.6, 127.0, 228.6 };
        AB_caliber = 0.355;
        AB_bulletLength = 0.610;
        AB_bulletMass = 124;
        AB_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        AB_ballisticCoefficients[] = { 0.165 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ASM";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 340, 370, 400 };
        AB_barrelLengths[] = { 4, 5, 9 };
    };
    /*
    Hornady Critical Duty LE (Law Enforcement distribution lot numbers)
    ArmA Name: FlexLock JHP
    Type: Jacketed Hollow Point Ballistic Tip (FlexLock)
    Load Type: Supersonic
    */
    class HLC_40SW_JHP : HLC_9x19_Ball {
        airFriction = -0.002529;
        caliber = 0.322;
        deflecting = 22;
        hit = 8.36;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        typicalSpeed = 353.6;
        tracerendtime = 1.14;
        tracerscale = 1;
        tracerstarttime = 0.07;
        AB_muzzleVelocities[] = { 350, 380, 420 };
        ACE_muzzleVelocities[] = { 350, 380, 420 };
    };
    /*
    Hornady Critical Duty LE (Law Enforcement distribution lot numbers)
    ArmA Name: FlexLock JHP
    Type: Jacketed Hollow Point Ballistic Tip (FlexLock)
    Load Type: Supersonic
    */
    class HLC_40SW_SD : HLC_9x19_Ball {
        airFriction = -0.000907;
        caliber = 0.388;
        deflecting = 21;
        hit = 7.37;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        typicalSpeed = 274.7;
        tracerendtime = 1.14;
        tracerscale = 1;
        tracerstarttime = 0.07;
        AB_muzzleVelocities[] = { 350, 380, 420 };
        ACE_muzzleVelocities[] = { 350, 380, 420 };
    };
    
    //10mm AUTO
    //SMG optimised
    /*
    Buffalo Bore Heavy FMJ-FN
    ArmA Name: FMJ-FN
    Type: Full Metal Jacket Flat Nose
    Load Type: Supersonic
    */
    class HLC_10mm_FMJ : HLC_9x19_Ball {
        airFriction = -0.00194781;
        caliber = 0.385;
        cost = 1;
        deflecting = 26;
        typicalSpeed = 408.8;
        hit = 6.86;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        AB_caliber = 0.400;
        AB_bulletLength = 0.68;
        AB_bulletMass = 170;
        AB_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        AB_ballisticCoefficients[] = { 0.17 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ASM";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 340, 370, 400 };
        AB_barrelLengths[] = { 4, 5, 9 };
        ACE_caliber = 12.7;
        ACE_bulletLength = 19.406;
        ACE_bulletMass = 10.692;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.189 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 360, 400, 430 };
        ACE_barrelLengths[] = { 101.6, 117.094, 228.6 };
    };
    /*
    Buffalo Barnes TACTICAL Low Recoil & Low Flash JHP
    ArmA Name: TAC-XP JHP
    Type: Jacketed Hollow Point (Barnes TAC-XP Bullet)
    Load Type: Supersonic
    */
    class HLC_10mm_JHP : HLC_10mm_FMJ {
        airFriction = -0.002330929;
        caliber = 0.267;
        cost = 1;
        deflecting = 22;
        typicalSpeed = 463.3;
        hit = 10.95;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        AB_caliber = 0.400;
        AB_bulletLength = 0.68;
        AB_bulletMass = 180;
        AB_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        AB_ballisticCoefficients[] = { 0.17 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ASM";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 340, 370, 313 };
        AB_barrelLengths[] = { 4, 5, 9 };
    };


    //.45ACP
    /*
    US Military Designated M1911 Ball
    ArmA Name: M1911 Ball
    Type: Full Metal Jacket
    Load Type: Subsonic
    */
    class HLC_45ACP_Ball : B_556x45_Ball {
        airfriction = -0.0007962;
        audiblefire = 18;
        caliber = 0.468;
        cost = 5;
        deflecting = 28;
        typicalSpeed = 251.5;
        hit = 4.35;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        visiblefire = 16;
        ACE_caliber = 11.481;
        ACE_bulletLength = 17.272;
        ACE_bulletMass = 14.904;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.195 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 230, 250, 285 };
        ACE_barrelLengths[] = { 101.6, 127.0, 228.6 };
        AB_caliber = 0.452;
        AB_bulletLength = 0.68;
        AB_bulletMass = 230;
        AB_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        AB_ballisticCoefficients[] = { 0.195 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ASM";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 230, 250, 285 };
        AB_barrelLengths[] = { 4, 5, 9 };
    };
    /*
    Federal Tactical HST JHP +P
    ArmA Name: JHP +P
    Type: Jacketed Hollow Point +P
    Load Type: Subsonic
    */
    class HLC_45ACP_JHP : B_556x45_Ball {
        airFriction = -0.001088;
        audiblefire = 18;
        caliber = 0.383;
        cost = 5;
        deflecting = 22;
        typicalSpeed = 292.7;
        hit = 8.43;
        indirecthit = 0;
        indirecthitrange = 0;
        cartridge = "FxCartridge_9mm";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        nvgonly = 1;
        tracerendtime = 1;
        tracerscale = 1;
        tracerstarttime = 0.06;
        visiblefire = 16;
        ACE_caliber = 11.481;
        ACE_bulletLength = 17.272;
        ACE_bulletMass = 14.904;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.195 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 230, 250, 285 };
        ACE_barrelLengths[] = { 101.6, 127.0, 228.6 };
        AB_caliber = 0.452;
        AB_bulletLength = 0.68;
        AB_bulletMass = 230;
        AB_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        AB_ballisticCoefficients[] = { 0.195 };
        AB_velocityBoundaries[] = {};
        AB_standardAtmosphere = "ASM";
        AB_dragModel = 1;
        AB_muzzleVelocities[] = { 230, 250, 285 };
        AB_barrelLengths[] = { 4, 5, 9 };
    };
    //Does not exist, not used
    class FH_45ACP_Tracer : HLC_45ACP_Ball {
        airfriction = -0.002;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgonly = 0;
        deflecting = 45;
        tracerendtime = 1.5;
        tracerscale = 0.5;
        tracerstarttime = 0.01;
    };

    class HLC_12G_Buck : B_12Gauge_Pellets {
        hit = 3.75;
        indirectHit = 0;
        indirectHitRange = 0;
        caliber = 0.24;

        typicalSpeed = 403.86;
        airFriction = -0.00634;

        class HitEffects {
            Hit_Foliage_green = "ImpactLeavesGreen";
            Hit_Foliage_Dead = "ImpactLeavesDead";
            Hit_Foliage_Green_big = "ImpactLeavesGreenBig";
            Hit_Foliage_Palm = "ImpactLeavesPalm";
            Hit_Foliage_Pine = "ImpactLeavesPine";
            hitFoliage = "ImpactLeaves";
            hitGlass = "ImpactGlass";
            hitGlassArmored = "ImpactGlassThin";
            hitWood = "ImpactWood";
            hitMetal = "ImpactMetal";
            hitMetalPlate = "ImpactMetal";
            hitBuilding = "ImpactPlaster";
            hitPlastic = "ImpactPlastic";
            hitRubber = "ImpactRubber";
            hitConcrete = "ImpactConcrete";
            hitMan = "ImpactEffectsBlood";
            hitGroundSoft = "ImpactEffectsSmall";
            hitGroundHard = "ImpactEffectsHardGround";
            hitWater = "ImpactEffectsWater";
            hitVirtual = "ImpactMetal";
        };
    };
    class HLC_12G_Distraction : B_556x45_Ball {
        airfriction = -0.01;
        audiblefire = 18;
        caliber = 0.5;
        cartridge = "FxCartridge_slug";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgonly = 0;
        tracerendtime = 1;
        tracerscale = 1;
        cost = 20;
        hit = 0;
        indirecthit = 0;
        indirecthitrange = 0;
        simulation = "shotSpread";
        typicalspeed = 1;
        visiblefire = 18;
        deflecting = 90;
    };


    //.44 Mag
    class FH_44Mag : HLC_45ACP_Ball {
        airfriction = -0.001636;
        caliber = 2;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgonly = 1;
        hit = 10;
        typicalSpeed = 391;
        maxspeed = 404;
        deflecting = 45;
        tracerendtime = 1.5;
        tracerscale = 0.5;
        tracerstarttime = 0.01;
        ACE_caliber = 10.897;
        ACE_bulletLength = 20.422;
        ACE_bulletMass = 12.96;
        ACE_ammoTempMuzzleVelocityShifts[] = { -2.655, -2.547, -2.285, -2.012, -1.698, -1.280, -0.764, -0.153, 0.596, 1.517, 2.619 };
        ACE_ballisticCoefficients[] = { 0.172 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 360, 390, 420 };
        ACE_barrelLengths[] = { 101.6, 190.5, 228.6 };
    };

    class FH_44Mag_JHP : FH_44Mag {
        airfriction = -0.0019;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgonly = 1;
        typicalSpeed = 460;
        maxspeed = 470;
        deflecting = 20;
        tracerendtime = 1.5;
        tracerscale = 0.5;
        tracerstarttime = 0.01;
    };
    class FH_44Mag_FUNTRACER : FH_44Mag {
        airfriction = -0.001636;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        nvgonly = 0;
        typicalSpeed = 391;
        maxspeed = 404;
        deflecting = 75;
        tracerendtime = 1.5;
        tracerscale = 0.5;
        tracerstarttime = 0.01;
    };

    // 50 BMG
    // BECAUSE YES
    class FH_50BMG_SLAP : B_127x99_Ball {
        airfriction = -0.0003;
        explosive = 0;
        hit = 60;
        indirecthit = 5;
        indirecthitrange = 1;
        cartridge = "FxCartridge_127";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
        tracerendtime = 1;
        tracerscale = 1.2;
        tracerstarttime = 0.075;
        typicalSpeed = 1250;
        maxspeed = 1275;
        nvgonly = 0;
        airlock = 1;
        ACE_caliber = 7.823;
        ACE_bulletLength = 31.75;
        ACE_bulletMass = 22.68;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 1.056 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 1204 };
        ACE_barrelLengths[] = { 736.6 };
    };
    class FH_50BMG_Raufoss : B_127x99_Ball {
        airlock = 1;
        cartridge = "FxCartridge_127";
        model = "\A3\Weapons_f\Data\bullettracer\tracer_Red";
        airfriction = -0.000408;
        caliber = 3.5;
        deflecting = 5;
        explosive = 0.5;
        hit = 80;
        indirecthit = 20;
        indirecthitrange = 0.5;
        tracerendtime = 1;
        tracerscale = 0.2;
        tracerstarttime = 0.002;
        nvgonly = 0;
        typicalSpeed = 889;
        maxspeed = 990;
        ACE_caliber = 12.954;
        ACE_bulletLength = 60.452;
        ACE_bulletMass = 42.768;
        ACE_ammoTempMuzzleVelocityShifts[] = { -26.55, -25.47, -22.85, -20.12, -16.98, -12.80, -7.64, -1.53, 5.96, 15.17, 26.19 };
        ACE_ballisticCoefficients[] = { 0.670 };
        ACE_velocityBoundaries[] = {};
        ACE_standardAtmosphere = "ASM";
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = { 817 };
        ACE_barrelLengths[] = { 736.6 };
        cratereffects = "ExploAmmoCrater";
        explosioneffects = "ExploAmmoExplosion";
        explosionsoundeffect = "DefaultExplosion";
        multisoundhit[] = { "soundHit1", 0.2, "soundHit2", 0.2, "soundHit3", 0.2, "soundHit4", 0.1, "soundHit5", 0.15, "soundHit6", 0.15 };
        muzzleeffect = "";
        soundhit1[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_1", 3.16228, 1, 2000 };
        soundhit2[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_2", 3.16228, 1, 2000 };
        soundhit3[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_3", 3.16228, 1, 2000 };
        soundhit4[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_4", 3.16228, 1, 2000 };
        soundhit5[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_5", 3.16228, 1, 2000 };
        soundhit6[] = { "A3\Sounds_F\weapons\Explosion\gr_explosion_6", 3.16228, 1, 2000 };
        class CamShakeFire {
            distance = 5;
            duration = 0.5;
            frequency = 20;
            power = 30;
        };
        class CamShakePlayerFire {
            duration = 0.1;
            frequency = 20;
            power = 10;
        };
        class CamShakeHit {
            duration = 1;
            frequency = 20;
            power = 20;
        };
    };
};