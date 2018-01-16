
class CfgSoundShaders {
    //.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
    class AWM_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\AWC_first", 1 }
        };
        range = 15;
        volume = 1;
    };
    class AWM_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_Close", 1 }
        };
        volume = 0.7;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class AWM_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_mid", 1 }
        };
        volume = 1.6252;
        range = 2500;
        rangeCurve[] = {
            { 0, 0.5 },
            { 100, 1 },
            { 500, 0 },
            { 2500, 0 }
        };
    };
    class AWM_distShot_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_distShot_01", 1 },
            { "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_distShot_02", 1 },
            { "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_distShot_03", 1 }
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
    class AWM_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\M320\M320_taildistant", 1 }
        };
        volume = 0.5;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 1000, 0.7 },
            { 2000, 1 }
        };
        limitation = 1;
    };
    class AWM_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_forest", 1 }
        };
        volume = "1*((1-interior/1.4)*Forest/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class AWM_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_forest_mid", 1 }
        };
        volume = " 1*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
    class AWM_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_urban", 1 }
        };
        volume = "1*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class AWM_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_urban_mid", 1 }
        };
        volume = "1*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
    class AWM_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_indoor", 1 }
        };
        volume = " 1*(interior))";
		range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class AWM_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_indoor_mid", 1 }
        };
        volume = " 1*(interior)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class AWM_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_meadow", 1 }
        };
        volume = "1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class AWM_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_meadow_mid", 1 }
        };
        volume = " 1*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class AWM_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_trees", 1 }
        };
        volume = "1*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class AWM_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Magnum\AWM_trees_mid", 1 }
        };
        volume = " 1*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class awc_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Covert\AWC_Close", 1 }
        };
        volume = 0.8;
        range = 100;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0 }
        };
    };
    class AWc_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Covert\AWC_mid", 1 }
        };
        volume = 1;
        range = 350;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 350, 0 }
        };
    };
    class awc_silencerTailForest_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Covert\AWC_meadow", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class awc_silencerTailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Covert\AWC_meadow", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class awc_silencerTailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Covert\AWC_indoor", 1 }
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
    class awc_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Covert\AWC_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class awc_silencerTailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_fhAWC\snd\soundshader\Covert\AWC_meadow", 1 }
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
