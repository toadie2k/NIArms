
class CfgSoundShaders
{

    //.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
    //300Blackout AR15 Generic Soundshaders: Based off Katiba
    class 300BLK_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\ar15_first", 1 },
            { "hlc_wp_ar15\snd\soundshaders\Generic\ar15_first", 1 }
        };
        volume = 1.2;
        range = 5;
    };
    class 300BLK_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300blk_close", 1 }
        };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class 300BLK_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300blk_mid", 1 }
        };
        volume = 0.9;
        range = 1800;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 1800, 0 }
        };
    };
    class 300BLK_distShot_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_01", 1 },
            { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_02", 1 },
            { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_03", 1 }
        };
        volume = 1.0;
        range = 1800;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1800, 1 }
        };
    };
    class 300BLK_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\300blk_indoor", 1 }
        };
        volume = "interior";
        range = 500;
        limitation = 0;
    };
    class 300BLK_tailTrees_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_tail_trees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 1800;
        limitation = 1;
    };
    class 300BLK_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\300aac_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 1800;
        limitation = 1;
    };
    class 300BLK_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300blk_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 1800;
        limitation = 1;
    };
    class 300BLK_tailHouses_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_tail_houses", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 1200;
        limitation = 1;
    };
    class 300BLK_Shot_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300aac_suppressed_close", 1 }
        };
        volume = 1.0;
        range = 400;
    };
    class 300BLK_tailInterior_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\300blk_sil_indoor", 1 }
        };
        volume = "interior";
        range = 500;
        limitation = 0;
    };
    class 300BLK_tailTrees_Silenced_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_trees", 1 }
        };
        volume = "(1-interior/1.4)*trees";
        range = 1800;
        limitation = 1;
    };
    class 300BLK_tailForest_Silenced_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest";
        range = 1800;
        limitation = 1;
    };
    class 300BLK_tailMeadows_Silenced_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_meadows", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
        range = 1800;
        limitation = 1;
    };
    class 300BLK_tailHouses_Silenced_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_houses", 1 }
        };
        volume = "(1-interior/1.4)*houses";
        range = 1200;
        limitation = 1;
    };
    class badger_Shot_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\HBADGER\HBADGER_close", 1 }
        };
        volume = 1.0;
        range = 400;
    };
    class badger_tailInterior_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\HBADGER\hb_sil_indoor", 1 }
        };
        volume = "interior";
        range = 500;
        limitation = 0;
    };
    class badger_tailTrees_Silenced_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_trees", 1 }
        };
        volume = "(1-interior/1.4)*trees";
        range = 1800;
        limitation = 1;
    };
    class badger_tailForest_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\300aac_sil_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest";
        range = 1800;
        limitation = 1;
    };
    class badger_tailMeadows_Silenced_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\HBADGER\HBADGER_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
        range = 1800;
        limitation = 1;
    };
    class badger_tailHouses_Silenced_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\katiba\Silencer_katiba_tail_houses", 1 }
        };
        volume = "(1-interior/1.4)*houses";
        range = 1200;
        limitation = 1;
    };

    class samr_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\ar15_first", 1 },
            { "hlc_wp_ar15\snd\soundshaders\Generic\ar15_first", 1 }
        };
        range = 5;
        volume = 1.2;
    };
    class samr_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_close", 1 },
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_close", 1 }
        };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class samr_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_mid", 1 }
        };
        volume = 0.70794576;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class samr_distShot_SoundShader {
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
    class samr_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
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
    class samr_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\ar556_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class samr_tailHouses_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailhouses", 1 }
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
    class samr_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_indoor", 1 }
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
    class samr_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_meadow", 1 },
            { "hlc_wp_ar15\snd\soundshaders\samr\samr_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class samr_tailTrees_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailtrees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class samr_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\rifle_suppressed_close", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class samr_silencerTailForest_SoundShader {
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
    class samr_silencerTailHouses_SoundShader {
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
    class samr_silencerTailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\rifle_suppressed_indoor", 1 }
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
    class samr_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\rifle_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class samr_silencerTailTrees_SoundShader {
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
    

    class PBEAR_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\Generic\ar15_first", 1 },
            { "hlc_wp_ar15\snd\soundshaders\Generic\ar15_first", 1 }
        };
        volume = 1.2;
        range = 5;
    };
    class PBEAR_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\PBEAR\PBEAR_close", 1 }
        };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class PBEAR_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\PBEAR\PBEAR_mid", 1 }
        };
        volume = 0.9;
        range = 1800;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 1800, 0 }
        };
    };
    class PBEAR_distShot_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_01", 1 },
            { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_02", 1 },
            { "A3\Sounds_F\arsenal\weapons\Rifles\Katiba\Katiba_distShot_03", 1 }
        };
        volume = 1.0;
        range = 1800;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1800, 1 }
        };
    };
    class PBEAR_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\PBEAR\PBEAR_indoor", 1 }
        };
        volume = "interior";
        range = 500;
        limitation = 0;
    };
    class PBEAR_tailTrees_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_tail_trees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 1800;
        limitation = 1;
    };
    class PBEAR_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\300aac_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 1800;
        limitation = 1;
    };
    class PBEAR_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\PBEAR\PBEAR_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 1800;
        limitation = 1;
    };
    class PBEAR_tailHouses_SoundShader {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Rifles\katiba\katiba_tail_houses", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 1200;
        limitation = 1;
    };


    class jack_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_first", 1 },
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_first", 1 }
        };
        range = 5;
        volume = 1.2;
    };
    class jack_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_close", 1 },
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_close", 1 }
        };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class jack_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_mid", 1 }
        };
        volume = 0.70794576;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class jack_distShot_SoundShader {
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
    class jack_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
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
    class jack_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\ar556_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class jack_tailHouses_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailhouses", 1 }
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
    class jack_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_indoor", 1 }
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
    class jack_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_meadow", 1 },
            { "hlc_wp_ar15\snd\soundshaders\jack_carbine\jack_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class jack_tailTrees_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailtrees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class jack_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_close", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
        };
    class jack_silencerTailForest_SoundShader {
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
    class jack_silencerTailHouses_SoundShader {
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
    class jack_silencerTailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_indoor", 1 }
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
    class jack_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class jack_silencerTailTrees_SoundShader {
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

    class carbine_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\ar15_first", 1 },
            { "hlc_wp_ar15\snd\soundshaders\generic\ar15_first", 1 }
        };
        range = 5;
        volume = 1.2;
    };
    class carbine_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_close", 1 },
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_close", 1 }
        };
        volume = 0.9;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class carbine_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_mid", 1 }
        };
        volume = 0.70794576;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class carbine_distShot_SoundShader {
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
    class carbine_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
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
    class carbine_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\ar556_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class carbine_tailHouses_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailhouses", 1 }
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
    class carbine_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_indoor", 1 }
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
    class carbine_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_meadow", 1 },
            { "hlc_wp_ar15\snd\soundshaders\carbine\carbine_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class carbine_tailTrees_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailtrees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class carbine_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_close", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class carbine_silencerTailForest_SoundShader {
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
    class carbine_silencerTailHouses_SoundShader {
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
    class carbine_silencerTailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_indoor", 1 }
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
    class carbine_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class carbine_silencerTailTrees_SoundShader {
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
    class SBR_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\ar15_first", 1 },
            { "hlc_wp_ar15\snd\soundshaders\generic\ar15_first", 1 }
        };
        range = 5;
        volume = 1.2;
    };
    class SBR_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_close", 1 },
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_close", 1 }
        };
        volume = 0.9;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class SBR_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_mid", 1 }
        };
        volume = 0.70794576;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class SBR_distShot_SoundShader {
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
    class SBR_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
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
    class SBR_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\ar556_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class SBR_tailHouses_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailhouses", 1 }
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
    class SBR_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_indoor", 1 }
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
    class SBR_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_meadow", 1 },
            { "hlc_wp_ar15\snd\soundshaders\SBR\SBR_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class SBR_tailTrees_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_tailtrees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class SBR_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\SBR_suppressed_close", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class SBR_silencerTailForest_SoundShader {
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
    class SBR_silencerTailHouses_SoundShader {
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
    class SBR_silencerTailInterior_SoundShader{
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\SBR_suppressed_indoor", 1 }
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
    class SBR_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_ar15\snd\soundshaders\generic\SBR_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class SBR_silencerTailTrees_SoundShader {
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
};
