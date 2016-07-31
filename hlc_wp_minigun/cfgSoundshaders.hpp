class CfgSoundShaders {
    class M134D_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_minigun\snd\m134_first",1 },
            { "hlc_wp_minigun\snd\m134_first",1 }
        };
        volume = 0.63095737;
        range = 10;
        rangeCurve[] = {
            { 0,1 },
            { 10,0 }
        };
    };
    class M134D_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_minigun\snd\M134_close",1 },
            { "hlc_wp_minigun\snd\M134_close",1 },
            { "hlc_wp_minigun\snd\M134_close",1 }
        };
        volume = 1.0;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class M134D2_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_minigun\snd\M134_slow_close", 1 },
            { "hlc_wp_minigun\snd\M134_slow_close", 1 },
            { "hlc_wp_minigun\snd\M134_slow_close", 1 }
        };
        volume = 1.0;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class M134D_midShot_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_midShot_01",1 },
            { "A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_midShot_02",1 },
            { "A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_midShot_03",1 }
        };
        volume = 0.4466836;
        range = 1800;
        rangeCurve[] = {
            { 0,0.2 },
            { 100,1 },
            { 300,0 },
            { 1800,0 }
        };
    };
    class M134D_distShot_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_distShot_01",1 },
            { "A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_distShot_02",1 },
            { "A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_distShot_03",1 }
        };
        volume = 1.7782794;
        range = 1800;
        rangeCurve[] = {
            { 0,0 },
            { 100,0 },
            { 300,1 },
            { 1800,1 }
        };
    };
    class M134D_tailDistant_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_taildistant",1 }
        };
        volume = 1.4125376;
        range = 1500;
        rangeCurve[] = {
            { 0,0 },
            { 600,1 },
            { 1500,1 }
        };
        limitable = 1;
    };
    class M134D_tailForest_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_tailforest",1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 1500;
        rangeCurve[] = {
            { 0,1 },
            { 1500,0.3 }
        };
        limitable = 1;
    };
    class M134D_tailHouses_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_tailhouses",1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 1500;
        rangeCurve[] = {
            { 0,1 },
            { 200,0.5 },
            { 800,0.3 },
            { 1500,0 }
        };
        limitable = 1;
    };
    class M134D_tailMeadows_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_tailmeadows",1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 1500;
        rangeCurve[] = {
            { 0,1 },
            { 1500,0.3 }
        };
        limitable = 1;
    };
    class M134D_tailTrees_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons_vehicles\M134_minigun_762mm\M134Minigun762mm_tailtrees",1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 1500;
        rangeCurve[] = {
            { 0,1 },
            { 1500,0.3 }
        };
        limitable = 1;
    };
};
