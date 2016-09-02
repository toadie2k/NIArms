class CfgSoundShaders {
/*
    class M60E4_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_m60E4\snd\soundshaders\M60_first", 1 }
        };
        range = 5;
        volume = 1;
    };
    class M60E4_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_m60E4\snd\soundshaders\m60_close", 1 }
        };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class M60E4_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_m60E4\snd\soundshaders\m60_mid", 1 }
        };
        volume = 0.5011872;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class M60E4_distShot_SoundShader {
        samples[] = {
            { "\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_distShot_01", 1 },
            { "\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_distShot_02", 1 },
            { "\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_distShot_03", 1 }
        };
        volume = 1.0;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 2000, 1 }
        };
    };
    class M60E4_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_taildistant", 1 }
        };
        volume = 1.0;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class M60E4_tailForest_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailforest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class M60E4_tailHouses_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailhouses", 1 }
         };
        volume = "(1-interior/1.4)*houses/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0.3 },
            { 1500, 0 }
        };
        limitation = 1;
    };
    class M60E4_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_m60E4\snd\soundshaders\m60_indoor", 1 }
        };
        volume = "interior";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 }
        };
        limitation = 1;
    };
    class M60E4_tailMeadows_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailmeadows", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class M60E4_tailTrees_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_tailtrees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class M60E4_silencerShot_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_01", 1 },
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_02", 1 },
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_03", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class M60E4_silencerTailForest_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailForest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class M60E4_silencerTailHouses_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailHouses", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class M60E4_silencerTailInterior_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailInterior", 1 }
        };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class M60E4_silencerTailMeadows_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailMeadows", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class M60E4_silencerTailTrees_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailTrees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
*/
    class M60E4_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_m60E4\snd\M60_first", 1 }
        };
        range = 5;
        volume = 1;
    };
    class M60E4_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_m60E4\snd\m60_close", 1 }
        };
        volume = 0.8;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class M60E4_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_m60E4\snd\m60_mid", 1 }
        };
        volume = 0.5011872;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class M60E4_distShot_SoundShader {
        samples[] = {
            { "hlc_wp_m60E4\snd\m60_dist", 1 }
        };
        volume = 1.0;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 2000, 1 }
        };
    };
    class M60E4_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_taildistant", 1 }
        };
        volume = 1.0;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class M60E4_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_m60E4\snd\m60_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class M60E4_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_m60E4\snd\m60_urban", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0.3 },
            { 1500, 0 }
        };
        limitation = 1;
    };
    class M60E4_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_m60E4\snd\m60_indoor", 1 }
        };
        volume = "interior";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 }
        };
        limitation = 1;
    };
    class M60E4_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_m60E4\snd\m60_meadows", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class M60E4_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_m60E4\snd\m60_trees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class M60E4_silencerShot_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_01", 1 },
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_02", 1 },
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_03", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class M60E4_silencerTailForest_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailForest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class M60E4_silencerTailHouses_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailHouses", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class M60E4_silencerTailInterior_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailInterior", 1 }
        };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class M60E4_silencerTailMeadows_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailMeadows", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class M60E4_silencerTailTrees_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailTrees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
};
