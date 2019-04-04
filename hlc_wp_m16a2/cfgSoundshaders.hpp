
class CfgSoundShaders
{
    class carbine2_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\generic\ar15_first", 1 },
            { "hlc_wp_m16a2\snd\soundshaders\generic\ar15_first", 1 }
        };
        range = 15;
        volume = 1;
    };
    class carbine2_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\carbine\carbine_close", 1 },
            { "hlc_wp_m16a2\snd\soundshaders\carbine\carbine_close", 1 }
        };
        volume = 0.7;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class carbine2_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\carbine\carbine_mid", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class carbine2_distShot_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 }
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
    class carbine2_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class carbine2_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\carbine\carbine_forest", 1 }
        };
        volume = " 1*((1-interior/1.4)*Forest/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class carbine2_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\carbine\carbine_urban", 1 }
        };
        volume = "1*((1-interior/1.4)*houses/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0.3 },
            { 1500, 0 }
        };
        limitation = 1;
    };
    class carbine2_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\carbine\carbine_indoor", 1 }
        };
        volume = " 1*((interior)*0.65)";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 }
        };
        limitation = 1;
    };
    class carbine2_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\carbine\carbine_meadows", 1 },
            { "hlc_wp_m16a2\snd\soundshaders\carbine\carbine_meadows", 1 }
        };
        volume = " 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class carbine2_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\carbine\carbine_trees", 1 }
        };
        volume = " 1*((1-interior/1.4)*trees/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class carbine2_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\generic\carbine_suppressed_close", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class carbine2_silencerTailForest_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class carbine2_silencerTailHouses_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailHouses", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class carbine2_silencerTailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\generic\carbine_suppressed_indoor", 1 }
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
    class carbine2_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\generic\carbine_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class carbine2_silencerTailTrees_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class sbr2_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\generic\ar15_first", 1 },
            { "hlc_wp_m16a2\snd\soundshaders\generic\ar15_first", 1 }
        };
        range = 15;
        volume = 1.9;
    };
    class sbr2_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\SBR\SBR_close", 1 },
            { "hlc_wp_m16a2\snd\soundshaders\SBR\SBR_close", 1 }
        };
        volume = 0.78;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class sbr2_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\SBR\SBR_mid", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class sbr2_distShot_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 }
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
    class sbr2_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class sbr2_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\SBR\SBR_forest", 1 }
        };
        volume = " 1*((1-interior/1.4)*Forest/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class sbr2_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\SBR\SBR_urban", 1 }
        };
        volume = "1*((1-interior/1.4)*houses/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0.3 },
            { 1500, 0 }
        };
        limitation = 1;
    };
    class sbr2_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\SBR\SBR_indoor", 1 }
        };
        volume = " 1*((interior)*0.65)";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 }
        };
        limitation = 1;
    };
    class sbr2_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\SBR\SBR_meadow", 1 },
            { "hlc_wp_m16a2\snd\soundshaders\SBR\SBR_meadow", 1 }
        };
        volume = " 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class sbr2_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\SBR\SBR_trees", 1 }
        };
        volume = " 1*((1-interior/1.4)*trees/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class sbr2_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\generic\SBR_suppressed_close", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };

    class SBR2_silencerShot_mid_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\Generic\SBR_suppressed_mid", 1 }
        };
        volume = 1.0;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };
    class sbr2_silencerTailForest_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class sbr2_silencerTailHouses_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailHouses", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class sbr2_silencerTailInterior_SoundShader{
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\generic\SBR_suppressed_indoor", 1 }
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
    class sbr2_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\generic\SBR_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class sbr2_silencerTailTrees_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class xm177_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\generic\ar15_first", 1 },
            { "hlc_wp_m16a2\snd\soundshaders\generic\ar15_first", 1 }
        };
        range = 15;
        volume = 1.9;
    };
    class xm177_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\xm177\xm177_close", 1 },
            { "hlc_wp_m16a2\snd\soundshaders\xm177\xm177_close", 1 }
        };
        volume = 0.78;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class xm177_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\xm177\xm177_mid", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class xm177_distShot_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 }
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
    class xm177_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class xm177_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\jack_carbine\jack_forest", 1 }
        };
        volume = " 1*((1-interior/1.4)*Forest/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class xm177_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\jack_carbine\Jack_urban", 1 }
        };
        volume = "1*((1-interior/1.4)*houses/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0.3 },
            { 1500, 0 }
        };
        limitation = 1;
    };
    class xm177_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\xm177\xm177_interior", 1 }
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
    class xm177_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\jack_carbine\jack_meadow", 1 },
            { "hlc_wp_m16a2\snd\soundshaders\jack_carbine\jack_meadow", 1 }
        };
        volume = " 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class xm177_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\jack_carbine\jack_meadow", 1 }
        };
        volume = " 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class m16a1_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\generic\ar15_first", 1 },
            { "hlc_wp_m16a2\snd\soundshaders\generic\ar15_first", 1 }
        };
        range = 15;
        volume = 1.9;
    };
    class m16a1_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\rifle3\m16a1_close", 1 },
            { "hlc_wp_m16a2\snd\soundshaders\rifle3\m16a1_close", 1 }
        };
        volume = 0.78;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class m16a1_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\rifle3\m16a1_mid", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class m16a1_distShot_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 }
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
    class m16a1_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class m16a1_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\samr\samr_forest", 1 }
        };
        volume = " 1*((1-interior/1.4)*Forest/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class m16a1_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\samr\samr_urban", 1 }
        };
        volume = " 1*((1-interior/1.4)*houses/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0.3 },
            { 1500, 0 }
        };
        limitation = 1;
    };
    class m16a1_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\samr\samr_indoor", 1 }
        };
        volume = " 1*((interior)*0.65)";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 }
        };
        limitation = 1;
    };
    class m16a1_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\samr\samr_meadow", 1 }
        };
        volume = " 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class m16a1_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\samr\samr_trees", 1 }
        };
        volume = " 1*((1-interior/1.4)*trees/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class m16a2_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\generic\ar15_first", 1 },
            { "hlc_wp_m16a2\snd\soundshaders\generic\ar15_first", 1 }
        };
        range = 15;
        volume = 1.9;
    };
    class m16a2_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\rifle2\m16a2_close", 1 },
            { "hlc_wp_m16a2\snd\soundshaders\rifle2\m16a2_close", 1 }
        };
        volume = 0.78;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class m16a2_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\rifle2\m16a2_mid", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class m16a2_distShot_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_01", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_02", 1 },
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_distShot_03", 1 }
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
    class m16a2_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class m16a2_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\samr\samr_forest", 1 }
        };
        volume = " 1*((1-interior/1.4)*Forest/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class m16a2_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\samr\samr_urban", 1 }
        };
        volume = " 1*((1-interior/1.4)*houses/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0.3 },
            { 1500, 0 }
        };
        limitation = 1;
    };
    class m16a2_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\samr\samr_indoor", 1 }
        };
        volume = " 1*((interior)*0.65)";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 }
        };
        limitation = 1;
    };
    class m16a2_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\samr\samr_meadow", 1 }
        };
        volume = " 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class m16a2_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_m16a2\snd\soundshaders\samr\samr_trees", 1 }
        };
        volume = " 1*((1-interior/1.4)*trees/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
};
