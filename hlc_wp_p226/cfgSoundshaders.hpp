
class Cfgsoundshaders
{

    class nia_p2269mm_Closure_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\p226_first", 1 },
            { "hlc_wp_p226\snd\p226_first", 1 } };
        range = 10;
        volume = 1.6;
    };
    class nia_p2269mm_closeShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p226_close", 1 } };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_p2269mm_midShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p226_mid", 1 } };
        volume = 0.8;
        range = 1500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 1500, 0 } };
    };
    class nia_p2269mm_distShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p229_dist", 1 } };
        volume = 1.0;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1500, 1 } };
    };
    class nia_p2269mm_tailDistant_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_taildistant", 1 } };
        volume = 1.7782794;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 300, 0.7 },
            { 1500, 1 } };
        limitation = 1;
    };
    class nia_p2269mm_tailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailForest", 1 } };
        volume = " 3.85*((1-interior/1.4)*Forest/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p2269mm_tailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailHouses", 1 } };
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 200, 0.3 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p2269mm_tailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p226_indoor", 1 } };
        volume = " 3.85*((interior)*0.65)";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 } };
        limitation = 1;
    };
    class nia_p2269mm_tailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p226_meadows", 1 } };
        volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p2269mm_tailTrees_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailTrees", 1 } };
        volume = " 3.85*((1-interior/1.4)*trees/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p2269mm_silencerShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p226_sil", 1 } };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class nia_p2269mm_silencerTailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_silencertailForest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_p2269mm_silencerTailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_silencertailHouses", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_p2269mm_silencerTailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p226_siltailindoor", 1 } };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_p2269mm_silencerTailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p226_siltail", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_p2269mm_silencerTailTrees_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p226_siltail", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_p2399mm_closeShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p239_close", 1 } };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_p2399mm_midShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p239_mid", 1 } };
        volume = 0.8;
        range = 1500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 1500, 0 } };
    };
    class nia_p2399mm_distShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p229_dist", 1 } };
        volume = 1.0;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1500, 1 } };
    };
    class nia_p2399mm_tailDistant_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_taildistant", 1 } };
        volume = 1.7782794;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 300, 0.7 },
            { 1500, 1 } };
        limitation = 1;
    };
    class nia_p2399mm_tailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailForest", 1 } };
        volume = " 3.85*((1-interior/1.4)*Forest/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p2399mm_tailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailHouses", 1 } };
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 200, 0.3 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p2399mm_tailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p239_indoor", 1 } };
        volume = " 3.85*((interior)*0.65)";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 } };
        limitation = 1;
    };
    class nia_p2399mm_tailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p226_meadows", 1 } };
        volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p2399mm_tailTrees_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailTrees", 1 } };
        volume = " 3.85*((1-interior/1.4)*trees/3)";
    range = 1500;
    rangeCurve[] = {
        { 0, 1 },
        { 1500, 0.3 } };
    limitation = 1;
    };


    class nia_p226_357_Closure_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\p226_first", 1 },
            { "hlc_wp_p226\snd\p226_first", 1 } };
        range = 10;
        volume = 1.6;
    };
    class nia_p226_357_closeShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\357sig\p226_close", 1 } };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_p226_357_midShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\357sig\p226_mid", 1 } };
        volume = 0.8;
        range = 1500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 1500, 0 } };
    };
    class nia_p226_357_distShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p229_dist", 1 } };
        volume = 1.0;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1500, 1 } };
    };
    class nia_p226_357_tailDistant_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_taildistant", 1 } };
        volume = 1.7782794;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 300, 0.7 },
            { 1500, 1 } };
        limitation = 1;
    };
    class nia_p226_357_tailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailForest", 1 } };
        volume = " 3.85*((1-interior/1.4)*Forest/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p226_357_tailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailHouses", 1 } };
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 200, 0.3 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p226_357_tailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\357sig\p226_indoor", 1 } };
        volume = " 3.85*((interior)*0.65)";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 } };
        limitation = 1;
    };
    class nia_p226_357_tailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\357sig\p226_meadows", 1 } };
        volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p226_357_tailTrees_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailTrees", 1 } };
        volume = " 3.85*((1-interior/1.4)*trees/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p226_357_silencerShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\357sig\p226_sil", 1 } };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class nia_p226_357_silencerTailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_silencertailForest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_p226_357_silencerTailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_silencertailHouses", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_p226_357_silencerTailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\357sig\p226_siltailindoor", 1 } };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_p226_357_silencerTailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\357sig\p226_siltail", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_p226_357_silencerTailTrees_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\357sig\p226_siltail", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_p239_357_closeShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\357sig\p239_close", 1 } };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_p239_357_midShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\357sig\p239_mid", 1 } };
        volume = 0.8;
        range = 1500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 1500, 0 } };
    };
    class nia_p239_357_distShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p229_dist", 1 } };
        volume = 1.0;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1500, 1 } };
    };
    class nia_p239_357_tailDistant_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_taildistant", 1 } };
        volume = 1.7782794;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 300, 0.7 },
            { 1500, 1 } };
        limitation = 1;
    };
    class nia_p239_357_tailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailForest", 1 } };
        volume = " 3.85*((1-interior/1.4)*Forest/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p239_357_tailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailHouses", 1 } };
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 200, 0.3 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p239_357_tailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\357sig\p239_indoor", 1 } };
        volume = " 3.85*((interior)*0.65)";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 } };
        limitation = 1;
    };
    class nia_p239_357_tailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\357sig\p226_meadows", 1 } };
        volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p239_357_tailTrees_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailTrees", 1 } };
        volume = " 3.85*((1-interior/1.4)*trees/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };

    class nia_p226_45_Closure_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\p226_first", 1 },
            { "hlc_wp_p226\snd\p226_first", 1 } };
        range = 10;
        volume = 1.6;
    };
    class nia_p226_45_closeShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\45acp\p226_close", 1 } };
        volume = 1.0;
        range = 50;
        rangeCurve = "closeShotCurve";
    };
    class nia_p226_45_midShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\45acp\p226_mid", 1 } };
        volume = 0.8;
        range = 1500;
        rangeCurve[] = {
            { 0, 0.2 },
            { 50, 1 },
            { 300, 0 },
            { 1500, 0 } };
    };
    class nia_p226_45_distShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\9mm\p229_dist", 1 } };
        volume = 1.0;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 50, 0 },
            { 300, 1 },
            { 1500, 1 } };
    };
    class nia_p226_45_tailDistant_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_taildistant", 1 } };
        volume = 1.7782794;
        range = 1500;
        rangeCurve[] = {
            { 0, 0 },
            { 300, 0.7 },
            { 1500, 1 } };
        limitation = 1;
    };
    class nia_p226_45_tailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailForest", 1 } };
        volume = " 3.85*((1-interior/1.4)*Forest/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p226_45_tailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailHouses", 1 } };
        volume = "3.85*((1-interior/1.4)*houses/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 200, 0.3 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p226_45_tailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\45acp\p226_indoor", 1 } };
        volume = " 3.85*((interior)*0.65)";
        range = 350;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.4 },
            { 100, 0.2 },
            { 350, 0 } };
        limitation = 1;
    };
    class nia_p226_45_tailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\45acp\p226_meadows", 1 } };
        volume = " 3.85*((1-interior/1.4)*(meadows/2 max sea/2)/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p226_45_tailTrees_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_tailTrees", 1 } };
        volume = " 3.85*((1-interior/1.4)*trees/3)";
        range = 1500;
        rangeCurve[] = {
            { 0, 1 },
            { 1500, 0.3 } };
        limitation = 1;
    };
    class nia_p226_45_silencerShot_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\45acp\p226_sil", 1 } };
        volume = 1.0;
        range = 150;
        rangeCurve = "closeShotCurve";
    };
    class nia_p226_45_silencerTailForest_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_silencertailForest", 1 } };
        volume = "(1-interior/1.4)*forest/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_p226_45_silencerTailHouses_SoundShader
    {
        samples[] = {
            { "A3\Sounds_F\arsenal\weapons\pistols\P07\P07_silencertailHouses", 1 } };
        volume = "(1-interior/1.4)*houses/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_p226_45_silencerTailInterior_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\45acp\p226_siltailindoor", 1 } };
        volume = "interior";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 50, 0.3 },
            { 150, 0 } };
        limitation = 1;
    };
    class nia_p226_45_silencerTailMeadows_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\45acp\p226_siltail", 1 } };
        volume = "(1-interior/1.4)*(meadows/2 max sea/2)/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
    class nia_p226_45_silencerTailTrees_SoundShader
    {
        samples[] = {
            { "hlc_wp_p226\snd\soundshader\45acp\p226_siltail", 1 } };
        volume = "(1-interior/1.4)*trees/3";
        range = 150;
        rangeCurve[] = {
            { 0, 1 },
            { 150, 0.3 } };
        limitation = 1;
    };
};

