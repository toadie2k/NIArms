class CfgMagazines {
    class 30Rnd_556x45_Stanag;
//displayname =  "<Caliber> <Round> <Capacity> <Container/Gun> (<Tracers> every <rate>)"

/*
Further musings
45.38g=1 mass - mags

21.8g=1 mass - bigger

M80 Ball = 25.4G
M855 Ball = 12.31G
6.8mm SPC - @19.5G
Pmag - 160
9x19mm M882 - 12.7
FAL mag = 250g

FAL mag = 250g*/

    class hlc_30rnd_556x45_EPR : 30Rnd_556x45_Stanag {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd STANAG";
        initspeed = 974.8;
        mass = 11;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_EPR_ca.paa";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG;
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_greentip_co.paa" };
        modelSpecialIsProxy = 1;
        model = "\hlc_core\mesh\magazines\30rnd_556NATO_STANAG.p3d";
    };
    class hlc_30rnd_556x45_SOST : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_SOST";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO Mk318 Mod 1 SOST<br />Type: Nickel Plated Reverse Drawn Full Metal Jacket (SOST)<br />Rounds: 30";
        displayname = "5.56mm SOST 30Rnd STANAG";
        initspeed = 954.4;
        mass = 12; //+1 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK318 SOST";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_sost_ca.paa";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG;
        model = "\hlc_core\mesh\magazines\30rnd_556NATO_STANAG.p3d";
        modelSpecialIsProxy = 1;
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_SPR : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO MK262 Mod 1 SBLR<br />Type: Open Tip Match (Special Ball Long Range)<br />Rounds: 30";
        displayname = "5.56mm SBLR 30Rnd STANAG";
        initspeed = 868.7;
        mass = 14; //+2 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK262 Mod 1";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_spr_ca.paa";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG;
        modelSpecialIsProxy = 1;
        model = "\hlc_core\mesh\magazines\30rnd_556NATO_STANAG.p3d";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_S : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536,Tigg";
        initspeed = 340;
        descriptionshort = "Caliber: 5.56x45mm NATO Cold-load M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm Subsonic 30Rnd STANAG";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_s_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_M : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR/M856A1<br />Type: FMJ/Tracer<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd STANAG (Tracers every 4)";
        initspeed = 974.8;
        mass = 11;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 4;
        displaynameshort = "EPR/Tracer";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_t : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M856A1 Tracer<br />Type: Incendiary-tip Tracer<br />Rounds: 30";
        displayname = "5.56mm Tracer 30Rnd STANAG";
        
        initspeed = 974.8;
        mass = 11;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = "M856A1 Tracer";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_MDim : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd STANAG (IR-DIM every 4)";
        tracersevery = 4;
        displaynameshort = "EPR/IR-DIM";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_TDim :hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 30";
        displayname = "5.56mm IR-Dim 30Rnd STANAG";
        tracersevery = 1;
        displaynameshort = "IR-DIM";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    //X-15 Magazine
    class hlc_50rnd_556x45_EPR : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR";
        count = 50;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 50";
        displayname = "5.56mm EPR 50Rnd X15";
        mass = 43.53;
        tracersevery = 0;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_x15_EPR_ca.paa";
        lastroundstracer = 0;
        modelSpecial = \hlc_core\mesh\magazines\proxies\50rnd_556NATO_X15;
        modelSpecialIsProxy = 1;
        model = "\hlc_core\mesh\magazines\50rnd_556NATO_X15.p3d";
    };
    class hlc_50rnd_556x45_SOST : hlc_50rnd_556x45_EPR {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_SOST";
        mass = 44.53;
        displaynameshort = "MK318 SOST";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_x15_sost_ca.paa";
        descriptionshort = "Caliber: 5.56x45mm NATO Mk318 Mod 1 SOST<br />Type: Nickel Plated Reverse Drawn Full Metal Jacket (SOST)<br />Rounds: 50";
        displayname = "5.56mm SOST 50Rnd X15";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_50rnd_556x45_SPR : hlc_50rnd_556x45_EPR {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_SPR";
        mass = 44.53;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_x15_SPR_ca.paa";
        displaynameshort = "MK262 Mod 1";
        descriptionshort = "Caliber: 5.56x45mm NATO MK262 Mod 1 SBLR<br />Type: Open Tip Match (Special Ball Long Range)<br />Rounds: 50";
        displayname = "5.56mm SBLR 50Rnd X15";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_50rnd_556x45_M : hlc_50rnd_556x45_EPR {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 50;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_x15_m_ca.paa";
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 50";
        displayname = "5.56mm EPR 50Rnd X15 (Tracers every 4)";
        mass = 43.53;
        tracersevery = 4;
        displaynameshort = "EPR/Tracer";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        lastroundstracer = 2;
    };
    class hlc_50rnd_556x45_MDim : hlc_50rnd_556x45_EPR {
        author = "Toadie,Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        count = 50;
        displaynameshort = "EPR/IR-DIM";
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 50";
        displayname = "5.56mm EPR 50Rnd X15 (IR-DIM every 4)";
        mass = 43.53;
        tracersevery = 4;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_x15_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    //PMAG
    class hlc_30rnd_556x45_EPR_PMAG : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd PMAG";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_EPR_ca.paa";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_PMAG;
        model = "\hlc_core\mesh\magazines\30rnd_556NATO_PMAG.p3d";
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        modelSpecialIsProxy = 1;
    };
    class hlc_30rnd_556x45_SOST_PMAG : hlc_30rnd_556x45_EPR_PMAG {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_SOST";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO Mk318 Mod 1 SOST<br />Type: Nickel Plated Reverse Drawn Full Metal Jacket (SOST)<br />Rounds: 30";
        displayname = "5.56mm SOST 30Rnd PMAG";
        initspeed = 954.4;
        mass = 12.6; //+1 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK318 SOST";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_sost_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_SPR_PMAG : hlc_30rnd_556x45_EPR_PMAG {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO MK262 Mod 1 SBLR<br />Type: Open Tip Match (Special Ball Long Range)<br />Rounds: 30";
        displayname = "5.56mm SBLR 30Rnd PMAG";
        initspeed = 868.7;
        mass = 14.6; //+2 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK262 Mod 1";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_spr_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_S_PMAG : hlc_30rnd_556x45_EPR_PMAG {
        author = "Toadie,Spartan0536";
        initspeed = 340;
        descriptionshort = "Caliber: 5.56x45mm NATO Cold-load M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm Subsonic 30Rnd PMAG";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_s_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_M_PMAG : hlc_30rnd_556x45_EPR_PMAG {
        ammo = "HLC_556NATO_EPR_Tracer";
        author = "Toadie,Spartan0536";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR/M856A1<br />Type: FMJ/Tracer<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd PMAG (Tracers every 4)";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 4;
        displaynameshort = "EPR/Tracer";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_t_PMAG : hlc_30rnd_556x45_EPR_PMAG {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M856A1 Tracer<br />Type: Incendiary-tip Tracer<br />Rounds: 30";
        displayname = "5.56mm Tracer 30Rnd PMAG";

        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = "M856A1 Tracer";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_MDim_PMAG : hlc_30rnd_556x45_EPR_PMAG {
        author = "Toadie,Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd PMAG (IR-DIM every 4)";
        tracersevery = 4;
        displaynameshort = "EPR/IR-DIM";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_TDim_PMAG :hlc_30rnd_556x45_EPR_PMAG {
        author = "Toadie,Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 30";
        displayname = "5.56mm IR-Dim 30Rnd PMAG";
        tracersevery = 1;
        displaynameshort = "IR-DIM";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    // H&K Heavy Duty STANAG
    class hlc_30rnd_556x45_EPR_STANAGHD : hlc_30rnd_556x45_EPR{
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd STANAG-Heavy";
        initspeed = 974.8;
        mass = 13.6;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_EPR_ca.paa";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD;
        model = "\hlc_core\mesh\magazines\30rnd_556NATO_STANAG_HD.p3d";
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        modelSpecialIsProxy = 1;
    };
    class hlc_30rnd_556x45_SOST_STANAGHD : hlc_30rnd_556x45_EPR_STANAGHD {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_SOST";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO Mk318 Mod 1 SOST<br />Type: Nickel Plated Reverse Drawn Full Metal Jacket (SOST)<br />Rounds: 30";
        displayname = "5.56mm SOST 30Rnd STANAG-Heavy";
        initspeed = 954.4;
        mass = 15.6; //+1 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK318 SOST";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_sost_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_SPR_STANAGHD : hlc_30rnd_556x45_EPR_STANAGHD {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO MK262 Mod 1 SBLR<br />Type: Open Tip Match (Special Ball Long Range)<br />Rounds: 30";
        displayname = "5.56mm SBLR 30Rnd STANAG-Heavy";
        initspeed = 868.7;
        mass = 16.6; //+2 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK262 Mod 1";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_spr_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_S_STANAGHD : hlc_30rnd_556x45_EPR_STANAGHD {
        author = "Toadie,Spartan0536";
        initspeed = 340;
        descriptionshort = "Caliber: 5.56x45mm NATO Cold-load M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm Subsonic 30Rnd STANAG-Heavy";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_s_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_M_STANAGHD : hlc_30rnd_556x45_EPR_STANAGHD {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR/M856A1<br />Type: FMJ/Tracer<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd STANAG-Heavy (Tracers every 4)";
        initspeed = 974.8;
        mass = 13.6;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 4;
        displaynameshort = "EPR/Tracer";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_t_STANAGHD : hlc_30rnd_556x45_EPR_STANAGHD {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M856A1 Tracer<br />Type: Incendiary-tip Tracer<br />Rounds: 30";
        displayname = "5.56mm Tracer 30Rnd STANAG-Heavy";

        initspeed = 974.8;
        mass = 13.6;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = "M856A1 Tracer";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_MDim_STANAGHD : hlc_30rnd_556x45_EPR_STANAGHD {
        author = "Toadie,Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd STANAG-Heavy (IR-DIM every 4)";
        tracersevery = 4;
        displaynameshort = "EPR/IR-DIM";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_TDim_STANAGHD :hlc_30rnd_556x45_EPR_STANAGHD {
        author = "Toadie,Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 30";
        displayname = "5.56mm IR-Dim 30Rnd STANAG-Heavy";
        tracersevery = 1;
        displaynameshort = "IR-DIM";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    //Lancer L5
    class hlc_30rnd_556x45_EPR_L5 : 30Rnd_556x45_Stanag {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd Lancer";
        initspeed = 974.8;
        mass = 10.8;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_EPR_ca.paa";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_Lancer;
        model = "\hlc_core\mesh\magazines\30rnd_556NATO_STANAG_Lancer.p3d";
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_greentip_co.paa" };
        modelSpecialIsProxy = 1;
    };
    class hlc_30rnd_556x45_SOST_L5 : hlc_30rnd_556x45_EPR_L5 {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_SOST";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO Mk318 Mod 1 SOST<br />Type: Nickel Plated Reverse Drawn Full Metal Jacket (SOST)<br />Rounds: 30";
        displayname = "5.56mm SOST 30Rnd Lancer";
        initspeed = 954.4;
        mass = 11.8; //+1 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK318 SOST";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_sost_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_SPR_L5 : hlc_30rnd_556x45_EPR_L5 {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO MK262 Mod 1 SBLR<br />Type: Open Tip Match (Special Ball Long Range)<br />Rounds: 30";
        displayname = "5.56mm SBLR 30Rnd Lancer";
        initspeed = 868.7;
        mass = 13.8; //+2 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK262 Mod 1";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_spr_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_S_L5 : hlc_30rnd_556x45_EPR_L5 {
        author = "Toadie,Spartan0536";
        initspeed = 340;
        descriptionshort = "Caliber: 5.56x45mm NATO Cold-load M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm Subsonic 30Rnd Lancer";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_s_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_M_L5 : hlc_30rnd_556x45_EPR_L5 {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR/M856A1<br />Type: FMJ/Tracer<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd Lancer (Tracers every 4)";
        initspeed = 974.8;
        mass = 10.8;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 4;
        displaynameshort = "EPR/Tracer";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_t_L5 : hlc_30rnd_556x45_EPR_L5 {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M856A1 Tracer<br />Type: Incendiary-tip Tracer<br />Rounds: 30";
        displayname = "5.56mm Tracer 30Rnd Lancer";

        initspeed = 974.8;
        mass = 10.8;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = "M856A1 Tracer";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_MDim_L5 : hlc_30rnd_556x45_EPR_L5 {
        author = "Toadie,Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd Lancer (IR-DIM every 4)";
        tracersevery = 4;
        displaynameshort = "EPR/IR-DIM";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_TDim_L5 :hlc_30rnd_556x45_EPR_L5 {
        author = "Toadie,Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 30";
        displayname = "5.56mm IR-Dim 30Rnd Lancer";
        tracersevery = 1;
        displaynameshort = "IR-DIM";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_EPR_EMAG : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd EMAG";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "M855A1 EPR";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_EPR_ca.paa";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_EMAG;
        model = "\hlc_core\mesh\magazines\30rnd_556NATO_EMAG.p3d";
        hiddenSelections[] = { "roundtype1", "roundtype2" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        modelSpecialIsProxy = 1;
    };
    class hlc_30rnd_556x45_SOST_EMAG : hlc_30rnd_556x45_EPR_EMAG {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_SOST";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO Mk318 Mod 1 SOST<br />Type: Nickel Plated Reverse Drawn Full Metal Jacket (SOST)<br />Rounds: 30";
        displayname = "5.56mm SOST 30Rnd EMAG";
        initspeed = 954.4;
        mass = 12.6; //+1 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK318 SOST";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_sost_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_SPR_EMAG : hlc_30rnd_556x45_EPR_EMAG {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO MK262 Mod 1 SBLR<br />Type: Open Tip Match (Special Ball Long Range)<br />Rounds: 30";
        displayname = "5.56mm SBLR 30Rnd EMAG";
        initspeed = 868.7;
        mass = 14.6; //+2 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK262 Mod 1";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_sPR_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_S_EMAG : hlc_30rnd_556x45_EPR_EMAG {
        author = "Toadie,Spartan0536,Tigg";
        initspeed = 340;
        descriptionshort = "Caliber: 5.56x45mm NATO Cold-load M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = "5.56mm Subsonic 30Rnd EMAG";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_sPR_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_M_EMAG : hlc_30rnd_556x45_EPR_EMAG {
        ammo = "HLC_556NATO_EPR_Tracer";
        author = "Toadie,Spartan0536,Tigg";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M855A1 EPR/M856A1<br />Type: FMJ/Tracer<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd EMAG (Tracers every 4)";
        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 4;
        displaynameshort = "EPR/Tracer";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_t_EMAG : hlc_30rnd_556x45_EPR_EMAG {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = "Caliber: 5.56x45mm NATO M856A1 Tracer<br />Type: Incendiary-tip Tracer<br />Rounds: 30";
        displayname = "5.56mm Tracer 30Rnd EMAG";

        initspeed = 974.8;
        mass = 11.6;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = "M856A1 Tracer";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_MDim_EMAG : hlc_30rnd_556x45_EPR_EMAG {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 30";
        displayname = "5.56mm EPR 30Rnd EMAG (IR-DIM every 4)";
        tracersevery = 4;
        displaynameshort = "EPR/IR-DIM";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_TDim_EMAG :hlc_30rnd_556x45_EPR_EMAG {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = "Caliber: 5.56x45mm IR-DIM Tracers<br />Type: Low-visibility Tracer<br />Rounds: 30";
        displayname = "5.56mm IR-Dim 30Rnd EMAG";
        tracersevery = 1;
        displaynameshort = "IR-DIM";
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };


        class hlc_30Rnd_545x39_B_AK : 30Rnd_556x45_Stanag{

            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "FH_545x39_Ball";
            count = 30;
            descriptionshort = "Caliber: 5.45x39mm 7N6M<br />Type:Full Metal Jacket (Lead Tip, Mild Steel Core)<br />Rounds: 30";
            displayname = "5.45mm FMJ 30Rnd AK Magazine";
            initSpeed = 879.9;
            lastroundstracer = 1;
            picture = "\hlc_core\tex\ui\ammo\m_ak74ball_ca.paa";
            model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
            scope = 2;
            tracersevery = 0;
            mass = 12;
            displaynameshort = "7N6M FMJ";
        };
        class hlc_30Rnd_545x39_S_AK : 30Rnd_556x45_Stanag{
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "FH_545x39_7u1";
            count = 30;
            descriptionshort = "Caliber: 5.45x39mm 7U1<br />Type:Full Metal Jacket<br />Rounds: 30";
            displayname = "5.45mm Subsonic 30Rnd AK Magazine";
            initspeed = 371;
            lastroundstracer = 1;
            picture = "\hlc_core\tex\ui\ammo\m_ak74ball_ca.paa";
            scope = 2;
            tracersevery = 0;
            mass = 12;
            displaynameshort = "7U1 Subsonic";
            model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        };
        class hlc_30Rnd_545x39_t_ak : hlc_30Rnd_545x39_B_AK {
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "FH_545x39_Tracer";
            descriptionshort = "Caliber: 5.45x39mm 7T3<br />Type:Full Metal Jacket (Barium Tip, Mild Steel Core)<br />Rounds: 30";
            displayname = "5.45mm Tracer 30Rnd AK Magazine";
            lastroundstracer = 0;
            scope = 2;
            tracersevery = 1;
            mass = 12;
            displaynameshort = "7T3 Tracer";
            picture = "\hlc_core\tex\ui\ammo\m_ak74tracer_ca.paa";
            model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        };
        class hlc_45Rnd_545x39_t_rpk : hlc_30Rnd_545x39_T_ak {
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "FH_545x39_Tracer";
            count = 45;
            descriptionshort = "Caliber: 5.45x39mm 7T3<br />Type:Full Metal Jacket (Barium/Lead Tip, Mild Steel Core)<br />Rounds: 45";
            displayname = "5.45mm Tracer 45Rnd RPK74 Magazine";
            lastroundstracer = 1;
            scope = 2;
            tracersevery = 1;
            mass = 18.3;
            displaynameshort = "7T3 Tracer";
            picture = "\hlc_core\tex\ui\ammo\m_rpk74mixed_ca.paa";
            model = "\hlc_core\mesh\magazines\45Rnd_545x39_rpk74.p3d";
        };
        class hlc_45Rnd_545x39_m_rpk : hlc_30Rnd_545x39_T_ak {
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "FH_545x39_Tracer";
            count = 45;
            descriptionshort = "Caliber: 5.45x39mm 7T3/7N6M<br />Type:Full Metal Jacket (Barium/Lead Tip, Mild Steel Core)<br />Rounds: 45";
            displayname = "5.45mm FMJ 45Rnd RPK74 Magazine (Tracers Every 3)";
            lastroundstracer = 1;
            scope = 2;
            tracersevery = 3;
            mass = 18.3;
            displaynameshort = "Tracer/Ball";
            picture = "\hlc_core\tex\ui\ammo\m_rpk74mixed_ca.paa";
            model = "\hlc_core\mesh\magazines\45Rnd_545x39_rpk74.p3d";
        };
        class hlc_60Rnd_545x39_t_rpk : hlc_30Rnd_545x39_T_ak {
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "FH_545x39_Tracer";
            count = 60;
            descriptionshort = "Caliber: 5.45x39mm 7T3/7N6M<br />Type:Full Metal Jacket (Barium/Lead Tip, Mild Steel Core)<br />Rounds: 60";
            displayname = "5.45mm FMJ 60Rnd RPK Magazine";
            lastroundstracer = 5;
            scope = 2;
            tracersevery = 3;
            mass = 24;
            displaynameshort = "Tracer/Ball";
            picture = "\hlc_core\tex\ui\ammo\m_rpk12_mixed_ca.paa";
            model = "\hlc_core\mesh\magazines\60rnd_545x39_RPK12.p3d";
        };
        class hlc_30Rnd_545x39_EP_ak : hlc_30Rnd_545x39_B_AK {
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "FH_545x39_EP";
            descriptionshort = "Caliber: 5.45x39mm 7N10 EP<br />Type: Full Metal Jacket (Lead Tip, Hardened Steel Core)<br />Rounds: 30";
            displayname = "5.45mm EP 30Rnd AK Magazine";
            lastroundstracer = 0;
            scope = 2;
            tracersevery = 0;
            mass = 12;
            displaynameshort = "7N10 EP-FMJ";
            initSpeed = 879.9;
            picture = "\hlc_core\tex\ui\ammo\m_ak74ep_ca.paa";
            model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        };
        class hlc_30Rnd_762x39_b_ak : 30Rnd_556x45_Stanag{
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "HLC_762x39_Ball";
            count = 30;
            descriptionshort = "Caliber: 7.62x39mm 57-N-231S(M43 Ball)<br />Type: Full Metal Jacket with Mild Steel Core<br />Rounds: 30";
            displayname = "7.62mm FMJ 30Rnd AK Magazine";
            lastroundstracer = 1;
            scope = 2;
            tracersevery = 1;
            mass = 13;
            displaynameshort = "57-N-231S FMJ";
            picture = "\hlc_core\tex\ui\ammo\m_ak47_b_ca.paa";
            model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
            initspeed = 739.1;
        };
        class hlc_30Rnd_762x39_t_ak : hlc_30Rnd_762x39_b_ak {
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "HLC_762x39_Tracer";
            count = 30;
            descriptionshort = "Caliber: 7.62x39mm 57-N-231P<br />Type: Barium Salt Tracer<br />Rounds: 30";
            displayname = "7.62mm Tracer 30Rnd AK Magazine";
            lastroundstracer = 1;
            scope = 2;
            tracersevery = 1;
            mass = 13;
            displaynameshort = "57-N-231P Tracer";
            picture = "\hlc_core\tex\ui\ammo\m_ak47_t_ca.paa";
            model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
            initspeed = 739.1;
        };
        class hlc_30Rnd_762x39_AP_ak : hlc_30Rnd_762x39_b_ak {
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "HLC_762x39_AP";
            count = 30;
            descriptionshort = "Caliber: 7.62x39mm 7N23<br />Type: Full Metal Jacket with a hardened steel core<br />Rounds: 30";
            displayname = "7.62mm AP 30Rnd AK Magazine";
            lastroundstracer = 0;
            scope = 2;
            tracersevery = 0;
            mass = 13;
            displaynameshort = "7N23 AP";
            picture = "\hlc_core\tex\ui\ammo\m_ak47_b_ca.paa";
            model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
            initspeed = 759.0;
        };
        class hlc_45Rnd_762x39_AP_rpk : 30Rnd_556x45_Stanag{
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "HLC_762x39_AP";
            count = 45;
            descriptionshort = "Caliber: 7.62x39mm 7N23<br />Type: Full Metal Jacket with a hardened steel core<br />Rounds: 45";
            displayname = "7.62mm AP 45Rnd RPK Magazine";
            lastroundstracer = 0;
            scope = 2;
            tracersevery = 0;
            mass = 16;
            displaynameshort = "7N23 AP";
            picture = "\hlc_core\tex\ui\ammo\m_ak47_b_ca.paa";
            model = "\hlc_core\mesh\magazines\42rnd_762x39_RPK.p3d";
            initspeed = 759.0;
        };
        class hlc_75Rnd_762x39_AP_rpk : hlc_45Rnd_762x39_AP_rpk {
            dlc = "Niarms_AK";
            author = "Toadie";
            count = 75;
            descriptionshort = "Caliber: 7.62x39mm 7N23<br />Type: Full Metal Jacket with a hardened steel core<br />Rounds: 75";
            displayname = "7.62mm AP 75Rnd RPK Magazine";
            lastroundstracer = 0;
            scope = 2;
            tracersevery = 0;
            mass = 32;
            displaynameshort = "7N23 AP";
            picture = "\hlc_core\tex\ui\ammo\m_rpkdrum_ca.paa";
            model = "\hlc_core\mesh\magazines\75rnd_762x39_RPK.p3d";
            initspeed = 759.0;
        };
        class hlc_30rnd_762x39_s_ak : hlc_30Rnd_762x39_b_ak {
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "HLC_762x39_Ball";
            count = 30;
            descriptionshort = "Caliber: 7.62x39mm 557-N-321U<br />Type: Full Metal Jacket with Mild Steel Core<br />Rounds: 30";
            displayname = "7.62mm Subsonic 30Rnd AK Magazine";
            lastroundstracer = 1;
            scope = 2;
            tracersevery = 1;
            mass = 13;
            displaynameshort = "57-N-321U Subsonic";
            picture = "\hlc_core\tex\ui\ammo\m_ak47_b_ca.paa";
            model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
            initspeed = 311.8;
        };
        class hlc_45Rnd_762x39_t_rpk : 30Rnd_556x45_Stanag{
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "HLC_762x39_Tracer";
            count = 45;
            descriptionshort = "Caliber: 7.62x39mm 57-N-231P<br />Type: Barium Salt Tracer<br />Rounds: 45";
            displayname = "7.62mm Tracer 45Rnd RPK Magazine";
            lastroundstracer = 1;
            scope = 2;
            tracersevery = 1;
            mass = 16;
            displaynameshort = "57-N-231P Tracer";
            picture = "\hlc_core\tex\ui\ammo\m_rpk_tracer_ca.paa";
            model = "\hlc_core\mesh\magazines\42rnd_762x39_RPK.p3d";
            initspeed = 739.1;
        };
        class hlc_45Rnd_762x39_m_rpk : hlc_45Rnd_762x39_t_rpk {
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "HLC_762x39_Tracer";
            count = 45;
            descriptionshort = "Caliber: 7.62x39mm 57-N-231S/57-N-231P<br />Type: FMJ/Barium Salt Tracer<br />Rounds: 45";
            displayname = "7.62mm FMJ 45Rnd RPK Magazine (Tracers Every 3)";
            lastroundstracer = 1;
            scope = 2;
            tracersevery = 3;
            mass = 16;
            displaynameshort = "Tracer/Ball";
            picture = "\hlc_core\tex\ui\ammo\m_rpk_mixed_ca.paa";
            model = "\hlc_core\mesh\magazines\42rnd_762x39_RPK.p3d";
            initspeed = 739.1;
        };
        class hlc_75Rnd_762x39_m_rpk : hlc_45Rnd_762x39_m_rpk {
            dlc = "Niarms_AK";
            author = "Toadie";
            count = 75;
            descriptionshort = "Caliber: 7.62x39mm 57-N-231S/57-N-231P<br />Type: FMJ/Barium Salt Tracer<br />Rounds: 75";
            displayname = "7.62mm FMJ 75Rnd RPK Magazine (Tracers every 3)";
            lastroundstracer = 1;
            scope = 2;
            tracersevery = 3;
            mass = 32;
            displaynameshort = "Tracer/Ball";
            picture = "\hlc_core\tex\ui\ammo\m_rpkdrum_ca.paa";
            model = "\hlc_core\mesh\magazines\75rnd_762x39_RPK.p3d";
            initspeed = 739.1;
        };
        class 1Rnd_HE_Grenade_shell;
        class hlc_VOG25_AK : 1Rnd_HE_Grenade_shell{
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "G_40mm_HE";
            count = 1;
            descriptionshort = "Type: High Explosive Grenade Round<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: GP25,GP30";
            displayname = "VOG25 HE Grenade Round";
            displaynameshort = "HE Grenade";
            initspeed = 76;
            mass = 4;
            namesound = "";
            picture = "\A3\Weapons_f\Data\ui\gear_UGL_slug_CA.paa";
            reloadaction = "HLC_GestureReloadGP30";
            scope = 2;
            type = 16;
        };
        class hlc_GRD_White : 1Rnd_HE_Grenade_shell{
            dlc = "Niarms_AK";
            author = "Toadie";
            ammo = "G_40mm_Smoke";
            descriptionshort = "Type: Smoke Round - White<br />Rounds: 1<br />Used in: GP25,GP30";
            displayname = "GRD Round (White)";
            displaynameshort = "White Smoke";
            picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
            reloadaction = "HLC_GestureReloadGP30";
        };
        class hlc_GRD_Red : hlc_grd_white {
            dlc = "Niarms_AK";
            ammo = "G_40mm_SmokeRed";
            descriptionshort = "Type: Smoke Round - Red<br />Rounds: 1<br />Used in: GP25,GP30";
            displayname = "GRD Round (Red)";
            displaynameshort = "Red Smoke";
            picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
        };
        class hlc_GRD_green : hlc_grd_white {
            dlc = "Niarms_AK";
            ammo = "G_40mm_SmokeGreen";
            descriptionshort = "Type: Smoke Round - Green<br />Rounds: 1<br />Used in: GP25,GP30";
            displayname = "GRD Round (Green)";
            displaynameshort = "Green Smoke";
            picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
        };
        class hlc_GRD_yellow : hlc_grd_white {
            dlc = "Niarms_AK";
            ammo = "G_40mm_SmokeYellow";
            descriptionshort = "Type: Smoke Round - Yellow<br />Rounds: 1<br />Used in: GP25,GP30";
            displayname = "GRD Round (Yellow)";
            displaynameshort = "Yellow Smoke";
            picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
        };
        class hlc_GRD_orange : hlc_grd_white {
            ammo = "G_40mm_SmokeOrange";
            descriptionshort = "Type: Smoke Round - Orange<br />Rounds: 1<br />Used in: GP25,GP30";
            displayname = "GRD Round (Orange)";
            displaynameshort = "Orange Smoke";
            picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
        };
        class hlc_GRD_purple : hlc_grd_white {
            dlc = "Niarms_AK";
            ammo = "G_40mm_SmokePurple";
            descriptionshort = "Type: Smoke Round - Purple<br />Rounds: 1<br />Used in: GP25,GP30";
            displayname = "GRD Round (Purple)";
            displaynameshort = "Purple Smoke";
            picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
        };
        class hlc_GRD_blue : hlc_grd_white {
            dlc = "Niarms_AK";
            ammo = "G_40mm_SmokeBlue";
            descriptionshort = "Type: Smoke Round - Blue<br />Rounds: 1<br />Used in: GP25,GP30";
            displayname = "GRD Round (Blue)";
            displaynameshort = "Blue Smoke";
            picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
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
    class hlc_50Rnd_45ACP_B_1921 : 30Rnd_556x45_Stanag{
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
    class hlc_50Rnd_45ACP_T_1921 : hlc_50Rnd_45ACP_B_1921 {
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

    class hlc_50rnd_9x19_B_9mmar : 30Rnd_556x45_Stanag{
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
    class hlc_100Rnd_762x51_B_M60E4 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        count = 100;
        descriptionshort = "Caliber: 7.62x51mm M80A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 100";
        displayname = "7.62mm EPR 100Rnd M13-linked belt";
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
    class hlc_100Rnd_762x51_M_M60E4 : hlc_100Rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        descriptionshort = "Caliber: 7.62x51mm 4-to-1 M80A1-M62A1<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 100";
        displayname = "7.62mm EPR 100Rnd M13-linked belt (Tracers Every 4)";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = "EPR/Tracer";
    };
    class hlc_100Rnd_762x51_Mdim_M60E4 : hlc_100Rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = "Caliber: 7.62x51mm 4-to-1 M80A1-M276<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 100";
        displayname = "7.62mm EPR 100Rnd M13-linked belt(IR-DIM every 4)";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = "EPR/IR-DIM";
    };
    class hlc_100Rnd_762x51_Barrier_M60E4 : hlc_100Rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_Barrier";
        descriptionshort = "Caliber: 7.62x51mm 4-to-1 Mk319-Tracer<br />Type: OTM/Incendiary Tracer<br />Rounds: 100";
        displayname = "7.62mm SOST 100Rnd M13-linked belt (Tracers every 4)";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = "Mk319/Tracer";
    };
    class hlc_100Rnd_762x51_T_M60E4 : hlc_100Rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        descriptionshort = "Caliber: 7.62x51mm M62A1 <br />Type: Incendiary Tracer <br />Rounds: 100";
        displayname = "7.62mm Tracers 100Rnd M13-linked belt";
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4tracer_ca.paa";
        tracersevery = 1;
        displaynameshort = "M62A1 Tracer";
    };


    class hlc_20Rnd_762x51_B_fal : 30Rnd_556x45_Stanag{
        dlc = "Niarms_FAL";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_ball";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO M80A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 20";
        displayname = "7.62mm EPR 20Rnd FAL Magazine";
        initspeed = 908.4;
        mass = 16.7;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        model = "\hlc_core\mesh\magazines\20rnd_762NATO_FAL.p3d";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "M80A1 EPR";
    };
    class hlc_20Rnd_762x51_mk316_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_MK316_20in";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO MK316 Mod 0 SBLR<br />Type: Type: Open Tip Match (Special Ball Long Range)<br />Rounds: 20";
        displayname = "7.62mm SBLR 20Rnd FAL Magazine";
        initspeed = 731;
        mass = 18.7; // +2 per 20 rounds 
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        model = "\hlc_core\mesh\magazines\20rnd_762NATO_FAL.p3d";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK316 SBLR";
    };
    class hlc_20Rnd_762x51_barrier_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_Barrier";
        count = 20;
        descriptionshort = "Caliber: 7.62x51mm NATO MK319 Mod 0 SOST <br />Type: Type: Reverse-Drawn Open Tip Match <br />Rounds: 20";
        displayname = "7.62mm SOST 20Rnd FAL Magazine";
        model = "\hlc_core\mesh\magazines\20rnd_762NATO_FAL.p3d";
        initspeed = 890.4;
        mass = 17.7; // +2 per 20
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK319 OTM";
    };
    class hlc_20Rnd_762x51_T_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_tracer";
        descriptionshort = "Caliber: 7.62x51mm NATO M62A1 Tracer <br />Type: Incendiary Tracer <br />Rounds: 20";
        displayname = "7.62mm Tracer 20Rnd FAL Magazine";
        model = "\hlc_core\mesh\magazines\20rnd_762NATO_FAL.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 16.7;
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falTracer_ca.paa";
        displaynameshort = "M62A1 Tracer";
    };
    class hlc_20Rnd_762x51_TDim_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = "Caliber: 7.62x51mm NATO M276<br />Type: IR Incendiary Tracer<br />Rounds: 20";
        displayname = "7.62mm IR-Dim 20Rnd FAL Magazine";
        model = "\hlc_core\mesh\magazines\20rnd_762NATO_FAL.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 16.7;
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falTracer_ca.paa";
        displaynameshort = "IR-DIM";
    };
    class hlc_50rnd_762x51_MDIM_FAL : hlc_20Rnd_762x51_B_fal {
        ammo = "HLC_B_762x51_Tracer_Dim";
        author = "Toadie, Spartan0536";
        count = 50;
        descriptionshort = "Caliber: 7.62x51mm NATO M80A1-M276<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 50";
        displayname = "7.62mm EPR 50Rnd FAL Magazine (IR-DIM every 4)";
        model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
        initspeed = 908.4;
        mass = 49.47;
        lastroundstracer = 3;
        picture = "\hlc_core\tex\ui\ammo\m_x91_mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
        displaynameshort = "EPR/IR-DIM";
    };
    class hlc_20Rnd_762x51_S_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_BTSub";
        descriptionshort = "Caliber: 7.62x51mm NATO Lapua FMJ-BT Subsonic<br />Type: Full Metal Jacket with Boat Tail<br />Rounds: 20";
        displayname = "7.62mm Subsonic 20Rnd FAL Magazine";
        model = "\hlc_core\mesh\magazines\20rnd_762NATO_FAL.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 16.3;
        tracersevery = 0;
        initspeed = 325;
        displaynameshort = "FMJ Subsonic";
        picture = "\hlc_core\tex\ui\ammo\m_falsubsonic_ca.paa";
    };
    class hlc_50rnd_762x51_M_FAL : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        count = 50;
        mass = 49.47;
        descriptionshort = "Caliber: 7.62x51mm NATO M80A1-M62A1<br />Type: EPFMJ/Incendiary Tracer<br />Rounds: 50";
        displayname = "7.62mm EPR 50Rnd FAL Magazine (Tracers Every 4)";
        model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
        initspeed = 908.4;
        lastroundstracer = 3;
        picture = "\hlc_core\tex\ui\ammo\m_x91_mixed_ca.paa";
        scope = 2;
        tracersevery = 4;
        displaynameshort = "EPR/Tracer";
    };
    class hlc_10Rnd_762x51_B_fal : 30Rnd_556x45_Stanag {
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        count = 10;
        descriptionshort = "Caliber: 7.62x51mm NATO M80A1 EPR<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 10";
        displayname = "7.62mm EPR 10Rnd FAL Magazine";
        initspeed = 870;
        mass = 8.7;
        lastroundstracer = 0;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        model = "\hlc_core\mesh\magazines\10rnd_762NATO_FAL.p3d";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "M80A1 EPR";
    };
    class hlc_10Rnd_762x51_mk316_fal : hlc_10Rnd_762x51_B_fal {
        author = "Toadie";
        ammo = "HLC_762x51_MK316_20in";
        count = 10;
        descriptionshort = "Caliber: 7.62x51mm NATO MK316 Mod 0 SBLR<br />Type: Type: Open Tip Match (Special Ball Long Range)<br />Rounds: 10";
        displayname = "7.62mm SBLR 10Rnd FAL Magazine";
        initspeed = 890;
        mass = 9.2;
        lastroundstracer = 0;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        model = "\hlc_core\mesh\magazines\10rnd_762NATO_FAL.p3d";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK316 SBLR";
    };
    class hlc_10Rnd_762x51_barrier_fal : hlc_10Rnd_762x51_B_fal {
        author = "Toadie";
        ammo = "HLC_762x51_Barrier";
        count = 10;
        descriptionshort = "Caliber: 7.62x51mm NATO MK319 Mod 0 SOST <br />Type: Type: Reverse-Drawn Open Tip Match <br />Rounds: 10";
        displayname = "7.62mm SOST 10Rnd FAL Magazine";
        model = "\hlc_core\mesh\magazines\10rnd_762NATO_FAL.p3d";
        initspeed = 850;
        mass = 8.9;
        lastroundstracer = 0;
        picture = "\hlc_core\tex\ui\ammo\m_falball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = "MK319 OTM";
    };
    class hlc_10Rnd_762x51_T_fal : hlc_10Rnd_762x51_B_fal {
        author = "Toadie";
        ammo = "HLC_762x51_tracer";
        descriptionshort = "Caliber: 7.62x51mm NATO M62A1 Tracer <br />Type: Incendiary Tracer <br />Rounds: 10s";
        displayname = "7.62mm Tracer 10Rnd FAL Magazine";
        model = "\hlc_core\mesh\magazines\10rnd_762NATO_FAL.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 8.7;
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falTracer_ca.paa";
        displaynameshort = "M62A1 Tracer";
    };
    class hlc_10Rnd_762x51_TDim_fal : hlc_10Rnd_762x51_B_fal {
        author = "Toadie";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = "Caliber: 7.62x51mm NATO M276<br />Type: IR Incendiary Tracer<br />Rounds: 10";
        displayname = "7.62mm IR-DIM 10Rnd FAL Magazine";
        model = "\hlc_core\mesh\magazines\10rnd_762NATO_FAL.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 8.7;
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_falTracer_ca.paa";
        displaynameshort = "IR-DIM";
    };
    class hlc_10Rnd_762x51_S_fal : hlc_10Rnd_762x51_B_fal {
        author = "Toadie";
        ammo = "HLC_762x51_BTSub";
        descriptionshort = "Caliber: 7.62x51mm NATO Lapua FMJ-BT Subsonic<br />Type: Full Metal Jacket with Boat Tail<br />Rounds: 10";
        displayname = "7.62mm Subsonic 10Rnd FAL Magazine";
        model = "\hlc_core\mesh\magazines\10rnd_762NATO_FAL.p3d";
        lastroundstracer = 0;
        scope = 2;
        mass = 8.0;
        tracersevery = 0;
        initspeed = 325;
        displaynameshort = "FMJ Subsonic";
        picture = "\hlc_core\tex\ui\ammo\m_falsubsonic_ca.paa";
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

    //Bren Gun
    class hlc_30Rnd_303_B_bren : hlc_50Rnd_45ACP_B_1921 {
        ammo = "HLC_303Brit_B";
        count = 30;
        descriptionshort = "Caliber: .303British Ball<br />Rounds: 30<br />Used in: Bren";
        displayname = ".303 Ball 30Rnd Bren Magazine";
        lastroundstracer = 1;
        scope = 0;
        initspeed = 840;
        mass = 10;
        displaynameshort = ".303 British Ball";
        picture = "\hlc_core\tex\ui\ammo\m_brenball_ca.paa";
    };
    class hlc_30Rnd_303_T_bren : hlc_30Rnd_303_B_bren {
        ammo = "HLC_303Brit_T";
        count = 30;
        descriptionshort = "Caliber: .303British Tracer<br />Rounds: 30<br />Used in: Bren";
        displayname = ".303 Tracer 30Rnd Bren Magazine";
        lastroundstracer = 1;
        scope = 0;
        initspeed = 770;
        tracersevery = 3;
        mass = 10;
        displaynameshort = ".303 British Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_brentracer_ca.paa";
    };
    class hlc_30Rnd_303_AP_bren : hlc_30Rnd_303_B_bren {
        ammo = "HLC_303Brit_AP";
        count = 30;
        scope = 0;
        descriptionshort = "Caliber: .303British Armour-Piercing<br />Rounds: 30<br />Used in: Bren";
        displayname = ".303 AP 30Rnd Bren Magazine";
        lastroundstracer = 0;
        initspeed = 720;
        tracersevery = 1;
        mass = 11;
        displaynameshort = ".303 British AP";
        picture = "\hlc_core\tex\ui\ammo\m_brenap_ca.paa";
    };

    //Lee-Enfield Stipper Clips
    class hlc_10Rnd_303_B_enfield : hlc_30Rnd_303_B_bren {
        count = 10;
        scope = 2;
        descriptionshort = "Caliber: .303British Ball<br />Rounds: 10<br />Used in: SMLE,No.4,No.5";
        displayname = ".303 Ball 10Rnd Enfield Clip";
        initspeed = 744;
        mass = 1;
        displaynameshort = ".303 Ball";
        picture = "\hlc_core\tex\ui\ammo\m_enfieldball_ca.paa";
    };
    class hlc_10Rnd_303_T_enfield : hlc_30Rnd_303_T_bren {
        count = 10;
        descriptionshort = "Caliber: .303British Tracer<br />Rounds: 10<br />Used in: SMLE,No.4,No.5";
        displayname = ".303 Tracer 10Rnd Enfield Clip";
        tracersevery = 1;
        scope = 2;
        initspeed = 720;
        mass = 1;
        displaynameshort = ".303 Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_enfieldtracer_ca.paa";
    };
    class hlc_10Rnd_303_AP_enfield : hlc_30Rnd_303_AP_bren {
        count = 10;
        descriptionshort = "Caliber: .303British Armour-Piercing<br />Rounds: 10<br />Used in: SMLE,No.4,No.5";
        displayname = ".303 AP 10Rnd Enfield Clip";
        tracersevery = 1;
        initspeed = 840;
        scope = 2;
        mass = 1;
        displaynameshort = ".303 AP";
        picture = "\hlc_core\tex\ui\ammo\m_enfieldap_ca.paa";
    };

    //Carcano Clips
    class hlc_6Rnd_735_B_Carcano : hlc_30Rnd_303_B_bren {
        ammo = "HLC_542x42_ball";
        count = 6;
        scope = 0;
        descriptionshort = "Caliber: 6.5x52mm Ball<br />Rounds: 6<br />Used in: Carcano";
        displayname = "6.5mm Ball 6 Round Carcano Clip";
        initspeed = 755;
        mass = 1;
        displaynameshort = "6.5x52mm Ball";
        picture = "\hlc_core\tex\ui\ammo\m_carcanoball_ca.paa";
    };
    class hlc_6Rnd_735_T_Carcano : hlc_30Rnd_303_B_bren {
        ammo = "HLC_542x42_tracer";
        count = 6;
        scope = 0;
        descriptionshort = "Caliber: 6.5x52mm Tracer<br />Rounds: 6<br />Used in: Carcano";
        displayname = "6.5mm Tracer 6 Round Carcano Clip;
        tracersevery = 1;
        initspeed = 755;
        mass = 1;
        displaynameshort = "6.5x52mm Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_carcanotracer_ca.paa";
    };

    class hlc_5Rnd_792_T_Kar98 : hlc_10Rnd_303_B_enfield {
        ammo = "HLC_792x57_Tracer";
        count = 5;
        descriptionshort = "Caliber: 7.92x57mm Tracer<br />Rounds: 5<br />Used in: Kar98";
        displayname = "7.92mm Tracer 5Rnd G98 Clip";
        tracersevery = 1;
        lastroundstracer = 2;
        initspeed = 762;
        mass = 1;
        displaynameshort = "7.92x57mm Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_k98tracer_ca.paa";
    };
    class hlc_5Rnd_792_AP_Kar98 : hlc_10Rnd_303_B_enfield {
        ammo = "HLC_792x57_AP";
        count = 5;
        descriptionshort = "Caliber: 7.92x57mm PmK (AP)<br />Rounds: 5<br />Used in: Kar98";
        displayname = "7.92mm AP 5Rnd G98 Clip";
        tracersevery = 0;
        lastroundstracer = 3;
        initspeed = 840;
        mass = 1;
        displaynameshort = "7.92x57mm Armour Piercing";
        picture = "\hlc_core\tex\ui\ammo\m_k98ap_ca.paa";
    };

    //P90 Magazine
    class hlc_50Rnd_57x28_JHP_P90 : 30Rnd_556x45_Stanag {
        ammo = "HLC_57x28mm_JHP";
        count = 50;
        descriptionshort = "Caliber: 5.7x28mm SS195LF Blue VMax <br />Rounds: 50<br />Used in: P90";
        displayname = "5.7mm JHP 50Rnd P90 Magazine";
        initspeed = 715;
        lastroundstracer = 0;
        picture = "\hlc_core\tex\ui\ammo\m_p90ss195_ca.paa";
        scope = 0;
        mass = 5;
        tracersevery = 0;
        displaynameshort = "5.7x28mm SS195LF Blue VMax";
    };
    class hlc_50Rnd_57x28_FMJ_P90 : hlc_50Rnd_57x28_JHP_P90 {
        ammo = "HLC_57x28mm_FMJ";
        descriptionshort = "Caliber: 5.7x28mm SS190 Black-Tip<br />Rounds: 30<br />Used in: P90";
        displayname = "5.7mm FMJ 50Rnd P90 Magazine";
        lastroundstracer = 0;
        scope = 0;
        mass = 5;
        tracersevery = 0;
        displaynameshort = "5.7x28mm SS190 Black-Tip";
        picture = "\hlc_core\tex\ui\ammo\m_p90ss190_ca.paa";
    };

    class hlc_32rnd_9x19_B_sten : hlc_50Rnd_45ACP_B_1921 {
        ammo = "HLC_9x19_Ball";
        count = 32;
        initspeed = 365;
        descriptionshort = "Caliber: 9x19mm Ball<br />Rounds: 32<br />Used in: Sten";
        displayname = "9mm Ball 32Rnd Sten Magazine";
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_sten_ca.paa";
        scope = 2;
        tracersevery = 2;
        mass = 4;
        displaynameshort = "9x19mm Ball";
    };

    /*
    class hlc_32rnd_9x19_B_MP40 : hlc_50Rnd_45ACP_B_1921 {
    ammo = "HLC_9x19_Ball";
    initspeed = 400;
    count = 32;
    descriptionshort = "Caliber: 9x19mm Ball<br />Rounds: 32<br />Used in: Sten";
    displayname = "9mm Ball 32Rnd MP40 Magazine";
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
    displayname = "9mm Ball 30Rnd MAB38 Magazine";
    displaynameshort = "9x19mm Ball";
    mass = 4;
    };


    //HK45C Mags
    class hlc_8Rnd_45ACP_B_hk45 : hlc_50Rnd_45ACP_B_1921 {
        count = 8;
        descriptionshort = "Caliber: .45ACP Ball<br />Rounds: 8<br />Used in: HK45C";
        displayname = "HK45C Mag (Ball) 8rnd .45ACP ";
        lastroundstracer = 0;
        scope = 0;
        initspeed = 329;
        mass = 2;
        displaynameshort = ".45ACP Ball";
        picture = "\hlc_core\tex\ui\ammo\m_hk45ball_ca.paa";
    };
    class hlc_10Rnd_45ACP_B_hk45 : hlc_50Rnd_45ACP_B_1921 {
        count = 10;
        descriptionshort = "Caliber: .45ACP Ball<br />Rounds: 10<br />Used in: HK45C";
        displayname = "HK45 Mag (Ball) 10rnd .45ACP ";
        lastroundstracer = 0;
        initspeed = 329;
        scope = 0;
        mass = 2;
        displaynameshort = ".45ACP Ball";
        picture = "\hlc_core\tex\ui\ammo\m_hk45ball_ca.paa";
    };
    class hlc_8Rnd_45ACP_T_hk45 : hlc_50Rnd_45ACP_T_1921 {
        count = 8;
        descriptionshort = "Caliber: .45ACP Tracer<br />Rounds: 8<br />Used in: HK45C";
        displayname = "HK45C Mag (Tracer) 8rnd .45ACP ";
        lastroundstracer = 0;
        initspeed = 329;
        scope = 0;
        mass = 2;
        displaynameshort = ".45ACP Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_hk45tracer_ca.paa";
    };

    // Mk23 MAgs, Mostly the same as the above ones bar roundcount
    class hlc_12Rnd_45ACP_B_mk23 : hlc_8Rnd_45ACP_B_hk45 {
        count = 12;
        descriptionshort = "Caliber: .45ACP Ball<br />Rounds: 12<br />Used in: Mk23 OHWS";
        displayname = ".45ACP FMJ 12Rnd Mk23 Magazine";
        lastroundstracer = 0;
        scope = 2;
        initspeed = 260;
        mass = 4;
        displaynameshort = ".45ACP Ball";
        picture = "\hlc_core\tex\ui\ammo\m_mk23ball_ca.paa";
    };
    class hlc_12Rnd_45ACP_S_mk23 : hlc_8Rnd_45ACP_B_hk45 {
        count = 12;
        descriptionshort = "Caliber: .45ACP Ball +P <br />Rounds: 12<br />Used in: Mk23 OHWS";
        displayname = ".45ACP +P 12Rnd Mk23 Magazine";
        scope = 2;
        lastroundstracer = 0;
        initspeed = 320;
        mass = 4;
        displaynameshort = ".45ACP +P Ball";
        picture = "\hlc_core\tex\ui\ammo\m_mk23plusp_ca.paa";
    };
    class hlc_12Rnd_45ACP_T_mk23 : hlc_8Rnd_45ACP_T_hk45 {
        count = 12;
        scope = 2;
        descriptionshort = "Caliber: .45ACP Low-Velocity Tracer<br />Rounds: 12<br />Used in: Mk23 OHWS";
        displayname = ".45ACP Tracer 12Rnd Mk23 Magazine";
        lastroundstracer = 0;
        initspeed = 260;
        mass = 4;
        displaynameshort = ".45ACP LV Tracer";
        picture = "\hlc_core\tex\ui\ammo\m_mk23tracer_ca.paa";
    };

    //Deagle Mags
    class hlc_8Rnd_44mag_B_deagle : hlc_50Rnd_45ACP_B_1921 {
        ammo = "FH_44Mag";
        scope = 2;
        count = 8;
        descriptionshort = "Caliber: .44 Magnum Ball<br />Rounds: 8<br />Used in: Desert Eagle";
        displayname = ".44Mag FMJ 8Rnd Desert Eagle Magazine";
        lastroundstracer = 0;
        mass = 5;
        displaynameshort = ".44 Magnum Ball";
        picture = "\hlc_core\tex\ui\ammo\m_deagleball_ca.paa";
    };
    class hlc_8Rnd_44mag_JHP_deagle : hlc_8Rnd_44mag_B_deagle {
        ammo = "FH_44Mag_JHP";
        count = 8;
        scope = 2;
        descriptionshort = "Caliber: .44 Magnum JHP<br />Rounds: 8<br />Used in: Desert Eagle";
        displayname = ".44Mag JHP 8Rnd Desert Eagle Magazine";
        lastroundstracer = 0;
        mass = 4;
        displaynameshort = ".44 Magnum JHP";
        picture = "\hlc_core\tex\ui\ammo\m_deaglejhp_ca.paa";
    };
    class hlc_50Rnd_44mag_B_deagle : hlc_8Rnd_44mag_B_deagle {
        ammo = "FH_44Mag";
        count = 50;
        scope = 2;
        descriptionshort = "Caliber: .44 Magnum Ball<br />Rounds: 50<br />Used in: Desert Eagle";
        displayname = ".44Mag FMJ 50Rnd Desert Eagle Magazine";
        lastroundstracer = 0;
        mass = 20;
        displaynameshort = ".44 Magnum Ball";
        picture = "\hlc_core\tex\ui\ammo\m_deagleball_ca.paa";
    };
    class hlc_50Rnd_44mag_FUN : hlc_8Rnd_44mag_B_deagle {
        ammo = "FH_44Mag_FUNTRACER";
        count = 50;
        scope = 2;
        descriptionshort = "Caliber: .44 Magnum LOLTRACER<br />Rounds: 50<br />Used in: Desert Eagle";
        displayname = ".44Mag LOL 50Rnd Desert Eagle Magazine";
        lastroundstracer = 0;
        mass = 22;
        displaynameshort = "WHEEEEEEEEEE";
        picture = "\hlc_core\tex\ui\ammo\m_deagleball_ca.paa";
    };

    /*
    //Lewis Gun Pans
    class hlc_97Rnd_303_B_Lewis : hlc_30Rnd_303_B_bren {
    ammo = "HLC_303Brit_B";
    count = 97;
    descriptionshort = "Caliber: .303British Ball<br />Rounds: 97<br />Used in: Lewis";
    displayname = ".303 Ball 97Rnd Lewis Pan";
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
    displayname = ".303 Tracer 97Rnd Lewis Pan;
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
    displayname = ".303 AP 97Rnd Lewis Pan";
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
    displayname = "7.62mm FMJ 100Rnd Maxim-Link Belt";
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
    displayname = "7.62mm FMJ 100Rnd Maxim-Link Belt (Tracers every 4)";
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
    displayname = "7.62mm Tracers 100Rnd Maxim-Link Belt";
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
    displayname = "7.62mm FMJ 250Rnd Maxim-Link Belt";
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
    displayname = "7.62mm FMJ 250Rnd Maxim-Link Belt (Tracers Every 4)";
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
    displayname = "7.62mm Tracers 100Rnd Maxim-Link Belt";
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
    displayname = "7.62mm AP 100Rnd Maxim-Link Belt";
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
    displayname = "7.62mm AP 100Rnd Maxim-Link Belt";
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
    displayname = "6.5mm Ball 20Rnd Breda Clip";
    initspeed = 630;
    mass = 10;
    displaynameshort = "6.5x52mm Ball";
    picture = "\hlc_core\tex\ui\ammo\m_bredaball_ca.paa";
    };
    class hlc_20Rnd_735_T_Breda : hlc_6Rnd_735_T_Carcano {
    ammo = "HLC_542x42_tracer";
    count = 20;
    descriptionshort = "Caliber: 6.5x52mm Tracer<br />Rounds: 20<br />Used in: Breda";
    displayname = "6.5mm Tracer 20Rnd Breda Clip";
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
    displayname = "7.92mm FMJ 5Rnd Mauser Clip";
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