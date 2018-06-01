
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
};
