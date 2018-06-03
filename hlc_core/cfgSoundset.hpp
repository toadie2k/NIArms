
class CfgSoundSets
{
	class NIA_GL_Shot_SoundSet
	{
		soundShaders[] = { "NIA_GL_Closure_SoundShader", "NIA_GL_closeShot_SoundShader", "NIA_GL_midShot_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 0.5; 
		frequencyRandomizerMin = 0.1; 
        occlusionFactor = 0.5;
        obstructionFactor = 0.3;
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "WeaponMediumShot3DProcessingType";
        distanceFilter = "HLC_defaultDistanceFilter";
        stereoStartDistance = 8;
        stereoRadius = 10;
	};
	class NIA_GL_Tail_SoundSet
	{
		soundShaders[] = { "NIA_GL_tailInterior_SoundShader", "NIA_GL_tailTrees_SoundShader", "NIA_GL_tailForest_SoundShader", "NIA_GL_tailMeadows_SoundShader", "NIA_GL_tailHouses_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "InverseSquare2Curve";
        frequencyRandomizer = 2;
        frequencyRandomizerMin = 0.2;
        occlusionFactor = 0.3;
        obstructionFactor = 0;
        spatial = 1;
        doppler = 0;
        loop = 0;
        soundShadersLimit = 2;
        sound3DProcessingType = "WeaponMediumShotTail3DProcessingType";
        distanceFilter = "HLC_rifleTailDistanceFilter";
        stereoStartDistance = 50;
        stereoRadius = 25;
	};
};