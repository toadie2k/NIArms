class CfgMagazines 
{
    class 30Rnd_556x45_Stanag;

    class hlc_30rnd_556x45_EPR : 30Rnd_556x45_Stanag
    {
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "STANAG Mag (EPR) 5.56mm";
        initspeed = 974.8;
        mass = 11.5;                                // no reference found
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };
    class hlc_30rnd_556x45_SOST : 30Rnd_556x45_Stanag
    {
        ammo = "HLC_556NATO_SOST";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO Mk318 Mod 1 SOST<br />Type: Nickel Plated Reverse Drawn Full Metal Jacket (SOST)<br />Rounds: 30";
        displayname = "STANAG Mag (SOST) 5.56mm";
        initspeed = 954.4;
        mass = 11.5;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK318 SOST";
        picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };
    class hlc_30rnd_556x45_SPR : 30Rnd_556x45_Stanag
    {
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO MK262 Mod 1 SBLR<br />Type: Open Tip Match (Special Ball Long Range)<br />Rounds: 30";
        displayname = "STANAG Mag (SPR) 5.56mm";
        initspeed = 868.7;
        mass = 12.2;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK262 Mod 1";
        picture = "\hlc_core\tex\ui\ammo\m_STANAG_ball_ca.paa";
    };
    class hlc_30rnd_556x45_S : hlc_30rnd_556x45_EPR 
    {
        author = "Toadie";
        initspeed = 340;
        descriptionshort = "Caliber: 5.56x45mm NATO Cold-load M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "STANAG Mag (Subsonic) 5.56mm";
        picture = "\hlc_core\tex\ui\ammo\m_blackout_sub_ca.paa";
    };
    class hlc_30rnd_556x45_M : 30Rnd_556x45_Stanag
    {
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR/M856A1<br />Type: FMJ/Tracer<br />Rounds: 30";
        displayname = "STANAG Mag (EPR,Tracer) 5.56mm";
        initspeed = 974.8;
        mass = 12;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 4;
        displaynameshort = "EPR,Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_STANAG_tracer_ca.paa";
    };
    class hlc_30rnd_556x45_t : 30Rnd_556x45_Stanag
    {
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M856A1 Tracer<br />Type: Incendiary-tip Tracer<br />Rounds: 30";
        displayname = "STANAG Mag (Tracer) 5.56mm";
        initspeed = 974.8;
        mass = 11.9;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = "M856A1 Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_STANAG_tracer_ca.paa";
    };
    class hlc_30rnd_556x45_MDim :hlc_30rnd_556x45_EPR 
    {
        author = "Toadie";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 30";
        displayname = "STANAG Mag (EPR-IRDIM) 5.56mm";
        tracersevery = 4;
        displaynameshort = "EPR/IR-DIM";
        picture = "\hlc_core\tex\ui\ammo\m_STANAG_tracer_ca.paa";
    };
    class hlc_30rnd_556x45_TDim :hlc_30rnd_556x45_EPR 
    {
        author = "Toadie";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 30";
        displayname = "STANAG Mag (IR-DIM) 5.56mm";
        tracersevery = 1;
        displaynameshort = "IR-DIM";
        picture = "\hlc_core\tex\ui\ammo\m_STANAG_tracer_ca.paa";
    };
    class hlc_50rnd_556x45_EPR : hlc_30rnd_556x45_EPR 
    {
        ammo = "HLC_556NATO_EPR_Tracer";
        author = "Toadie";
        count = 50;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 50";
        displayname = "X-15 STANAG Mag (EPR) 5.56mm";
        mass = 17.8;                                // no reference found
        tracersevery = 5;
        picture = "\hlc_core\tex\ui\ammo\m_X15_mixed_ca.paa";
    };

    /*
    //FAL MAGs
    class hlc_20rnd_762x51_b_fal;
    class hlc_20rnd_762x51_t_fal;
    class hlc_20rnd_762x51_s_fal;

    class hlc_20rnd_762x51_B_SCAR : hlc_20Rnd_762x51_B_fal {
    descriptionshort = "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SCAR-H(Mk17)";
    displayname = "SCAR-H Mag (Ball) 20rnd 7.62mm";
    initspeed = 714;
    mass = 7;
    displaynameshort = "7.62mm Ball";
    picture = "\hlc_core\tex\ui\ammo\m_scarhball_ca.paa";
    };
    class hlc_20rnd_762x51_T_SCAR : hlc_20Rnd_762x51_T_fal {
    descriptionshort = "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SCAR-H(Mk17)";
    displayname = "SCAR-H Mag (Tracer) 20rnd 7.62mm";
    initspeed = 714;
    mass = 7;
    displaynameshort = "7.62mm Tracer";
    picture = "\hlc_core\tex\ui\ammo\m_scarhTracer_ca.paa";
    };
    class hlc_20rnd_762x51_S_SCAR : hlc_20Rnd_762x51_S_fal {
    descriptionshort = "Caliber: 7.62x51mm NATO<br />Rounds: 20<br />Used in: SCAR-H(Mk17)";
    displayname = "SCAR-H Mag (SubSonic) 20rnd 7.62mm";
    displaynameshort = "7.62mm Subsonic";
    picture = "\hlc_core\tex\ui\ammo\m_scarhsubsonic_ca.paa";
    mass = 7;
    };
    */

// Tommy Gun Drums
    class hlc_50Rnd_45ACP_B_1921 : 30Rnd_556x45_Stanag
    {
        ammo = "FH_45ACP_Ball";
        count = 50;
        initspeed = 285;
        descriptionshort = "Caliber: .45ACP Ball<br />Rounds: 50<br />Used in: M1928";
        displayname = "M1928 Mag (Ball) 50rnd .45ACP";
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_m1928ball_ca.paa";
        scope = 0;
        mass = 47.9;
        tracersevery = 0;
        displaynameshort = ".45ACP Ball";
    };
    class hlc_50Rnd_45ACP_T_1921 : hlc_50Rnd_45ACP_B_1921 
    {
        ammo = "FH_45ACP_Tracer";
        count = 50;
        descriptionshort = "Caliber: .45ACP LV Tracer<br />Rounds: 50<br />Used in: M1928";
        displayname = "M1928 Mag (Tracer) 50rnd .45ACP";
        displaynameshort = ".45ACP LV Tracer";
        lastroundstracer = 1;
        mass = 47.9;
        picture = "\hlc_core\tex\ui\ammo\m_m1928tracer_ca.paa";
        scope = 0;
        tracersevery = 2;
    };

    class hlc_50rnd_9x19_B_9mmar : 30Rnd_556x45_Stanag
    {
        count = 50;
        ammo = "HLC_9x19_Ball";
        scope = 0;
        descriptionshort = "Caliber: 9x19mm Parrabellum (Ball)<br />Rounds: 50<br />Used in: 9MMAR";
        displayname = "9MMAR Mag (Ball) 50rnd 9x19mm";
        displaynameshort = "9mm Ball";
        picture = "\hlc_core\tex\ui\ammo\m_9mmarball_ca.paa";
        mass = 12.9;
        initspeed = 423;
    };
 
//NATO M13-link 100 Round Belts
//imported from M60s for general applique
    class hlc_100Rnd_762x51_B_M60E4 : 30Rnd_556x45_Stanag
    {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        count = 100;
        descriptionshort = "Caliber: 7.62x51mm M80A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 100";
        displayname = "M13-Link Belt (EPR) 100-Rnd 7.62mm";
        model = "hlc_core\mesh\magazines\100rnd_762NATO_M60.p3d";
        initspeed = 853;
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        mass = 58.2;
        displaynameshort = "M80A1 EPR";
        nameSound = "mgun";
        ACE_isBelt = 1;
    };
    class hlc_100Rnd_762x51_M_M60E4 : hlc_100Rnd_762x51_B_M60E4 
    {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        descriptionshort = "Caliber: 7.62x51mm 4-to-1 M80A1-M62A1<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 100";
        displayname = "M13-Link Belt (Ball-Tracer) 100rnd 7.62mm";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = "EPR/Tracer";
    };
    class hlc_100Rnd_762x51_Mdim_M60E4 : hlc_100Rnd_762x51_B_M60E4 
    {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = "Caliber: 7.62x51mm 4-to-1 M80A1-M276<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 100";
        displayname = "M13-Link Belt (EPR-IRDIM) 100rnd 7.62mm";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = "EPR/IR-DIM";
    };
    class hlc_100Rnd_762x51_Barrier_M60E4 : hlc_100Rnd_762x51_B_M60E4 
    {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_Barrier";
        descriptionshort = "Caliber: 7.62x51mm 4-to-1 Mk319-Tracer<br />Type: OTM/Incendiary Tracer<br />Rounds: 100";
        displayname = "M13-Link Belt (Mk319-Tracer Mix) 100rnd 7.62mm";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = "Mk319/Tracer";
    };
    class hlc_100Rnd_762x51_T_M60E4 : hlc_100Rnd_762x51_B_M60E4 
    {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        descriptionshort = "Caliber: 7.62x51mm M62A1 <br />Type: Incendiary Tracer <br />Rounds: 100";
        displayname = "M13-Link Belt (Tracer) 100rnd 7.62mm";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4tracer_ca.paa";
        tracersevery = 1;
        displaynameshort = "M62A1 Tracer";
    };

	
	
	
    class hlc_200Rnd_762x51_B_M80A1 : hlc_100Rnd_762x51_B_M60E4	                         // new belt for the m60/mg3
    {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        count = 200;
        descriptionshort = "Caliber: 7.62x51mm M80A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 100";
        displayname = "M13-Link Belt (M80A1 Ball) 200-Rnd 7.62mm";
        model = "hlc_core\mesh\magazines\100rnd_762NATO_M60.p3d";
        mass = 116.3;
        ACE_isBelt = 1;
    };
    class hlc_200Rnd_762x51_M_M80A1M62A1 : hlc_200Rnd_762x51_B_M80A1
    {
        dlc = "Niarms_M60";
        author = "Toadie";
        descriptionshort = "Caliber: 7.62x51mm 4-to-1 M80A1-M62A1<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 100";
        displayname = "M13-Link Belt (Ball-Tracer) 200rnd 7.62mm";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = "M80A1 Ball/M62A1 Tracer";
    };
    class hlc_200Rnd_762x51_Mdim_M80A1M276 : hlc_200Rnd_762x51_M_M80A1M62A1
    {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = "Caliber: 7.62x51mm 4-to-1 M80A1-M276<br />Type: Infrared Dim<br />Rounds: 100";
        displayname = "M13-Link Belt (EPR-IRDIM) 200rnd 7.62mm";
        displaynameshort = "M80A1 Ball/M276 IR-DIM";
    };
    class hlc_200Rnd_762x51_M_MK319M62A1 : hlc_200Rnd_762x51_Mdim_M80A1M276
    {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_Barrier";
        descriptionshort = "Caliber: 7.62x51mm 4-to-1 Mk319-Tracer<br />Type: OTM/Incendiary Tracer<br />Rounds: 100";
        displayname = "M13-Link Belt (Mk319-Tracer Mix) 200rnd 7.62mm";
        displaynameshort = "Mk319 Ball/M62A1 Tracer";
    };
    class hlc_200Rnd_762x51_T_M62A1 : hlc_200Rnd_762x51_M_MK319M62A1
    {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        descriptionshort = "Caliber: 7.62x51mm M62A1 <br />Type: Incendiary Tracer <br />Rounds: 100";
        displayname = "M13-Link Belt (Tracer) 100rnd 7.62mm";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4tracer_ca.paa";
        tracersevery = 1;
        displaynameshort = "M62A1 Tracer";
    };	

/*

    //Trenchgun loads
    class hlc_5Rnd_12G_Slug_Trench : hlc_30Rnd_545x39_T_ak {
        ammo = "B_12Gauge_Slug";
        count = 5;
        descriptionshort = "Type: 12 Gauge Slugs<br />Rounds: 5<br />Used in: M1897 Trenchgun";
        displayname = "12 Gauge Slugs(M1897)";
        picture = "\A3\Weapons_F\Data\UI\M_12gauge_slugs_CA.paa";
        lastroundstracer = 0;
        scope = 0;
        tracersevery = 0;
        mass = 2;
        displaynameshort = "12 Gauge Slug";
    };
    class hlc_5Rnd_12G_Buck_Trench : hlc_30Rnd_545x39_T_ak {
        ammo = "B_12Gauge_Pellets";
        count = 5;
        descriptionshort = "Type: 12 Gauge Buckshot<br />Rounds: 5<br />Used in: M1897 Trenchgun";
        displayname = "12 Gauge 00BuckShot (M1897)";
        lastroundstracer = 0;
        initspeed = 396;
        picture = "\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
        scope = 0;
        tracersevery = 0;
        mass = 2;
        displaynameshort = "12 Gauge 00Buck";
    };
    class hlc_5Rnd_12G_DISTRACTION_Trench : hlc_30Rnd_545x39_T_ak {
        ammo = "FH_12G_Distraction";
        count = 5;
        descriptionshort = "Type: 12 Gauge DISTRACTION<br />Rounds: 5<br />Used in: M1897 Trenchgun";
        displayname = "12 Gauge DISTRACTION (M1897)";
        lastroundstracer = 0;
        initspeed = 396;
        mass = 1;
        picture = "\A3\Weapons_F\Data\UI\M_12gauge_CA.paa";
        scope = 0;
        tracersevery = 1;
        displaynameshort = "12 Gau-DISTRACTION";
    };
    */

//Bren Gun
    class hlc_30Rnd_303_B_bren : hlc_50Rnd_45ACP_B_1921 
    {
        ammo = "HLC_303Brit_B";
        count = 30;
        descriptionshort = "Caliber: .303British Ball<br />Rounds: 30<br />Used in: Bren";
        displayname = "Bren Mag (Ball) 30rnd .303British";
        lastroundstracer = 1;
        scope = 0;
        initspeed = 840;
        mass = 10;
        displaynameshort = ".303 British Ball";
        picture = "\hlc_core\tex\ui\ammo\m_brenball_ca.paa";
    };
    class hlc_30Rnd_303_T_bren : hlc_30Rnd_303_B_bren 
    {
        ammo = "HLC_303Brit_T";
        count = 30;
        descriptionshort = "Caliber: .303British Tracer<br />Rounds: 30<br />Used in: Bren";
        displayname = "Bren Mag (Tracer) 30rnd .303British";
        lastroundstracer = 1;
        scope = 0;
        initspeed = 770;
        tracersevery = 3;
        mass = 10;                                    // w/o mag
        displaynameshort = ".303 British Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_brentracer_ca.paa";
    };
    class hlc_30Rnd_303_AP_bren : hlc_30Rnd_303_B_bren 
    {
        ammo = "HLC_303Brit_AP";
        count = 30;
        scope = 0;
        descriptionshort = "Caliber: .303British Armour-Piercing<br />Rounds: 30<br />Used in: Bren";
        displayname = "Bren Mag (AP) 30rnd .303British";
        lastroundstracer = 0;
        initspeed = 720;
        tracersevery = 1;
        mass = 21.6;                                    // guessed with mag ( 980 g)
        displaynameshort = ".303 British AP";
        picture = "\hlc_core\tex\ui\ammo\m_brenap_ca.paa";
    };

//Lee-Enfield Stipper Clips
    class hlc_10Rnd_303_B_enfield : hlc_30Rnd_303_B_bren 
    {
        count = 10;
        scope = 2;
        descriptionshort = "Caliber: .303British Ball<br />Rounds: 10<br />Used in: SMLE,No.4,No.5";
        displayname = "Lee-Enfield (Ball) 10rnd .303British";
        initspeed = 744;
        mass = 5.8;                                    // guessed without clip
        displaynameshort = ".303 Ball";
        picture = "\hlc_core\tex\ui\ammo\m_enfieldball_ca.paa";
    };
    class hlc_10Rnd_303_T_enfield : hlc_30Rnd_303_T_bren 
    {
        count = 10;
        descriptionshort = "Caliber: .303British Tracer<br />Rounds: 10<br />Used in: SMLE,No.4,No.5";
        displayname = "Lee-Enfield (Tracer) 10rnd .303British";
        tracersevery = 1;
        scope = 2;
        initspeed = 720;
        mass = 5.1;                                    // no reference found, guessed without clip
        displaynameshort = ".303 Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_enfieldtracer_ca.paa";
    };
    class hlc_10Rnd_303_AP_enfield : hlc_30Rnd_303_AP_bren 
    {
        count = 10;
        descriptionshort = "Caliber: .303British Armour-Piercing<br />Rounds: 10<br />Used in: SMLE,No.4,No.5";
        displayname = "Lee-Enfield (AP) 30rnd .303British";
        tracersevery = 1;
        initspeed = 840;
        scope = 2;
        mass = 5.8;                                    // no reference found, guessed without clip
        displaynameshort = ".303 AP";
        picture = "\hlc_core\tex\ui\ammo\m_enfieldap_ca.paa";
    };

//Carcano Clips
    class hlc_6Rnd_735_B_Carcano : hlc_30Rnd_303_B_bren 
    {
        ammo = "HLC_542x42_ball";
        count = 6;
        scope = 0;
        descriptionshort = "Caliber: 6.5x52mm Ball<br />Rounds: 6<br />Used in: Carcano";
        displayname = "Carcano (Ball) 6rnd 6.5mm";
        initspeed = 755;
        mass = 1;
        displaynameshort = "6.5x52mm Ball";
        picture = "\hlc_core\tex\ui\ammo\m_carcanoball_ca.paa";
    };
    class hlc_6Rnd_735_T_Carcano : hlc_30Rnd_303_B_bren 
    {
        ammo = "HLC_542x42_tracer";
        count = 6;
        scope = 0;
        descriptionshort = "Caliber: 6.5x52mm Tracer<br />Rounds: 6<br />Used in: Carcano";
        displayname = "Carcano (Tracer) 6rnd 6.5mm";
        tracersevery = 1;
        initspeed = 755;
        mass = 1;
        displaynameshort = "6.5x52mm Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_carcanotracer_ca.paa";
    };

    class hlc_5Rnd_792_T_Kar98 : hlc_10Rnd_303_B_enfield 
    {
        ammo = "HLC_792x57_Tracer";
        count = 5;
        descriptionshort = "Caliber: 7.92x57mm Tracer<br />Rounds: 5<br />Used in: Kar98";
        displayname = "Kar98 (Tracer) 5rnd 7.92mm";
        tracersevery = 1;
        lastroundstracer = 2;
        initspeed = 762;
        mass = 4.2;                                    // w/o stripper clip
        displaynameshort = "7.92x57mm Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_k98tracer_ca.paa";
    };
    class hlc_5Rnd_792_AP_Kar98 : hlc_10Rnd_303_B_enfield 
    {
        ammo = "HLC_792x57_AP";
        count = 5;
        descriptionshort = "Caliber: 7.92x57mm PmK (AP)<br />Rounds: 5<br />Used in: Kar98";
        displayname = "Kar98 (AP) 5rnd 7.92mm";
        tracersevery = 0;
        lastroundstracer = 3;
        initspeed = 840;
        mass = 2.6;                                    // w/o stripper clip
        displaynameshort = "7.92x57mm Armour Piercing";
        picture = "\hlc_core\tex\ui\ammo\m_k98ap_ca.paa";
    };

//P90 Magazine
    class hlc_50Rnd_57x28_JHP_P90 : 30Rnd_556x45_Stanag 
    {
        ammo = "HLC_57x28mm_JHP";
        count = 50;
        descriptionshort = "Caliber: 5.7x28mm SS195LF Blue VMax <br />Rounds: 50<br />Used in: P90";
        displayname = "P90 Mag SS195LF(JHP) 50rnd 5.7mm";
        initspeed = 715;
        lastroundstracer = 0;
        picture = "\hlc_core\tex\ui\ammo\m_p90ss195_ca.paa";
        scope = 0;
        mass = 23.5;
        tracersevery = 0;
        displaynameshort = "5.7x28mm SS195LF Blue VMax";
    };
    class hlc_50Rnd_57x28_FMJ_P90 : hlc_50Rnd_57x28_JHP_P90 
    {
        ammo = "HLC_57x28mm_FMJ";
        descriptionshort = "Caliber: 5.7x28mm SS190 Black-Tip<br />Rounds: 30<br />Used in: P90";
        displayname = "P90 Mag SS190(FMJ) 50rnd 5.7mm";
        lastroundstracer = 0;
        scope = 0;
        mass = 23.5;
        tracersevery = 0;
        displaynameshort = "5.7x28mm SS190 Black-Tip";
        picture = "\hlc_core\tex\ui\ammo\m_p90ss190_ca.paa";
    };

    class hlc_32rnd_9x19_B_sten : hlc_50Rnd_45ACP_B_1921 
    {
        ammo = "HLC_9x19_Ball";
        count = 32;
        initspeed = 365;
        descriptionshort = "Caliber: 9x19mm Ball<br />Rounds: 32<br />Used in: Sten";
        displayname = "Sten Mag (Ball) 32rnd 9x19mm";
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_sten_ca.paa";
        scope = 2;
        tracersevery = 2;
        mass = 18;
        displaynameshort = "9x19mm Ball";
    };

    /*
    class hlc_32rnd_9x19_B_MP40 : hlc_50Rnd_45ACP_B_1921 {
    ammo = "HLC_9x19_Ball";
    initspeed = 400;
    count = 32;
    descriptionshort = "Caliber: 9x19mm Ball<br />Rounds: 32<br />Used in: Sten";
    displayname = "MP40 Mag (Ball) 32rnd 9x19mm";
    lastroundstracer = 1;
    picture = "\hlc_core\tex\ui\ammo\m_sten_ca.paa";
    scope = 2;
    tracersevery = 2;
    mass = 4;
    displaynameshort = "9x19mm Ball";
    };
    class hlc_30rnd_9x19_B_MAB38 : hlc_32rnd_9x19_B_sten {
    count = 30;
    initspeed = 429;
    descriptionshort = "Caliber: 9x19mm Ball<br />Rounds: 30<br />Used in: Sten";
    displayname = "MAB38 Mag (Ball) 32rnd 9x19mm";
    displaynameshort = "9x19mm Ball";
    mass = 4;
    };
    */

//HK45C Mags
    class hlc_8Rnd_45ACP_B_hk45 : hlc_50Rnd_45ACP_B_1921 
    {
        count = 8;
        descriptionshort = "Caliber: .45ACP Ball<br />Rounds: 8<br />Used in: HK45C";
        displayname = "HK45C Mag (Ball) 8rnd .45ACP ";
        lastroundstracer = 0;
        scope = 0;
        initspeed = 329;
        mass = 3.9;                                    // w/o mag
        displaynameshort = ".45ACP Ball";
        picture = "\hlc_core\tex\ui\ammo\m_hk45ball_ca.paa";
    };
    class hlc_10Rnd_45ACP_B_hk45 : hlc_50Rnd_45ACP_B_1921 
    {
        count = 10;
        descriptionshort = "Caliber: .45ACP Ball<br />Rounds: 10<br />Used in: HK45C";
        displayname = "HK45 Mag (Ball) 10rnd .45ACP ";
        lastroundstracer = 0;
        initspeed = 329;
        scope = 0;
        mass = 4.8;                                    // w/o mag
        displaynameshort = ".45ACP Ball";
        picture = "\hlc_core\tex\ui\ammo\m_hk45ball_ca.paa";
    };
    class hlc_8Rnd_45ACP_T_hk45 : hlc_50Rnd_45ACP_T_1921 
    {
        count = 8;
        descriptionshort = "Caliber: .45ACP Tracer<br />Rounds: 8<br />Used in: HK45C";
        displayname = "HK45C Mag (Tracer) 8rnd .45ACP ";
        lastroundstracer = 0;
        initspeed = 329;
        scope = 0;
        mass = 3.9;                                    // w/o mag
        displaynameshort = ".45ACP Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_hk45tracer_ca.paa";
    };

// Mk23 MAgs, Mostly the same as the above ones bar roundcount
    class hlc_12Rnd_45ACP_B_mk23 : hlc_8Rnd_45ACP_B_hk45 
    {
        count = 12;
        descriptionshort = "Caliber: .45ACP Ball<br />Rounds: 12<br />Used in: Mk23 OHWS";
        displayname = "Mk23 Mag (Ball) 12rnd .45ACP ";
        lastroundstracer = 0;
        scope = 2;
        initspeed = 260;
        mass = 5.8;                                    // w/o mag
        displaynameshort = ".45ACP Ball";
        picture = "\hlc_core\tex\ui\ammo\m_mk23ball_ca.paa";
    };
    class hlc_12Rnd_45ACP_S_mk23 : hlc_8Rnd_45ACP_B_hk45 
    {
        count = 12;
        descriptionshort = "Caliber: .45ACP Ball +P <br />Rounds: 12<br />Used in: Mk23 OHWS";
        displayname = "Mk23 Mag (+P) 12rnd .45ACP ";
        scope = 2;
        lastroundstracer = 0;
        initspeed = 320;
        mass = 5.8;                                    // w/o mag
        displaynameshort = ".45ACP +P Ball";
        picture = "\hlc_core\tex\ui\ammo\m_mk23plusp_ca.paa";
    };
    class hlc_12Rnd_45ACP_T_mk23 : hlc_8Rnd_45ACP_T_hk45 
    {
        count = 12;
        scope = 2;
        descriptionshort = "Caliber: .45ACP Low-Velocity Tracer<br />Rounds: 12<br />Used in: Mk23 OHWS";
        displayname = "Mk23 Mag (Tracer) 12rnd .45ACP ";
        lastroundstracer = 0;
        initspeed = 260;
        mass = 5.8;                                    // w/o mag
        displaynameshort = ".45ACP LV Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_mk23tracer_ca.paa";
    };

//Deagle Mags
    class hlc_8Rnd_44mag_B_deagle : hlc_50Rnd_45ACP_B_1921 
    {
        ammo = "FH_44Mag";
        scope = 2;
        count = 8;
        descriptionshort = "Caliber: .44 Magnum Ball<br />Rounds: 8<br />Used in: Desert Eagle";
        displayname = "Desert Eagle Mag (Ball) 8rnd .44Magnum";
        lastroundstracer = 0;
        mass = 7.1;
        displaynameshort = ".44 Magnum Ball";
        picture = "\hlc_core\tex\ui\ammo\m_deagleball_ca.paa";
    };
    class hlc_8Rnd_44mag_JHP_deagle : hlc_8Rnd_44mag_B_deagle 
    {
        ammo = "FH_44Mag_JHP";
        count = 8;
        scope = 2;
        descriptionshort = "Caliber: .44 Magnum JHP<br />Rounds: 8<br />Used in: Desert Eagle";
        displayname = "Desert Eagle Mag (JHP) 8rnd .44Magnum";
        lastroundstracer = 0;
        mass = 7.1;
        displaynameshort = ".44 Magnum JHP";
        picture = "\hlc_core\tex\ui\ammo\m_deaglejhp_ca.paa";
    };
    class hlc_50Rnd_44mag_B_deagle : hlc_8Rnd_44mag_B_deagle 
    {
        ammo = "FH_44Mag";
        count = 50;
        scope = 2;
        descriptionshort = "Caliber: .44 Magnum Ball<br />Rounds: 50<br />Used in: Desert Eagle";
        displayname = "Desert Eagle Mag (Ball) 50rnd .44Magnum";
        lastroundstracer = 0;
        mass = 27.5;                                // w/o mag
        displaynameshort = ".44 Magnum Ball";
        picture = "\hlc_core\tex\ui\ammo\m_deagleball_ca.paa";
    };
    class hlc_50Rnd_44mag_FUN : hlc_8Rnd_44mag_B_deagle 
    {
        ammo = "FH_44Mag_FUNTRACER";
        count = 50;
        scope = 2;
        descriptionshort = "Caliber: .44 Magnum LOLTRACER<br />Rounds: 50<br />Used in: Desert Eagle";
        displayname = "Desert Eagle LOL 50rnd .44Magnum";
        lastroundstracer = 0;
        mass = 27.5;                                // w/o mag
        displaynameshort = "WHEEEEEEEEEE";
        picture = "\hlc_core\tex\ui\ammo\m_deagleball_ca.paa";
        };

    /*
    //Lewis Gun Pans
    class hlc_97Rnd_303_B_Lewis : hlc_30Rnd_303_B_bren {
    ammo = "HLC_303Brit_B";
    count = 97;
    descriptionshort = "Caliber: .303British Ball<br />Rounds: 97<br />Used in: Lewis";
    displayname = "Lewis Pan (Ball) 30rnd .303British";
    picture = "\hlc_core\tex\ui\ammo\m_lewisball_ca.paa";
    lastroundstracer = 10;
    initspeed = 840;
    mass = 29;
    displaynameshort = ".303British Ball";
    };
    class hlc_97Rnd_303_T_Lewis : hlc_30Rnd_303_T_bren {
    ammo = "HLC_303Brit_T";
    count = 97;
    descriptionshort = "Caliber: .303British Tracer<br />Rounds: 97<br />Used in: Lewis";
    displayname = "Lewis Pan (Tracer) 97rnd .303British";
    lastroundstracer = 1;
    initspeed = 770;
    tracersevery = 3;
    mass = 29;
    displaynameshort = ".303British Tracer";
    picture = "\hlc_core\tex\ui\ammo\m_lewistracer_ca.paa";
    };
    class hlc_97Rnd_303_AP_Lewis : hlc_30Rnd_303_AP_bren {
    ammo = "HLC_303Brit_AP";
    count = 97;
    descriptionshort = "Caliber: .303British AP<br />Rounds: 97<br />Used in: Lewis";
    displayname = "Lewis Pan (AP) 97rnd .303British";
    lastroundstracer = 0;
    initspeed = 720;
    tracersevery = 1;
    mass = 29;
    displaynameshort = ".303British AP";
    picture = "\hlc_core\tex\ui\ammo\m_lewistracer_ca.paa";
    };


    //PKM BOXES HOLD ONTO YOUR BUTT
    class hlc_100Rnd_762x54_B_PKM : 30Rnd_556x45_Stanag {
    ammo = "HLC_762x54_ball";
    count =100;
    descriptionshort = "Caliber: 7.62x54mm Ball<br />Rounds: 100<br />Used in: PKM";
    displayname = "PKM Belt (Ball) 100rnd 7.62x54mm";
    initspeed = 825;
    lastroundstracer = 1;
    picture = "\hlc_core\tex\ui\ammo\m_pkm100ball_ca.paa";
    scope = 2;
    tracersevery = 0;
    mass = 25;
    displaynameshort = "7.62x54mm Ball";
    };
    class hlc_100Rnd_762x54_M_PKM : 30Rnd_556x45_Stanag {
    ammo = "HLC_762x54_tracer";
    count =100;
    descriptionshort = "Caliber: 7.62x54mm Ball/Tracer Mix<br />Rounds: 100<br />Used in: PKM";
    displayname = "PKM Belt (Mixed) 100rnd 7.62x54mm";
    initspeed = 798;
    lastroundstracer = 1;
    picture = "\hlc_core\tex\ui\ammo\m_pkm100mixed_ca.paa";
    scope = 2;
    tracersevery = 4;
    mass = 25;
    displaynameshort = "7.62x54mm Ball/Tracer";
    };
    class hlc_100Rnd_762x54_T_PKM : 30Rnd_556x45_Stanag {
    ammo = "HLC_762x54_tracer";
    count =100;
    descriptionshort = "Caliber: 7.62x54mm 7T2 Tracer<br />Rounds: 100<br />Used in: PKM";
    displayname = "PKM Belt (Tracer) 100rnd 7.62x54mm";
    initspeed = 798;
    lastroundstracer = 1;
    picture = "\hlc_core\tex\ui\ammo\m_pkm100tracer_ca.paa";
    scope = 2;
    tracersevery = 1;
    mass = 25;
    displaynameshort = "7.62x54mm 7T2 Tracer";
    };
    class hlc_250Rnd_762x54_B_PKM : 30Rnd_556x45_Stanag {
    ammo = "HLC_762x54_ball";
    count =250;
    descriptionshort = "Caliber: 7.62x54mm Ball<br />Rounds: 100<br />Used in: PKM";
    displayname = "PKM Belt (Ball) 250rnd 7.62x54mm";
    initspeed = 825;
    lastroundstracer = 1;
    picture = "\hlc_core\tex\ui\ammo\m_pkm250ball_ca.paa";
    scope = 2;
    tracersevery = 0;
    mass = 63;
    displaynameshort = "7.62x54mm Ball";
    };
    class hlc_250Rnd_762x54_M_PKM : 30Rnd_556x45_Stanag {
    ammo = "HLC_762x54_tracer";
    count =250;
    descriptionshort = "Caliber: 7.62x54mm Ball/Tracer Mix<br />Rounds: 100<br />Used in: PKM";
    displayname = "PKM Belt (Mixed) 250rnd 7.62x54mm";
    initspeed = 798;
    lastroundstracer = 1;
    picture = "\hlc_core\tex\ui\ammo\m_pkm250mixed_ca.paa";
    scope = 2;
    tracersevery = 4;
    mass = 63;
    displaynameshort = "7.62x54mm Ball/Tracer";
    };
    class hlc_250Rnd_762x54_T_PKM : 30Rnd_556x45_Stanag {
    ammo = "HLC_762x54_tracer";
    count =250;
    descriptionshort = "Caliber: 7.62x54mm 7T2 Tracer<br />Rounds: 100<br />Used in: PKM";
    displayname = "PKM Belt (Tracer) 250rnd 7.62x54mm";
    initspeed = 798;
    lastroundstracer = 1;
    picture = "\hlc_core\tex\ui\ammo\m_pkm250tracer_ca.paa";
    scope = 2;
    tracersevery = 1;
    mass = 63;
    displaynameshort = "7.62x54mm 7T2 Tracer";
    };
    class hlc_100Rnd_762x54_AP_PKM : 30Rnd_556x45_Stanag {
    ammo = "HLC_762x54_AP";
    count =100;
    descriptionshort = "Caliber: 7.62x54mm 7N13 AP<br />Rounds: 100<br />Used in: PKM";
    displayname = "PKM Belt (AP) 100rnd 7.62x54mm";
    initspeed = 825;
    lastroundstracer = 3;
    picture = "\hlc_core\tex\ui\ammo\m_pkm100ap_ca.paa";
    scope = 2;
    tracersevery = 0;
    mass = 25;
    displaynameshort = "7.62x54mm 7N13 AP";
    };
    class hlc_250Rnd_762x54_AP_PKM : hlc_100Rnd_762x54_AP_PKM {
    ammo = "HLC_762x54_AP";
    count =250;
    descriptionshort = "Caliber: 7.62x54mm 7N13 AP<br />Rounds: 100<br />Used in: PKM";
    displayname = "PKM Belt (AP) 250rnd 7.62x54mm";
    initspeed = 825;
    lastroundstracer = 3;
    picture = "\hlc_core\tex\ui\ammo\m_pkm250ap_ca.paa";
    scope = 2;
    tracersevery = 0;
    mass = 63;
    displaynameshort = "7.62x54mm 7N13 AP";
    };

    //Breda LMG
    class hlc_20Rnd_735_B_Breda : hlc_6Rnd_735_B_Carcano {
    count = 20;
    ammo = "HLC_542x42_ball";
    descriptionshort = "Caliber: 6.5x52mm Ball<br />Rounds: 20<br />Used in: Breda";
    displayname = "Breda (Ball) 20rnd 6.5mm";
    initspeed = 630;
    mass = 10;
    displaynameshort = "6.5x52mm Ball";
    picture = "\hlc_core\tex\ui\ammo\m_bredaball_ca.paa";
    };
    class hlc_20Rnd_735_T_Breda : hlc_6Rnd_735_T_Carcano {
    ammo = "HLC_542x42_tracer";
    count = 20;
    descriptionshort = "Caliber: 6.5x52mm Tracer<br />Rounds: 20<br />Used in: Breda";
    displayname = "Breda (Tracer) 20rnd 6.5mm";
    tracersevery = 1;
    initspeed = 630;
    mass = 10;
    displaynameshort = "6.5x52mm Tracer";
    picture = "\hlc_core\tex\ui\ammo\m_bredatracer_ca.paa";
    };

    //Kar98kClips
    class hlc_5Rnd_792_B_Kar98 : hlc_10Rnd_303_B_enfield {
    ammo = "HLC_792x57_Ball";
    count = 5;
    descriptionshort = "Caliber: 7.92x57mm sS (Ball)<br />Rounds: 5<br />Used in: Kar98";
    displayname = "Kar98 (Ball) 5rnd 7.92mm";
    tracersevery = 0;
    lastroundstracer = 1;
    initspeed = 770;
    mass = 2;
    displaynameshort = "7.92x57mm Ball";
    picture = "\hlc_core\tex\ui\ammo\m_k98ball_ca.paa";
    };

    //MG34 Boxes
    class hlc_75rnd_792_B_MG34 : hlc_5Rnd_792_B_Kar98 {
    count = 75;
    descriptionshort = "Caliber: 7.92x57mm sS (Ball)<br />Rounds: 75<br />Used in: MG34";
    displayname = "MG34 (Ball) 75rnd 7.92mm";
    picture = "\hlc_core\tex\ui\ammo\m_mg34ball_ca.paa";
    tracersevery = 3;
    mass = 17;
    initspeed = 762;
    displaynameshort = "7.92x57mm Ball";
    };
    class hlc_75rnd_792_T_MG34 : hlc_75rnd_792_B_MG34 {
    ammo = "HLC_792x57_Tracer";
    count = 75;
    descriptionshort = "Caliber: 7.92x57mm Tracer<br />Rounds: 75<br />Used in: MG34";
    displayname = "MG34 (Tracer) 75rnd 7.92mm";
    picture = "\hlc_core\tex\ui\ammo\m_mg34tracer_ca.paa";
    tracersevery = 3;
    mass = 17;
    displaynameshort = "7.92x57mm Tracer";
    };
    class hlc_75rnd_792_AP_MG34 : hlc_75rnd_792_B_MG34 {
    ammo = "HLC_792x57_AP";
    count = 75;
    descriptionshort = "Caliber: 7.92x57mm PmK (AP)<br />Rounds: 75<br />Used in: MG34";
    displayname = "MG34 (AP) 75rnd 7.92mm";
    picture = "\hlc_core\tex\ui\ammo\m_mg34ap_ca.paa";
    tracersevery = 3;
    mass = 17;
    displaynameshort = "7.92x57mm Armour-Piercing";
    };


    //TAC50 Mags
    class hlc_5Rnd_50BMG_B_TAC50 : hlc_50Rnd_45ACP_B_1921 {
    ammo = "B_127x99_Ball";
    count = 5;
    descriptionshort = "Caliber: .50 BMG Ball<br />Rounds: 5<br />Used in: TAC-50";
    displayname = "TAC-50 Ball 5rnd .50BMG";
    lastroundstracer = 0;
    initspeed = 1024;
    mass = 12;
    displaynameshort = ".50 BMG Ball";
    picture = "\hlc_core\tex\ui\ammo\m_tac50ball_ca.paa";
    };
    class hlc_5Rnd_50BMG_T_TAC50 : hlc_5Rnd_50BMG_B_TAC50 {
    ammo = "B_127x99_Ball_Tracer_Red";
    count = 5;
    descriptionshort = "Caliber: .50 BMG Tracer<br />Rounds: 5<br />Used in: TAC-50";
    displayname = "TAC-50 Tracer 5rnd .50BMG";
    lastroundstracer = 0;
    initspeed = 928;
    tracersevery = 1;
    mass = 12;
    displaynameshort = ".50 BMG Tracer";
    picture = "\hlc_core\tex\ui\ammo\m_tac50tracer_ca.paa";
    };
    class hlc_5Rnd_50BMG_SLAP_TAC50 : hlc_5Rnd_50BMG_B_TAC50 {
    ammo = "FH_50BMG_SLAP";
    count = 5;
    descriptionshort = "Caliber: .50 BMG SLAP<br />Rounds: 5<br />Used in: TAC-50";
    displayname = "TAC-50 SLAP 5rnd .50BMG";
    lastroundstracer = 0;
    initspeed = 1219;
    tracersevery = 1;
    mass = 12;
    displaynameshort = ".50 BMG SLAP";
    picture = "\hlc_core\tex\ui\ammo\m_tac50slap_ca.paa";
    };
    class hlc_5Rnd_50BMG_Raufoss_TAC50 : hlc_5Rnd_50BMG_B_TAC50 {
    ammo = "FH_50BMG_Raufoss";
    count = 5;
    descriptionshort = "Caliber: .50 BMG Raufoss<br />Rounds: 5<br />Used in: TAC-50";
    displayname = "TAC-50 Raufoss 5rnd .50BMG";
    lastroundstracer = 0;
    initspeed = 889;
    tracersevery = 1;
    mass = 12;
    displaynameshort = ".50 BMG Raufoss";
    picture = "\hlc_core\tex\ui\ammo\m_tac50raufoss_ca.paa";
    };
    */
};