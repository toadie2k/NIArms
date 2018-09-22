
class CfgSoundShaders
{

	//.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
    class NIA_416Rifle_Closure_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\hk416_first", 1 },
            { "nia_WP_HK416\snd\Generic\hk416_first", 1 }
        };
        range = 35;
        volume = 0.87;
        rangeCurve[] = {
            { 0, 1 },
            { 35, 0 }
        };
    };
    class NIA_416Rifle_closeShot_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\rifle\rifle_close1", 1 },
            { "nia_WP_HK416\snd\rifle\rifle_close2", 1 },
            { "nia_WP_HK416\snd\rifle\rifle_close3", 1 },
            { "nia_WP_HK416\snd\rifle\rifle_close4", 1 }
        };
        volume = 0.78;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class NIA_416Rifle_midShot_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\rifle\rifle_mid", 1 }
        };
        volume = 1.6252;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class NIA_416Rifle_distShot_SoundShader {
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

    class NIA_416Rifle_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
        };
        volume = 0.4;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class NIA_416Rifle_tailForest_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\rifle\rifle_forest", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416Rifle_tailForest_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\rifle\rifle_forest_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 1800, 1 }
        };
        range = 1800;
        limitation = 1;
    };
    class NIA_416Rifle_tailHouses_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\rifle\rifle_urban", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416Rifle_tailHouses_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\rifle\rifle_urban_mid", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };
    class NIA_416Rifle_tailInterior_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\rifle\rifle_indoor", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
        range = 250;
        rangeCurve[] = {
            { 0, 0.7 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416Rifle_tailInterior_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\rifle\rifle_indoor_mid", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.4 },
            { 320, 0 }
        };
        range = 500;
        limitation = 1;
    };
    class NIA_416Rifle_tailMeadows_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\rifle\rifle_meadow", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416Rifle_tailMeadows_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\rifle\rifle_meadow_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };
    class NIA_416Rifle_tailTrees_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\rifle\rifle_trees", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416Rifle_tailTrees_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\rifle\rifle_trees_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };

    class NIA_416Rifle_silencerShot_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\rifle_suppressed_close", 1 }
        };
        volume = 0.7;
        range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
    };
    class NIA_416Rifle_silencerShot_mid_SoundShader{
        samples[] = {
            { "nia_WP_HK416\snd\Generic\rifle_suppressed_mid", 1 }
        };
        volume = 1.0;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };

    class NIA_416Rifle_silencerTailForest_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\rifle_suppressed_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_416Rifle_silencerTailHouses_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\rifle_suppressed_urban", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class NIA_416Rifle_silencerTailInterior_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\rifle_suppressed_indoor", 1 }
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
    class NIA_416Rifle_silencerTailMeadows_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\rifle_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_416Rifle_silencerTailTrees_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\rifle_suppressed_trees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };

    class NIA_416Carbine_Closure_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\hk416_first", 1 },
            { "nia_WP_HK416\snd\Generic\hk416_first", 1 }
        };
        range = 35;
        volume = 0.87;
        rangeCurve[] = {
            { 0, 1 },
            { 35, 0 }
        };
    };
    class NIA_416Carbine_closeShot_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\carbine\carbine_close1", 1 },
            { "nia_WP_HK416\snd\carbine\carbine_close2", 1 },
            { "nia_WP_HK416\snd\carbine\carbine_close3", 1 },
            { "nia_WP_HK416\snd\carbine\carbine_close4", 1 }
        };
        volume = 0.7;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class NIA_416Carbine_midShot_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\carbine\carbine_mid", 1 }
        };
        volume = 1.6252;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class NIA_416Carbine_distShot_SoundShader {
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

    class NIA_416Carbine_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
        };
        volume = 0.4;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class NIA_416Carbine_tailForest_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\carbine\carbine_forest", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416Carbine_tailForest_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\carbine\carbine_forest_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 1800, 1 }
        };
        range = 1800;
        limitation = 1;
    };
    class NIA_416Carbine_tailHouses_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\carbine\carbine_urban", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416Carbine_tailHouses_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\carbine\carbine_urban_mid", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };
    class NIA_416Carbine_tailInterior_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\carbine\carbine_indoor", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
        range = 250;
        rangeCurve[] = {
            { 0, 0.7 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416Carbine_tailInterior_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\carbine\carbine_indoor_mid", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.4 },
            { 320, 0 }
        };
        range = 500;
        limitation = 1;
    };
    class NIA_416Carbine_tailMeadows_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\carbine\carbine_meadows", 1 },
            { "nia_WP_HK416\snd\carbine\carbine_meadows", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416Carbine_tailMeadows_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\carbine\carbine_meadows_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };
    class NIA_416Carbine_tailTrees_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\carbine\carbine_trees", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416Carbine_tailTrees_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\carbine\carbine_trees_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };

    class NIA_416Carbine_silencerShot_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\carbine_suppressed_close", 1 }
        };
        volume = 0.7;
        range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
    };
    class NIA_416Carbine_silencerShot_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\carbine_suppressed_mid", 1 }
        };
        volume = 1.0;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };

    class NIA_416Carbine_silencerTailForest_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\carbine_suppressed_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_416Carbine_silencerTailHouses_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\carbine_suppressed_urban", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class NIA_416Carbine_silencerTailInterior_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\carbine_suppressed_indoor", 1 }
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
    class NIA_416Carbine_silencerTailMeadows_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\carbine_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_416Carbine_silencerTailTrees_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\carbine_suppressed_trees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };


    class NIA_416SBR_Closure_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\hk416_first", 1 },
            { "nia_WP_HK416\snd\Generic\hk416_first", 1 }
        };
        range = 35;
        volume = 0.87;
        rangeCurve[] = {
            { 0, 1 },
            { 35, 0 }
        };
    };
    class NIA_416SBR_closeShot_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\SBR\SBR_close1", 1 },
            { "nia_WP_HK416\snd\SBR\SBR_close2", 1 },
            { "nia_WP_HK416\snd\SBR\SBR_close3", 1 },
            { "nia_WP_HK416\snd\SBR\SBR_close4", 1 }
        };
        volume = 0.78;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class NIA_416SBR_midShot_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\SBR\SBR_mid", 1 }
        };
        volume = 1.6252;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class NIA_416SBR_distShot_SoundShader {
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

    class NIA_416SBR_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
        };
        volume = 0.8;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class NIA_416SBR_tailForest_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\SBR\SBR_forest", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416SBR_tailForest_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\SBR\SBR_forest_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 1800, 1 }
        };
        range = 1800;
        limitation = 1;
    };
    class NIA_416SBR_tailHouses_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\SBR\SBR_urban", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416SBR_tailHouses_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\SBR\sbr_urban_mid", 1 }
        };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };
    class NIA_416SBR_tailInterior_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\SBR\SBR_indoor", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
        range = 250;
        rangeCurve[] = {
            { 0, 0.7 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416SBR_tailInterior_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\SBR\SBR_indoor_mid", 1 }
        };
        volume = " 1.5*((interior)*0.65)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.4 },
            { 320, 0 }
        };
        range = 500;
        limitation = 1;
    };
    class NIA_416SBR_tailMeadows_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\SBR\SBR_meadow", 1 },
            { "nia_WP_HK416\snd\SBR\SBR_meadow", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416SBR_tailMeadows_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\SBR\SBR_meadow_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };
    class NIA_416SBR_tailTrees_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\SBR\SBR_trees", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_416SBR_tailTrees_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\SBR\SBR_trees_mid", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };

    class NIA_416SBR_silencerShot_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\SBR_suppressed_close", 1 }
        };
        volume = 0.7;
        range = 50;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
    };
    class NIA_416SBR_silencerShot_mid_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\SBR_suppressed_mid", 1 }
        };
        volume = 1.0;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };

    class NIA_416SBR_silencerTailForest_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\SBR_suppressed_forest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_416SBR_silencerTailHouses_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\SBR_suppressed_urban", 1 }
        };
        volume = "1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class NIA_416SBR_silencerTailInterior_SoundShader{
        samples[] = {
            { "nia_WP_HK416\snd\Generic\SBR_suppressed_indoor", 1 }
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
    class NIA_416SBR_silencerTailMeadows_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\SBR_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class NIA_416SBR_silencerTailTrees_SoundShader {
        samples[] = {
            { "nia_WP_HK416\snd\Generic\SBR_suppressed_trees", 1 }
        };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
};
