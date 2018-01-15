
class CfgSoundShaders
{

	//.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
	//300Blackout AR15 Generic Soundshaders: Based off Katiba

		class acr_Closure_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\acr_first", 1 },
				{ "hlc_wp_acr\snd\acr_first", 1 } };
        range = 35;
        volume = 0.87;
		rangeCurve[] = {
		{ 0, 1 },
		{ 35, 0 } };
		};
		class acr_closeShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\soundshaders\five56\acrfive56_close1", 1 },
				{ "hlc_wp_acr\snd\soundshaders\five56\acrfive56_close2", 1 } };
			volume = 0.8;
			range = 50;
			rangeCurve = "closeShotCurve";
		};
		class acr_midShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\soundshaders\five56\acrfive56_mid", 1 } };
            volume = 1.6252;
			range = 2000;
			rangeCurve[] = {
				{ 0, 0.2 },
				{ 50, 1 },
				{ 300, 0 },
				{ 2000, 0 } };
		};
		class acr_distShot_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\acr_dist", 1 } };
			volume = 1.0;
			range = 2000;
			rangeCurve[] = {
				{ 0, 0 },
				{ 50, 0 },
				{ 300, 1 },
				{ 2000, 1 } };
		};
		class acr_tailDistant_SoundShader
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
		class acr_tailForest_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\soundshaders\five56\acrfive56_forest", 1 } };
            volume = "1.675*((1-interior/1.675)*Forest/3)";
        	range = 250;
        	rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    	};
    	class acr_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_acr\snd\soundshaders\five56\acrfive56_forest_mid", 1 }
        };
        volume = " 1.675*((1-interior/1.675)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    	};
		class acr_tailHouses_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\soundshaders\five56\ACRfive56_Urban", 1 } };
            volume = " 1.675*((1-interior/1.675)*houses/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class acr_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_acr\snd\soundshaders\five56\acrfive56_urban_mid", 1 }
        };
        volume = "1.675*((1-interior/1.675)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
		class acr_tailInterior_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\five56\ACRfive56_indoor", 1 } };
            volume = "1.675*((interior)*0.65)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class acr_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_acr\snd\soundshaders\five56\ACRfive56_indoor_mid", 1 }
        };
        volume = " 1.675*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
		class acr_tailMeadows_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\five56\ACRfive56_meadows", 1 } };
            volume = "1.675*((1-interior/1.675)*(meadows/2 max sea/2)/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class acr_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_acr\snd\soundshaders\five56\ACRfive56_meadows_mid", 1 }
        };
        volume = " 1.675*((1-interior/1.675)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
		class acr_tailTrees_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\five56\ACRfive56_Trees", 1 } };
            volume = "1.675*((1-interior/1.675)*trees/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class acr_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_acr\snd\soundshaders\five56\ACRfive56_trees_mid", 1 }
        };
        volume = " 1.675*((1-interior/1.675)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 0;
    };
		class acr_silencerShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\acr_suppressed_close", 1 } };
			volume = 1.0;
            range = 50;
            rangeCurve[] = {
                { 0, 1 },
                { 50, 0 }
            };
		};
        class acr_silencerShot_mid_SoundShader{
            samples[] = {
                { "hlc_wp_acr\snd\acr_suppressed_mid", 1 }
            };
            volume = 1.0;
            range = 250;
            rangeCurve[] = {
                { 0, 0.2 },
                { 50, 1 },
                { 250, 0 }
            };
        };
		class acr_silencerTailForest_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest", 1 } };
			volume = "(1-interior/1.675)*forest/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class acr_silencerTailHouses_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailHouses", 1 } };
			volume = "(1-interior/1.675)*houses/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0 } };
			limitation = 1;
		};
		class acr_silencerTailInterior_SoundShader
		{
			samples[] = {
				{ "hlc_wp_ar15\snd\soundshaders\generic\carbine_suppressed_indoor", 1 } };
			volume = "interior";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 50, 0.3 },
				{ 150, 0 } };
			limitation = 1;
		};
		class acr_silencerTailMeadows_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\acr_suppressed_meadow", 1 } };
			volume = "(1-interior/1.675)*(meadows/2 max sea/2)/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class acr_silencerTailTrees_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees", 1 } };
			volume = "(1-interior/1.675)*trees/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class acrsixeight_Closure_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\acr_first", 1 },
                { "hlc_wp_acr\snd\acr_first", 1 } };
        range = 35;
        volume = 0.87;
		};
		class acrsixeight_closeShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\soundshaders\six8\acrsix8_close1", 1 },
				{ "hlc_wp_acr\snd\soundshaders\six8\acrsix8_close2", 1 } };
			volume = 0.8;
			range = 50;
			rangeCurve = "closeShotCurve";
		};
		class acrsixeight_midShot_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_mid", 1 } };
            volume = 1.672;
			range = 2000;
			rangeCurve[] = {
				{ 0, 0.2 },
				{ 50, 1 },
				{ 300, 0 },
				{ 2000, 0 } };
		};
		class acrsixeight_distShot_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_dist", 1 } };
			volume = 1.0;
			range = 2000;
			rangeCurve[] = {
				{ 0, 0 },
				{ 50, 0 },
				{ 300, 1 },
				{ 2000, 1 } };
		};
		class acrsixeight_tailDistant_SoundShader
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
		class acrsixeight_tailForest_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\soundshaders\six8\acrsix8_Forest", 1 } };
            volume = "1.675*((1-interior/1.675)*Forest/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
		class acrsixeight_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_Forest_mid", 1 }
        };
        volume = "1.675*((1-interior/1.675)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    	};
		class acrsixeight_tailHouses_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_Urban", 1 } };
            volume = "1.675*((1-interior/1.675)*houses/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
		class acrsixeight_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_urban_mid", 1 }
        };
        volume = "1.675*((1-interior/1.675)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    	};
		class acrsixeight_tailInterior_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_indoor", 1 } };
            volume = "1.675*((interior)*0.65)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class acrsixeight_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_indoor_mid", 1 }
        };
        volume = " 1.675*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
		class acrsixeight_tailMeadows_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_meadows", 1 } };
            volume = "1.675*((1-interior/1.675)*(meadows/2 max sea/2)/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
		class acrsixeight_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_meadows_mid", 1 }
        };
        volume = "1.675*((1-interior/1.675)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    	};
		class acrsixeight_tailTrees_SoundShader
		{
			samples[] = {
                { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_Trees", 1 } };
            volume = "1.675*((1-interior/1.675)*trees/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
		class acrsixeight_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_acr\snd\soundshaders\six8\acrsix8_Trees_mid", 1 }
        };
        volume = "1.675*((1-interior/1.675)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    	};
		class acrsixeight_silencerShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_acr\snd\acr_suppressed", 1 } };
			volume = 1.0;
            range = 50;
            rangeCurve[] = {
                { 0, 1 },
                { 50, 0 }
            };
        };
        class acrsixeight_silencerShot_mid_SoundShader{
            samples[] = {
                { "hlc_wp_acr\snd\acr_suppressed_mid", 1 }
            };
            volume = 1.0;
            range = 250;
            rangeCurve[] = {
                { 0, 0.2 },
                { 50, 1 },
                { 250, 0 }
            };
        };
		class acrsixeight_silencerTailForest_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest", 1 } };
			volume = "(1-interior/1.675)*forest/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class acrsixeight_silencerTailHouses_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailHouses", 1 } };
			volume = "(1-interior/1.675)*houses/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0 } };
			limitation = 1;
		};
		class acrsixeight_silencerTailInterior_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\Silencer_Mk20_Tail_interior", 1 } };
			volume = "interior";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 50, 0.3 },
				{ 150, 0 } };
			limitation = 1;
		};
		class acrsixeight_silencerTailMeadows_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\Silencer_Mk20_Tail_meadows", 1 } };
			volume = "(1-interior/1.675)*(meadows/2 max sea/2)/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class acrsixeight_silencerTailTrees_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees", 1 } };
			volume = "(1-interior/1.675)*trees/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
        class acrsixeight_apologyclose_SoundShader
        {
            samples[] = {
                { "hlc_wp_acr\snd\soundshaders\Apology_close", 1 },
                { "hlc_wp_acr\snd\soundshaders\Apology_close", 1 } };
            volume = 0.9;
            range = 50;
            rangeCurve = "closeShotCurve";
        };
        class acrsixeight_apologymid_SoundShader
        {
            samples[] = {
                { "hlc_wp_acr\snd\soundshaders\Apology_mid", 1 } };
            volume = 0.70794576;
            range = 2000;
            rangeCurve[] = {
                { 0, 0.2 },
                { 50, 1 },
                { 300, 0 },
                { 2000, 0 } };
        };
};
