
class CfgSoundShaders
{

	//.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
	class FAL_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\generic\fal_first", 1 } };
        range = 25;
        volume = 0.87;
        rangeCurve[] = {
			{ 0, 1 },
			{ 25, 0 } };
	};
	class FAL_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\FAL\FAL_close", 1 }
		};
		volume = 0.7;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class FAL_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\FAL\fal_mid", 1 } };
        volume = 1;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.5 },
			{ 100, 1 },
			{ 300, 0 },
			{ 2500, 0 } };
	};
	class FAL_distShot_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_dist", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
	};
	class FAL_tailDistant_SoundShader
	{
		samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\mk18\mk18_taildistant", 1 } };
		volume = 1;
		range = 2000;
		rangeCurve[] = {
			{ 0, 0 },
            { 250, 0.2 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class FAL_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_forest", 1 } };
        volume = " 1.3*((1-interior/1.4)*Forest/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class FAL_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_forest_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
	class FAL_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_urban", 1 } };
        volume = "1.3*((1-interior/1.4)*houses/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class FAL_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_urban_mid", 1 }
        };
        volume = "1.3*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
	class FAL_tailInterior_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_indoor", 1 } };
        volume = " 1.3*((interior)*0.65)";
		range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class FAL_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_indoor_mid", 1 }
        };
        volume = " 1.3*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
	class FAL_tailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_meadows", 1 } };
        volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class FAL_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_meadows_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
	class FAL_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_trees", 1 } };   
        volume = " 1.3*((1-interior/1.4)*trees/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class FAL_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_trees_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
	class FAL_silencerShot_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_sil_close", 1 } };
		volume = 1.0;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
    class FAL_silencerShot_mid_SoundShader
    {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_sil_mid", 1 } };
        volume = 1.0;
        range = 350;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 350, 0 }
        };
    };
	class FAL_silencerTailForest_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailForest", 1 } };
		volume = "(1-interior/1.4)*forest/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class FAL_silencerTailHouses_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailHouses", 1 } };
		volume = "(1-interior/1.4)*houses/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0 } };
		limitation = 1;
	};
	class FAL_silencerTailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\FAL\fal_sil_close_tail_indoor", 1 } };
		volume = "interior";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 50, 0.3 },
			{ 150, 0 } };
		limitation = 1;
	};
	class FAL_silencerTailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_sil_close_tail", 1 } };
		volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class FAL_silencerTailTrees_SoundShader
	{
		samples[] = {
			{ "A3\Sounds_F\arsenal\weapons\LongRangeRifles\DMR_01_Rahim\DMR01_silencerTailTrees", 1 } };
		volume = "(1-interior/1.4)*trees/3";
		range = 150;
		rangeCurve[] = {
			{ 0, 1 },
			{ 150, 0.3 } };
		limitation = 1;
	};
	class FAL2_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\FAL\FAL2_close", 1 }
		};
		volume = 0.7;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class FAL2_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\FAL\fal_mid", 1 } };
        volume = 1;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.5 },
			{ 100, 1 },
			{ 300, 0 },
			{ 2500, 0 } };
	};
	class FAL2_distShot_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\FAL2_dist", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
	};
	class FAL2_tailDistant_SoundShader
	{
		samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\mk18\mk18_taildistant", 1 } };
        volume = 1;
		range = 2000;
		rangeCurve[] = {
            { 0, 0 },
            { 150, 0.2 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class FAL2_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_forest", 1 } };
        volume = " 1.3*((1-interior/1.4)*Forest/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class FAL2_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_forest_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
	class FAL2_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_urban", 1 } };
        volume = "1.3*((1-interior/1.4)*houses/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class FAL2_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_urban_mid", 1 }
        };
        volume = "1.3*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
	class FAL2_tailInterior_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_indoor", 1 } };
        volume = " 1.3*((interior)*0.65)";
		range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class FAL2_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_indoor_mid", 1 }
        };
        volume = " 1.2*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
	class FAL2_tailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_meadows", 1 } };
        volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class FAL2_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_meadows_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
	class FAL2_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_trees", 1 } };   
        volume = " 1.3*((1-interior/1.4)*trees/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class FAL2_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\FAL\fal_trees_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
	class OSW_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\OSW\OSW_close", 1 }
		};
		volume = 0.65;
		range = 100;
		rangeCurve = "closeShotCurve";
	};
	class OSW_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_WP_FAL\snd\soundshaders\OSW\OSW_mid", 1 } };
        volume = 1.6252;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0.5 },
			{ 100, 1 },
			{ 300, 0 },
			{ 2500, 0 } };
	};
	class OSW_distShot_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\OSW\OSW_dist", 1 } };
		volume = 1.0;
		range = 2500;
		rangeCurve[] = {
			{ 0, 0 },
			{ 100, 0 },
			{ 300, 1 },
			{ 2500, 1 } };
	};
	class OSW_tailDistant_SoundShader
	{
		samples[] = {
			{ "\A3\Sounds_F\arsenal\weapons\LongRangeRifles\mk18\mk18_taildistant", 1 } };
        volume = 1;
		range = 2000;
		rangeCurve[] = {
            { 0, 0 },
            { 150, 0.2 },
			{ 600, 0.7 },
			{ 2000, 1 } };
		limitation = 1;
	};
	class OSW_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\OSW\OSW_forest", 1 } };
        volume = " 1.3*((1-interior/1.4)*Forest/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class OSW_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\OSW\OSW_forest_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
	class OSW_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\OSW\OSW_urban", 1 } };
        volume = "1.3*((1-interior/1.4)*houses/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class OSW_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\OSW\OSW_urban_mid", 1 }
        };
        volume = "1.3*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
	class OSW_tailInterior_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\OSW\OSW_indoor", 1 } };
        volume = "1.3*((interior)*0.65)";
		range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class OSW_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\OSW\OSW_indoor_mid", 1 }
        };
        volume = "1.3*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
	class OSW_tailMeadows_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\OSW\OSW_meadows", 1 } };
        volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class OSW_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\OSW\OSW_meadows_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
	class OSW_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\OSW\OSW_trees", 1 } };
        volume = "1.3*((1-interior/1.4)*trees/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class OSW_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_WP_FAL\snd\soundshaders\OSW\OSW_trees_mid", 1 }
        };
        volume = " 1.3*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
};
