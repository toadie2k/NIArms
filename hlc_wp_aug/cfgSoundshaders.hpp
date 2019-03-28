
class CfgSoundShaders
{

	//.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
	class aug_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_aug\snd\soundshaders\aug\aug_first", 1 },
			{ "hlc_wp_aug\snd\soundshaders\aug\aug_first", 1 } };
        range = 15;
        volume = 0.87;
	};
	class aug_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_aug\snd\soundshaders\aug\aug_close1", 1 },
			{ "hlc_wp_aug\snd\soundshaders\aug\aug_close2", 1 } };
		volume = 0.8;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class aug_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_aug\snd\soundshaders\aug\aug_mid", 1 } };
        volume = 1.6252;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
	class aug_distShot_SoundShader
	{
		samples[] = {
            { "hlc_wp_aug\snd\soundshaders\aug\aug_dist", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
	class aug_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 } };
		volume = 0.8;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class aug_tailForest_SoundShader
	{
		samples[] = {
			{ "hlc_wp_aug\snd\soundshaders\aug\AUG_Forest", 1 } };
        volume = "1.675*((1-interior/1.4)*Forest/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class aug_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\aug\AUG_Forest_mid", 1 }
        };
        volume = " 1.675*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
	class aug_tailHouses_SoundShader
	{
		samples[] = {
			{ "hlc_wp_aug\snd\soundshaders\aug\AUG_urban", 1 } };
        volume = "1.675*((1-interior/1.4)*houses/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class aug_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\aug\AUG_urban_mid", 1 }
        };
        volume = "1.675*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
	class aug_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_aug\snd\soundshaders\aug\AUG_interior", 1 } };
		volume = "interior";
		range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class aug_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\aug\AUG_interior_mid", 1 }
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
	class aug_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_aug\snd\soundshaders\aug\aug_meadow", 1 },
			{ "hlc_wp_aug\snd\soundshaders\aug\aug_meadow", 1 } };
        volume = "1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class aug_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\aug\aug_meadow_mid", 1 }
        };
        volume = " 1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
	class aug_tailTrees_SoundShader
	{
		samples[] = {
			{ "hlc_wp_aug\snd\soundshaders\aug\AUG_trees", 1 } };
        volume = " 1.675*((1-interior/1.4)*trees/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class aug_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\aug\AUG_trees_mid", 1 }
        };
        volume = " 1.675*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
	class aug_silencerShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_aug\snd\soundshaders\aug\AUG_Suppressed_close", 1 } };
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
    class aug_silencerShot_mid_SoundShader
    {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_mid", 1 } };
        volume = 1.0;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
    };
	class aug_silencerTailForest_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class aug_silencerTailHouses_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailHouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 } };
		limitation = 1;
	};
	class aug_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_wp_aug\snd\soundshaders\aug\aug_Suppressed_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class aug_silencerTailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_wp_aug\snd\soundshaders\aug\AUG_suppressed_meadow", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class aug_silencerTailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	

	class augcarbine_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_wp_aug\snd\soundshaders\aug\aug_first", 1 },
			{ "hlc_wp_aug\snd\soundshaders\aug\aug_first", 1 } };
        range = 15;
        volume = 0.87;
	};
		class augcarbine_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_aug\snd\soundshaders\augcarbine\augcarbine_close1", 1 },
			{ "hlc_wp_aug\snd\soundshaders\augcarbine\augcarbine_close2", 1 } };
        volume = 0.8;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
		class augcarbine_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_wp_aug\snd\soundshaders\augcarbine\augcarbine_mid", 1 } };
        volume = 1.6252;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0.2 },
			{ 50, 1 },
			{ 300, 0 },
			{ 2000, 0 } };
	};
		class augcarbine_distShot_SoundShader
	{
		samples[] = {
            { "hlc_wp_aug\snd\soundshaders\augcarbine\augcarbine_dist", 1 } };
		volume = 1.0;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
			{ 50, 0 },
			{ 300, 1 },
			{ 2000, 1 } };
	};
		class augcarbine_tailDistant_SoundShader
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
		class augcarbine_tailForest_SoundShader
	{
		samples[] = {
			{"hlc_wp_aug\snd\soundshaders\augcarbine\AUGCarbine_Forest", 1}
		};
		volume = "1.675*((1-interior/1.4)*Forest/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class AUGcarbine_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\AUGcarbine\AUGcarbine_Forest_mid", 1 }
        };
        volume = " 1.675*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
		class augcarbine_tailHouses_SoundShader
		{
			samples[] = {
				{"hlc_wp_aug\snd\soundshaders\augcarbine\AUGCarbine_urban", 1}
			};
			volume = "1.675*((1-interior/1.4)*houses/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class AUGcarbine_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\AUGcarbine\AUGCarbine_mid", 1 }
        };
        volume = "1.675*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
		class augcarbine_tailInterior_SoundShader
		{
			samples[] = {
				{"hlc_wp_aug\snd\soundshaders\augcarbine\AUGCarbine_interior", 1}
			};
			volume = "interior";
			range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class augcarbine_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\augcarbine\augcarbine_interior_mid", 1 }
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
		class augcarbine_tailMeadows_SoundShader
		{
			samples[] = {
				{"hlc_wp_aug\snd\soundshaders\augcarbine\AUGCarbine_meadow", 1}
			};
            volume = " 1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class augcarbine_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\augcarbine\augcarbine_meadow_mid", 1 }
        };
        volume = " 1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
		class augcarbine_tailTrees_SoundShader
		{
			samples[] = {
				{"hlc_wp_aug\snd\soundshaders\augcarbine\AUGCarbine_trees", 1}
			};
            volume = "1.675*((1-interior/1.4)*trees/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class augcarbine_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\augcarbine\augcarbine_trees_mid", 1 }
        };
        volume = " 1.675*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
		class augcarbine_silencerShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_close", 1 } };
			volume = 1.0;
			range = 50;
			rangeCurve = "closeShotCurve";
		};
        class augcarbine_silencerShot_mid_SoundShader
        {
            samples[] = {
                { "hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_mid", 1 } };
            volume = 1.0;
            range = 250;
            rangeCurve[] = {
                { 0, 0.2 },
                { 50, 1 },
                { 250, 0 }
            };
        };
		class augcarbine_silencerTailForest_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest", 1 } };
			volume = "(1-interior/1.4)*forest/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class augcarbine_silencerTailHouses_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailHouses", 1 } };
			volume = "(1-interior/1.4)*houses/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0 } };
			limitation = 1;
		};
		class augcarbine_silencerTailInterior_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_indoor", 1 } };
			volume = "interior";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 50, 0.3 },
				{ 150, 0 } };
			limitation = 1;
		};
		class augcarbine_silencerTailMeadows_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_meadow", 1 } };
			volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class augcarbine_silencerTailTrees_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees", 1 } };
			volume = "(1-interior/1.4)*trees/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};


		class aughbar_Closure_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\aug\aug_first", 1 },
				{ "hlc_wp_aug\snd\soundshaders\aug\aug_first", 1 } };
        range = 15;
        volume = 0.87;
		};
		class aughbar_closeShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\aughbar\aughbar_close1", 1 },
				{ "hlc_wp_aug\snd\soundshaders\aughbar\aughbar_close2", 1 } };
			volume = 0.8;
			range = 50;
			rangeCurve = "closeShotCurve";
		};
		class aughbar_midShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\aughbar\aughbar_mid", 1 } };
            volume = 1.6252;
			range = 2000; 
			rangeCurve[] = {
				{ 0, 0.2 },
				{ 50, 1 },
				{ 300, 0 },
				{ 2000, 0 } };
		};
		class aughbar_distShot_SoundShader
		{
			samples[] = {
                { "hlc_wp_aug\snd\soundshaders\aughbar\aughbar_dist", 1 } };
			volume = 1.0;
			range = 2000;
			rangeCurve[] = {
				{ 0, 0 },
				{ 50, 0 },
				{ 300, 1 },
				{ 2000, 1 } };
		};
		class aughbar_tailDistant_SoundShader
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
		class aughbar_tailForest_SoundShader
		{
            samples[] = {
                { "hlc_wp_aug\snd\soundshaders\aughbar\aughbar_forest", 1 } };
            volume = " 1.675*((1-interior/1.4)*Forest/3)";
            range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class aughbar_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\aughbar\aughbar_Forest_mid", 1 }
        };
        volume = " 1.675*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
		class aughbar_tailHouses_SoundShader
		{
            samples[] = {
                { "hlc_wp_aug\snd\soundshaders\aughbar\aughbar_urban", 1 } };
            volume = "1.675*((1-interior/1.4)*houses/3)";
            range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class aughbar_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\aughbar\aughbar_urban_mid", 1 }
        };
        volume = "1.675*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
		class aughbar_tailInterior_SoundShader
		{
			samples[] = {
                { "hlc_wp_aug\snd\soundshaders\aughbar\aughbar_interior", 1 } };
			volume = "interior";
			range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class aughbar_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\aughbar\aughbar_interior_mid", 1 }
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
		class aughbar_tailMeadows_SoundShader
		{
			samples[] = {
                { "hlc_wp_aug\snd\soundshaders\aughbar\aughbar_meadow", 1 } };
            volume = " 1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class aughbar_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\aughbar\aughbar_meadow_mid", 1 }
        };
        volume = " 1.675*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
		class aughbar_tailTrees_SoundShader
		{
			samples[] = {
                { "hlc_wp_aug\snd\soundshaders\aughbar\aughbar_trees", 1 } };
            volume = "1.675*((1-interior/1.4)*trees/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class aughbar_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\aughbar\aughbar_trees_mid", 1 }
        };
        volume = " 1.675*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
		class aughbar_silencerShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_close", 1 } };
			volume = 1.0;
			range = 50;
			rangeCurve = "closeShotCurve";
		};
        class aughbar_silencerShot_mid_SoundShader
        {
            samples[] = {
                { "hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_mid", 1 } };
            volume = 1.0;
            range = 250;
            rangeCurve[] = {
                { 0, 0.2 },
                { 50, 1 },
                { 250, 0 }
            };
        };
		class aughbar_silencerTailForest_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailForest", 1 } };
			volume = "(1-interior/1.4)*forest/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class aughbar_silencerTailHouses_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailHouses", 1 } };
			volume = "(1-interior/1.4)*houses/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0 } };
			limitation = 1;
		};
		class aughbar_silencerTailInterior_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_indoor", 1 } };
			volume = "interior";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 50, 0.3 },
				{ 150, 0 } };
			limitation = 1;
		};
		class aughbar_silencerTailMeadows_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\aug\aug_suppressed_meadow", 1 } };
			volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class aughbar_silencerTailTrees_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_silencerTailTrees", 1 } };
			volume = "(1-interior/1.4)*trees/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};

		class augpara_Closure_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\augpara\AUGpara_first", 1 },
				{ "hlc_wp_aug\snd\soundshaders\augpara\AUGpara_first", 1 } };
        range = 15;
        volume = 0.87;
		};
		class augpara_closeShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\augpara\AUGpara_close", 1 } };
			volume = 0.78;
			range = 50;
			rangeCurve = "closeShotCurve";
		};
		class augpara_midShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\augpara\AUGpara_mid", 1 } };
			volume = 1.3;
			range = 1500;
			rangeCurve[] = {
				{ 0, 0.2 },
				{ 50, 1 },
				{ 300, 0 },
				{ 1500, 0 } };
		};
		class augpara_distShot_SoundShader
		{
			samples[] = {
                { "hlc_wp_aug\snd\soundshaders\augpara\AUGpara_dist", 1 } };
			volume = 1.0;
			range = 1500;
			rangeCurve[] = {
				{ 0, 0 },
				{ 50, 0 },
				{ 300, 1 },
				{ 1500, 1 } };
		};
		class augpara_tailDistant_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_taildistant", 1 } };
			volume = 0.4;
			range = 1500;
			rangeCurve[] = {
				{ 0, 0 },
				{ 300, 0.7 },
				{ 1500, 1 } };
			limitation = 1;
		};
		class augpara_tailForest_SoundShader
		{
			samples[] = {
                { "hlc_wp_aug\snd\soundshaders\augpara\AUGpara_forest", 1 } };
			volume = "1.675*((1-interior/1.4)*forest/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,0.7 },  
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class augpara_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\augpara\augpara_Forest_mid", 1 }
        };
        volume = " 1.675*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
		class augpara_tailHouses_SoundShader
		{
			samples[] = {
                { "hlc_wp_aug\snd\soundshaders\augpara\AUGpara_urban", 1 } };
			volume = "1.675*((1-interior/1.4)*houses/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class augpara_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\augpara\augpara_urban_mid", 1 }
        };
        volume = "1.675*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
		class augpara_tailInterior_SoundShader
		{
			samples[] = {
                { "hlc_wp_aug\snd\soundshaders\augpara\AUGpara_interior", 1 } };
			volume = "interior";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class augpara_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\augpara\augpara_interior_mid", 1 }
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
		class augpara_tailMeadows_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\AUGpara\AUgpara_meadow", 1 } };
			volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class AUGpara_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\AUGpara\AUGpara_meadow_mid", 1 }
        };
        volume = "2*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
		class augpara_tailTrees_SoundShader
		{
			samples[] = {
                { "hlc_wp_aug\snd\soundshaders\augpara\AUGpara_trees", 1 } };
			volume = "1.675*((1-interior/1.4)*trees/3)";
			range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class augpara_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_aug\snd\soundshaders\augpara\augpara_trees_mid", 1 }
        };
        volume = " 1.675*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
		class augpara_silencerShot_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\AUGpara\AUGpara_suppressed_close", 1 } };
			volume = 1.0;
            range = 50;
            rangeCurve[] = {
                { 0, 1 },
                { 50, 0 }
            };
		};
        class augpara_silencerShot_mid_SoundShader
        {
            samples[] = {
                { "hlc_wp_aug\snd\soundshaders\AUGpara\AUGpara_suppressed_mid", 1 } };
            volume = 1.0;
            range = 250;
            rangeCurve[] = {
                { 0, 0.2 },
                { 50, 1 },
                { 250, 0 }
            };
        };
		class augpara_silencerTailForest_SoundShader
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
		class augpara_silencerTailHouses_SoundShader
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
		class augpara_silencerTailInterior_SoundShader
		{
			samples[] = {
				{ "A3\Sounds_F\arsenal\weapons\SMG\Vermin\Vermin_silencerTailInterior", 1 } };
			volume = "interior";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 50, 0.3 },
				{ 150, 0 } };
			limitation = 1;
		};
		class augpara_silencerTailMeadows_SoundShader
		{
			samples[] = {
				{ "hlc_wp_aug\snd\soundshaders\AUGpara\AUGpara_suppressed_meadow", 1 } };
			volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
			range = 150;
			rangeCurve[] = {
				{ 0, 1 },
				{ 150, 0.3 } };
			limitation = 1;
		};
		class augpara_silencerTailTrees_SoundShader
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
};
