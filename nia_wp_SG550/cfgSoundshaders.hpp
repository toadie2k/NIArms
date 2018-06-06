
class CfgSoundShaders
{

    //.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
    class nia_sg550_Closure_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\550\sg550_first", 1 },
            { "nia_wp_sg550\snd\550\sg550_first", 1 } };
        range = 5;
        volume = 0.87;
        rangeCurve[] = {
            { 0, 1 },
            { 35, 0 } };
    };
    class nia_sg550_closeShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\550\sg550_fire1", 1 },
            { "nia_wp_sg550\snd\550\sg550_fire2", 1 } };
        volume = 0.8;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_sg550_midShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\550\sg550_mid", 1 } };
        volume = 1.6252;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 } };
    };
    class nia_sg550_distShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\550\sg550_dist", 1 } };
        volume = 1.0;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 2000, 1 } };
    };
    class nia_sg550_tailDistant_SoundShader
    {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
        volume = 0.4;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 } };
        limitation = 1;
    };
    class nia_sg550_tailForest_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\550\sg550_forest", 1 } };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_sg550_tailForest_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\550\sg550_forest_mid", 1 } };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 1800, 1 }
        };
        range = 1800;
        limitation = 1;
    };
    class nia_sg550_tailHouses_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\550\sg550_urban", 1 } };
        volume = " 1.5*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg550_tailHouses_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\550\sg550_urban_mid", 1 } };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };
    class nia_sg550_tailInterior_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\550\sg550_indoor", 1 } };
        volume = " 1.5*((interior)*0.65)";
        range = 250;
        rangeCurve[] = {
            { 0, 0.7 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg550_tailInterior_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\550\sg550_indoor_mid", 1 } };
        volume = " 1.5*((interior)*0.65)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.4 },
            { 320, 0 }
        };
        range = 500;
        limitation = 1;
    };
    class nia_sg550_tailMeadows_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\550\sg550_meadow", 1 },
            { "nia_wp_sg550\snd\550\sg550_meadow", 1 } };
        volume = " 1.5*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg550_tailMeadows_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\550\sg550_meadow_mid", 1 }
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
    class nia_sg550_tailTrees_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\550\sg550_trees", 1 } };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg550_tailTrees_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\550\sg550_trees_mid", 1 } };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };
    class nia_sg550_silencerShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\rifle_suppressed_close", 1 } };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_sg550_silencerShot_mid_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\rifle_suppressed_mid", 1 } };
        volume = 1.0;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };
    class nia_sg550_silencerTailForest_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\rifle_suppressed_forest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_sg550_silencerTailHouses_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\rifle_suppressed_urban", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_sg550_silencerTailInterior_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\rifle_suppressed_indoor", 1 } };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_sg550_silencerTailMeadows_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\rifle_suppressed_meadow", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_sg550_silencerTailTrees_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\rifle_suppressed_trees", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };


    class nia_sg551_Closure_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_first", 1 },
            { "nia_wp_sg550\snd\556\sg556_first", 1 } };
        range = 5;
        volume = 0.87;
        rangeCurve[] = {
            { 0, 1 },
            { 35, 0 } };
    };
    class nia_sg551_closeShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_fire1", 1 },
            { "nia_wp_sg550\snd\556\sg556_fire2", 1 } };
        volume = 0.8;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_sg551_midShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_mid", 1 } };
        volume = 1.6252;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 } };
    };
    class nia_sg551_distShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_dist", 1 } };
        volume = 1.0;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 2000, 1 } };
    };
    class nia_sg551_tailDistant_SoundShader
    {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
        volume = 0.4;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 } };
        limitation = 1;
    };
    class nia_sg551_tailForest_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_forest", 1 } };
        volume = " 1.675*((1-interior/1.4)*Forest/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_sg551_tailForest_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_forest_mid", 1 } };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 1800, 1 }
        };
        range = 1800;
        limitation = 1;
    };
    class nia_sg551_tailHouses_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_urban", 1 } };
        volume = "1.675*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg551_tailHouses_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_urban_mid", 1 } };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };
    class nia_sg551_tailInterior_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_indoor", 1 } };
        volume = "interior";
        range = 250;
        rangeCurve[] = {
            { 0, 0.7 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg551_tailInterior_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_indoor_mid", 1 } };
        volume = " 1.5*((interior)*0.65)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.4 },
            { 320, 0 }
        };
        range = 500;
        limitation = 1;
    };
    class nia_sg551_tailMeadows_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_meadows", 1 },
            { "nia_wp_sg550\snd\556\sg556_meadows", 1 } };
        volume = " 1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg551_tailMeadows_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_meadows_mid", 1 }
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
    class nia_sg551_tailTrees_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_trees", 1 } };
        volume = " 1.675*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg551_tailTrees_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_trees_mid", 1 } };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };
    class nia_sg551_silencerShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\carbine_suppressed_close", 1 } };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_sg551_silencerShot_mid_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\carbine_suppressed_mid", 1 } };
        volume = 1.0;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };
    class nia_sg551_silencerTailForest_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\carbine_suppressed_forest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_sg551_silencerTailHouses_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\carbine_suppressed_urban", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_sg551_silencerTailInterior_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\carbine_suppressed_indoor", 1 } };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_sg551_silencerTailMeadows_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\carbine_suppressed_meadow", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_sg551_silencerTailTrees_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\carbine_suppressed_trees", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };


    class nia_sg553_Closure_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\553r\sg553r_first", 1 },
            { "nia_wp_sg550\snd\553r\sg553r_first", 1 } };
        range = 5;
        volume = 0.87;
        rangeCurve[] = {
            { 0, 1 },
            { 35, 0 } };
    };
    class nia_sg553_closeShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_fire1", 1 },
            { "nia_wp_sg550\snd\556\sg556_fire2", 1 } };
        volume = 0.8;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_sg553_midShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_mid", 1 } };
        volume = 1.6252;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 } };
    };
    class nia_sg553_distShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_dist", 1 } };
        volume = 1.0;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 2000, 1 } };
    };
    class nia_sg553_tailDistant_SoundShader
    {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
        volume = 0.4;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 } };
        limitation = 1;
    };
    class nia_sg553_tailForest_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_forest", 1 } };
        volume = " 1.675*((1-interior/1.4)*Forest/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_sg553_tailForest_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_forest_mid", 1 } };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 1800, 1 }
        };
        range = 1800;
        limitation = 1;
    };
    class nia_sg553_tailHouses_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_urban", 1 } };
        volume = "1.675*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg553_tailHouses_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_urban_mid", 1 } };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };
    class nia_sg553_tailInterior_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_indoor", 1 } };
        volume = "interior";
        range = 250;
        rangeCurve[] = {
            { 0, 0.7 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg553_tailInterior_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_indoor_mid", 1 } };
        volume = " 1.5*((interior)*0.65)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.4 },
            { 320, 0 }
        };
        range = 500;
        limitation = 1;
    };
    class nia_sg553_tailMeadows_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_meadows", 1 },
            { "nia_wp_sg550\snd\556\sg556_meadows", 1 } };
        volume = " 1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg553_tailMeadows_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_meadows_mid", 1 }
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
    class nia_sg553_tailTrees_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\553r\sg553r_trees", 1 } };
        volume = " 1.675*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg553_tailTrees_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_trees_mid", 1 } };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };
    class nia_sg553_silencerShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\sbr_suppressed_close", 1 } };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_sg553_silencerShot_mid_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\sbr_suppressed_mid", 1 } };
        volume = 1.0;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };
    class nia_sg553_silencerTailForest_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\sbr_suppressed_forest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_sg553_silencerTailHouses_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\sbr_suppressed_urban", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_sg553_silencerTailInterior_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\sbr_suppressed_indoor", 1 } };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_sg553_silencerTailMeadows_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\sbr_suppressed_meadow", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_sg553_silencerTailTrees_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\sbr_suppressed_trees", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };


    class nia_sg553r_Closure_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\553r\sg553r_first", 1 },
            { "nia_wp_sg550\snd\553r\sg553r_first", 1 } };
        range = 5;
        volume = 0.87;
        rangeCurve[] = {
            { 0, 1 },
            { 35, 0 } };
    };
    class nia_sg553r_closeShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\553r\sg553R_fire1", 1 },
            { "nia_wp_sg550\snd\553r\sg553R_fire1", 1 } };
        volume = 1;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_sg553r_midShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\553r\sg553r_mid", 1 } };
        volume = 1.6252;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 } };
    };
    class nia_sg553r_distShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\553r\sg553r_dist", 1 } };
        volume = 1.0;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 2000, 1 } };
    };
    class nia_sg553r_tailDistant_SoundShader
    {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
        volume = 0.4;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 600, 0.7 },
            { 2000, 1 } };
        limitation = 1;
    };
    class nia_sg553r_tailForest_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\553r\sg553r_forest", 1 } };
        volume = " 1.675*((1-interior/1.4)*Forest/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class NIA_sg553r_tailForest_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\553r\sg553r_forest_mid", 1 } };
        volume = " 1.5*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 1800, 1 }
        };
        range = 1800;
        limitation = 1;
    };
    class nia_sg553r_tailHouses_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\553r\sg553r_urban", 1 } };
        volume = "1.675*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg553r_tailHouses_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\553r\sg553r_urban_mid", 1 } };
        volume = "1.5*((1-interior/1.4)*houses/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };
    class nia_sg553r_tailInterior_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_indoor", 1 } };
        volume = "interior";
        range = 250;
        rangeCurve[] = {
            { 0, 0.7 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg553r_tailInterior_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\556\sg556_indoor_mid", 1 } };
        volume = " 1.5*((interior)*0.65)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.4 },
            { 320, 0 }
        };
        range = 500;
        limitation = 1;
    };
    class nia_sg553r_tailMeadows_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\553r\sg553r_meadows", 1 },
            { "nia_wp_sg550\snd\553r\sg553r_meadows", 1 } };
        volume = " 1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg553r_tailMeadows_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\553r\sg553r_meadows_mid", 1 }
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
    class nia_sg553r_tailTrees_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\553r\sg553r_trees", 1 } };
        volume = " 1.675*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0 }
        };
        limitation = 1;
    };
    class nia_sg553r_tailTrees_mid_SoundShader {
        samples[] = {
            { "nia_wp_sg550\snd\553r\sg553r_trees_mid", 1 } };
        volume = " 1.5*((1-interior/1.4)*trees/3)";
        rangeCurve[] = {
            { 0, 0 },
            { 250, 1 },
            { 2000, 1 }
        };
        range = 2000;
        limitation = 1;
    };
    class nia_sg553r_silencerShot_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\sbr_suppressed_close", 1 } };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_sg553r_silencerShot_mid_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\sbr_suppressed_mid", 1 } };
        volume = 1.0;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };
    class nia_sg553r_silencerTailForest_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\sbr_suppressed_forest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_sg553r_silencerTailHouses_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\sbr_suppressed_urban", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_sg553r_silencerTailInterior_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\sbr_suppressed_indoor", 1 } };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_sg553r_silencerTailMeadows_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\sbr_suppressed_meadow", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_sg553r_silencerTailTrees_SoundShader
    {
        samples[] = {
            { "nia_wp_sg550\snd\general\sbr_suppressed_trees", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };

};
