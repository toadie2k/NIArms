
class CfgSoundShaders
{
    class mk48_Closure_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\mk48\mk48_first", 1 } };
        range = 15;
        volume = 1;
        rangeCurve[] = {
            { 0, 1 },
            { 15, 0 } };
    };
    class mk48_closeShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\mk48\mk48_close", 1 } };
        volume = 0.8;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class mk48_midShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\mk48\mk48_mid", 1 } };
        volume = 1.672;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 } };
    };
    class mk48_distShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\mk48\mk48_dist", 1 } };
        volume = 1.0;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 2000, 1 } };
    };
    class mk48_tailDistant_SoundShader
    {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Machineguns\Zafir\Zafir_taildistant", 1 } };
        volume = 0.4;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.2 },
            { 600, 0.7 },
            { 2000, 1 } };
        limitation = 1;
    };
    class mk48_tailForest_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_forest", 1 } };
        volume = "1.4*((1-interior/1.4)*Forest/3)";
        range = 250;
        	rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    	};
    class mk48_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_forest_mid", 1 }
        };
        volume = " 1.4*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    	};
    class mk48_tailHouses_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_urban", 1 } };
        volume = "1.4*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class mk48_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_urban_mid", 1 }
        };
        volume = "1.4*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
    class mk48_tailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_indoor", 1 } };
        volume = "1.4*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class mk48_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_indoor_mid", 1 }
        };
        volume = " 1.4*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class mk48_tailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_Meadows", 1 } };
        volume = "1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class mk48_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_Meadows_mid", 1 }
        };
        volume = " 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class mk48_tailTrees_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_trees", 1 } };
        volume = "1.4*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class mk48_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_trees_mid", 1 }
        };
        volume = "1.4*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 0;
    };
    class mk48_silencerShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\mk48\mk48_sil", 1 } };
        volume = 1;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class mk48_silencerTailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailForest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class mk48_silencerTailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailHouses", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 } };
        limitation = 1;
    };
    class mk48_silencerTailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_siltailindoor", 1 } };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 } };
        limitation = 1;
    };
    class mk48_silencerTailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_siltail", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class mk48_silencerTailTrees_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailTrees", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class SAW_Closure_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw\SAW_first", 1 } };
        range = 15;
        volume = 1;
        rangeCurve[] = {
            { 0, 1 },
            { 15, 0 } };
    };
    class SAW_closeShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw\SAW_close", 1 } };
        volume = 0.8;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class SAW_midShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw\SAW_mid", 1 } };
        volume = 1.672;
        range = 2000;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 } };
    };
    class SAW_distShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw\SAW_dist", 1 }
                     };
        volume = 1.0;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 2000, 1 } };
    };
    class SAW_tailDistant_SoundShader
    {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_taildistant", 1 } };
        volume = 0.4;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.2 },
            { 600, 0.7 },
            { 2000, 1 } };
        limitation = 1;
    };
    class SAW_tailForest_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_forest", 1 } };
        volume = "1.4*((1-interior/1.4)*Forest/3)";
        range = 250;
        	rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    	};
    class SAW_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_forest_mid", 1 }
        };
        volume = " 1.4*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    	};
    class SAW_tailHouses_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_urban", 1 } };
        volume = "1.4*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class SAW_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_urban_mid", 1 }
        };
        volume = "1.4*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
    class SAW_tailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_indoor", 1 } };
        volume = "1.4*((interior)*0.65)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class SAW_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_indoor_mid", 1 }
        };
        volume = " 1.4*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class SAW_tailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_Meadows", 1 } };
        volume = "1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class SAW_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_Meadows_mid", 1 }
        };
        volume = " 1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class SAW_tailTrees_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_trees", 1 } };
        volume = "1.4*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class SAW_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_trees_mid", 1 }
        };
        volume = "1.4*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 0;
    };
    class SAW_silencerShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw\saw_sil", 1 } };
        volume = 1;
        range = 250;
        rangeCurve = "closeShotCurve";
    };
    class SAW_silencerTailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailForest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class SAW_silencerTailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailHouses", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 } };
        limitation = 1;
    };
    class SAW_silencerTailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_siltailindoor", 1 } };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 } };
        limitation = 1;
    };
    class SAW_silencerTailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_saw\snd\soundshaders\saw_siltail", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class SAW_silencerTailTrees_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Mk200_silencerTailTrees", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
};
