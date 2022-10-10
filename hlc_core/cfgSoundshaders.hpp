class CfgSoundShaders
{
	class NIA_GL_Closure_SoundShader
	{
		samples[] = {
			{ "hlc_core\sound\GL\GL_striker", 1 } };
        volume = 1;
        range = 10;
        rangeCurve[] = {
			{ 0, 1 },
			{ 10, 0 } };
	};
	class NIA_GL_closeShot_SoundShader
	{
		samples[] = {
			{ "hlc_core\sound\GL\GL_close", 1 } };
		volume = 0.7;
		range = 50;
		rangeCurve = "closeShotCurve";
	};
	class NIA_GL_midShot_SoundShader
	{
		samples[] = {
			{ "hlc_core\sound\GL\GL_mid", 1 } };
        volume = 1.0;
        range = 250;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 250, 0 }
        };
	};
	class NIA_GL_tailInterior_SoundShader
	{
		samples[] = {
			{ "hlc_core\sound\GL\GL_indoor", 1 } };
        volume = "1.4*((interior)*0.65)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
	class NIA_GL_tailTrees_SoundShader
	{
		samples[] = {
            { "hlc_core\sound\GL\GL_trees", 1 } };
        volume = " 1.4*((1-interior/1.4)*trees/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
	class NIA_GL_tailForest_SoundShader
	{
		samples[] = {
            { "hlc_core\sound\GL\GL_forest", 1 } };
		volume = "1.4*(1-interior/1.4)*forest/3";
		range = 250;
        	rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    	};
	class NIA_GL_tailMeadows_SoundShader
	{
		samples[] = {
			{ "hlc_core\sound\GL\GL_meadows", 1 } };
        volume = "1.4*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
	class NIA_GL_tailHouses_SoundShader
	{
		samples[] = {
            { "hlc_core\sound\GL\GL_Urban", 1 } };
        volume = "1.4*((1-interior/1.4)*houses/3)";
		range = 250;
        rangeCurve[] = { 
            { 0,1 }, 
            { 250, 0 } 
        }; 
        limitation = 1;
    };
//----------------------- NEW ACR FIRING SOUNDS -----------------------------//	
	class NIA_ACR_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\ACR\close_1.ogg",1},
		{"\hlc_core\sound\weapon\ACR\close_2.ogg",1},
		{"\hlc_core\sound\weapon\ACR\close_3.ogg",1},
		{"\hlc_core\sound\weapon\ACR\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_ACR_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\ACR\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_ACR_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\ACR\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_ACR_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\ACR\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_ACR_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\ACR\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_ACR_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\ACR\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW ACRL FIRING SOUNDS -----------------------------//	
	class NIA_ACRL_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\ACRL\close_1.ogg",1},
		{"\hlc_core\sound\weapon\ACRL\close_2.ogg",1},
		{"\hlc_core\sound\weapon\ACRL\close_3.ogg",1},
		{"\hlc_core\sound\weapon\ACRL\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_ACRL_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\ACRL\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_ACRL_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\ACRL\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_ACRL_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\ACRL\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_ACRL_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\ACRL\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_ACRL_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\ACRL\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW AK74 FIRING SOUNDS -----------------------------//	
	class NIA_AK74_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AK74\close_1.ogg",1},
		{"\hlc_core\sound\weapon\AK74\close_2.ogg",1},
		{"\hlc_core\sound\weapon\AK74\close_3.ogg",1},
		{"\hlc_core\sound\weapon\AK74\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_AK74_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AK74\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_AK74_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AK74\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_AK74_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AK74\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_AK74_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AK74\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_AK74_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AK74\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW AKM FIRING SOUNDS -----------------------------//	
	class NIA_AKM_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AKM\close_1.ogg",1},
		{"\hlc_core\sound\weapon\AKM\close_2.ogg",1},
		{"\hlc_core\sound\weapon\AKM\close_3.ogg",1},
		{"\hlc_core\sound\weapon\AKM\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_AKM_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AKM\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_AKM_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AKM\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_AKM_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AKM\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_AKM_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AKM\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_AKM_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AKM\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW AKS FIRING SOUNDS -----------------------------//	
	class NIA_AKS_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AKS\close_1.ogg",1},
		{"\hlc_core\sound\weapon\AKS\close_2.ogg",1},
		{"\hlc_core\sound\weapon\AKS\close_3.ogg",1},
		{"\hlc_core\sound\weapon\AKS\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_AKS_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AKS\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_AKS_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AKS\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_AKS_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AKS\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_AKS_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AKS\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_AKS_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AKS\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW AR15 FIRING SOUNDS -----------------------------//	
	class NIA_AR15_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AR15\close_1.ogg",1},
		{"\hlc_core\sound\weapon\AR15\close_2.ogg",1},
		{"\hlc_core\sound\weapon\AR15\close_3.ogg",1},
		{"\hlc_core\sound\weapon\AR15\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_AR15_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AR15\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_AR15_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AR15\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_AR15_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AR15\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_AR15_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AR15\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_AR15_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AR15\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW AR15300 FIRING SOUNDS -----------------------------//	
	class NIA_AR15300_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AR15300\close_1.ogg",1},
		{"\hlc_core\sound\weapon\AR15300\close_2.ogg",1},
		{"\hlc_core\sound\weapon\AR15300\close_3.ogg",1},
		{"\hlc_core\sound\weapon\AR15300\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_AR15300_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AR15300\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_AR15300_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AR15300\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_AR15300_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AR15300\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_AR15300_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AR15300\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_AR15300_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AR15300\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW AUG FIRING SOUNDS -----------------------------//	
	class NIA_AUG_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AUG\close_1.ogg",1},
		{"\hlc_core\sound\weapon\AUG\close_2.ogg",1},
		{"\hlc_core\sound\weapon\AUG\close_3.ogg",1},
		{"\hlc_core\sound\weapon\AUG\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_AUG_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AUG\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_AUG_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AUG\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_AUG_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AUG\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_AUG_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AUG\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_AUG_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AUG\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW AWC FIRING SOUNDS -----------------------------//	
	class NIA_AWC_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AWC\close_1.ogg",1},
		{"\hlc_core\sound\weapon\AWC\close_2.ogg",1},
		{"\hlc_core\sound\weapon\AWC\close_3.ogg",1},
		{"\hlc_core\sound\weapon\AWC\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_AWC_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AWC\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_AWC_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AWC\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_AWC_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AWC\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_AWC_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AWC\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_AWC_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AWC\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW AWCSD FIRING SOUNDS -----------------------------//	
	class NIA_AWCSD_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AWCSD\close_1.ogg",1},
		{"\hlc_core\sound\weapon\AWCSD\close_2.ogg",1},
		{"\hlc_core\sound\weapon\AWCSD\close_3.ogg",1},
		{"\hlc_core\sound\weapon\AWCSD\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=10;
		rangecurve[] = {{0,1.5},{10,0}};
	};
	class NIA_AWCSD_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AWCSD\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=50;
		rangecurve[] = {{0,0},{18,1},{50,0}};
	};
	class NIA_AWCSD_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AWCSD\medium_distance.ogg",1}};
		volume=1;
		range=100; 
		rangecurve[] = {{0,0},{7,0},{50,1},{100,0}};
	};
	class NIA_AWCSD_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AWCSD\far_distance.ogg",1}};
		volume=1;
		range=150; 
		rangecurve[] = {{0,0},{50,0},{100,1.25},{150,0}};
	};
	class NIA_AWCSD_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AWCSD\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=10;
		rangecurve[] = {{0,1.5},{10,0}};
	};
	class NIA_AWCSD_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\AWCSD\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=50;
		rangecurve[] = {{0,0},{18,1},{50,0}};
	};
//----------------------- NEW FN3011 FIRING SOUNDS -----------------------------//	
	class NIA_FN3011_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\FN3011\close_1.ogg",1},
		{"\hlc_core\sound\weapon\FN3011\close_2.ogg",1},
		{"\hlc_core\sound\weapon\FN3011\close_3.ogg",1},
		{"\hlc_core\sound\weapon\FN3011\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_FN3011_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\FN3011\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_FN3011_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\FN3011\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_FN3011_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\FN3011\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_FN3011_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\FN3011\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_FN3011_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\FN3011\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW FNFAL FIRING SOUNDS -----------------------------//	
	class NIA_FNFAL_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\FNFAL\close_1.ogg",1},
		{"\hlc_core\sound\weapon\FNFAL\close_2.ogg",1},
		{"\hlc_core\sound\weapon\FNFAL\close_3.ogg",1},
		{"\hlc_core\sound\weapon\FNFAL\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_FNFAL_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\FNFAL\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_FNFAL_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\FNFAL\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_FNFAL_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\FNFAL\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_FNFAL_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\FNFAL\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_FNFAL_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\FNFAL\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW G3 FIRING SOUNDS -----------------------------//	
	class NIA_G3_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G3\close_1.ogg",1},
		{"\hlc_core\sound\weapon\G3\close_2.ogg",1},
		{"\hlc_core\sound\weapon\G3\close_3.ogg",1},
		{"\hlc_core\sound\weapon\G3\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_G3_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G3\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_G3_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G3\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_G3_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G3\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_G3_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G3\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_G3_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G3\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW G36 FIRING SOUNDS -----------------------------//	
	class NIA_G36_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G36\close_1.ogg",1},
		{"\hlc_core\sound\weapon\G36\close_2.ogg",1},
		{"\hlc_core\sound\weapon\G36\close_3.ogg",1},
		{"\hlc_core\sound\weapon\G36\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_G36_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G36\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_G36_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G36\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_G36_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G36\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_G36_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G36\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_G36_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G36\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW G36C FIRING SOUNDS -----------------------------//	
	class NIA_G36C_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G36C\close_1.ogg",1},
		{"\hlc_core\sound\weapon\G36C\close_2.ogg",1},
		{"\hlc_core\sound\weapon\G36C\close_3.ogg",1},
		{"\hlc_core\sound\weapon\G36C\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_G36C_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G36C\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_G36C_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G36C\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_G36C_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G36C\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_G36C_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G36C\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_G36C_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\G36C\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW HK33 FIRING SOUNDS -----------------------------//	
	class NIA_HK33_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK33\close_1.ogg",1},
		{"\hlc_core\sound\weapon\HK33\close_2.ogg",1},
		{"\hlc_core\sound\weapon\HK33\close_3.ogg",1},
		{"\hlc_core\sound\weapon\HK33\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_HK33_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK33\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_HK33_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK33\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_HK33_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK33\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_HK33_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK33\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_HK33_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK33\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW HK416 FIRING SOUNDS -----------------------------//	
	class NIA_HK416_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416\close_1.ogg",1},
		{"\hlc_core\sound\weapon\HK416\close_2.ogg",1},
		{"\hlc_core\sound\weapon\HK416\close_3.ogg",1},
		{"\hlc_core\sound\weapon\HK416\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_HK416_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_HK416_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_HK416_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_HK416_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_HK416_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW HK416S FIRING SOUNDS -----------------------------//	
	class NIA_HK416S_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416S\close_1.ogg",1},
		{"\hlc_core\sound\weapon\HK416S\close_2.ogg",1},
		{"\hlc_core\sound\weapon\HK416S\close_3.ogg",1},
		{"\hlc_core\sound\weapon\HK416S\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_HK416S_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416S\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_HK416S_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416S\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_HK416S_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416S\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_HK416S_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416S\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_HK416S_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416S\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW HK416L FIRING SOUNDS -----------------------------//	
	class NIA_HK416L_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416L\close_1.ogg",1},
		{"\hlc_core\sound\weapon\HK416L\close_2.ogg",1},
		{"\hlc_core\sound\weapon\HK416L\close_3.ogg",1},
		{"\hlc_core\sound\weapon\HK416L\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_HK416L_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416L\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_HK416L_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416L\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_HK416L_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416L\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_HK416L_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416L\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_HK416L_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\HK416L\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW M4 FIRING SOUNDS -----------------------------//	
	class NIA_M4_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M4\close_1.ogg",1},
		{"\hlc_core\sound\weapon\M4\close_2.ogg",1},
		{"\hlc_core\sound\weapon\M4\close_3.ogg",1},
		{"\hlc_core\sound\weapon\M4\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_M4_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M4\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_M4_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M4\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_M4_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M4\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_M4_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M4\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_M4_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M4\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW M14 FIRING SOUNDS -----------------------------//	
	class NIA_M14_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M14\close_1.ogg",1},
		{"\hlc_core\sound\weapon\M14\close_2.ogg",1},
		{"\hlc_core\sound\weapon\M14\close_3.ogg",1},
		{"\hlc_core\sound\weapon\M14\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_M14_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M14\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_M14_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M14\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_M14_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M14\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_M14_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M14\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_M14_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M14\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW M14sopmod FIRING SOUNDS -----------------------------//	
	class NIA_M14sopmod_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M14sopmod\close_1.ogg",1},
		{"\hlc_core\sound\weapon\M14sopmod\close_2.ogg",1},
		{"\hlc_core\sound\weapon\M14sopmod\close_3.ogg",1},
		{"\hlc_core\sound\weapon\M14sopmod\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_M14sopmod_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M14sopmod\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_M14sopmod_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M14sopmod\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_M14sopmod_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M14sopmod\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_M14sopmod_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M14sopmod\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_M14sopmod_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M14sopmod\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW M16 FIRING SOUNDS -----------------------------//	
	class NIA_M16_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M16\close_1.ogg",1},
		{"\hlc_core\sound\weapon\M16\close_2.ogg",1},
		{"\hlc_core\sound\weapon\M16\close_3.ogg",1},
		{"\hlc_core\sound\weapon\M16\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_M16_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M16\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_M16_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M16\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_M16_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M16\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_M16_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M16\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_M16_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M16\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW M60E4 FIRING SOUNDS -----------------------------//	
	class NIA_M60E4_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M60E4\close_1.ogg",1},
		{"\hlc_core\sound\weapon\M60E4\close_2.ogg",1},
		{"\hlc_core\sound\weapon\M60E4\close_3.ogg",1},
		{"\hlc_core\sound\weapon\M60E4\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_M60E4_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M60E4\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_M60E4_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M60E4\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_M60E4_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M60E4\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_M60E4_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M60E4\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_M60E4_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M60E4\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW M249 FIRING SOUNDS -----------------------------//	
	class NIA_M249_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M249\close_1.ogg",1},
		{"\hlc_core\sound\weapon\M249\close_2.ogg",1},
		{"\hlc_core\sound\weapon\M249\close_3.ogg",1},
		{"\hlc_core\sound\weapon\M249\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_M249_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M249\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_M249_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M249\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_M249_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M249\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_M249_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M249\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_M249_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\M249\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW Mauser FIRING SOUNDS -----------------------------//	
	class NIA_Mauser_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Mauser\close_1.ogg",1},
		{"\hlc_core\sound\weapon\Mauser\close_2.ogg",1},
		{"\hlc_core\sound\weapon\Mauser\close_3.ogg",1},
		{"\hlc_core\sound\weapon\Mauser\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_Mauser_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Mauser\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_Mauser_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Mauser\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_Mauser_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Mauser\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_Mauser_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Mauser\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_Mauser_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Mauser\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW MG3 FIRING SOUNDS -----------------------------//	
	class NIA_MG3_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MG3\close_1.ogg",1},
		{"\hlc_core\sound\weapon\MG3\close_2.ogg",1},
		{"\hlc_core\sound\weapon\MG3\close_3.ogg",1},
		{"\hlc_core\sound\weapon\MG3\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_MG3_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MG3\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_MG3_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MG3\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_MG3_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MG3\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_MG3_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MG3\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_MG3_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MG3\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW MK48 FIRING SOUNDS -----------------------------//	
	class NIA_MK48_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MK48\close_1.ogg",1},
		{"\hlc_core\sound\weapon\MK48\close_2.ogg",1},
		{"\hlc_core\sound\weapon\MK48\close_3.ogg",1},
		{"\hlc_core\sound\weapon\MK48\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_MK48_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MK48\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_MK48_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MK48\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_MK48_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MK48\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_MK48_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MK48\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_MK48_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MK48\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW MP5 FIRING SOUNDS -----------------------------//	
	class NIA_MP5_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MP5\close_1.ogg",1},
		{"\hlc_core\sound\weapon\MP5\close_2.ogg",1},
		{"\hlc_core\sound\weapon\MP5\close_3.ogg",1},
		{"\hlc_core\sound\weapon\MP5\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_MP5_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MP5\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_MP5_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MP5\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_MP5_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MP5\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_MP5_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MP5\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_MP5_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\MP5\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW P226 FIRING SOUNDS -----------------------------//	
	class NIA_P226_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P226\close_1.ogg",1},
		{"\hlc_core\sound\weapon\P226\close_2.ogg",1},
		{"\hlc_core\sound\weapon\P226\close_3.ogg",1},
		{"\hlc_core\sound\weapon\P226\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_P226_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P226\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_P226_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P226\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_P226_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P226\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_P226_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P226\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_P226_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P226\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW P227 FIRING SOUNDS -----------------------------//	
	class NIA_P227_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P227\close_1.ogg",1},
		{"\hlc_core\sound\weapon\P227\close_2.ogg",1},
		{"\hlc_core\sound\weapon\P227\close_3.ogg",1},
		{"\hlc_core\sound\weapon\P227\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_P227_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P227\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_P227_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P227\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_P227_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P227\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_P227_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P227\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_P227_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P227\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW P228 FIRING SOUNDS -----------------------------//	
	class NIA_P228_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P228\close_1.ogg",1},
		{"\hlc_core\sound\weapon\P228\close_2.ogg",1},
		{"\hlc_core\sound\weapon\P228\close_3.ogg",1},
		{"\hlc_core\sound\weapon\P228\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_P228_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P228\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_P228_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P228\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_P228_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P228\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_P228_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P228\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_P228_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\P228\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW RPK FIRING SOUNDS -----------------------------//	
	class NIA_RPK_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\RPK\close_1.ogg",1},
		{"\hlc_core\sound\weapon\RPK\close_2.ogg",1},
		{"\hlc_core\sound\weapon\RPK\close_3.ogg",1},
		{"\hlc_core\sound\weapon\RPK\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_RPK_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\RPK\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_RPK_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\RPK\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_RPK_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\RPK\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_RPK_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\RPK\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_RPK_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\RPK\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW RPK74 FIRING SOUNDS -----------------------------//	
	class NIA_RPK74_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\RPK74\close_1.ogg",1},
		{"\hlc_core\sound\weapon\RPK74\close_2.ogg",1},
		{"\hlc_core\sound\weapon\RPK74\close_3.ogg",1},
		{"\hlc_core\sound\weapon\RPK74\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_RPK74_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\RPK74\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_RPK74_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\RPK74\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_RPK74_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\RPK74\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_RPK74_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\RPK74\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_RPK74_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\RPK74\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW Saiga12K FIRING SOUNDS -----------------------------//	
	class NIA_Saiga12K_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Saiga12K\close_1.ogg",1},
		{"\hlc_core\sound\weapon\Saiga12K\close_2.ogg",1},
		{"\hlc_core\sound\weapon\Saiga12K\close_3.ogg",1},
		{"\hlc_core\sound\weapon\Saiga12K\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_Saiga12K_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Saiga12K\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_Saiga12K_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Saiga12K\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_Saiga12K_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Saiga12K\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_Saiga12K_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Saiga12K\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_Saiga12K_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Saiga12K\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};

	class NIA_SCARH_Closure_SoundShader
	{
		samples[] = {
			{ "nia_wp_SCAR\snd\SCAR2_first", 1 } };
		range = 10;
		volume = 1;
		rangeCurve[] = {
			{ 0, 1 },
			{ 10, 0 } };
	};
//----------------------- NEW SCARH FIRING SOUNDS -----------------------------//	
	class NIA_SCARH_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARH\close_1.ogg",1},
		{"\hlc_core\sound\weapon\SCARH\close_2.ogg",1},
		{"\hlc_core\sound\weapon\SCARH\close_3.ogg",1},
		{"\hlc_core\sound\weapon\SCARH\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_SCARH_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARH\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_SCARH_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARH\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_SCARH_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARH\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_SCARH_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARH\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_SCARH_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARH\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW SCARL FIRING SOUNDS -----------------------------//	
	class NIA_SCARL_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARL\close_1.ogg",1},
		{"\hlc_core\sound\weapon\SCARL\close_2.ogg",1},
		{"\hlc_core\sound\weapon\SCARL\close_3.ogg",1},
		{"\hlc_core\sound\weapon\SCARL\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_SCARL_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARL\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_SCARL_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARL\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_SCARL_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARL\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_SCARL_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARL\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_SCARL_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARL\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW SCARHPR FIRING SOUNDS -----------------------------//	
	class NIA_SCARHPR_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARHPR\close_1.ogg",1},
		{"\hlc_core\sound\weapon\SCARHPR\close_2.ogg",1},
		{"\hlc_core\sound\weapon\SCARHPR\close_3.ogg",1},
		{"\hlc_core\sound\weapon\SCARHPR\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_SCARHPR_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARHPR\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_SCARHPR_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARHPR\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_SCARHPR_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARHPR\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_SCARHPR_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARHPR\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_SCARHPR_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARHPR\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW SCARMK18 FIRING SOUNDS -----------------------------//	
	class NIA_SCARMK18_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARMK18\close_1.ogg",1},
		{"\hlc_core\sound\weapon\SCARMK18\close_2.ogg",1},
		{"\hlc_core\sound\weapon\SCARMK18\close_3.ogg",1},
		{"\hlc_core\sound\weapon\SCARMK18\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_SCARMK18_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARMK18\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_SCARMK18_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARMK18\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_SCARMK18_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARMK18\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_SCARMK18_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARMK18\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_SCARMK18_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARMK18\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW SCARPDW FIRING SOUNDS -----------------------------//	
	class NIA_SCARPDW_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARPDW\close_1.ogg",1},
		{"\hlc_core\sound\weapon\SCARPDW\close_2.ogg",1},
		{"\hlc_core\sound\weapon\SCARPDW\close_3.ogg",1},
		{"\hlc_core\sound\weapon\SCARPDW\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_SCARPDW_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARPDW\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_SCARPDW_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARPDW\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_SCARPDW_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARPDW\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_SCARPDW_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARPDW\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_SCARPDW_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SCARPDW\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW SIG550S FIRING SOUNDS -----------------------------//	
	class NIA_SIG550S_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SIG550S\close_1.ogg",1},
		{"\hlc_core\sound\weapon\SIG550S\close_2.ogg",1},
		{"\hlc_core\sound\weapon\SIG550S\close_3.ogg",1},
		{"\hlc_core\sound\weapon\SIG550S\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_SIG550S_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SIG550S\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_SIG550S_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SIG550S\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_SIG550S_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SIG550S\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_SIG550S_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SIG550S\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_SIG550S_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SIG550S\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	//----------------------- NEW SIG550L FIRING SOUNDS -----------------------------//	
	class NIA_SIG550L_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SIG550L\close_1.ogg",1},
		{"\hlc_core\sound\weapon\SIG550L\close_2.ogg",1},
		{"\hlc_core\sound\weapon\SIG550L\close_3.ogg",1},
		{"\hlc_core\sound\weapon\SIG550L\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_SIG550L_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SIG550L\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_SIG550L_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SIG550L\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_SIG550L_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SIG550L\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_SIG550L_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SIG550L\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_SIG550L_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\SIG550L\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW STGW57 FIRING SOUNDS -----------------------------//	
	class NIA_STGW57_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\STGW57\close_1.ogg",1},
		{"\hlc_core\sound\weapon\STGW57\close_2.ogg",1},
		{"\hlc_core\sound\weapon\STGW57\close_3.ogg",1},
		{"\hlc_core\sound\weapon\STGW57\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_STGW57_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\STGW57\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_STGW57_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\STGW57\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_STGW57_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\STGW57\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_STGW57_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\STGW57\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_STGW57_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\STGW57\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
//----------------------- NEW Springfield FIRING SOUNDS -----------------------------//	
	class NIA_Springfield_NEW_Close_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Springfield\close_1.ogg",1},
		{"\hlc_core\sound\weapon\Springfield\close_2.ogg",1},
		{"\hlc_core\sound\weapon\Springfield\close_3.ogg",1},
		{"\hlc_core\sound\weapon\Springfield\close_4.ogg",1}};
		volume="1.5*(1-interior)";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_Springfield_NEW_CloseDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Springfield\close_distance.ogg",1}};
		volume="1*(1-interior)";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
	class NIA_Springfield_NEW_MediumDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Springfield\medium_distance.ogg",1}};
		volume=1;
		range=500; 
		rangecurve[] = {{0,0},{15,0},{100,1},{500,0}};
	};
	class NIA_Springfield_NEW_FarDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Springfield\far_distance.ogg",1}};
		volume=1;
		range=2500; 
		rangecurve[] = {{0,0},{100,0},{500,1.25},{2500,0}};
	};
	class NIA_Springfield_NEW_Interior_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Springfield\Close_Interior.ogg",1}};
		volume="1.5*interior";
		range=20;
		rangecurve[] = {{0,1.5},{20,0}};
	};
	class NIA_Springfield_NEW_InteriorDistance_Shot_SoundShader
	{
		samples[] = {
		{"\hlc_core\sound\weapon\Springfield\Close_Distance_Interior.ogg",1}};
		volume="1*interior";
		range=100;
		rangecurve[] = {{0,0},{18,1},{100,0}};
	};
};
