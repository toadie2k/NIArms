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

    class hlc_30rnd_556x45_EPR : 30Rnd_556x45_Stanag{
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_B;
        displayname = $STR_NIA_30rnd_556x45_EPR;
        initspeed = 974.8;
		__SMALLMASS(9.3, 30, 112);
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_EPR;
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
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SOST;
        displayname = $STR_NIA_30rnd_556x45_SOST;
        initspeed = 954.4;
		__SMALLMASS(12.307, 30, 112);// +1 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_SOST;
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
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SPR;
        displayname = $STR_NIA_30rnd_556x45_SPR;
        initspeed = 868.7;
		__SMALLMASS(13.27, 30, 112); //+2 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_SPR;
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
        displayname = $STR_NIA_30rnd_556x45_S;
        displaynameshort = $STR_NIA_556_Sub;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_s_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_M : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_M;
        displayname = $STR_NIA_30Rnd_556x45_M;
        initspeed = 974.8;
		__SMALLMASS(10.60937, 30, 112);
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_M;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_t : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_T;
        displayname = $STR_NIA_30Rnd_556x45_T;
        initspeed = 974.8;
		__SMALLMASS(11.9, 30, 112);
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = $STR_NIA_556_Tracer;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_MDim : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_Mdim;
        displayname = $STR_NIA_30rnd_556x45_MDim;
        tracersevery = 4;
		__SMALLMASS(10.60937, 30, 112);
        displaynameshort = $STR_NIA_556_MDim;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_TDim :hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_irdim;
        displayname = $STR_NIA_30rnd_556x45_TDim;
        tracersevery = 1;
		__SMALLMASS(11.9, 30, 112);
        displaynameshort = $STR_NIA_556_IRDIM;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanag_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    //X-15 Magazine
    class hlc_50rnd_556x45_EPR : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR";
        count = 50;
        descriptionshort = $STR_NIA_DESC_50Rnd_556x45_B;
        displayname = $STR_NIA_50rnd_556x45_EPR;
		__SMALLMASS(9.3, 50, 1360);
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
		__SMALLMASS(12.307, 50, 1360);
        displaynameshort = $STR_NIA_556_SOST;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_x15_sost_ca.paa";
        descriptionshort = $STR_NIA_DESC_50Rnd_556x45_SOST;
        displayname = $STR_NIA_50rnd_556x45_SOST;
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_50rnd_556x45_SPR : hlc_50rnd_556x45_EPR {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_SPR";
		__SMALLMASS(13.27, 50, 1360);
        picture = "\hlc_core\tex\ui\ammo\stanag\m_x15_SPR_ca.paa";
        displaynameshort = $STR_NIA_556_SPR;
        descriptionshort = $STR_NIA_DESC_50Rnd_556x45_SPR;
        displayname = $STR_NIA_50rnd_556x45_SPR;
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_50rnd_556x45_M : hlc_50rnd_556x45_EPR {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 50;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_x15_m_ca.paa";
        descriptionshort = $STR_NIA_DESC_50Rnd_556x45_M;
        displayname = $STR_NIA_50Rnd_556x45_M;
		__SMALLMASS(11.9, 50, 1360);
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_M;
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
        lastroundstracer = 2;
    };
    class hlc_50rnd_556x45_MDim : hlc_50rnd_556x45_EPR {
        author = "Toadie,Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        count = 50;
        displaynameshort = $STR_NIA_556_MDim;
        descriptionshort = $STR_NIA_DESC_50Rnd_556x45_Mdim;
        displayname = $STR_NIA_50rnd_556x45_MDim;
		__SMALLMASS(11.9, 50, 1360);
        tracersevery = 4;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_x15_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    //PMAG
    class hlc_30rnd_556x45_EPR_PMAG : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_B;
        displayname = $STR_NIA_30rnd_556x45_EPR_PMAG;
        initspeed = 974.8;
		__SMALLMASS(12.307, 30, 138.9);
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_EPR;
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
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SOST;
        displayname = $STR_NIA_30rnd_556x45_SOST_PMAG;
        initspeed = 954.4;
		__SMALLMASS(12.307, 30, 138.9);// +1 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_SOST;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_sost_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_SPR_PMAG : hlc_30rnd_556x45_EPR_PMAG {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SPR;
        displayname = $STR_NIA_30rnd_556x45_SPR_PMAG;
        initspeed = 868.7;
		__SMALLMASS(13.27, 30, 138.9);// +1 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_SPR;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_spr_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_S_PMAG : hlc_30rnd_556x45_EPR_PMAG {
        author = "Toadie,Spartan0536";
        initspeed = 340;
        displaynameshort = $STR_NIA_556_Sub;
        descriptionshort = "Caliber: 5.56x45mm NATO Cold-load M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = $STR_NIA_30rnd_556x45_S_PMAG;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_s_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_M_PMAG : hlc_30rnd_556x45_EPR_PMAG {
        ammo = "HLC_556NATO_EPR_Tracer";
        author = "Toadie,Spartan0536";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_M;
        displayname = $STR_NIA_30Rnd_556x45_M_PMAG;
        initspeed = 974.8;
		__SMALLMASS(10.60937, 30, 138.9);// +1 mass over EPR for ever 30
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_M;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_t_PMAG : hlc_30rnd_556x45_EPR_PMAG {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_T;
        displayname = $STR_NIA_30Rnd_556x45_T_PMAG;
        initspeed = 974.8;
		__SMALLMASS(11.9, 30, 138.9);
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = $STR_NIA_556_Tracer;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_MDim_PMAG : hlc_30rnd_556x45_EPR_PMAG {
        author = "Toadie,Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_Mdim;
        displayname = $STR_NIA_30rnd_556x45_MDim_PMAG;
		__SMALLMASS(10.60937, 30, 138.9);
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_MDim;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_TDim_PMAG :hlc_30rnd_556x45_EPR_PMAG {
        author = "Toadie,Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_irdim;
        displayname = $STR_NIA_30rnd_556x45_TDim_PMAG;
		__SMALLMASS(11.9, 30, 138.9);
        tracersevery = 1;
        displaynameshort = $STR_NIA_556_IRDIM;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_pmag_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    // H&K Heavy Duty STANAG
    class hlc_30rnd_556x45_EPR_STANAGHD : hlc_30rnd_556x45_EPR{
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_B;
        displayname = $STR_NIA_30rnd_556x45_EPR_STANAGHD;
        initspeed = 974.8;
		__SMALLMASS(9.3, 30, 244);
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_EPR;
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
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SOST;
        displayname = $STR_NIA_30rnd_556x45_SOST_STANAGHD;
        initspeed = 954.4;
		__SMALLMASS(12.307, 30, 244);
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_SOST;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_sost_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_SPR_STANAGHD : hlc_30rnd_556x45_EPR_STANAGHD {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SPR;
        displayname = $STR_NIA_30rnd_556x45_SPR_STANAGHD;
        initspeed = 868.7;
		__SMALLMASS(13.27, 30, 244);
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_SPR;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_spr_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_S_STANAGHD : hlc_30rnd_556x45_EPR_STANAGHD {
        author = "Toadie,Spartan0536";
        initspeed = 340;
        displaynameshort = $STR_NIA_556_Sub;
        descriptionshort = "Caliber: 5.56x45mm NATO Cold-load M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = $STR_NIA_30rnd_556x45_S_STANAGHD;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_s_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_M_STANAGHD : hlc_30rnd_556x45_EPR_STANAGHD {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_M;
        displayname = $STR_NIA_30Rnd_556x45_M_STANAGHD;
        initspeed = 974.8;
		__SMALLMASS(10.60937, 30, 244);
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_M;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_t_STANAGHD : hlc_30rnd_556x45_EPR_STANAGHD {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_T;
        displayname = $STR_NIA_30Rnd_556x45_T_STANAGHD;
        initspeed = 974.8;
		__SMALLMASS(11.9, 30, 244);
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = $STR_NIA_556_Tracer;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_MDim_STANAGHD : hlc_30rnd_556x45_EPR_STANAGHD {
        author = "Toadie,Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
		__SMALLMASS(10.60937, 30, 244);
        initspeed = 950.3664;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_Mdim;
        displayname = $STR_NIA_30rnd_556x45_MDim_STANAGHD;
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_MDim;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_TDim_STANAGHD :hlc_30rnd_556x45_EPR_STANAGHD {
        author = "Toadie,Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
		__SMALLMASS(11.9, 30, 244);
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_irdim;
        displayname = $STR_NIA_30rnd_556x45_TDim_STANAGHD;
        tracersevery = 1;
        displaynameshort = $STR_NIA_556_IRDIM;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_stanaghd_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    //Lancer L5
    class hlc_30rnd_556x45_EPR_L5 : 30Rnd_556x45_Stanag{
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_B;
        displayname = $STR_NIA_30rnd_556x45_EPR_L5;
        initspeed = 974.8;
		__SMALLMASS(9.3, 30, 127);
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_EPR;
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
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SOST;
        displayname = $STR_NIA_30rnd_556x45_SOST_L5;
        initspeed = 954.4;
		__SMALLMASS(12.307, 30, 127); //+1 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_SOST;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_sost_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_SPR_L5 : hlc_30rnd_556x45_EPR_L5 {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SPR;
        displayname = $STR_NIA_30rnd_556x45_SPR_L5;
        initspeed = 868.7;
		__SMALLMASS(13.27, 30, 127); //+2 mass over EPR for ever 30
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_SPR;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_spr_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_S_L5 : hlc_30rnd_556x45_EPR_L5 {
        author = "Toadie,Spartan0536";
        initspeed = 340;
        displaynameshort = $STR_NIA_556_Sub;
        descriptionshort = "Caliber: 5.56x45mm NATO Cold-load M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = $STR_NIA_30rnd_556x45_S_L5;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_s_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_M_L5 : hlc_30rnd_556x45_EPR_L5 {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_M;
        displayname = $STR_NIA_30Rnd_556x45_M_L5;
        initspeed = 974.8;
		__SMALLMASS(10.60937, 30, 127);
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_M;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_t_L5 : hlc_30rnd_556x45_EPR_L5 {
        author = "Toadie,Spartan0536";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_T;
        displayname = $STR_NIA_30Rnd_556x45_T_L5;
        initspeed = 974.8;
        __SMALLMASS(11.9, 30, 127);
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = $STR_NIA_556_Tracer;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_MDim_L5 : hlc_30rnd_556x45_EPR_L5 {
        author = "Toadie,Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
		__SMALLMASS(10.60937, 30, 127);
        initspeed = 950.3664;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_Mdim;
        displayname = $STR_NIA_30rnd_556x45_MDim_L5;
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_MDim;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_TDim_L5 :hlc_30rnd_556x45_EPR_L5 {
        author = "Toadie,Spartan0536";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
		__SMALLMASS(11.9, 30, 127);
        initspeed = 950.3664;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_irdim;
        displayname = $STR_NIA_30rnd_556x45_TDim_L5;
        tracersevery = 1;
        displaynameshort = $STR_NIA_556_IRDIM;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_L5_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    //EMAG
	//
    class hlc_30rnd_556x45_EPR_EMAG : hlc_30rnd_556x45_EPR {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_EPR";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_B;
        displayname = $STR_NIA_30rnd_556x45_EPR_EMAG;
        initspeed = 974.8;
		__SMALLMASS(9.3, 30, 131.541);
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_EPR;
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
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SOST;
        displayname = $STR_NIA_30rnd_556x45_SOST_EMAG;
        initspeed = 954.4;
		__SMALLMASS(12.307, 30, 131.541);
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_SOST;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_sost_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_SPR_EMAG : hlc_30rnd_556x45_EPR_EMAG {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_SPR";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_SPR;
        displayname = $STR_NIA_30rnd_556x45_SPR_EMAG;
        initspeed = 868.7;
		__SMALLMASS(13.27, 30, 131.541);
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_556_SPR;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_sPR_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_S_EMAG : hlc_30rnd_556x45_EPR_EMAG {
        author = "Toadie,Spartan0536,Tigg";
        initspeed = 340;
        descriptionshort = "Caliber: 5.56x45mm NATO Cold-load M855A1<br />Type: Reverse Drawn Full Metal Jacket Exposed Penetrator (Enhanced Performance Round)<br />Rounds: 30";
        displayname = $STR_NIA_30rnd_556x45_S_EMAG;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_sPR_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
    };
    class hlc_30rnd_556x45_M_EMAG : hlc_30rnd_556x45_EPR_EMAG {
        ammo = "HLC_556NATO_EPR_Tracer";
        author = "Toadie,Spartan0536,Tigg";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_M;
        displayname = $STR_NIA_30Rnd_556x45_M_EMAG;
        initspeed = 974.8;
		__SMALLMASS(10.60937, 30, 131.541);
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_M;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_t_EMAG : hlc_30rnd_556x45_EPR_EMAG {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_556NATO_EPR_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_T;
        displayname = $STR_NIA_30Rnd_556x45_T_EMAG;

        initspeed = 974.8;
		__SMALLMASS(11.9, 30, 131.541);
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
        displaynameshort = $STR_NIA_556_Tracer;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_MDim_EMAG : hlc_30rnd_556x45_EPR_EMAG {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_Mdim;
        displayname = $STR_NIA_30rnd_556x45_MDim_EMAG;
		__SMALLMASS(10.60937, 30, 131.541);
        tracersevery = 4;
        displaynameshort = $STR_NIA_556_MDim;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_m_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_greentip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };
    class hlc_30rnd_556x45_TDim_EMAG :hlc_30rnd_556x45_EPR_EMAG {
        author = "Toadie,Spartan0536,Tigg";
        ammo = "HLC_B_556x45_Ball_Tracer_Dim";
        initspeed = 950.3664;
		__SMALLMASS(11.9, 30, 131.541);
        descriptionshort = $STR_NIA_DESC_30Rnd_556x45_irdim;
        displayname = $STR_NIA_30rnd_556x45_TDim_EMAG;
        tracersevery = 1;
        displaynameshort = $STR_NIA_556_IRDIM;
        picture = "\hlc_core\tex\ui\ammo\stanag\m_emag_t_ca.paa";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_redtip_co.paa", "hlc_core\tex\magazines\308_redtip_co.paa" };
    };

	//===========================================================
	//-----------.300 Blackout, moved from AR15------------------
	//===========================================================


	//STANAG
	class hlc_29rnd_300BLK_STANAG : hlc_30rnd_556x45_EPR {
		dlc = "Niarms_AR15";
		author = "Toadie";
		ammo = "HLC_300Blackout_Ball";
		count = 30;
		descriptionshort = $STR_NIA_DESC_29rnd_300BLK_STANAG;
		displayname = $STR_NIA_29rnd_300BLK_STANAG;
		initspeed = 674.6;
		lastroundstracer = 0;
		tracersevery = 0;
		displaynameshort = $STR_NIA_300AAC_EPR;
		picture = "\hlc_core\tex\ui\ammo\m_blackout_fmj_ca.paa";
		modelSpecialIsProxy = 1;
		modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG;
		__SMALLMASS(15.29, 30, 112);
	};
	class hlc_29rnd_300BLK_STANAG_T : hlc_29rnd_300BLK_STANAG {
		dlc = "Niarms_AR15";
		author = "Toadie";
		ammo = "HLC_300Blackout_RNBT";
		descriptionshort = $STR_NIA_DESC_300BLK_STANAG_T;
		displayname = $STR_NIA_29Rnd_300BLK_T_STANAG;
		initspeed = 329.2;
		lastroundstracer = 1;
		tracersevery = 1;
		displaynameshort = $STR_NIA_300AAC_LVTracer;
		picture = "\hlc_core\tex\ui\ammo\m_blackout_sub_ca.paa";
		__SMALLMASS(20.28491, 30, 112);
	};
	class hlc_29rnd_300BLK_STANAG_S : hlc_29rnd_300BLK_STANAG {
		dlc = "Niarms_AR15";
		author = "Toadie";
		ammo = "HLC_300Blackout_SMK";
		count = 30;
		descriptionshort = $STR_NIA_DESC_300BLK_STANAG_S;
		displayname = $STR_NIA_29Rnd_300BLK_IRDIM_STANAG;
		model = "hlc_wp_ar15\mesh\magazine\magazine_300.p3d";
		initspeed = 670.6;
		lastroundstracer = 0;
		displaynameshort = $STR_NIA_300AAC_SPR;
		picture = "\hlc_core\tex\ui\ammo\m_blackout_fmj_ca.paa";
		modelSpecialIsProxy = 1;
		modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG;
		__SMALLMASS(14.58, 30, 112);
	};
	//X15
	class hlc_50rnd_300BLK_STANAG_EPR : hlc_29rnd_300BLK_STANAG {
		ammo = "HLC_300Blackout_Ball";
		author = "Toadie";
		count = 50;
		descriptionshort = $STR_NIA_DESC_50rnd_300BLK_STANAG;
		displayname = $STR_NIA_50Rnd_300BLK_M_STANAG;
		displaynameshort = $STR_NIA_300AAC_M;
		__SMALLMASS(15.29, 50, 1360);
		tracersevery = 0;
		picture = "\hlc_core\tex\ui\ammo\m_X15_mixed_ca.paa";
		modelSpecial = \hlc_core\mesh\magazines\proxies\50rnd_556NATO_X15;
		modelSpecialIsProxy = 1;
		model = "\hlc_core\mesh\magazines\50rnd_556NATO_X15.p3d";
	};
	//PMAG
	class hlc_30rnd_300BLK_PMAG : hlc_29rnd_300BLK_STANAG
	{
		modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_PMAG;
		model = "\hlc_core\mesh\magazines\30rnd_556NATO_PMAG.p3d";
		hiddenSelections[] = { "roundtype1", "roundtype2" };
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
		displayname = $STR_NIA_30rnd_300BLK_PMAG;
		__SMALLMASS(15.29, 30, 138.9);
	};
	class hlc_30rnd_300BLK_PMAG_T : hlc_29rnd_300BLK_STANAG_T
	{
		modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_PMAG;
		model = "\hlc_core\mesh\magazines\30rnd_556NATO_PMAG.p3d";
		hiddenSelections[] = { "roundtype1", "roundtype2" };
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
		displayname = $STR_NIA_30Rnd_300BLK_T_PMAG;
		__SMALLMASS(20.28491, 30, 138.9);
	};
	class hlc_30rnd_300BLK_PMAG_S : hlc_29rnd_300BLK_STANAG_S
	{
		modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_PMAG;
		model = "\hlc_core\mesh\magazines\30rnd_556NATO_PMAG.p3d";
		hiddenSelections[] = { "roundtype1", "roundtype2" };
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
		displayname = $STR_NIA_30rnd_300BLK_IRDIM_PMAG;
		__SMALLMASS(14.58, 30, 138.9);
	};
	// H&K Heavy Duty STANAG
	class hlc_30rnd_300BLK_STANAGHD : hlc_29rnd_300BLK_STANAG
	{
		modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD;
		model = "\hlc_core\mesh\magazines\30rnd_556NATO_STANAG_HD.p3d";
		hiddenSelections[] = { "roundtype1", "roundtype2" };
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
		displayname = $STR_NIA_30rnd_300BLK_STANAGHD;
		__SMALLMASS(15.29, 30, 244);
	};
	class hlc_30rnd_300BLK_STANAGHD_T : hlc_29rnd_300BLK_STANAG_T
	{
		modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD;
		model = "\hlc_core\mesh\magazines\30rnd_556NATO_STANAG_HD.p3d";
		hiddenSelections[] = { "roundtype1", "roundtype2" };
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
		displayname = $STR_NIA_30rnd_300BLK_T_STANAGHD;
		__SMALLMASS(20.28491, 30, 244);
	};
	class hlc_30rnd_300BLK_STANAGHD_S : hlc_29rnd_300BLK_STANAG_S
	{
		modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_STANAG_HD;
		model = "\hlc_core\mesh\magazines\30rnd_556NATO_STANAG_HD.p3d";
		hiddenSelections[] = { "roundtype1", "roundtype2" };
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
		displayname = $STR_NIA_30rnd_300BLK_IRDIM_STANAGHD;
		__SMALLMASS(14.58, 30, 244);
	};
	//EMAG
	class hlc_30rnd_300BLK_EMAG : hlc_29rnd_300BLK_STANAG
	{
		modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_EMAG;
		model = "\hlc_core\mesh\magazines\30rnd_556NATO_EMAG.p3d";
		hiddenSelections[] = { "roundtype1", "roundtype2" };
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
		displayname = $STR_NIA_30rnd_300BLK_EMAG;
		__SMALLMASS(15.29, 30, 131.541);
	};
	class hlc_30rnd_300BLK_EMAG_T : hlc_29rnd_300BLK_STANAG_T
	{
		modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_EMAG;
		model = "\hlc_core\mesh\magazines\30rnd_556NATO_EMAG.p3d";
		hiddenSelections[] = { "roundtype1", "roundtype2" };
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
		displayname = $STR_NIA_30rnd_300BLK_T_EMAG;
		__SMALLMASS(20.28491, 30, 131.541);
	};
	class hlc_30rnd_300BLK_EMAG_S : hlc_29rnd_300BLK_STANAG_S
	{
		modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_556NATO_EMAG;
		model = "\hlc_core\mesh\magazines\30rnd_556NATO_EMAG.p3d";
		hiddenSelections[] = { "roundtype1", "roundtype2" };
		hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\308_co.paa", "hlc_core\tex\magazines\308_co.paa" };
		displayname = $STR_NIA_30rnd_300BLK_IRDIM_EMAG;
		__SMALLMASS(14.58, 30, 131.541);
	};

    /*
    Mass Reference
    ==================
    All values in Arma's Roads-A-Man-Must-Walk-Down mass units

    7.62x39
    ---------
	57-N-231
    0.35 per
	16.3g per
    57-N-231x30 - 10.77
    57-N-231x40 - 14
    57-N-231x75 - 26.25

	57-N-231P
    0.34 per
	16.4g per
    57-N-231Px30 - 10.2
    57-N-231Px40 - 13.6
    57-N-231Px75 - 25.5

	7N23
    0.34 per
	15.8g per
    7N23x30 - 10.2
    7N23x30 - 13.6
    7N23x30 - 25.5

	57-N-231U
    0.46 per
	20.9g per
    57-N-231Ux30 - 13.8
    57-N-231Ux40 - N.A
    57-N-231Ux60 - N.A


    Steel - 7.18 / 326g
    Bakelite - 4.75 / 215g
    Valmet - 5.42 / 246g
    Magpul - 4.09 / 206g
    RPK - 5.92 /269g
    Drum - 10.78 (supposedly) / 499g

    5.45x39
    ---------
	7n6
    0.23 per
	10.5g
    (7n6)x 30 - 6.9
    (7n6)x 45 - 10.35
    (7n6)x 60 - 13.8

	7n10
    0.24 per
	10.7g
    (7n10)x 30 - 7.2
    (7n10)x 45 - 10.8
    (7n10)x 60 - 14.4

	7t3
    0.22 per
	10.3g
    (7t3)x 30 - 6.6
    (7t3)x 45 - 9.9
    (7t3)x 60 - 13.2
	
    6L20/23 - 4.73 / 216g
    6L18/26 - 6.6 / 302g
    6L31 - 6.6 / 302g
    */








    //AK74 6L20 Magazine
    class hlc_30Rnd_545x39_B_AK : 30Rnd_556x45_Stanag{

        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Ball";
        count = 30;
        descriptionshort = $STR_NIA_DESC_545x39_B_AK;
        displayname = $STR_NIA_30Rnd_545x39_B_AK;
        initSpeed = 879.9;
		__SMALLMASS(10.5, 30, 216);
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_ak_FMJ_ca.paa";
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L20;
        modelSpecialIsProxy = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_545_FMJ;

    };
    class hlc_30Rnd_545x39_S_AK : 30Rnd_556x45_Stanag{
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_7u1";
        count = 30;
        descriptionshort = $STR_NIA_DESC_545x39_S_AK;
        displayname = $STR_NIA_30Rnd_545x39_S_AK;
        initspeed = 371;
		__SMALLMASS(10.75, 30, 216);
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_ak_Subsonic_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_545_Subsonic;
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L20;
        modelSpecialIsProxy = 1;
    };
    class hlc_30Rnd_545x39_t_ak : hlc_30Rnd_545x39_B_AK {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        descriptionshort = $STR_NIA_DESC_545x39_T_AK;
        displayname = $STR_NIA_30Rnd_545x39_t_ak;
        lastroundstracer = 0;
		__SMALLMASS(10.3, 30, 216);
        scope = 2;
        tracersevery = 1;
        displaynameshort = $STR_NIA_545_Tracer;
        picture = "\hlc_core\tex\ui\ammo\m_ak_Tracer_ca.paa";
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L20;
        modelSpecialIsProxy = 1;
    };
    class hlc_30Rnd_545x39_m_ak : hlc_30Rnd_545x39_B_AK {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        descriptionshort = $STR_NIA_DESC_545x39_M_AK;
        displayname = $STR_NIA_30Rnd_545x39_m_ak;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 3;
		__SMALLMASS(10.4, 30, 216);
        displaynameshort = $STR_NIA_545_M;
        picture = "\hlc_core\tex\ui\ammo\m_ak_Mixed_ca.paa";
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L20;
        modelSpecialIsProxy = 1;
    };
    class hlc_30Rnd_545x39_EP_ak : hlc_30Rnd_545x39_B_AK {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_EP";
        descriptionshort = $STR_NIA_DESC_545x39_EPR_AK;
        displayname = $STR_NIA_30Rnd_545x39_EP_ak;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(10.7, 30, 216);
        displaynameshort = $STR_NIA_545_EPR;
        initSpeed = 879.9;
        picture = "\hlc_core\tex\ui\ammo\m_ak_EPR_ca.paa";
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L20;
        modelSpecialIsProxy = 1;
    };



    //AK74 6L23 Plum Magazine
    class hlc_30Rnd_545x39_B_AK_Plum : 30Rnd_556x45_Stanag{

        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Ball";
        count = 30;
        descriptionshort = $STR_NIA_DESC_545x39_B_AK;
        displayname = $STR_NIA_30Rnd_545x39_B_AKplum;
        initSpeed = 879.9;
		__SMALLMASS(10.5, 30, 216);
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_ak_Plum_FMJ_ca.paa";
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L20Plum;
        modelSpecialIsProxy = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_545_FMJ;

    };
    class hlc_30Rnd_545x39_S_AK_Plum : 30Rnd_556x45_Stanag{
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_7u1";
        count = 30;
        descriptionshort = $STR_NIA_DESC_545x39_S_AK;
        displayname = $STR_NIA_30Rnd_545x39_S_AKplum;
        initspeed = 371;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_ak_Plum_Subsonic_ca.paa";
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(10.75, 30, 216);
        displaynameshort = $STR_NIA_545_Subsonic;
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L20Plum;
        modelSpecialIsProxy = 1;
    };
    class hlc_30Rnd_545x39_t_ak_Plum : hlc_30Rnd_545x39_B_AK {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        descriptionshort = $STR_NIA_DESC_545x39_T_AK;
        displayname = $STR_NIA_30Rnd_545x39_t_AKplum;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(10.3, 30, 216);
        displaynameshort = $STR_NIA_545_Tracer;
        picture = "\hlc_core\tex\ui\ammo\m_ak_Plum_Tracer_ca.paa";
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L20Plum;
        modelSpecialIsProxy = 1;
    };
    class hlc_30Rnd_545x39_m_ak_Plum : hlc_30Rnd_545x39_B_AK {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        descriptionshort = $STR_NIA_DESC_545x39_M_AK;
        displayname = $STR_NIA_30Rnd_545x39_m_AKplum;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 3;
		__SMALLMASS(10.4, 30, 216);
        displaynameshort = $STR_NIA_545_M;
        picture = "\hlc_core\tex\ui\ammo\m_ak_Plum_Mixed_ca.paa";
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L20Plum;
        modelSpecialIsProxy = 1;
    };
    class hlc_30Rnd_545x39_EP_ak_Plum : hlc_30Rnd_545x39_B_AK {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_EP";
        descriptionshort = $STR_NIA_DESC_545x39_EPR_AK;
        displayname = $STR_NIA_30Rnd_545x39_EP_AKplum;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(10.7, 30, 216);
        displaynameshort = $STR_NIA_545_EPR;
        initSpeed = 879.9;
        picture = "\hlc_core\tex\ui\ammo\m_ak_Plum_EPR_ca.paa";
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L20Plum;
        modelSpecialIsProxy = 1;
    };




    //AK74M 6L23 Magazine
    class hlc_30Rnd_545x39_B_AK_Black : 30Rnd_556x45_Stanag{

        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Ball";
        count = 30;
        descriptionshort = $STR_NIA_DESC_545x39_B_AK;
        displayname = $STR_NIA_30Rnd_545x39_B_AKBlack;
        initSpeed = 879.9;
		__SMALLMASS(10.5, 30, 216);
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\M_AK_6L23_FMJ_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L23;
        modelSpecialIsProxy = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_545_FMJ;

    };
    class hlc_30Rnd_545x39_S_AK_Black : 30Rnd_556x45_Stanag{
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_7u1";
        count = 30;
        descriptionshort = $STR_NIA_DESC_545x39_S_AK;
        displayname = $STR_NIA_30Rnd_545x39_S_AKBlack;
        initspeed = 371;
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\M_AK_6L23_Subsonic_CA.paa";
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(10.75, 30, 216);
        displaynameshort = $STR_NIA_545_Subsonic;
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L23;
        modelSpecialIsProxy = 1;
    };
    class hlc_30Rnd_545x39_t_ak_Black : hlc_30Rnd_545x39_B_AK {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        descriptionshort = $STR_NIA_DESC_545x39_T_AK;
        displayname = $STR_NIA_30Rnd_545x39_t_AKBlack;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(10.3, 30, 216);
        displaynameshort = $STR_NIA_545_Tracer;
        picture = "\hlc_core\tex\ui\ammo\M_AK_6L23_Tracer_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L23;
        modelSpecialIsProxy = 1;
    };
    class hlc_30Rnd_545x39_m_ak_Black : hlc_30Rnd_545x39_B_AK {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        descriptionshort = $STR_NIA_DESC_545x39_M_AK;
        displayname = $STR_NIA_30Rnd_545x39_m_AKBlack;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 3;
		__SMALLMASS(10.4, 30, 216);
        displaynameshort = $STR_NIA_545_M;
        picture = "\hlc_core\tex\ui\ammo\M_AK_6L23_Mixed_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L23;
        modelSpecialIsProxy = 1;
    };
    class hlc_30Rnd_545x39_EP_ak_Black : hlc_30Rnd_545x39_B_AK {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_EP";
        descriptionshort = $STR_NIA_DESC_545x39_EPR_AK;
        displayname = $STR_NIA_30Rnd_545x39_EP_AKBlack;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(10.7, 30, 216);
        displaynameshort = $STR_NIA_545_EPR;
        initSpeed = 879.9;
        picture = "\hlc_core\tex\ui\ammo\M_AK_6L23_EPR_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_545x39_AK74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_545x39_AK74_6L23;
        modelSpecialIsProxy = 1;
    };





    //AK74/RPK74 6L18 Magazine
    class hlc_45Rnd_545x39_b_rpk : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Ball";
        count = 45;
        descriptionshort = $STR_NIA_DESC_45rnd_545x39_B_AK;
        displayname = $STR_NIA_45Rnd_545x39_b_rpk;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(10.5, 45, 302);
        displaynameshort = $STR_NIA_545_FMJ;
        picture = "\hlc_core\tex\ui\ammo\m_AK_6L18_FMJ_ca.paa";
        model = "\hlc_core\mesh\magazines\45Rnd_545x39_rpk74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\45rnd_545x39_AK74_6L18;
        modelSpecialIsProxy = 1;
    };
    class hlc_45Rnd_545x39_t_rpk : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        count = 45;
        descriptionshort = $STR_NIA_DESC_45rnd_545x39_T_AK;
        displayname = $STR_NIA_45Rnd_545x39_t_rpk;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(10.3, 45, 302);
        displaynameshort = $STR_NIA_545_Tracer;
        picture = "\hlc_core\tex\ui\ammo\m_AK_6L18_Tracer_ca.paa";
        model = "\hlc_core\mesh\magazines\45Rnd_545x39_rpk74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\45rnd_545x39_AK74_6L18;
        modelSpecialIsProxy = 1;
    };
    class hlc_45Rnd_545x39_m_rpk : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        count = 45;
        descriptionshort = $STR_NIA_DESC_45rnd_545x39_M_AK;
        displayname = $STR_NIA_45Rnd_545x39_m_rpk;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 3;
		__SMALLMASS(10.4, 45, 302);
        displaynameshort = $STR_NIA_545_M;
        picture = "\hlc_core\tex\ui\ammo\m_AK_6L18_Mixed_ca.paa";
        model = "\hlc_core\mesh\magazines\45Rnd_545x39_rpk74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\45rnd_545x39_AK74_6L18;
        modelSpecialIsProxy = 1;
    };
    class hlc_45Rnd_545x39_EP_rpk : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_EP";
        count = 45;
        descriptionshort = $STR_NIA_DESC_45rnd_545x39_EPR_AK;
        displayname = $STR_NIA_45Rnd_545x39_EP_rpk;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(10.7, 45, 302);
        displaynameshort = $STR_NIA_545_EPR;
        picture = "\hlc_core\tex\ui\ammo\m_AK_6L18_EPR_ca.paa";
        model = "\hlc_core\mesh\magazines\45Rnd_545x39_rpk74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\45rnd_545x39_AK74_6L18;
        modelSpecialIsProxy = 1;
    };



    //AK74M/RPK74M 6L26 Magazine
    class hlc_45Rnd_545x39_b_rpkm : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Ball";
        count = 45;
        descriptionshort = $STR_NIA_DESC_45rnd_545x39_B_AK;
        displayname = $STR_NIA_45Rnd_545x39_b_rpkm;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(10.5, 45, 302);
        displaynameshort = $STR_NIA_545_FMJ;
        picture = "\hlc_core\tex\ui\ammo\m_AK_6L26_FMJ_ca.paa";
        model = "\hlc_core\mesh\magazines\45Rnd_545x39_rpk74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\45rnd_545x39_AK74_6L26;
        modelSpecialIsProxy = 1;
    };
    class hlc_45Rnd_545x39_t_rpkm : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        count = 45;
        descriptionshort = $STR_NIA_DESC_45rnd_545x39_T_AK;
        displayname = $STR_NIA_45Rnd_545x39_t_rpkm;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(10.3, 45, 302);
        displaynameshort = $STR_NIA_545_Tracer;
        picture = "\hlc_core\tex\ui\ammo\m_AK_6L26_Tracer_ca.paa";
        model = "\hlc_core\mesh\magazines\45Rnd_545x39_rpk74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\45rnd_545x39_AK74_6L26;
        modelSpecialIsProxy = 1;
    };
    class hlc_45Rnd_545x39_m_rpkm : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        count = 45;
        descriptionshort = $STR_NIA_DESC_45rnd_545x39_M_AK;
        displayname = $STR_NIA_45Rnd_545x39_m_rpkm;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 3;
		__SMALLMASS(10.4, 45, 302);
        displaynameshort = $STR_NIA_545_M;
        picture = "\hlc_core\tex\ui\ammo\m_AK_6L26_Mixed_ca.paa";
        model = "\hlc_core\mesh\magazines\45Rnd_545x39_rpk74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\45rnd_545x39_AK74_6L26;
        modelSpecialIsProxy = 1;
    };
    class hlc_45Rnd_545x39_EP_rpkm : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_EP";
        count = 45;
        descriptionshort = $STR_NIA_DESC_45rnd_545x39_EPR_AK;
        displayname = $STR_NIA_45Rnd_545x39_EP_rpkm;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(10.7, 45, 302);
        displaynameshort = $STR_NIA_545_EPR;
        picture = "\hlc_core\tex\ui\ammo\m_AK_6L26_EPR_ca.paa";
        model = "\hlc_core\mesh\magazines\45Rnd_545x39_rpk74.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\45rnd_545x39_AK74_6L26;
        modelSpecialIsProxy = 1;
    };





    // AK74/RPK74/AK12 6L31 Magazine
    class hlc_60Rnd_545x39_b_rpk : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Ball";
        count = 60;
        descriptionshort = $STR_NIA_DESC_60rnd_545x39_B_AK;
        displayname = $STR_NIA_60Rnd_545x39_b_RPK;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(10.5, 60, 302);
        displaynameshort = $STR_NIA_545_FMJ;
        picture = "\hlc_core\tex\ui\ammo\m_RPk12_FMJ_ca.paa";
        model = "\hlc_core\mesh\magazines\60rnd_545x39_RPK12.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\60rnd_545x39_AK74_6L31;
        modelSpecialIsProxy = 1;
    };
    class hlc_60Rnd_545x39_m_rpk : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        count = 60;
        descriptionshort = $STR_NIA_DESC_60rnd_545x39_M_AK;
        displayname = $STR_NIA_60Rnd_545x39_m_RPK;
        lastroundstracer = 5;
        scope = 2;
        tracersevery = 3;
		__SMALLMASS(10.4, 60, 302);
        displaynameshort = $STR_NIA_545_M;
        picture = "\hlc_core\tex\ui\ammo\m_rpk12_mixed_ca.paa";
        model = "\hlc_core\mesh\magazines\60rnd_545x39_RPK12.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\60rnd_545x39_AK74_6L31;
        modelSpecialIsProxy = 1;
    };
    class hlc_60Rnd_545x39_t_rpk : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "FH_545x39_Tracer";
        count = 60;
        descriptionshort = $STR_NIA_DESC_60rnd_545x39_T_AK;
        displayname = $STR_NIA_60Rnd_545x39_t_RPK;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(10.3, 60, 302);
        displaynameshort = $STR_NIA_545_Tracer;
        picture = "\hlc_core\tex\ui\ammo\m_rpk12_tracer_ca.paa";
        model = "\hlc_core\mesh\magazines\60rnd_545x39_RPK12.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\60rnd_545x39_AK74_6L31;
        modelSpecialIsProxy = 1;
    };
    class hlc_60Rnd_545x39_EP_rpk : hlc_30Rnd_545x39_T_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        count = 60;
        ammo = "FH_545x39_EP";
        descriptionshort = $STR_NIA_DESC_60rnd_545x39_EPR_AK;
        displayname = $STR_NIA_60Rnd_545x39_EP_RPK;
        lastroundstracer = 3;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(10.7, 45, 302);
        displaynameshort = $STR_NIA_545_EPR;
        picture = "\hlc_core\tex\ui\ammo\m_rpk12_mixed_ca.paa";
        model = "\hlc_core\mesh\magazines\60rnd_545x39_RPK12.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\60rnd_545x39_AK74_6L31;
        modelSpecialIsProxy = 1;
    };




    //AK Magazine, Steel
    class hlc_30Rnd_762x39_b_ak : 30Rnd_556x45_Stanag{
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Ball";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_B_AK;
        displayname = $STR_NIA_30Rnd_762x39_b_ak;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(16.3, 30, 326);
        displaynameshort = $STR_NIA_762x39_FMJ;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_FMJ_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_762x39_AK;
        modelSpecialIsProxy = 1;
        initspeed = 739.1;
    };
    class hlc_30Rnd_762x39_t_ak : hlc_30Rnd_762x39_b_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_T_AK;
        displayname = $STR_NIA_30Rnd_762x39_t_ak;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(16.4, 30, 326);
        displaynameshort = $STR_NIA_762x39_Tracer;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_Tracer_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 739.1;
    };
    class hlc_30Rnd_762x39_m_ak : hlc_30Rnd_762x39_b_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 30;
		__SMALLMASS(16.33, 30, 326);
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_m_AK;
        displayname = $STR_NIA_30Rnd_762x39_m_ak;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 3;
        displaynameshort = $STR_NIA_762x39_M;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_Mixed_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 739.1;
    };
    class hlc_30Rnd_762x39_AP_ak : hlc_30Rnd_762x39_b_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_AP";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_AP_AK;
        displayname = $STR_NIA_30Rnd_762x39_AP_ak;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(15.8, 30, 326);
        displaynameshort = $STR_NIA_762x39_AP;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_AP_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 759.0;
    };

    class hlc_30rnd_762x39_s_ak : hlc_30Rnd_762x39_b_ak {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Ball";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_S_AK;
        displayname = $STR_NIA_30Rnd_762x39_s_ak;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(20.9, 30, 326);
        displaynameshort = $STR_NIA_762x39_subsonic;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_Subsonic_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 311.8;
    };



    //AK Magazine, 6L10 Bakelite
    class hlc_30Rnd_762x39_b_ak_6L10 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Ball";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_b_AK;
        displayname = $STR_NIA_30Rnd_762x39_b_ak_6l10;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(16.3, 30, 215);
        displaynameshort = $STR_NIA_762x39_FMJ;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_6L10_FMJ_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_762x39_AK_6L10;
        modelSpecialIsProxy = 1;
        initspeed = 739.1;
    };
    class hlc_30Rnd_762x39_t_ak_6L10 : hlc_30Rnd_762x39_b_ak_6L10 {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_T_AK;
        displayname = $STR_NIA_30Rnd_762x39_t_ak_6l10;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(16.4, 30, 215);
        displaynameshort = $STR_NIA_762x39_Tracer;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_6L10_Tracer_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 739.1;
    };
    class hlc_30Rnd_762x39_m_ak_6L10 : hlc_30Rnd_762x39_b_ak_6L10 {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_m_AK;
        displayname = $STR_NIA_30Rnd_762x39_m_ak_6l10;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 3;
		__SMALLMASS(16.33, 30, 215);
        displaynameshort = $STR_NIA_762x39_M;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_6L10_Mixed_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 739.1;
    };
    class hlc_30Rnd_762x39_AP_ak_6L10 : hlc_30Rnd_762x39_b_ak_6L10 {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_AP";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_AP_AK;
        displayname = $STR_NIA_30Rnd_762x39_AP_ak_6l10;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(15.8, 30, 215);
        displaynameshort = $STR_NIA_762x39_AP;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_6L10_AP_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 759.0;
    };

    class hlc_30rnd_762x39_s_ak_6L10 : hlc_30Rnd_762x39_b_ak_6L10 {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Ball";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_S_AK;
        displayname = $STR_NIA_30Rnd_762x39_s_ak_6l10;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(20.9, 30, 215);
        displaynameshort = $STR_NIA_762x39_subsonic;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_6L10_Subsonic_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 311.8;
    };



    //Valmet Magazine
    class hlc_30Rnd_762x39_b_ak_Valmet : 30Rnd_556x45_Stanag{
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Ball";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_b_AK;
        displayname = $STR_NIA_30Rnd_762x39_b_RK62;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(16.3, 30, 246);
        displaynameshort = $STR_NIA_762x39_FMJ;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_Valmet_FMJ_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_762x39_AK_Valmet;
        modelSpecialIsProxy = 1;
        initspeed = 739.1;
    };
    class hlc_30Rnd_762x39_t_ak_Valmet : hlc_30Rnd_762x39_b_ak_Valmet {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_T_AK;
        displayname = $STR_NIA_30Rnd_762x39_t_RK62;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(16.4, 30, 246);
        displaynameshort = $STR_NIA_762x39_Tracer;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_Valmet_Tracer_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 739.1;
    };
    class hlc_30Rnd_762x39_m_ak_Valmet : hlc_30Rnd_762x39_b_ak_Valmet {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_m_AK;
        displayname = $STR_NIA_30Rnd_762x39_m_RK62;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 3;
		__SMALLMASS(16.33, 30, 246);
        displaynameshort = $STR_NIA_762x39_M;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_Valmet_Mixed_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 739.1;
    };
    class hlc_30Rnd_762x39_AP_ak_Valmet : hlc_30Rnd_762x39_b_ak_Valmet {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_AP";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_AP_AK;
        displayname = $STR_NIA_30Rnd_762x39_AP_RK62;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(15.8, 30, 246);
        displaynameshort = $STR_NIA_762x39_AP;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_Valmet_AP_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 759.0;
    };

    class hlc_30rnd_762x39_s_ak_Valmet : hlc_30Rnd_762x39_b_ak_Valmet {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Ball";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_S_AK;
        displayname = $STR_NIA_30Rnd_762x39_s_RK62;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(20.9, 30, 246);
        displaynameshort = $STR_NIA_762x39_subsonic;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_Valmet_Subsonic_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 311.8;
    };



    //AK PMAG Black
    class hlc_30Rnd_762x39_b_ak_PMAG : 30Rnd_556x45_Stanag{
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Ball";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_b_AK;
        displayname = $STR_NIA_30Rnd_762x39_b_PMAG_AK;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(16.3, 30, 206);
        displaynameshort = $STR_NIA_762x39_FMJ;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_PMAG_FMJ_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\30rnd_762x39_AK_PMAG;
        hiddenSelections[] = { "camo" };
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\ak\ak_pmag_co.paa" };
        modelSpecialIsProxy = 1;
        initspeed = 739.1;
    };
    class hlc_30Rnd_762x39_t_ak_PMAG : hlc_30Rnd_762x39_b_ak_PMAG {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_T_AK;
        displayname = $STR_NIA_30Rnd_762x39_t_PMAG_AK;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(16.4, 30, 206);
        displaynameshort = $STR_NIA_762x39_Tracer;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_PMAG_Tracer_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 739.1;
    };
    class hlc_30Rnd_762x39_m_ak_PMAG : hlc_30Rnd_762x39_b_ak_PMAG {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_m_AK;
        displayname = $STR_NIA_30Rnd_762x39_m_PMAG_AK;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 3;
		__SMALLMASS(16.33, 30, 206);
        displaynameshort = $STR_NIA_762x39_M;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_PMAG_Mixed_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 739.1;
    };
    class hlc_30Rnd_762x39_AP_ak_PMAG : hlc_30Rnd_762x39_b_ak_PMAG {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_AP";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_AP_AK;
        displayname = $STR_NIA_30Rnd_762x39_AP_PMAG_AK;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(15.8, 30, 206);
        displaynameshort = $STR_NIA_762x39_AP;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_PMAG_AP_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 759.0;
    };

    class hlc_30rnd_762x39_s_ak_PMAG : hlc_30Rnd_762x39_b_ak_PMAG {
        dlc = "Niarms_Core";
        author = "Toadie";
        ammo = "HLC_762x39_Ball";
        count = 30;
        descriptionshort = $STR_NIA_DESC_30rnd_762x39_S_AK;
        displayname = $STR_NIA_30Rnd_762x39_s_PMAG_AK;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(20.9, 30, 206);
        displaynameshort = $STR_NIA_762x39_subsonic;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_PMAG_Subsonic_CA.paa";
        model = "\hlc_core\mesh\magazines\30rnd_762x39_AKM.p3d";
        initspeed = 311.8;
    };



    //AK PMAG Desert
    class hlc_30Rnd_762x39_b_ak_PMAGD :hlc_30Rnd_762x39_b_ak_PMAG
    {
        dlc = "Niarms_Core";
        author = "Toadie";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\ak\AK_PMAG_Desert_co.paa" };
        displayname = $STR_NIA_30Rnd_762x39_b_pmagd_AK;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_PMAGDesert_FMJ_CA.paa";
    };
    class hlc_30Rnd_762x39_t_ak_PMAGD :hlc_30Rnd_762x39_t_ak_PMAG
    {
        dlc = "Niarms_Core";
        author = "Toadie";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\ak\AK_PMAG_Desert_co.paa" };
        displayname = $STR_NIA_30Rnd_762x39_t_pmagd_AK;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_PMAGDesert_Tracer_CA.paa";
    };

    class hlc_30Rnd_762x39_m_ak_PMAGD :hlc_30Rnd_762x39_m_ak_PMAG
    {
        dlc = "Niarms_Core";
        author = "Toadie";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\ak\AK_PMAG_Desert_co.paa" };
        displayname = $STR_NIA_30Rnd_762x39_m_PMAGD_AK;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_PMAGDesert_Mixed_CA.paa";
    };
    class hlc_30Rnd_762x39_AP_ak_PMAGD :hlc_30Rnd_762x39_AP_ak_PMAG
    {
        dlc = "Niarms_Core";
        author = "Toadie";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\ak\AK_PMAG_Desert_co.paa" };
        displayname = $STR_NIA_30Rnd_762x39_AP_pmagd_AK;
        displaynameshort = $STR_NIA_762x39_AP;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_PMAGDesert_AP_CA.paa";
    };
    class hlc_30Rnd_762x39_S_ak_PMAGD :hlc_30Rnd_762x39_S_ak_PMAG
    {
        dlc = "Niarms_Core";
        author = "Toadie";
        hiddenSelectionsTextures[] = { "hlc_core\tex\magazines\ak\AK_PMAG_Desert_co.paa" };
        displayname = $STR_NIA_30Rnd_762x39_s_PMAGD_AK;
        picture = "\hlc_core\tex\ui\ammo\m_AK47_PMAGDesert_Subsonic_CA.paa";
    };



    //RPK Magazine
    class hlc_40Rnd_762x39_b_rpk : 30Rnd_556x45_Stanag
    {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Ball";
        descriptionshort = $STR_NIA_DESC_40rnd_762x39_B_AK;
        count = 40;
        displayname = $STR_NIA_40Rnd_762x39_b_rpk;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(16.3, 40, 269);
        displaynameshort = $STR_NIA_762x39_FMJ;
        picture = "\hlc_core\tex\ui\ammo\m_RPK_FMJ_CA.paa";
        model = "\hlc_core\mesh\magazines\42rnd_762x39_RPK.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\40rnd_762x39_AK_6L2;
        modelSpecialIsProxy = 1;
        initspeed = 739.1;
    };
    class hlc_45Rnd_762x39_t_rpk : hlc_40Rnd_762x39_b_rpk{
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 40;
        descriptionshort = $STR_NIA_DESC_40rnd_762x39_T_AK;
        displayname = $STR_NIA_45Rnd_762x39_t_rpk;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(16.4, 40, 269);
        displaynameshort = $STR_NIA_762x39_Tracer;
        picture = "\hlc_core\tex\ui\ammo\m_RPK_tracer_ca.paa";
        model = "\hlc_core\mesh\magazines\42rnd_762x39_RPK.p3d";
        initspeed = 739.1;
    };
    class hlc_45Rnd_762x39_m_rpk : hlc_45Rnd_762x39_t_rpk {
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_Tracer";
        count = 40;
        descriptionshort = $STR_NIA_DESC_40rnd_762x39_M_AK;
        displayname = $STR_NIA_45Rnd_762x39_m_rpk;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 3;
		__SMALLMASS(16.33, 40, 269);
        displaynameshort = $STR_NIA_762x39_M;
        picture = "\hlc_core\tex\ui\ammo\m_rpk_mixed_ca.paa";
        model = "\hlc_core\mesh\magazines\42rnd_762x39_RPK.p3d";
        initspeed = 739.1;
    };
    class hlc_45Rnd_762x39_AP_rpk : hlc_40Rnd_762x39_b_rpk{
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "HLC_762x39_AP";
        count = 40;
        descriptionshort = $STR_NIA_DESC_40rnd_762x39_AP_AK;
        displayname = $STR_NIA_45Rnd_762x39_AP_rpk;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(15.8, 40, 269);
        displaynameshort = $STR_NIA_762x39_AP;
        picture = "\hlc_core\tex\ui\ammo\m_RPK_AP_ca.paa";
        model = "\hlc_core\mesh\magazines\42rnd_762x39_RPK.p3d";

        initspeed = 759.0;
    };




    //RPK 75 Round Drum
    class hlc_75Rnd_762x39_b_rpk : hlc_40Rnd_762x39_b_rpk{
        dlc = "Niarms_AK";
        author = "Toadie";
        count = 75;
        descriptionshort = $STR_NIA_DESC_75rnd_762x39_B_AK;
        displayname = $STR_NIA_75Rnd_762x39_b_rpk;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(16.3, 40, 499);
        displaynameshort = $STR_NIA_762x39_FMJ;
        picture = "\hlc_core\tex\ui\ammo\m_rpkdrum_FMJ_ca.paa";
        model = "\hlc_core\mesh\magazines\75rnd_762x39_RPK.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\75rnd_762x39_RPK;
        modelSpecialIsProxy = 1;
        initspeed = 739.1;
    };
    class hlc_75Rnd_762x39_t_rpk : hlc_45Rnd_762x39_t_rpk{
        dlc = "Niarms_AK";
        author = "Toadie";
        count = 75;
        descriptionshort = $STR_NIA_DESC_75rnd_762x39_T_AK;
        displayname = $STR_NIA_75Rnd_762x39_t_rpk;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 1;
		__SMALLMASS(16.4, 40, 499);
        displaynameshort = $STR_NIA_762x39_Tracer;
        picture = "\hlc_core\tex\ui\ammo\m_rpkdrum_Tracer_ca.paa";
        model = "\hlc_core\mesh\magazines\75rnd_762x39_RPK.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\75rnd_762x39_RPK;
        modelSpecialIsProxy = 1;
        initspeed = 739.1;
    };
    class hlc_75Rnd_762x39_m_rpk : hlc_45Rnd_762x39_m_rpk {
        dlc = "Niarms_AK";
        author = "Toadie";
        count = 75;
        descriptionshort = $STR_NIA_DESC_75rnd_762x39_M_AK;
        displayname = $STR_NIA_75Rnd_762x39_m_rpk;
        lastroundstracer = 1;
        scope = 2;
        tracersevery = 3;
		__SMALLMASS(16.33, 40, 499);
        displaynameshort = $STR_NIA_762x39_M;
        picture = "\hlc_core\tex\ui\ammo\m_rpkdrum_Mixed_ca.paa";
        model = "\hlc_core\mesh\magazines\75rnd_762x39_RPK.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\75rnd_762x39_RPK;
        modelSpecialIsProxy = 1;
        initspeed = 739.1;
    };
    class hlc_75Rnd_762x39_AP_rpk : hlc_45Rnd_762x39_AP_rpk {
        dlc = "Niarms_AK";
        author = "Toadie";
        count = 75;
        descriptionshort = $STR_NIA_DESC_75rnd_762x39_AP_AK;
        displayname = $STR_NIA_75Rnd_762x39_AP_rpk;
        lastroundstracer = 0;
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(15.8, 40, 499);
        displaynameshort = $STR_NIA_762x39_AP;
        picture = "\hlc_core\tex\ui\ammo\m_rpkdrum_AP_ca.paa";
        model = "\hlc_core\mesh\magazines\75rnd_762x39_RPK.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\75rnd_762x39_RPK;
        modelSpecialIsProxy = 1;
        initspeed = 759.0;
    };

    class 1Rnd_HE_Grenade_shell;
    class hlc_VOG25_AK : 1Rnd_HE_Grenade_shell{
        dlc = "Niarms_AK";
        author = "Toadie";
        ammo = "G_40mm_HE";
        count = 1;
        descriptionshort = "Type: High Explosive Grenade Round<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = $STR_NIA_VOG25_AK;
        displaynameshort = $STR_NIA_40mm_HE;
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
        displayname = $STR_NIA_GRD40white_AK;
        displaynameshort = $STR_NIA_40mm_smokewhite;
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_white_CA.paa";
        reloadaction = "HLC_GestureReloadGP30";
    };
    class hlc_GRD_Red : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokeRed";
        descriptionshort = "Type: Smoke Round - Red<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = $STR_NIA_GRD40Red_AK;
        displaynameshort = $STR_NIA_40mm_smokeRed;
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_red_CA.paa";
    };
    class hlc_GRD_green : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokeGreen";
        descriptionshort = "Type: Smoke Round - Green<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = $STR_NIA_GRD40Green_AK;
        displaynameshort = $STR_NIA_40mm_smokeGreen;
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_green_CA.paa";
    };
    class hlc_GRD_yellow : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokeYellow";
        descriptionshort = "Type: Smoke Round - Yellow<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = $STR_NIA_GRD40Yellow_AK;
        displaynameshort = $STR_NIA_40mm_smokeYellow;
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_yellow_CA.paa";
    };
    class hlc_GRD_orange : hlc_grd_white {
        ammo = "G_40mm_SmokeOrange";
        descriptionshort = "Type: Smoke Round - Orange<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = $STR_NIA_GRD40Orange_AK;
        displaynameshort = $STR_NIA_40mm_smokeOrange;
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_orange_CA.paa";
    };
    class hlc_GRD_purple : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokePurple";
        descriptionshort = "Type: Smoke Round - Purple<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = $STR_NIA_GRD40Purple_AK;
        displaynameshort = $STR_NIA_40mm_smokePurple;
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_purple_CA.paa";
    };
    class hlc_GRD_blue : hlc_grd_white {
        dlc = "Niarms_AK";
        ammo = "G_40mm_SmokeBlue";
        descriptionshort = "Type: Smoke Round - Blue<br />Rounds: 1<br />Used in: GP25,GP30";
        displayname = $STR_NIA_GRD40Blue_AK;
        displaynameshort = $STR_NIA_40mm_smokeBlue;
        picture = "\A3\Weapons_f\Data\UI\gear_UGL_Smokeshell_blue_CA.paa";
    };


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
		__SMALLMASS(21.38, 50, 1200);
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
    class hlc_100Rnd_762x51_B_M60E4 : 30Rnd_556x45_Stanag {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        count = 100;
        descriptionshort = $STR_NIA_DESC_100Rnd_762x51_B;
        displayname = $STR_NIA_100Rnd_762x51_B_M60E4;
        model = "hlc_core\mesh\magazines\100rnd_762NATO_M60.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\50Rnd_762NATO_M60;
        modelSpecialIsProxy = 1;
        initspeed = 853;
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4ball_ca.paa";
        scope = 2;
        tracersevery = 0;
		__SMALLMASS(29.75, 100, 0);
        displaynameshort = $STR_NIA_762NATO_EPR;
        nameSound = "mgun";
        ACE_isBelt = 1;
    };
    class hlc_100Rnd_762x51_M_M60E4 : hlc_100Rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
		__SMALLMASS(29.16, 100, 0);
        descriptionshort = $STR_NIA_DESC_100Rnd_762x51_M;
        displayname = $STR_NIA_100Rnd_762x51_M_M60E4;
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = $STR_NIA_762NATO_M;
    };
    class hlc_100Rnd_762x51_Mdim_M60E4 : hlc_100Rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_B_762x51_Tracer_Dim";
		__SMALLMASS(29.16, 100, 0);
        descriptionshort = $STR_NIA_DESC_100Rnd_762x51_Mdim;
        displayname = $STR_NIA_100Rnd_762x51_Mdim_M60E4;
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = $STR_NIA_762NATO_MDim;
    };
    class hlc_100Rnd_762x51_Barrier_M60E4 : hlc_100Rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_Barrier";
		__SMALLMASS(29.16, 100, 0);
        descriptionshort = $STR_NIA_DESC_100Rnd_762x51_Msost;
        displayname = $STR_NIA_100Rnd_762x51_Barrier_M60E4;
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = $STR_NIA_762NATO_MSOST;
    };
    class hlc_100Rnd_762x51_T_M60E4 : hlc_100Rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
		__SMALLMASS(29.16, 100, 0);
        descriptionshort = $STR_NIA_DESC_100Rnd_762x51_T;
        displayname = $STR_NIA_100Rnd_762x51_T_M60E4;
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4tracer_ca.paa";
        tracersevery = 1;
        displaynameshort = $STR_NIA_762NATO_Tracer;
    };
    class hlc_200Rnd_762x51_B_M60E4 : 30Rnd_556x45_Stanag{
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        count = 200;
        descriptionshort = $STR_NIA_DESC_200Rnd_762x51_B;
        displayname = $STR_NIA_200Rnd_762x51_B_M60E4;
        model = "hlc_core\mesh\magazines\100rnd_762NATO_M60.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\50Rnd_762NATO_M60;
        modelSpecialIsProxy = 1;
        initspeed = 853;
        lastroundstracer = 5;
		__SMALLMASS(29.75, 200, 0);
        picture = "\hlc_core\tex\ui\ammo\m_m60e4ball_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_EPR;
        nameSound = "mgun";
        ACE_isBelt = 1;
    };
    class hlc_200Rnd_762x51_M_M60E4 : hlc_200rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
		__SMALLMASS(29.16, 200, 0);
        descriptionshort = $STR_NIA_DESC_200Rnd_762x51_M;
        displayname = $STR_NIA_200Rnd_762x51_M_M60E4;
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = $STR_NIA_762NATO_M;
    };
    class hlc_200Rnd_762x51_Mdim_M60E4 : hlc_200rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_B_762x51_Tracer_Dim";
		__SMALLMASS(29.16, 200, 0);
        descriptionshort = $STR_NIA_DESC_200Rnd_762x51_Mdim;
        displayname = $STR_NIA_200Rnd_762x51_Mdim_M60E4;
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = $STR_NIA_762NATO_MDim;
    };
    class hlc_200Rnd_762x51_Barrier_M60E4 : hlc_200rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_Barrier";
		__SMALLMASS(29.16, 200, 0);
        descriptionshort = $STR_NIA_DESC_200Rnd_762x51_Msost;
        displayname = $STR_NIA_200Rnd_762x51_Barrier_M60E4;
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4mixed_ca.paa";
        tracersevery = 4;
        displaynameshort = $STR_NIA_762NATO_MSOST;
    };
    class hlc_200Rnd_762x51_T_M60E4 : hlc_200rnd_762x51_B_M60E4 {
        dlc = "Niarms_M60";
        author = "Toadie";
        ammo = "HLC_762x51_ball";
		__SMALLMASS(29.16, 200, 0);
        descriptionshort = $STR_NIA_DESC_200Rnd_762x51_T;
        displayname = $STR_NIA_200Rnd_762x51_T_M60E4;
        lastroundstracer = 5;
        picture = "\hlc_core\tex\ui\ammo\m_m60e4tracer_ca.paa";
        tracersevery = 1;
        displaynameshort = $STR_NIA_762NATO_Tracer;
    };


    class hlc_20Rnd_762x51_B_fal : 30Rnd_556x45_Stanag
    {
        dlc = "Niarms_FAL";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_ball";
        count = 20;
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_B_fal;
        displayname = $STR_NIA_20Rnd_762x51_B_fal;
        initspeed = 908.4;
		__SMALLMASS(25.4, 20, 250);
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_FAL20_EPR_ca.paa";
        model = "\hlc_core\mesh\magazines\20rnd_762NATO_FAL.p3d";\
        modelSpecial = \hlc_core\mesh\magazines\proxies\20rnd_762NATO_FAL;
        modelSpecialIsProxy = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_EPR;
    };
    class hlc_20Rnd_762x51_mk316_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_MK316_20in";
        count = 20;
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_sblr_fal;
        displayname = $STR_NIA_20Rnd_762x51_mk316_fal;
        initspeed = 731;
		__SMALLMASS(25.4, 20, 250);
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_FAL20_SPR_ca.paa";
        model = "\hlc_core\mesh\magazines\20rnd_762NATO_FAL.p3d";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_SBLR;
    };
    class hlc_20Rnd_762x51_barrier_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_Barrier";
        count = 20;
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_sost_fal;
        displayname = $STR_NIA_20Rnd_762x51_barrier_fal;
        model = "\hlc_core\mesh\magazines\20rnd_762NATO_FAL.p3d";
        initspeed = 890.4;
		__SMALLMASS(22.52, 20, 250);
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_FAL20_SOST_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_SOST;
    };
    class hlc_20Rnd_762x51_T_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_tracer";
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_T_fal;
        displayname = $STR_NIA_20Rnd_762x51_T_fal;
        model = "\hlc_core\mesh\magazines\20rnd_762NATO_FAL.p3d";
        lastroundstracer = 0;
        scope = 2;
		__SMALLMASS(23.856836, 20, 250);
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_FAL20_T_ca.paa";
        displaynameshort = $STR_NIA_762NATO_Tracer;
    };
    class hlc_20Rnd_762x51_TDim_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_Tdim_fal;
        displayname = $STR_NIA_20Rnd_762x51_Tdim_fal;
        model = "\hlc_core\mesh\magazines\20rnd_762NATO_FAL.p3d";
        lastroundstracer = 0;
        scope = 2;
		__SMALLMASS(23.856836, 20, 250);
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_FAL20_T_ca.paa";
        displaynameshort = $STR_NIA_762NATO_IRDIM;
    };
    class hlc_20rnd_762x51_M_FAL : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        count = 20;
		__SMALLMASS(24.628, 20, 250);
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_M_fal;
        displayname = $STR_NIA_20rnd_762x51_M_FAL;
        model = "\hlc_core\mesh\magazines\20rnd_762NATO_FAL.p3d";
        initspeed = 908.4;
        lastroundstracer = 3;
        picture = "\hlc_core\tex\ui\ammo\m_FAL20_M_ca.paa";
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_762NATO_M;
    };
    class hlc_20rnd_762x51_MDIM_FAL : hlc_20Rnd_762x51_B_fal {
        ammo = "HLC_B_762x51_Tracer_Dim";
        author = "Toadie, Spartan0536";
        count = 20;
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_Mdim_fal;
        displayname = $STR_NIA_20rnd_762x51_MDIM_FAL;
        model = "\hlc_core\mesh\magazines\20rnd_762NATO_FAL.p3d";
        initspeed = 908.4;
		__SMALLMASS(24.628, 20, 250);
        lastroundstracer = 3;
        picture = "\hlc_core\tex\ui\ammo\m_FAL20_M_ca.paa";
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_762NATO_MDim;
    }; 
    class hlc_20Rnd_762x51_S_fal : hlc_20Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_BTSub";
        descriptionshort = $STR_NIA_DESC_20Rnd_762x51_s_fal;
        displayname = $STR_NIA_20Rnd_762x51_S_fal;
        model = "\hlc_core\mesh\magazines\20rnd_762NATO_FAL.p3d";
        lastroundstracer = 0;
        scope = 2;
		__SMALLMASS(27.1046, 20, 250);
        tracersevery = 0;
        initspeed = 325;
        displaynameshort = $STR_NIA_762NATO_Subsonic;
        picture = "\hlc_core\tex\ui\ammo\m_FAL20_S_ca.paa";
    };
    class hlc_50Rnd_762x51_B_fal : 30Rnd_556x45_Stanag
    {
        dlc = "Niarms_FAL";
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_ball";
        count = 50;
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_B_fal;
        displayname = $STR_NIA_50Rnd_762x51_B_fal;
        initspeed = 908.4;
		__SMALLMASS(25.4, 50, 700);
        lastroundstracer = 1;
        picture = "\hlc_core\tex\ui\ammo\m_FAL50_EPR_ca.paa";
        model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\50rnd_762NATO_XFAL;
        modelSpecialIsProxy = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_EPR;
    };
    class hlc_50Rnd_762x51_T_fal : hlc_50Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_762x51_tracer";
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_T_fal;
        displayname = $STR_NIA_50Rnd_762x51_T_fal;
        model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
        lastroundstracer = 0;
        scope = 2;
		__SMALLMASS(23.856836, 50, 700);
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_FAL50_T_ca.paa";
        displaynameshort = $STR_NIA_762NATO_Tracer;
    };
    class hlc_50Rnd_762x51_TDim_fal : hlc_50Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_Tdim_fal;
        displayname = $STR_NIA_50Rnd_762x51_Tdim_fal;
        model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
        lastroundstracer = 0;
        scope = 2;
		__SMALLMASS(23.856836, 50, 700);
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_FAL50_T_ca.paa";
        displaynameshort = $STR_NIA_762NATO_IRDIM;
    };
    class hlc_50rnd_762x51_M_FAL : hlc_50Rnd_762x51_B_fal {
        author = "Toadie, Spartan0536";
        count = 50;
		__SMALLMASS(24.628, 50, 700);
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_m_fal;
        displayname = $STR_NIA_50rnd_762x51_M_FAL;
        model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
        initspeed = 908.4;
        lastroundstracer = 3;
        picture = "\hlc_core\tex\ui\ammo\m_FAL50_M_ca.paa";
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_762NATO_M;
    };
    class hlc_50rnd_762x51_MDIM_FAL : hlc_50Rnd_762x51_B_fal {
        ammo = "HLC_B_762x51_Tracer_Dim";
        author = "Toadie, Spartan0536";
        count = 50;
        descriptionshort = $STR_NIA_DESC_50Rnd_762x51_Mdim_fal;
        displayname = $STR_NIA_50rnd_762x51_MDIM_FAL;
        model = "\hlc_core\mesh\magazines\50rnd_762NATO_XMAG.p3d";
        initspeed = 908.4;
		__SMALLMASS(24.628, 50, 700);
        lastroundstracer = 3;
        picture = "\hlc_core\tex\ui\ammo\m_FAL50_M_ca.paa";
        scope = 2;
        tracersevery = 4;
        displaynameshort = $STR_NIA_762NATO_MDim;
    };
    class hlc_10Rnd_762x51_B_fal : 30Rnd_556x45_Stanag {
        author = "Toadie";
        ammo = "HLC_762x51_ball";
        count = 10;
        descriptionshort = $STR_NIA_DESC_10Rnd_762x51_B_fal;
        displayname = $STR_NIA_10Rnd_762x51_B_fal;
        initspeed = 870;
		__SMALLMASS(25.4, 10, 145.14);
        lastroundstracer = 0;
        picture = "\hlc_core\tex\ui\ammo\m_FAL10_EPR_ca.paa";
        model = "\hlc_core\mesh\magazines\10rnd_762NATO_FAL.p3d";
        modelSpecial = \hlc_core\mesh\magazines\proxies\10rnd_762NATO_FAL;
        modelSpecialIsProxy = 1;
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_EPR;
    };
    class hlc_10Rnd_762x51_mk316_fal : hlc_10Rnd_762x51_B_fal {
        author = "Toadie";
        ammo = "HLC_762x51_MK316_20in";
        count = 10;
        descriptionshort = $STR_NIA_DESC_10Rnd_762x51_sblr_fal;
        displayname = $STR_NIA_10Rnd_762x51_mk316_fal;
        initspeed = 890;
		__SMALLMASS(25.4, 10, 145.14);
        lastroundstracer = 0;
        picture = "\hlc_core\tex\ui\ammo\m_FAL10_SPR_ca.paa";
        model = "\hlc_core\mesh\magazines\10rnd_762NATO_FAL.p3d";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_SBLR;
    };
    class hlc_10Rnd_762x51_barrier_fal : hlc_10Rnd_762x51_B_fal {
        author = "Toadie";
        ammo = "HLC_762x51_Barrier";
        count = 10;
        descriptionshort = $STR_NIA_DESC_10Rnd_762x51_sost_fal;
        displayname = $STR_NIA_10Rnd_762x51_barrier_fal;
        model = "\hlc_core\mesh\magazines\10rnd_762NATO_FAL.p3d";
        initspeed = 850;
		__SMALLMASS(22.52, 10, 145.14);
        lastroundstracer = 0;
        picture = "\hlc_core\tex\ui\ammo\m_FAL10_SOST_ca.paa";
        scope = 2;
        tracersevery = 0;
        displaynameshort = $STR_NIA_762NATO_SOST;
    };
    class hlc_10Rnd_762x51_T_fal : hlc_10Rnd_762x51_B_fal {
        author = "Toadie";
        ammo = "HLC_762x51_tracer";
        descriptionshort = $STR_NIA_DESC_10Rnd_762x51_T_fal;
        displayname = $STR_NIA_10Rnd_762x51_T_fal;
        model = "\hlc_core\mesh\magazines\10rnd_762NATO_FAL.p3d";
        lastroundstracer = 0;
        scope = 2;
		__SMALLMASS(23.856836, 10, 145.14);
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_FAL10_T_ca.paa";
        displaynameshort = $STR_NIA_762NATO_Tracer;
    };
    class hlc_10Rnd_762x51_TDim_fal : hlc_10Rnd_762x51_B_fal {
        author = "Toadie";
        ammo = "HLC_B_762x51_Tracer_Dim";
        descriptionshort = $STR_NIA_DESC_10Rnd_762x51_Tdim_fal;
        displayname = $STR_NIA_10Rnd_762x51_Tdim_fal;
        model = "\hlc_core\mesh\magazines\10rnd_762NATO_FAL.p3d";
        lastroundstracer = 0;
        scope = 2;
		__SMALLMASS(23.856836, 10, 145.14);
        tracersevery = 1;
        picture = "\hlc_core\tex\ui\ammo\m_FAL10_T_ca.paa";
        displaynameshort = $STR_NIA_762NATO_IRDIM;
    };
    class hlc_10Rnd_762x51_S_fal : hlc_10Rnd_762x51_B_fal {
        author = "Toadie";
        ammo = "HLC_762x51_BTSub";
        descriptionshort = $STR_NIA_DESC_10Rnd_762x51_s_fal;
        displayname = $STR_NIA_10Rnd_762x51_S_fal;
        model = "\hlc_core\mesh\magazines\10rnd_762NATO_FAL.p3d";
        lastroundstracer = 0;
        scope = 2;
		__SMALLMASS(27.1046, 10, 145.14);
        tracersevery = 0;
        initspeed = 325;
        displaynameshort = $STR_NIA_762NATO_Subsonic;
        picture = "\hlc_core\tex\ui\ammo\m_FAL10_S_ca.paa";
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