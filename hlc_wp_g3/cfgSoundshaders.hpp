
class CfgSoundShaders {
    //.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
    class G3_Closure_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_first", 1 }
        };
        range = 15;
        volume = 0.87;
    };
    class G3_closeShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_close1", 1 },
            { "hlc_WP_G3\snd\soundshaders\generic\G3_close2", 1 }
        };
        volume = 0.8;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class G3_midShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_mid", 1 }
        };
        volume = 1;
        range = 2500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 100, 1 },
            { 300, 0 },
            { 2500, 0 }
        };
    };
    class G3_distShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_dist", 1 }
        };
        volume = 1.0;
        range = 2500;
        rangeCurve[] = {
            { 0, 0 },
            { 100, 0 },
            { 300, 1 },
            { 2500, 1 }
        };
    };
    class G3_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.2 },
            { 600, 0.7 },
            { 2000, 1 } };
        limitation = 1;
    };
    class G3_tailForest_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_forest", 1 }
        };
        volume = "1.6*((1-interior/1.4)*Forest/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class G3_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_forest_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
    class G3_tailHouses_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_urban", 1 }
        };
        volume = "1.6*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class g3_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_urban_mid", 1 }
        };
        volume = "1.6*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
    class G3_tailInterior_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_interior", 1 }
        };
        volume = "1.6*((interior)*0.65)";
        range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class G3_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_interior_mid", 1 }
        };
        volume = " 1.6*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class G3_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_meadows", 1 }
        };
        volume = "1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class G3_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_meadows_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class G3_tailTrees_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_trees", 1 }
        };
        volume = "1.6*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class G3_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_trees_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class G3_silencerShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_close_suppressed", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class G3_silencerShot_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3a3_suppressed_mid", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class G3_silencerTailForest_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_close_suppressed_meadows", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class G3_silencerTailHouses_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_close_suppressed_meadows", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class G3_silencerTailInterior_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_close_suppressed_interior", 1 }
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
    class G3_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_close_suppressed_meadows", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class G3_silencerTailTrees_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_close_suppressed_meadows", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class G3KA4_closeShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_close1", 1 },
            { "hlc_WP_G3\snd\soundshaders\generic\G3_close2", 1 }
        };
        volume = 0.8;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class G3KA4_midShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_mid", 1 }
        };
        volume = 1;
        range = 2500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 100, 1 },
            { 300, 0 },
            { 2500, 0 }
        };
    };
    class G3KA4_distShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_dist", 1 }
        };
        volume = 1.0;
        range = 2500;
        rangeCurve[] = {
            { 0, 0 },
            { 100, 0 },
            { 300, 1 },
            { 2500, 1 }
        };
    };
    class G3KA4_tailDistant_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_dist", 1 }
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
    class G3KA4_tailForest_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_forest", 1 }
        };
        volume = "1.6*((1-interior/1.4)*forest/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class G3KA4_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_forest_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
    class G3KA4_tailHouses_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_urban", 1 }
        };
        volume = "1.6*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class G3KA4_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_urban_mid", 1 }
        };
        volume = "1.6*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
    class G3KA4_tailInterior_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_interior", 1 }
        };
        volume = "1.6*((interior)*0.65)";
        range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class G3KA4_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_interior_mid", 1 }
        };
        volume = " 1.6*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class G3KA4_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_meadows", 1 }
        };
        volume = "1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class G3KA4_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_meadows_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class G3KA4_tailTrees_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_trees", 1 }
        };
        volume = "1.6*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class G3KA4_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_trees_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    
    class G3SG1_Closure_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_first", 1 }
        };
        range = 15;
        volume = 0.87;
    };
    class G3SG1_closeShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_close1", 1 },
            { "hlc_WP_G3\snd\soundshaders\generic\G3_close2", 1 }
        };
        volume = 0.8;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class G3SG1_midShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_mid", 1 }
        };
        volume = 1;
        range = 2500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 100, 1 },
            { 300, 0 },
            { 2500, 0 }
        };
    };
    class G3SG1_distShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_dist", 1 }
        };
        volume = 1.0;
        range = 2500;
        rangeCurve[] = {
            { 0, 0 },
            { 100, 0 },
            { 300, 1 },
            { 2500, 1 }
        };
    };
    class G3SG1_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant", 1 }
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
    class G3SG1_tailForest_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_forest", 1 }
        };
        volume = "1.6*((1-interior/1.4)*forest/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class G3SG1_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_forest_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
    class G3SG1_tailHouses_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_urban", 1 }
        };
        volume = "1.6*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class G3SG1_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_urban_mid", 1 }
        };
        volume = "1.6*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
    class G3SG1_tailInterior_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_interior", 1 }
        };
        volume = "1.6*((interior)*0.65)";
        range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class G3SG1_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\G3_interior_mid", 1 }
        };
        volume = " 1.6*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class G3SG1_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_meadows", 1 }
        };
        volume = "1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class G3SG1_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_meadows_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class G3SG1_tailTrees_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_trees", 1 }
        };
        volume = "1.6*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class G3SG1_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\generic\g3_trees_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    

    class HK51_closeShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\HK51_close1", 1 },
            { "hlc_WP_G3\snd\soundshaders\hk51\HK51_close2", 1 }
        };
        volume = 0.8;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class HK51_midShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\HK51_mid", 1 }
        };
        volume = 1;
        range = 2500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 100, 1 },
            { 300, 0 },
            { 2500, 0 }
        };
    };
    class HK51_distShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\HK51_dist", 1 }
        };
        volume = 1.0;
        range = 2500;
        rangeCurve[] = {
            { 0, 0 },
            { 100, 0 },
            { 300, 1 },
            { 2500, 1 }
        };
    };
    class HK51_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant", 1 }
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
    class HK51_tailForest_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\HK51_Forest", 1 }
        };
        volume = "1.6*((1-interior/1.4)*forest/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class HK51_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\HK51_Forest_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
    class HK51_tailHouses_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\HK51_Urban", 1 }
        };
        volume = "1.6*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class hk51_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\HK51_Urban_mid", 1 }
        };
        volume = "1.6*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
    class HK51_tailInterior_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\HK51_interior", 1 }
        };
        volume = "1.6*((interior)*0.65)";
        range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class HK51_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\HK51_interior_mid", 1 }
        };
        volume = " 1.6*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class HK51_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\hk51_meadows", 1 }
        };
        volume = "1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class hk51_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\hk51_meadows_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class HK51_tailTrees_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\HK51_Trees", 1 }
        };
        volume = "1.6*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class hk51_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\HK51_Forest_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };

    class HK51_silencerShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\hk51_close_suppressed", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class HK51_silencerShot_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\HK51_mid_suppressed", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class HK51_silencerTailForest_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\hk51_close_suppressed_meadows", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class HK51_silencerTailHouses_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\hk51_close_suppressed_meadows", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class HK51_silencerTailInterior_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\hk51_close_suppressed_interior", 1 }
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
    class HK51_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\hk51_close_suppressed_meadows", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class HK51_silencerTailTrees_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\hk51\hk51_close_suppressed_meadows", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };

    class PSG1_closeShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\psg1\psg1_close2", 1 },
            { "hlc_WP_G3\snd\soundshaders\psg1\psg1_close1", 1 }
        };
        volume = 0.8;
        range = 100;
        rangeCurve = "closeShotCurve";
    };
    class PSG1_midShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\psg1\PSG1_mid", 1 }
        };
        volume = 1;
        range = 2500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 100, 1 },
            { 300, 0 },
            { 2500, 0 }
        };
    };
    class PSG1_distShot_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\psg1\PSG1_dist", 1 }
        };
        volume = 1.0;
        range = 2500;
        rangeCurve[] = {
            { 0, 0 },
            { 100, 0 },
            { 300, 1 },
            { 2500, 1 }
        };
    };
    class PSG1_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.2 },
            { 600, 0.7 },
            { 2000, 1 } };
        limitation = 1;
    };
    class PSG1_tailForest_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\psg1\PSG1_forest", 1 }
        };
        volume = "1.6*((1-interior/1.4)*forest/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class PSG1_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\psg1\PSG1_forest_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
    class PSG1_tailHouses_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\psg1\PSG1_urban", 1 }
        };
        volume = "1.6*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class psg1_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\psg1\PSG1_urban_mid", 1 }
        };
        volume = "1.6*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
    class PSG1_tailInterior_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\psg1\PSG1_interior", 1 }
        };
        volume = "(interior)*0.65";
        range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class PSG1_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\psg1\PSG1_interior_mid", 1 }
        };
        volume = " 1.6*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class PSG1_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\psg1\PSG1_meadows", 1 }
        };
        volume = "1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class PSG1_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\psg1\PSG1_meadows_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class PSG1_tailTrees_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\psg1\PSG1_tree", 1 }
        };
        volume = "1.6*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class PSG1_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_WP_G3\snd\soundshaders\psg1\PSG1_tree_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    //.LAWD ALL MIGHTY, HOW BLOODY COMPLEX THIS MODDING LARK IS GETTING
    class hk33_Closure_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\g3_first", 1 },
            { "hlc_wp_g3\snd\g3_first", 1 }
        };
        range = 15;
        volume = 0.87;
    };
    class hk33_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\hk33_close1", 1 },
            { "hlc_wp_g3\snd\soundshaders\hk33\hk33_close2", 1 }
        };
        volume = 0.8;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class hk33_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\hk33_mid", 1 }
        };
        volume = 1;
        range = 2500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 100, 1 },
            { 300, 0 },
            { 2500, 0 }
        };
    };
    class hk33_distShot_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\hk33_dist", 1 }
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
    class hk33_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.2 },
            { 600, 0.7 },
            { 2000, 1 } };
        limitation = 1;
    };
    class hk33_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_forest", 1 }
        };
        volume = "1.6*((1-interior/1.4)*forest/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class hk33_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_forest_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
    class hk33_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_urban", 1 }
        };
        volume = "1.6*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class hk33_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_urban_mid", 1 }
        };
        volume = "1.6*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
    class hk33_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\hk33_interior", 1 }
        };
        volume = "(interior)*0.65";
        range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class hk33_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\hk33_interior_mid", 1 }
        };
        volume = " 1.6*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class hk33_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_meadows", 1 }
        };
        volume = "1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class hk33_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_meadows_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class hk33_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_trees", 1 }
        };
        volume = "1.6*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class hk33_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_trees_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class hk33_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_close_suppressed", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class hk33_silencerShot_mid_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_mid_suppressed", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class hk33_silencerTailForest_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_close_suppressed_meadows", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class hk33_silencerTailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_close_suppressed_meadows", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class hk33_silencerTailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_close_suppressed_interior", 1 }
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
    class hk33_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_close_suppressed_meadows", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class hk33_silencerTailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk33\HK33_close_suppressed_meadows", 1 }
        };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class hk53_closeShot_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\hk53_close1", 1 },
            { "hlc_wp_g3\snd\soundshaders\hk53\hk53_close2", 1 }
        };
        volume = 0.8;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class hk53_midShot_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\hk53_mid", 1 }
        };
        volume = 1;
        range = 2500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 2000, 0 }
        };
    };
    class hk53_distShot_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\hk53_dist", 1 }
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
    class hk53_tailDistant_SoundShader {
        samples[] = {
            { "\A3\Sounds_F\arsenal\weapons\Rifles\mk20\mk20_taildistant", 1 }
        };
        volume = 1;
        range = 2000;
        rangeCurve[] = {
            { 0, 0 },
            { 250, 0.2 },
            { 600, 0.7 },
            { 2000, 1 } };
        limitation = 1;
    };
    class hk53_tailForest_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\hk53_forest", 1 }
        };
        volume = "1.6*((1-interior/1.4)*forest/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class hk53_tailForest_mid_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\hk53_forest_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*Forest/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 1800, 1 }
		}; 
        range = 1800;
        limitation = 1;
    };
    class hk53_tailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\hk53_urban", 1 }
        };
        volume = "1.6*((1-interior/1.4)*houses/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class hk53_tailHouses_mid_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\hk53_urban_mid", 1 }
        };
        volume = "1.6*((1-interior/1.4)*houses/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000, 1 }
		}; 
        range = 2000;
        limitation = 1;
    };
    class hk53_tailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\hk53_interior", 1 }
        };
        volume = "(interior)*0.65";
        range = 250;
        rangeCurve[] = { 
            { 0,0.7 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };

    class hk53_tailInterior_mid_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\hk53_interior_mid", 1 }
        };
        volume = " 1.6*((interior)*0.65)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 0.4 }, 
            { 320, 0 } 
		}; 
        range = 500;
        limitation = 1;
    };
    class hk53_tailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\hk53_meadows", 1 }
        };
        volume = "1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class hk53_tailMeadows_mid_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\HK53_meadows_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class hk53_tailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\hk53_trees", 1 }
        };
        volume = "1.6*((1-interior/1.4)*trees/3)";
        range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
    class hk53_tailTrees_mid_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\HK53_trees_mid", 1 }
        };
        volume = " 1.6*((1-interior/1.4)*trees/3)";
        rangeCurve[] = { 
			{ 0,0 }, 
			{ 250, 1 }, 
            { 2000,1}
		}; 
        range = 2000;
        limitation = 1;
    };
    class hk53_silencerShot_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\HK53_close_suppressed", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class hk53_silencerShot_mid_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\hk33_mid_suppressed", 1 }
        };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class hk53_silencerTailForest_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\HK53_close_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class hk53_silencerTailHouses_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\HK53_close_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 }
        };
        limitation = 1;
    };
    class hk53_silencerTailInterior_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\HK53_close_suppressed_interior", 1 }
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
    class hk53_silencerTailMeadows_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\hk53_close_suppressed_meadow", 1 }
        };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 }
        };
        limitation = 1;
    };
    class hk53_silencerTailTrees_SoundShader {
        samples[] = {
            { "hlc_wp_g3\snd\soundshaders\hk53\Hk53_close_suppressed_meadow", 1 }
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
