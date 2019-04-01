
class CfgSoundShaders {
    //.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
    class FN3011_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_first", 1 }
        };
        range = 15;
        volume = 1;
    };
    class FN3011_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_Close", 1 }
        };
        volume = 0.8;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class FN3011_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_mid", 1 }
        };
        volume = 1;
        range = 2500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 100, 1 },
            { 500, 0 },
            { 2500, 0 }
        };
    };
    class FN3011_distShot_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_dist", 1 }
        };
        volume = 1.2;
        range = 2500;
        rangeCurve[] = {
            { 0, 0 },
            { 100, 0 },
            { 500, 1 },
            { 2500, 1 }
        };
    };
    class FN3011_tailDistant_SoundShader {
        samples[] = {
            { "\A3\sounds_f_mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_tailDistant", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 1000, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class FN3011_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_forest", 1 }
        };
        volume = " 3.85*((1-interior/1.4)*Forest/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class FN3011_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_urban", 1 }
        };
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0.3 },
            { 1500, 0 }
        };
        limitation = 1;
    };
    class FN3011_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_interior", 1 }
        };
        volume = "1.28*(interior)";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 }
        };
        limitation = 1;
    };
    class FN3011_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_meadow", 1 }
        };
        volume = "3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class FN3011_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_trees", 1 }
        };
        volume = "3.85*((1-interior/1.4)*trees/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class FN3011_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_Close_Suppressed", 1 }
        };
        volume = 0.8;
        range = 100;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
    };
    class FN3011_silencermidShot_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_suppressedmid", 1 }
        };
        volume = 1;
        range = 350;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 350, 0 }
        };
    };
    class FN3011_silencerTailForest_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_Close_Suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class FN3011_silencerTailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_Close_Suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class FN3011_silencerTailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_Close_Suppressed_interior", 1 }
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
    class FN3011_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_Close_Suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class FN3011_silencerTailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_fn3011\snd\FN3011_Close_Suppressed_meadow", 1 }
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
