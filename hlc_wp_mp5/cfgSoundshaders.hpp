
class CfgSoundShaders
{

    class mp5_Closure_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_first", 1 },
            { "hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_first", 1 } };
        range = 5;
        volume = 1;
    };
    class mp5_closeShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_close", 1 } };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class mp5_midShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_mid", 1 } };
        volume = 0.56234133;
        range = 1500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 1500, 0 } };
    };
    class mp5_distShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5\mp5_dist", 1 } };
        volume = 1.0;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1500, 1 } };
    };
    class mp5_tailDistant_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_taildistant", 1 } };
        volume = 1.7782794;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 300, 0.7 },
            { 1500, 1 } };
        limitation = 1;
    };
    class mp5_tailForest_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_forest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class mp5_tailHouses_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_urban", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 200, 0.3 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class mp5_tailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_indoor", 1 } };
        volume = "interior";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 } };
        limitation = 1;
    };
    class mp5_tailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_meadows", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class mp5_tailTrees_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_trees", 1 },
            { "hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_trees1", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class mp5_silencerShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_suppressed_close", 1 } };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class mp5_silencerTailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailForest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class mp5_silencerTailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailHouses", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 } };
        limitation = 1;
    };
    class mp5_silencerTailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5\mp5a4_suppressed_close_tail_indoor", 1 } };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 } };
        limitation = 1;
    };
    class mp5_silencerTailMeadows_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailMeadows", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class mp5_silencerTailTrees_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailTrees", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };


    class mp5sd_silencerShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5sd\mp5sd_fire", 1 } };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class mp5sd_silencerTailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailForest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class mp5sd_silencerTailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailHouses", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 } };
        limitation = 1;
    };
    class mp5sd_silencerTailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5sd\mp5sd_suppressed_close_tail_indoor", 1 } };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 } };
        limitation = 1;
    };
    class mp5sd_silencerTailMeadows_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailMeadows", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class mp5sd_silencerTailTrees_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailTrees", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };


    class mp5k_closeShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_close", 1 } };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class mp5k_midShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_mid", 1 } };
        volume = 0.56234133;
        range = 1500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 1500, 0 } };
    };
    class mp5k_distShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_dist", 1 } };
        volume = 1.0;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1500, 1 } };
    };
    class mp5k_tailDistant_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_taildistant", 1 } };
        volume = 1.7782794;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 300, 0.7 },
            { 1500, 1 } };
        limitation = 1;
    };
    class mp5k_tailForest_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_forest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class mp5k_tailHouses_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_urban", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 200, 0.3 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class mp5k_tailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_indoor", 1 } };
        volume = "interior";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 } };
        limitation = 1;
    };
    class mp5k_tailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_meadows", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class mp5k_tailTrees_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp5k\mp5k_trees", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };

    class 9mmar_closeShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\9mmar\hks1", 1 },
            { "hlc_wp_mp5\snd\soundshaders\9mmar\hks2", 1 },
            { "hlc_wp_mp5\snd\soundshaders\9mmar\hks3", 1 } };
        volume = 0.6;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class 9mmar_midShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\9mmar\hks_mid", 1 } };
        volume = 0.56234133;
        range = 1500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 1500, 0 } };
    };
    class 9mmar_distShot_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_distShot_01", 1 },
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_distShot_02", 1 },
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_distShot_03", 1 } };
        volume = 1.0;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1500, 1 } };
    };
    class 9mmar_tailDistant_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_taildistant", 1 } };
        volume = 1.7782794;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 300, 0.7 },
            { 1500, 1 } };
        limitation = 1;
    };
    class 9mmar_tailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tailForest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class 9mmar_tailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tailhouses", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 200, 0.3 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class 9mmar_tailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\9mmar\hks_indoor", 1 } };
        volume = "interior";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 } };
        limitation = 1;
    };
    class 9mmar_tailMeadows_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tailmeadows", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class 9mmar_tailTrees_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_tailtrees", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };


    class MP510_Closure_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp510\mp510_first", 1 },
            { "hlc_wp_mp5\snd\soundshaders\mp510\mp510_first", 1 } };
        range = 5;
        volume = 1;
    };
    class MP510_closeShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp510\mp510_close", 1 } };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class MP510_midShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp510\mp510_mid", 1 } };
        volume = 0.4466836;
        range = 1500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 1500, 0 } };
    };
    class MP510_distShot_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_distShot_01", 1 },
            { "A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_distShot_02", 1 },
            { "A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_distShot_03", 1 } };
        volume = 1.0;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1500, 1 } };
    };
    class MP510_tailDistant_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_taildistant", 1 } };
        volume = 1.7782794;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 300, 0.7 },
            { 1500, 1 } };
        limitation = 1;
    };
    class MP510_tailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tailforest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class MP510_tailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tailhouses", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 800;
        rangeCurve[] = {
            { 0, 1 },
            { 200, 0.3 },
            { 800, 0.3 } };
        limitation = 1;
    };
    class MP510_tailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp510\mp510_indoor", 1 } };
        volume = "interior";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 } };
        limitation = 1;
    };
    class MP510_tailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp510\mp510_meadows", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class MP510_tailTrees_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_tailtrees", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class MP510_silencerShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp510\mp510_suppressed_close", 1 } };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class MP510_silencerTailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailForest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class MP510_silencerTailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailHouses", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 } };
        limitation = 1;
    };
    class MP510_silencerTailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_mp5\snd\soundshaders\mp510\mp510_sil_indoor", 1 } };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 } };
        limitation = 1;
    };
    class MP510_silencerTailMeadows_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailMeadows", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class MP510_silencerTailTrees_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\SMG\Sting\Sting_silencerTailTrees", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
};
