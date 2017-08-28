
class CfgSoundShaders {
    class M14_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_first", 1 },
            { "hlc_wp_m14\snd\soundshaders\m14_first", 1 }
        };
        range = 10;
        volume = 1.3;
    };
    class M14_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_close", 1 }
        };
        volume = 0.8;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class M14_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_mid", 1 }
        };
        volume = 1.6;
        range = 2500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2500, 0 }
        };
    };
    class M14_distShot_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_dist", 1 }
        };
        volume = 1.0;
        range = 2500;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 2500, 1 }
        };
    };
    class M14_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_taildistant", 1 }
        };
        volume = 0.4;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.2 },
            { 600, 0.7 },
            { 2000, 1 } };
        limitation = 1;
    };
    class M14_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_forest", 1 } };
        volume = " 2.585*((1-interior/1.4)*Forest/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 } };
        limitation = 1;
    };
    class M14_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_urban", 1 } 
        };
        volume = "2.585*((1-interior/1.4)*houses/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0.3 },
            { 1500, 0 }
        };
        limitation = 1;
    };
    class M14_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_indoor", 1 } };
        volume = " 2.585*((interior)*0.65)";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 50, 0.2 },
            { 350, 0 }
        };
        limitation = 1;
    };
    class M14_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_meadows", 1 } };
        volume = " 2.585*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class M14_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_trees", 1 } };
        volume = " 2.585*((1-interior/1.4)*trees/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class M14_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\generic\m14_suppressed_close", 1 }
        };
        volume = 1;
        range = 350;
        rangeCurve = "closeShotCurve";
    };
    class M14_silencerTailForest_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailForest", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class M14_silencerTailHouses_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailHouses", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class M14_silencerTailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\generic\m14_suppressed_indoor", 1 }
        };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 } };
        limitation = 1;
    };
    class M14_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\generic\m14_suppressed_meadows", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class M14_silencerTailTrees_SoundShader {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailTrees", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };

    class m14tactical_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_first", 1 },
            { "hlc_wp_m14\snd\soundshaders\m14_first", 1 }
        };
        range = 10;
        volume = 1.4;
    };
    class m14tactical_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_close", 1 }
        };
        volume = 0.8;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class m14tactical_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_mid", 1 }
        };
        volume = 1.6252;
        range = 2500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2500, 0 }
        };
    };
    class m14tactical_distShot_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_dist", 1 }
        };
        volume = 1.0;
        range = 2500;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 2500, 1 }
        };
    };
    class M14tactical_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_taildistant", 1 }
        };
        volume = 0.4;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.2 },
            { 600, 0.7 },
            { 2000, 1 } };
        limitation = 1;
    };
    class m14tactical_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_forest", 1 } 
        };
        volume = " 2.585*((1-interior/1.4)*Forest/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class m14tactical_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_urban", 1 } 
        };
        volume = "2.585*((1-interior/1.4)*houses/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 250, 0.3 },
            { 1500, 0 }
        };
        limitation = 1;
    };
    class m14tactical_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_indoor", 1 } 
        };
        volume = " 2.585*((interior)*0.65)";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 50, 0.2 },
            { 350, 0 }
        };
        limitation = 1;
    };
    class m14tactical_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_meadows", 1 } 
        };
        volume = " 2.585*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
    class m14tactical_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_m14\snd\soundshaders\m14_trees", 1 } 
        };
        volume = " 2.585*((1-interior/1.4)*trees/3)";
        range = 2000;
        rangeCurve[] = {
            { 0, 1 },
            { 2000, 0 }
        };
        limitation = 1;
    };
};

