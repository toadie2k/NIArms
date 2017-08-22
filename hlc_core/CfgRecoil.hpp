class CfgRecoils
{
	class recoil_default;
	class recoil_mmg						// kOepi WIP mmg recoil
	{
	kickBack[] = {"0.01","0.01"};
	muzzleInner[] = {0,0,0.1,0.1};
	muzzleOuter[] = {"0.15","0.15","0.15","0.15"};
	permanent = "0.25";
	temporary = "0.05";
	};
	class recoil_mmg_prone					// kOepi WIP mmg recoil
	{
	kickBack[] = {"0.001","0.001"};
	muzzleInner[] = {0,0,0.1,0.1};
	muzzleOuter[] = {"0.001*0.001","0.001","0.001","0.001"};
	permanent = "0.001";
	temporary = "0.001";
	};
};